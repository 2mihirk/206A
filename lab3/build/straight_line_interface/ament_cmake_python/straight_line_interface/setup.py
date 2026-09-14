from setuptools import find_packages
from setuptools import setup

setup(
    name='straight_line_interface',
    version='0.0.0',
    packages=find_packages(
        include=('straight_line_interface', 'straight_line_interface.*')),
)
