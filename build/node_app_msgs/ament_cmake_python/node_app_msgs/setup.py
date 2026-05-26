from setuptools import find_packages
from setuptools import setup

setup(
    name='node_app_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('node_app_msgs', 'node_app_msgs.*')),
)
