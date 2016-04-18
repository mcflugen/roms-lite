#! /usr/bin/env python
from ez_setup import use_setuptools
use_setuptools()
from setuptools import setup, find_packages


setup(name='roms-lite',
      version='0.1.0',
      author='Eric Hutton',
      author_email='eric.hutton@colorado.edu',
      description='Python BMI for ROMS-Lite',
      long_description=open('README.md').read(),
      packages=find_packages(),
)
