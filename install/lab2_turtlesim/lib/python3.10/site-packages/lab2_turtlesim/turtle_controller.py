import sys
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist

# Control mapping: key -> (linear_x, angular_z)
KEY_MAP = {
    'w': (2.0, 0.0),   # Forward
    's': (-2.0, 0.0),  # Backward
    'a': (0.0, 2.0),   # Rotate Left
    'd': (0.0, -2.0),  # Rotate Right
    'x': (0.0, 0.0),   # Stop
}

class TurtleController(Node):
    def __init__(self, turtle_name):
        super().__init__(f'turtle_controller_{turtle_name}')
        
        # Publish Twist messages to /<turtle_name>/cmd_vel
        topic_name = f'/{turtle_name}/cmd_vel'
        self.vel_pub = self.create_publisher(Twist, topic_name, 10)
        self.get_logger().info(f'Controller node active for: {turtle_name}')

    def publish_twist(self, lin_x, ang_z):
        cmd = Twist()
        cmd.linear.x = float(lin_x)
        cmd.angular.z = float(ang_z)
        self.vel_pub.publish(cmd)

def main(args=None):
    # Parse turtle name from command line arguments
    if len(sys.argv) < 2:
        print("Error: Missing turtle name argument.")
        print("Usage: ros2 run lab2_turtlesim turtle_controller <turtle_name>")
        sys.exit(1)

    turtle_name = sys.argv[1]

    rclpy.init(args=args)
    node = TurtleController(turtle_name)

    print(f"\n==========================================")
    print(f" Controlling: {turtle_name}")
    print(f" Controls: W/S (fwd/back) | A/D (left/right) | X (stop) | Q (quit)")
    print(f"==========================================\n")

    try:
        while rclpy.ok():
            cmd_input = input(f"[{turtle_name}] > ").strip().lower()

            if cmd_input == 'q':
                print("Shutting down controller...")
                break

            if cmd_input in KEY_MAP:
                linear, angular = KEY_MAP[cmd_input]
                node.publish_twist(linear, angular)
            else:
                print("Invalid key! Use W, A, S, D, X to move/stop, or Q to quit.")

    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()