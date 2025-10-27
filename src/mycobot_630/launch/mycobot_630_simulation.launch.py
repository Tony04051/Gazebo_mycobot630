import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, ExecuteProcess, RegisterEventHandler
from launch.event_handlers import OnProcessExit
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
import xacro


def generate_launch_description():
    # === 路徑設定 ===
    pkg_mycobot_description = get_package_share_directory('mycobot_description')
    pkg_mycobot_gazebo = get_package_share_directory('mycobot_630')
    pkg_gazebo_ros = get_package_share_directory('gazebo_ros')

    # URDF / WORLD 路徑
    urdf_file = os.path.join(
        pkg_mycobot_description,
        'urdf/mycobot_pro_630',
        'mycobot_630_pro.urdf.xacro'
    )
    world_file = os.path.join(pkg_mycobot_gazebo, 'worlds', 'empty.world')

    # === 解析 xacro 為 urdf 字串 ===
    robot_description_config = xacro.process_file(urdf_file)
    robot_description = {'robot_description': robot_description_config.toxml()}

    # === 啟動 Gazebo 主程序 ===
    start_gazebo_cmd = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_gazebo_ros, 'launch', 'gazebo.launch.py')
        ),
        launch_arguments={'world': world_file}.items(),
    )

    # === 啟動 robot_state_publisher ===
    start_robot_state_publisher_cmd = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='screen',
        parameters=[robot_description, {'use_sim_time': True}],
    )

    # === 在 Gazebo 中生成機器人實體 ===
    spawn_entity_cmd = Node(
        package='gazebo_ros',
        executable='spawn_entity.py',
        arguments=['-topic', 'robot_description', '-entity', 'mycobot_630'],
        output='screen',
    )

    # === 載入控制器 ===
    load_joint_state_broadcaster = ExecuteProcess(
        cmd=['ros2', 'control', 'load_controller', '--set-state', 'start', 'joint_state_broadcaster'],
        output='screen',
    )

    load_joint_trajectory_controller = ExecuteProcess(
        cmd=['ros2', 'control', 'load_controller', '--set-state', 'start', 'joint_trajectory_controller'],
        output='screen',
    )

    load_gripper_controller = ExecuteProcess(
        cmd=['ros2', 'control', 'load_controller', '--set-state', 'start', 'gripper_controller'],
        output='screen',
    )

    # === 組合 Launch Description ===
    ld = LaunchDescription()

    # 啟動順序
    ld.add_action(start_gazebo_cmd)
    ld.add_action(start_robot_state_publisher_cmd)
    ld.add_action(spawn_entity_cmd)

    # 事件順序控制
    ld.add_action(
        RegisterEventHandler(
            event_handler=OnProcessExit(
                target_action=spawn_entity_cmd,
                on_exit=[load_joint_state_broadcaster],
            )
        )
    )
    ld.add_action(
        RegisterEventHandler(
            event_handler=OnProcessExit(
                target_action=load_joint_state_broadcaster,
                on_exit=[load_joint_trajectory_controller],
            )
        )
    )
    ld.add_action(
        RegisterEventHandler(
            event_handler=OnProcessExit(
                target_action=load_joint_trajectory_controller,
                on_exit=[load_gripper_controller],
            )
        )
    )

    return ld
