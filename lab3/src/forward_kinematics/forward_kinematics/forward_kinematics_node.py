#!/usr/bin/env python3

import os
import xml.etree.ElementTree as ET

import numpy as np
import rclpy
from ament_index_python.packages import get_package_share_directory
from rclpy.node import Node
from scipy.linalg import expm
from sensor_msgs.msg import JointState

# Joint order matters here: the twists and the angles both follow this list.
JOINT_NAMES = [
    "shoulder_pan_joint",
    "shoulder_lift_joint",
    "elbow_joint",
    "wrist_1_joint",
    "wrist_2_joint",
    "wrist_3_joint",
]


class ForwardKinematicsNode(Node):
    def __init__(self):
        super().__init__("forward_kinematics_node")

        # Do the URDF parsing once up front so the callback stays quick
        self.twists, self.gst0 = self.load_kinematics_description()

        self.subscription = self.create_subscription(
            JointState,
            "/joint_states",
            self.joint_state_callback,
            10,
        )

        self.get_logger().info("Forward kinematics node started.")

    def load_kinematics_description(self):
        """Read the UR7e URDF and return (twists, gst0): a 6x6 array of twists
        (one per column) and the 4x4 zero-configuration transform."""

        package_share = get_package_share_directory("forward_kinematics")
        path = os.path.join(package_share, "urdf", "ur7e_flattened.urdf")

        root = ET.parse(path).getroot()
        joints = {j.attrib["name"]: j for j in root.findall("joint")}

        #pulls a point on each joint axis (q) and the axis direction (omega).
        joint_data = []
        for name in JOINT_NAMES:
            joint = joints[name]
            q = np.fromstring(joint.find("origin").attrib["xyz"], sep=" ")
            omega = np.fromstring(joint.find("axis").attrib["xyz"], sep=" ")
            joint_data.append((q, omega))

        zero_config = root.find("zero_configuration")

        rotation = np.array(
            [
                np.fromstring(row.attrib["values"], sep=" ")
                for row in zero_config.find("rotation").findall("row")
            ]
        )
        translation = np.fromstring(
            zero_config.find("translation").attrib["xyz"],
            sep=" ",
        )

        # For a revolute joint, it is based on the formula xi = [v; omega] with v = -omega x q.
        twist_columns = []
        for q, omega in joint_data:
            v = -np.cross(omega, q)
            twist_columns.append(np.concatenate([v, omega]))

        twists = np.column_stack(twist_columns)

        # Where the end effector sits when every joint is at zero.
        gst0 = np.eye(4)
        gst0[:3, :3] = rotation
        gst0[:3, 3] = translation

        return twists, gst0

    def joint_state_callback(self, msg):
        positions_by_name = dict(zip(msg.name, msg.position))

        #make sure formatting is right
        if not all(name in positions_by_name for name in JOINT_NAMES):
            return

        angles = [positions_by_name[name] for name in JOINT_NAMES]

        # Product of exponentials: chain e^(xi_i * theta_i) for each joint,
        # then finish with g_st(0).
        gst = np.eye(4)
        for i, theta in enumerate(angles):
            xi = self.twists[:, i]
            v = xi[:3]
            omega = xi[3:]

            omega_hat = np.array([
                [0.0, -omega[2], omega[1]],
                [omega[2], 0.0, -omega[0]],
                [-omega[1], omega[0], 0.0]
            ])

            xi_hat = np.zeros((4, 4))
            xi_hat[:3, :3] = omega_hat
            xi_hat[:3, 3] = v

            gst = gst @ expm(xi_hat * theta)

        gst = gst @ self.gst0

        self.get_logger().info(
            f"Current g_st(theta):\n{np.array2string(gst, precision=4, suppress_small=True)}"
        )


def main(args=None):
    rclpy.init(args=args)

    node = ForwardKinematicsNode()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()