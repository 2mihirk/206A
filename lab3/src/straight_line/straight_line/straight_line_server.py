#!/usr/bin/env python3

import rclpy
import tf2_ros
from rclpy.action import ActionClient, ActionServer, CancelResponse, GoalResponse
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node

from control_msgs.action import FollowJointTrajectory
from geometry_msgs.msg import Pose
from moveit_msgs.srv import GetCartesianPath
from straight_line_interface.action import MoveStraight


class StraightLineServer(Node):
    """Takes a target position and drives the tool there in a straight line."""

    def __init__(self):
        super().__init__("straight_line_server")

        #This group is what keeps us from deadlocking ourselves.
        # We kept having repeated issues with this so put this in.
        self.callback_group = ReentrantCallbackGroup()

      
        self.tf_buffer = tf2_ros.Buffer()
        self.tf_listener = tf2_ros.TransformListener(self.tf_buffer, self)

        
        self.path_client = self.create_client(
            GetCartesianPath,
            "/compute_cartesian_path",
            callback_group=self.callback_group
        )

     
        while not self.path_client.wait_for_service(timeout_sec=2.0):
            self.get_logger().info("Waiting for MoveIt Cartesian path service...")

        #action server is named MoveStraight
        self._action_server = ActionServer(
            self,
            MoveStraight,
            "/move_straight",
            execute_callback=self.on_execute,
            goal_callback=self.on_goal,
            cancel_callback=self.on_cancel,
            callback_group=self.callback_group
        )

        self.get_logger().info("Straight-line action server online.")

    def on_goal(self, goal_req):
        #accepts everything, will later get rejected in exec func
        self.get_logger().info("Goal request accepted.")
        return GoalResponse.ACCEPT

    def on_cancel(self, goal_handle):
        # Same deal for cancels: always allowed.
        self.get_logger().info("Cancel request accepted.")
        return CancelResponse.ACCEPT

    async def request_cartesian_plan(self, target_pose: Pose, step_size: float):
        # 
        req = GetCartesianPath.Request()
        req.header.frame_id = "base_link"
        req.header.stamp = self.get_clock().now().to_msg()

        
        req.start_state.is_diff = True

        req.group_name = "ur_manipulator"
        req.link_name = "tool0"
        req.waypoints = [target_pose]

        
        req.max_step = step_size

        
        req.jump_threshold = 0.0

        return await self.path_client.call_async(req)

    async def execute_trajectory(self, joint_trajectory) -> bool:
        # Set up the trajectory client the first time we need it, then reuse 
        if not hasattr(self, "_traj_client"):
            self._traj_client = ActionClient(
                self,
                FollowJointTrajectory,
                "/scaled_joint_trajectory_controller/follow_joint_trajectory",
                callback_group=self.callback_group
            )

        # increased this to 5 sec
        if not self._traj_client.wait_for_server(timeout_sec=5.0):
            self.get_logger().error("FollowJointTrajectory server unavailable.")
            return False

        traj_goal = FollowJointTrajectory.Goal()
        traj_goal.trajectory = joint_trajectory
#this is what determines if accept or reject
        traj_handle = await self._traj_client.send_goal_async(traj_goal)
        if not traj_handle.accepted:
            self.get_logger().error("Trajectory goal rejected by joint controller.")
            return False

        #success message creator
        traj_result = await traj_handle.get_result_async()
        return traj_result.result.error_code == FollowJointTrajectory.Result.SUCCESSFUL

    async def on_execute(self, handle):
        self.get_logger().info("Executing straight-line trajectory request...")

        goal = handle.request
        target_pose = goal.target
        step_size = goal.max_step

        feedback = MoveStraight.Feedback()
        result = MoveStraight.Result()

        try:
            current_tf = self.tf_buffer.lookup_transform(
                "base_link", "tool0", rclpy.time.Time()
            )
            target_pose.orientation = current_tf.transform.rotation
        except Exception as e:
            #error message
            self.get_logger().error(f"Could not look up current tool0 orientation: {e}")
            result.success = False
            result.message = "Failed to look up current tool0 orientation."
            handle.abort()
            return result

        #plans the straightline path
        plan_response = await self.request_cartesian_plan(target_pose, step_size)
        fraction = plan_response.fraction

        feedback.planned_fraction = fraction
        feedback.state = "Cartesian trajectory computed"
        handle.publish_feedback(feedback)

        # 90% threshold
        if fraction < 0.9:
            result.success = False
            result.planned_fraction = fraction
            result.message = f"Path generation incomplete ({fraction * 100:.1f}% planned)."
            handle.abort()
            return result

        #implementation of cancel node
        if handle.is_cancel_requested:
            handle.canceled()
            result.success = False
            result.message = "Execution aborted by client."
            return result

        succeeded = await self.execute_trajectory(plan_response.solution.joint_trajectory)

        if succeeded:
            handle.succeed()
            result.success = True
            result.planned_fraction = fraction
            result.message = "Successfully reached target pose."
        else:
            handle.abort()
            result.success = False
            result.message = "Controller failed to execute Cartesian path."

        return result


def main(args=None):
    rclpy.init(args=args)
    server_node = StraightLineServer()

    # Repeat issues with this so went with multi
    executor = MultiThreadedExecutor()
    executor.add_node(server_node)

    try:
        executor.spin()
    except KeyboardInterrupt:
        pass

    server_node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()