from pathlib import Path

try:
    from pyrenode3.wrappers import Emulation, Monitor
except (ImportError, RuntimeError):
    raise ImportError(
        "Could not import pyrenode3! "
        "Check if PYRENODE_RUNTIME and PYRENODE_PKG environment variables are set correctly. "
        "See https://gitlab.cam.displaylink.com/swt/displaylink-syna-tools#using-pyrenode3"
    )


class Renode:
    def __init__(self):
        self.emulation = Emulation()
        self.monitor = Monitor()

    def create_machine(self, desc_file_path: str | Path):
        self.machine = self.emulation.add_mach("machine")
        self.machine.load_repl(str(desc_file_path))

    def load_elf(self, elf_path: str | Path):
        self.machine.load_elf(str(elf_path))

    def start(self):
        self.emulation.StartAll()

    def stop(self):
        self.emulation.PauseAll()

    def soft_reset(self):
        self.machine.sysbus.cpu.Reset()

    def power_on_reset(self):
        self.machine.sysbus.cpu.Reset()
        self.machine.sysbus.sram.ZeroAll()

    def read_dword(self, address: int) -> int:
        """Read 32 bits from memory"""
        return self.machine.sysbus.ReadDoubleWord(address)

    def write_dword(self, address: int, value: int):
        """Write 32 bits to memory"""
        self.machine.sysbus.WriteDoubleWord(address, value)

    def dump_memory(self, address: int, size: int, file_path: Path):
        """Dump memory to file"""
        cmd = f"dump_file {hex(address)} {hex(size)} @{file_path.expanduser().resolve()}"
        self._execute_monitor_command(cmd)

    def _execute_monitor_command(self, command: str) -> tuple[str, str]:
        return self.monitor.execute(command)
