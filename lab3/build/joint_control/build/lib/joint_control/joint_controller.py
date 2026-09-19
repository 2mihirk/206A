#!/usr/bin/env python3

import sys

import rclpy
from rclpy.node import Node
from rclpy.utilities import remove_ros_args
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
from builtin_interfaces.msg import Duration


class JointController(Node):
    def __init__(self, joint_angles):
        super().__init__("joint_controller")

        # Corrected standard kinematic order
        
        self.joint_names = [
            "shoulder_pan_joint",
            "wrist_2_joint",
            "wrist_3_joint",
            "wrist_1_joint",
            "elbow_joint",
            "shoulder_lift_joint",
        ]

        self.joint_angles = joint_angles

        self.publisher = self.create_publisher(
            JointTrajectory,
            "/joint_trajectory_validated",
            10,
        )

    def publish_trajectory(self):
        # Create trajectory and assign joint order
        traj = JointTrajectory()
        traj.joint_names = self.joint_names

        # Define trajectory target point
        pt = JointTrajectoryPoint()
        pt.positions = self.joint_angles
        pt.velocities = [0.0] * 6
        pt.time_from_start = Duration(sec=5)

        # Add point and send to safety validation topic
        traj.points.append(pt)
        self.publisher.publish(traj)

        self.get_logger().info("Sent joint target trajectory.")


def main(args=None):
    # Filter out ROS 2 specific arguments
    clean_argv = remove_ros_args(sys.argv)

    if len(clean_argv) != 7:
        print("Usage: ros2 run joint_control joint_controller <q1> <q2> <q3> <q4> <q5> <q6>")
        sys.exit(1)

    joint_angles = [float(angle) for angle in clean_argv[1:]]

    rclpy.init(args=args)
    node = JointController(joint_angles)

    # Allow time for publisher discovery and topic transmission
    for _ in range(10):
        rclpy.spin_once(node, timeout_sec=0.1)
        if node.publisher.get_subscription_count() > 0:
            break

    node.publish_trajectory()
    rclpy.spin_once(node, timeout_sec=1.0)

    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()