import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node
import xacro

def generate_launch_description():
    # get the package directory
    pkg_mycobot_description = get_package_share_directory('mycobot_ros2')
    
    # urdf file path
    urdf_file = os.path.join(pkg_mycobot_description, 'mycobot_description/urdf', 'mycobot_630_pro.urdf.xacro')
    
    # 加载并处理 XACRO 文件
    robot_description_config = xacro.process_file(urdf_file)
    robot_description = {'robot_description': robot_description_config.toxml()}

    # 启动 RViz 并加载 MoveIt Setup Assistant 插件
    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='log',
        arguments=['-d', get_package_share_directory('moveit_setup_assistant') + '/launch/setup_assistant.rviz'],
        parameters=[
            robot_description,
            {'use_sim_time': True},
        ]
    )

    return LaunchDescription([rviz_node])