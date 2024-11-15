import subprocess
from pathlib import Path

from robot.api.deco import keyword, library


@library
class Assembly:
    ROBOT_AUTO_KEYWORDS = False

    @keyword
    def dissassemble(self, symbol: str, path: str):
        """Return disassembly of a symbol in an ELF file"""
        elffile = Path(path)
        process = subprocess.run(
            [
                "arm-none-eabi-objdump",
                f"--disassemble={symbol}",
                "-C",
                str(elffile.expanduser().resolve()),
            ],
            capture_output=True,
            check=True,
        )
        disassembly = process.stdout.decode("utf-8").splitlines()
        for i, line in enumerate(disassembly):
            if line.startswith("Disassembly of section"):
                disassembly = disassembly[i:]
                break
        return "\n".join(disassembly)
