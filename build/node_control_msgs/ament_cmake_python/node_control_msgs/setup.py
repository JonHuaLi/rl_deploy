from setuptools import find_packages
from setuptools import setup

setup(
    name='node_control_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('node_control_msgs', 'node_control_msgs.*')),
)
