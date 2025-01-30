from __future__ import annotations

import subprocess
from pathlib import Path


def hexdump(binfile: Path) -> str:
    """Return hexdump of a binary file"""
    process = subprocess.run(["hexdump", "-v", str(binfile.expanduser().resolve())], capture_output=True, check=True)
    return process.stdout.decode("utf-8")
