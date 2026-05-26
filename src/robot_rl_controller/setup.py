from setuptools import find_packages, setup
from glob import glob
import os

package_name = 'robot_rl_controller'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch', glob('launch/*.launch.py')),
        ('share/' + package_name + '/config', glob('config/*.yaml')),
        ('share/' + package_name + '/onnx', glob('onnx/*.onnx')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='nvidia',
    maintainer_email='nvidia@todo.todo',
    description='机器人强化学习控制器 - Python应用层',
    license='MIT',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'dance_robot_controller = robot_rl_controller.dance_robot_controller:main',
            'action_robot_controller = robot_rl_controller.action_robot_controller:main',
            'waist_15_action_robot_controller = robot_rl_controller.waist_15_action_robot_controller:main',
            's_waist_15_action_robot_controller = robot_rl_controller.s_waist_15_action_robot_controller:main',
        ],
    },
)
