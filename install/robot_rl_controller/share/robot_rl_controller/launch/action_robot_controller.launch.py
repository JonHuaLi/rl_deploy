from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    """简化的机器人控制器launch文件"""
    
    return LaunchDescription([
        # 状态汇聚节点
        Node(
            package='robot_state',
            executable='robot_state_node',
            name='robot_state_node',
            output='both',
        ),
        
        # # 手柄节点
        # Node(
        #     package='joy',
        #     executable='joy_node',
        #     name='joy_node',
        #     parameters=[{
        #         'autorepeat_rate': 0.0,
        #         'device_id': 0,
        #         'deadzone': 0.05,
        #         'coalesce_interval': 0.01,
        #     }],
        #     output='both',
        # ),
        
        # RL控制器节点（Python代码自己加载YAML配置）
        Node(
            package='robot_rl_controller',
            executable='action_robot_controller',
            name='action_robot_controller',
            parameters=[],  # 不使用ROS2参数系统，让Python代码自己处理YAML
            output='both',
        ),
    ])
