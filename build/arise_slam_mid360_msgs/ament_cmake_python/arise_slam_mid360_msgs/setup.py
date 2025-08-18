from setuptools import find_packages
from setuptools import setup

setup(
    name='arise_slam_mid360_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('arise_slam_mid360_msgs', 'arise_slam_mid360_msgs.*')),
)
