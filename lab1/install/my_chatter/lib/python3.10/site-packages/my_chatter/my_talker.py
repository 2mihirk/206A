# Copyright 2016 Open Source Robotics Foundation, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# These lines allow us to import rclpy so we can use Python and its Node class
import rclpy
from rclpy.node import Node

# This line imports the built-in string message type that our node will use to structure its data to pass on our topic
from my_chatter_msgs.msg import TimestampString

# We're creating a class called Talker, which is a subclass of Node
class MyTalker(Node):

    # Here, we define the constructor
    def __init__(self):
        # We call the Node class's constructor and call it "minimal_publisher"
        super().__init__('my_talker_node')

         # Here, we set that the node publishes message of type String (where did this type come from?), over a topic called "chatter_talk", and with queue size 10. The queue size limits the amount of queued messages if a subscriber doesn't receive them quickly enough.
        self.publisher_ = self.create_publisher(TimestampString, '/user_messages', 10)

        

    # Here we create a message with the counter value appended and publish it
    def run_user_loop(self):
        # Keep asking the user for input until they kill the node (e.g., Ctrl+C)
        while rclpy.ok():
            try:
                user_text = input("Please enter a line of text and press <Enter>: ")

                # Package the input and timestamp into our message object
                msg = TimestampString()
                msg.user_message = user_text
                msg.timestamp = self.get_clock().now().nanoseconds / 1e9
                # Send it out onto the topic
                self.publisher_.publish(msg)
                self.get_logger().info(f'Published message: "{user_text}"')

            except (KeyboardInterrupt, EOFError):
                break


def main(args=None):
    # Initialize the rclpy library
    rclpy.init(args=args)
    # Create the node
    
    node = MyTalker()

    # Run the user input loop
    node.run_user_loop()

    # Clean up on exit
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()