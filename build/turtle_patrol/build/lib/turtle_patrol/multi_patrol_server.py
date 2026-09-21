

import rclpy
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import ReentrantCallbackGroup
from geometry_msgs.msg import Twist
from turtle_patrol_interface.srv import Patrol
from turtlesim.srv import TeleportAbsolute

class MultiPatrolServer(Node):

    def __init__(self):
        super().__init__('multi_patrol_server')

        #need to satisfy requirement to automatically trigger handle_patrol
        self.client_cb_group = ReentrantCallbackGroup()
        self.srv = self.create_service(Patrol, '/turtle_patrol', self.handle_patrol)

        self.active_patrols = {} #serves as central turtle directory
        # lop that broadcasts velocity commands to every turtle
        self.timer = self.create_timer(0.1, self.drive_all_turtles)
        self.get_logger().info("MP server up")

    def handle_patrol(self, request, response):
        # need this to run every time client sends request to /turtle_patrol
        target_name = request.turtle_name
        self.get_logger().info(f"Received new request for turtle: '{target_name}'")

        #call helper function to teleport
        teleport_ok = self.teleport_turtle(target_name, request.x, request.y, request.theta)
        if not teleport_ok:
            response.success = False
            response.message = f"Failed to teleport '{target_name}'."
            return response

        #call helper function to register teh publisher and save the space
        self.update_patrol_state(target_name, request.vel, request.omega)
        #then return response
        response.success = True
        response.messages = f"Turtle '{target_name}' teleported successfully"
        return response

    def teleport_turtle(self, turtle_name, x, y, theta):
        teleport_topic = f'/{turtle_name}/teleport_absolute'
        teleport_client = self.create_client(TeleportAbsolute, teleport_topic)

        # Wait up to 2 seconds to see if Turtlesim is offering this service
        if not teleport_client.wait_for_service(timeout_sec=2.0):
            self.get_logger().error(f"Could not find service: {teleport_topic}")
            return False

        # Build the teleport request message
        tele_req = TeleportAbsolute.Request()
        tele_req.x = float(x)
        tele_req.y = float(y)
        tele_req.theta = float(theta)

        # Send the request asynchronously without blocking the node's executor thread
        teleport_client.call_async(tele_req)
        
        return True

    def update_patrol_state(self, turtle_name, vel, omega):
        #to create new publishers and update directory
        if turtle_name not in self.active_patrols:
            cmd_topic = f'/{turtle_name}/cmd_vel'
            new_pub = self.create_publisher(Twist, cmd_topic, 10)

            #store pubisher and vel in directory
            self.active_patrols[turtle_name] = {
                'pub': new_pub,
                'vel': float(vel),
                'omega': float(omega)
            }
            self.get_logger().info(f"registered new publisher")
        else:
            #update speed for existing turtle
            self.active_patrols[turtle_name]['vel'] = float(vel)
            self.active_patrols[turtle_name]['omega'] = float(omega)
            self.get_logger().info(f"Updated speed settings for existing")

    def drive_all_turtles(self):
        # pushes twist to all turtles
        for turtle_name, data in self.active_patrols.items():
            cmd = Twist()
            cmd.linear.x = data['vel']
            cmd.angular.z = data['omega']

            # publish
            data['pub'].publish(cmd)


def main(args=None):
    rclpy.init(args=args)
    node = MultiPatrolServer()
    executor = MultiThreadedExecutor()
    executor.add_node(node)
    try:
        executor.spin()
    except KeyboardInterrupt:
        print("\nShutting down MP server")
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()