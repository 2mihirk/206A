import rclpy
from rclpy.node import Node

# Import your custom message type generated from TimestampString.msg
from my_chatter_msgs.msg import TimestampString


class MyListener(Node):

    def __init__(self):
        super().__init__('my_listener_node')

        # Subscribe to the /user_messages topic expecting TimestampString messages
        self.subscription = self.create_subscription(
            TimestampString,
            '/user_messages',
            self.listener_callback,
            10
        )
        self.subscription  # Prevent unused variable warning

    def listener_callback(self, msg):
        # Extract the user text and sent timestamp from the incoming message
        text = msg.user_message
        sent_time = msg.timestamp

        # Grab the current clock time for when the message was received
        received_time = self.get_clock().now().nanoseconds / 1e9

        # Print the formatted output as required by the lab
        self.get_logger().info(
            f'Message: {text}, Sent at: {sent_time}, Received at: {received_time}'
        )


def main(args=None):
    rclpy.init(args=args)

    node = MyListener()

    # Keep the node running so it can listen for incoming messages
    rclpy.spin(node)

    # Clean up on shutdown
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()