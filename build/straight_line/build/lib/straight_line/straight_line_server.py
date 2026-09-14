
# here are a number of imports you may find helpful
#!/usr/bin/env python3

import time
import rclpy
from rclpy.action import ActionClient, ActionServer, CancelResponse, GoalResponse
from rclpy.action.server import ServerGoalHandle
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.duration import Duration
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node

from control_msgs.action import FollowJointTrajectory
from controller_manager_msgs.srv import SwitchController
from geometry_msgs.msg import Pose, TransformStamped
from moveit_msgs.srv import GetCartesianPath
from tf2_ros import Buffer, TransformException, TransformListener

from straight_line_interface.action import MoveStraight


class StraightLineServer(Node):
    def __init__(self):
        super().__init__("straight_line_server")

        # Initialize MoveIt Cartesian path service client
        self.path_client = self.create_client(
            GetCartesianPath, 
            "/compute_cartesian_path"
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
        )

        self.get_logger().info("Straight-line action server online.")

    def on_goal(self, goal_req):
        self.get_logger().info("Goal request accepted.")
        return GoalResponse.ACCEPT

    def on_cancel(self, goal_handle):
        self.get_logger().info("Cancel request accepted.")
        return CancelResponse.ACCEPT

    def request_cartesian_plan(self, target_pose: Pose, step_size: float):
        """Helper method to construct and invoke the MoveIt service request."""
        req = GetCartesianPath.Request()
        req.header.frame_id = "base_link"
        req.header.stamp = self.get_clock().now().to_msg()
        req.group_name = "ur_manipulator"
        req.link_name = "wrist_3_link"
        req.waypoints = [target_pose]
        req.max_step = step_size
        req.jump_threshold = 0.0

        srv_future = self.path_client.call_async(req)
        rclpy.spin_until_future_complete(self, srv_future)
        return srv_future.result()

    def on_execute(self, handle):
        self.get_logger().info("Executing straight-line trajectory request...")

        # Extract parameters from action goal request
        goal = handle.request
        target_pose = goal.target
        resolution = goal.max_step

        # Instantiate action feedback and outcome objects
        fb = MoveStraight.Feedback()
        res = MoveStraight.Result()

        # Query MoveIt Cartesian path planning service
        plan_response = self.request_cartesian_plan(target_pose, resolution)
        ratio = plan_response.fraction

        # Publish initial planning feedback
        fb.planned_fraction = ratio
        fb.state = "Cartesian trajectory computed"
        handle.publish_feedback(fb)

        # Abort if MoveIt fails to compute a sufficiently complete path
        if ratio < 0.9:
            res.success = False
            res.planned_fraction = ratio
            res.message = f"Path generation incomplete ({ratio * 100:.1f}% planned)."
            handle.abort()
            return res

        # Handle early goal cancellation
        if handle.is_cancel_requested:
            handle.canceled()
            res.success = False
            res.message = "Execution aborted by client."
            return res

        # Execute trajectory on hardware/simulation controller
        success = self.execute_trajectory(plan_response.solution.joint_trajectory)

        # Formulate final goal result based on trajectory execution
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

    try:
        rclpy.spin(server_node)
    except KeyboardInterrupt:
        pass

    server_node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()


