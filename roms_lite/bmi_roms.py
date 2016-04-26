#! /usr/bin/env python
import sys
import subprocess


class RomsLite(object):
    _command = 'mpirun'
    _args = ['-n', '8', 'oceanM', './External/ocean_riverplume2.in']
    _env = None

    def __init__(self):
        self._time = self.get_start_time()

    @property
    def args(self):
        return [self._command] + (self._args or [])

    def get_component_name(self):
        return 'ROMS-Lite'

    def initialize(self, filename):
        pass

    def update(self, time):
        subprocess.check_call(self.args, shell=False, env=self._env)

        self._time = self.get_end_time()

    def update_until(self, time):
        self.update(time)

    def finalize(self):
        pass

    def get_input_var_names(self):
        return ()

    def get_output_var_names(self):
        return ()

    def get_start_time(self):
        return 0.

    def get_end_time(self):
        return sys.float_info.max

    def get_current_time(self):
        return self._time
