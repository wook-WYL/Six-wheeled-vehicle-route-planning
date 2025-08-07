from setuptools import find_packages
from setuptools import setup

setup(
    name='visibility_graph_msg',
    version='0.0.1',
    packages=find_packages(
        include=('visibility_graph_msg', 'visibility_graph_msg.*')),
)
