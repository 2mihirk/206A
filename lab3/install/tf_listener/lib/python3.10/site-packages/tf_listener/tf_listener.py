#!/usr/bin/env python3
import sys

import numpy as np
import rclpy
import tf2_ros
from geometry_msgs.msg import TransformStamped
from rclpy.node import Node

import numpy as np

def quaternion_to_rotation_matrix(q):
    
    qx, qy, qz, qw = q
    
    R = np.array([
        [1 - 2*(qy**2 + qz**2),     2*(qx*qy - qz*qw),     2*(qx*qz + qy*qw)],
        [    2*(qx*qy + qz*qw), 1 - 2*(qx**2 + qz**2),     2*(qy*qz - qx*qw)],
        [    2*(qx*qz - qy*qw),     2*(qy*qz + qx*qw), 1 - 2*(qx**2 + qy**2)]
    ])
    return R

class TfEchoNode(Node):
    def __init__(self, target_frame, source_frame):
        super().__init__("tf_echo_node")

        # done: Create a buffer and listener
       
        self.tf_buffer = tf2_ros.Buffer()
        self.tf_listener = tf2_ros.TransformListener(self.tf_buffer, self)

        self.target_frame = target_frame
        self.source_frame = source_frame

        # Timer to print transform repeatedly
        self.timer = self.create_timer(0.5, self.print_transform)

    def quaternion_to_rotation_matrix(self, x, y, z, w):
        """Convert quaternion (x, y, z, w) to a 3x3 rotation matrix."""
        norm = np.sqrt(x * x + y * y + z * z + w * w)
        if norm > 0:
            x, y, z, w = x / norm, y / norm, z / norm, w / norm
        return np.array(
            [
                [1 - 2 * (y * y + z * z), 2 * (x * y - z * w), 2 * (x * z + y * w)],
                [2 * (x * y + z * w), 1 - 2 * (x * x + z * z), 2 * (y * z - x * w)],
                [2 * (x * z - y * w), 2 * (y * z + x * w), 1 - 2 * (x * x + y * y)],
            ]
        )

    def print_transform(self):
        try:
            #Looks up transform from target frame to source frame
            tf_data = self.tf_buffer.lookup_transform(
                self.target_frame,
                self.source_frame,
                rclpy.time.Time()
            )

            # Extract translation components
            pos = tf_data.transform.translation
            p_vec = [pos.x, pos.y, pos.z]

            # Extract quaternion components and convert to 3x3 rotation matrix
            q = tf_data.transform.rotation
            rot_mat = quaternion_to_rotation_matrix([q.x, q.y, q.z, q.w])

            # Construct 4x4 homogeneous matrix
            mat = np.eye(4)
            mat[:3, :3] = rot_mat
            mat[:3, 3] = p_vec

            #print statmenets
            print(f"\nTransform {self.source_frame} -> {self.target_frame}:")
            print(np.array2string(mat, precision=4, suppress_small=True))

        except Exception as err:
            self.get_logger().warn(f"TF lookup failed: {err}")


def main(args=None):
    rclpy.init(args=args)

    if len(sys.argv) < 3:
        print("Usage: ros2 run <package> tf_listener <target_frame> <source_frame>")
        return

    target_frame = sys.argv[1]
    source_frame = sys.argv[2]

    node = TfEchoNode(target_frame, source_frame)
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
