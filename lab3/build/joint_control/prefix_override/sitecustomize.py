import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/cc/ee106a/fa26/class/ee106a-aej/ros_workspaces/lab3/install/joint_control'
