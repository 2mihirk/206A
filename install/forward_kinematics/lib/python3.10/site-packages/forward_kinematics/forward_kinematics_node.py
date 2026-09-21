#!/usr/bin/env python3

import os
import xml.etree.ElementTree as ET

import numpy as np
import rclpy
from ament_index_python.packages import get_package_share_directory
from rclpy.node import Node
from scipy.linalg import expm
from sensor_msgs.msg import JointState

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

        self.twists, self.gst0 = self.load_kinematics_description()

        self.subscription = self.create_subscription(
            JointState,
            "/joint_states",
            self.joint_state_callback,
            10,
        )

        self.get_logger().info("Forward kinematics node started.")

    def load_kinematics_description(self):
        """
        Load q_i, omega_i, and g_st(0) from the provided flattened
        UR7e kinematics description.

        Returns:
            twists: (6, 6) ndarray with one twist per column
            gst0: (4, 4) ndarray
        """

        package_share = get_package_share_directory("forward_kinematics")
        path = os.path.join(package_share, "urdf", "ur7e_flattened.urdf")

        root = ET.parse(path).getroot()

        joints = {j.attrib["name"]: j for j in root.findall("joint")}

        joint_data = []
        for name in JOINT_NAMES:
            joint = joints[name]
            q = np.fromstring(joint.find("origin").attrib["xyz"], sep=" ")
            omega = np.fromstring(joint.find("axis").attrib["xyz"], sep=" ")
            joint_data.append((q, omega))

        zero_config = root.find("zero_configuration")

        # R: (3, 3) ndarray
        R = np.array(
            [
                np.fromstring(row.attrib["values"], sep=" ")
                for row in zero_config.find("rotation").findall("row")
            ]
        )

        # p: (3, 1) ndarray
        p = np.fromstring(
            zero_config.find("translation").attrib["xyz"],
            sep=" ",
        )

        twists_list = []
        for q, omega in joint_data:
            # Linear velocity component: v = -omega x q
            v = -np.cross(omega, q)
            xi = np.concatenate([v, omega])
            twists_list.append(xi)

        # Stack into a (6, 6) array where each column is a twist [v_i; omega_i]
        twists = np.column_stack(twists_list)

        # Initial zero-configuration transformation matrix g_st(0)
        gst0 = np.eye(4)
        gst0[:3, :3] = R
        gst0[:3, 3] = p

        return twists, gst0

    def joint_state_callback(self, msg):
        """
        Compute g_st(theta) whenever a new JointState message arrives.
        """
        # Map incoming joint names to their positions
        joint_map = dict(zip(msg.name, msg.position))

        # Ensure all required joints exist in the message
        if not all(name in joint_map for name in JOINT_NAMES):
            return

        thetas = [joint_map[name] for name in JOINT_NAMES]

        # Compute Product of Exponentials: g_st(theta) = e^(xi_1*theta_1) ... e^(xi_6*theta_6) * g_st(0)
        gst = np.eye(4)
        for i, theta in enumerate(thetas):
            xi = self.twists[:, i]
            v = xi[:3]
            omega = xi[3:]

            # Skew-symmetric matrix for omega
            omega_hat = np.array([
                [0.0, -omega[2], omega[1]],
                [omega[2], 0.0, -omega[0]],
                [-omega[1], omega[0], 0.0]
            ])

            # 4x4 matrix representation of the 6D twist xi
            xi_hat = np.zeros((4, 4))
            xi_hat[:3, :3] = omega_hat
            xi_hat[:3, 3] = v

            # Matrix exponential e^(xi_hat * theta)
            exp_xi_theta = expm(xi_hat * theta)
            gst = gst @ exp_xi_theta

        # Multiply by zero configuration g_st(0)
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