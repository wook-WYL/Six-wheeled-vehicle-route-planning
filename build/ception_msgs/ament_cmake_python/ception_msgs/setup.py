from setuptools import find_packages
from setuptools import setup

setup(
    name='ception_msgs',
    version='1.0.0',
    packages=find_packages(
        include=('ception_msgs', 'ception_msgs.*')),
)
