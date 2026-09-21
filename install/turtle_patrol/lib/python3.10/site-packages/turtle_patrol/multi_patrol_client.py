       

import sys 
import rclpy
from rclpy.node import Node
from turtle_patrol_interface.srv import Patrol

class MultiPatrolClient(Node):
    def __init__(self):
        super().__init__('multi_patrol_client')

        #make cleint target /turtle_patrol
        self.client = self.create_client(Patrol, '/turtle_patrol')

    def wait_for_server(self, timeout_sec=3.0):
    #continously retries to make sure server is up
        self.get_logger().info("Searching for service")
        while not self.client.wait_for_service(timeout_sec=timeout_sec):
            self.get_logger().warn("waiting for mp server")
        return True

    def send_patrol_command(self, turtle_name, x, y, theta, vel, omega):
        #converst command line arguments into patrol req
        req = Patrol.Request()
        #from the handout populates 6 fields
        req.turtle_name = str(turtle_name)
        req.x = float(x)
        req.y = float(y)
        req.theta = float(theta)
        req.vel = float(vel)
        req.omega = float(omega)
        self.get_logger().info(f"sending req to patrol '{turtle_name}' at pose ({x}, {y}, {theta}) with vel={vel}, omega={omega}")
        future = self.client.call_async(req)

        #stop exec until you get a response
        rclpy.spin_until_future_complete(self, future)
        return future.result()


def main(args=None):
    if len(sys.argv) < 7:
        print("error: missing command line args")
        sys.exit(1)
    #get CLI parameters
    turtle_name = sys.argv[1]
    x_pos = sys.argv[2]
    y_pos = sys.argv[3]
    theta_pos = sys.argv[4]
    velocity = sys.argv[5]
    omega_val = sys.argv[6]

    rclpy.init(args=args)
    client_node = MultiPatrolClient()

    try:
        if client_node.wait_for_server():
            #send req and wait
            response = client_node.send_patrol_command(turtle_name, x_pos, y_pos, theta_pos, velocity, omega_val)
            print("server response received")
            print(f" success status : {response.success}")
            print(f"Message: {response.messages}")

    except Exception as e:
        client_node.get_logger().error(f"Failed to complete service: {e}")

    finally:
        client_node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()