from setuptools import find_packages
from setuptools import setup

setup(
    name='node_driver_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('node_driver_msgs', 'node_driver_msgs.*')),
)
