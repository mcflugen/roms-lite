#! /usr/bin/env python
import subprocess


class RomsLite(object):
    _command = 'mpirun'
    _args = ['-n 8', 'oceanM', './External/ocean_riverplume2.in']
    _env = None

    @property
    def args(self):
        return [self._command] + (self._args or [])

    def initialize(self, filename):
        pass

    def update(self, time):
        subprocess.check_call(self.args, shell=False, env=self._env)

    def update_until(self, time):
        self.update(time)

    def finalize(self):
        pass
