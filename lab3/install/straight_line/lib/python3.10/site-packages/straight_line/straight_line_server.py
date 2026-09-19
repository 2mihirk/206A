
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
    def __init__(self):
        super().__init__("straight_line_server")

        # Use ReentrantCallbackGroup so action callbacks and service client calls execute concurrently
        self.cb_group = ReentrantCallbackGroup()

        # TF buffer/listener so we can look up the robot's current tool0 orientation
        self.tf_buffer = tf2_ros.Buffer()
        self.tf_listener = tf2_ros.TransformListener(self.tf_buffer, self)

        # Initialize MoveIt Cartesian path service client
        self.path_client = self.create_client(
            GetCartesianPath, 
            "/compute_cartesian_path",
            callback_group=self.cb_group
        )
        while not self.path_client.wait_for_service(timeout_sec=2.0):
            self.get_logger().info("Waiting for MoveIt Cartesian path service...")

        # Initialize ROS 2 Action Server
        self._action_server = ActionServer(
            self,
            MoveStraight,
            "/move_straight",
            execute_callback=self.on_execute,
            goal_callback=self.on_goal,
            cancel_callback=self.on_cancel,
            callback_group=self.cb_group
        )

        self.get_logger().info("Straight-line action server online.")

    def on_goal(self, goal_req):
        self.get_logger().info("Goal request accepted.")
        return GoalResponse.ACCEPT

    def on_cancel(self, goal_handle):
        self.get_logger().info("Cancel request accepted.")
        return CancelResponse.ACCEPT

    async def request_cartesian_plan(self, target_pose: Pose, step_size: float):
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
        if not hasattr(self, "_traj_client"):
            self._traj_client = ActionClient(
                self, 
                FollowJointTrajectory,
                "/scaled_joint_trajectory_controller/follow_joint_trajectory",
                callback_group=self.cb_group
            )

        if not self._traj_client.wait_for_server(timeout_sec=5.0):
            self.get_logger().error("FollowJointTrajectory server unavailable.")
            return False

        goal = FollowJointTrajectory.Goal()
        goal.trajectory = joint_trajectory

        goal_handle = await self._traj_client.send_goal_async(goal)
        if not goal_handle.accepted:
            self.get_logger().error("Trajectory goal rejected by joint controller.")
            return False

        result = await goal_handle.get_result_async()
        return result.result.error_code == FollowJointTrajectory.Result.SUCCESSFUL

    async def on_execute(self, handle):
        self.get_logger().info("Executing straight-line trajectory request...")

        goal = handle.request
        target_pose = goal.target
        resolution = goal.max_step

        fb = MoveStraight.Feedback()
        res = MoveStraight.Result()

        # Ignore any client-supplied orientation — always keep the tool's
        # current orientation and only move to the requested position.
        try:
            current_tf = self.tf_buffer.lookup_transform(
                "base_link", "tool0", rclpy.time.Time()
            )
            target_pose.orientation = current_tf.transform.rotation
        except Exception as e:
            self.get_logger().error(f"Could not look up current tool0 orientation: {e}")
            res.success = False
            res.message = "Failed to look up current tool0 orientation."
            handle.abort()
            return res

        plan_response = await self.request_cartesian_plan(target_pose, resolution)
        ratio = plan_response.fraction

        fb.planned_fraction = ratio
        fb.state = "Cartesian trajectory computed"
        handle.publish_feedback(fb)

        if ratio < 0.9:
            res.success = False
            res.planned_fraction = ratio
            res.message = f"Path generation incomplete ({ratio * 100:.1f}% planned)."
            handle.abort()
            return res

        if handle.is_cancel_requested:
            handle.canceled()
            res.success = False
            res.message = "Execution aborted by client."
            return res

        success = await self.execute_trajectory(plan_response.solution.joint_trajectory)

        if success:
            handle.succeed()
            res.success = True
            res.planned_fraction = ratio
            res.message = "Successfully reached target pose."
        else:
            handle.abort()
            res.success = False
            res.message = "Controller failed to execute Cartesian path."

        return res


def main(args=None):
    rclpy.init(args=args)
    server_node = StraightLineServer()

    # Use MultiThreadedExecutor to prevent async deadlocks during service/action calls
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
