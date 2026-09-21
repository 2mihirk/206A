from setuptools import find_packages
from setuptools import setup

setup(
    name='turtle_patrol_interface',
    version='0.0.0',
    packages=find_packages(
        include=('turtle_patrol_interface', 'turtle_patrol_interface.*')),
)
