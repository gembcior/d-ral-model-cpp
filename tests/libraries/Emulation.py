from pathlib import Path

from robot.api.deco import keyword, library
from robot.api.logger import info

from renode import Renode


@library
class Emulation:
    ROBOT_AUTO_KEYWORDS = False

    def __init__(self):
        # self._emulator = Renode()
        self._emulator = None
        self._executable = None
        self._machine_description = None

    @keyword
    def set_executable(self, path: Path):
        self._executable = path

    @keyword
    def set_machine_description(self, path: Path):
        self._machine_description = path

    @keyword
    def create(self):
        if not self._executable:
            raise SystemError("No executable set")
        if not self._machine_description:
            raise SystemError("No machine description set")
        info(f"Creating Emulation with executable {self._executable} and machine description {self._machine_description}")
        self._emulator.create_machine(self._machine_description)
        self._emulator.stop()
        self._emulator.power_on_reset()
        self._emulator.load_elf(self._executable)

    @keyword
    def start(self):
        info("Starting emulation")
        self._emulator.start()

    @keyword
    def stop(self):
        info("Stopping emulation")
        self._emulator.stop()

    @keyword
    def dump_memory(self, address: int, size: int, file_path: Path):
        info(f"Dumping memory from address {hex(address)} with size {hex(size)} to file {file_path}")
        self._emulator.dump_memory(address, size, file_path)
