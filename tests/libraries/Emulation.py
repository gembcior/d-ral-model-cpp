import tempfile
from pathlib import Path

from robot.api.deco import keyword, library
from robot.api.logger import info

from renode import Renode
from hexdump import hexdump


@library
class Emulation:
    ROBOT_AUTO_KEYWORDS = False
    ROBOT_LIBRARY_SCOPE = "TEST"

    def __init__(self):
        self._emulator = Renode()
        self._executable = None
        self._machine_description = None

    def __del__(self):
        self._emulator.exit()

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
    def dump_memory(self, address: int, size: int) -> str:
        info(f"Dumping ${size} bytes from ${address}")
        with tempfile.NamedTemporaryFile() as f:
            dumpfile = Path(f.name)
            self._emulator.dump_memory(address, size, dumpfile)
            memdump = hexdump(dumpfile)
        return memdump
