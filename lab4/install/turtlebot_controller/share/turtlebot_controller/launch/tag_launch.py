import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    aruco_params = os.path.join(
        get_package_share_directory('ros2_aruco'), 'config', 'aruco_parameters.yaml')


    robot = LaunchConfiguration('robot')
    robot_arg = DeclareLaunchArgument(
        'robot',
        default_value='apple',
        description='Your TurtleBot name, e.g. apple. The camera publishes under it.'
    )


    # Static transform: base_link -> camera
    camera_tf = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='base_link_to_camera',
        output='screen',
        arguments=[
            '--x', '0.115', '--y', '0.0', '--z', '0.0',
            '--roll', '-1.5708', '--pitch', '0.0', '--yaw', '-1.5708',
            '--frame-id', 'base_link', '--child-frame-id', 'camera',
        ],
    )


    # ArUco detection node connected to namespaced camera topics
    aruco = Node(
        package='ros2_aruco',
        executable='aruco_node',
        name='aruco_node',
        output='screen',
        parameters=[
            aruco_params,
            {
                'image_topic': ['/', robot, '/image_raw'],
                'camera_info_topic': ['/', robot, '/camera_info'],
            },
        ],
        remappings=[
            ('/image_raw', ['/', robot, '/image_raw']),
            ('/camera_info', ['/', robot, '/camera_info']),
        ]
    )


    return LaunchDescription([
        robot_arg,
        camera_tf,
        aruco,
    ])
