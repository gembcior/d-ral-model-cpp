from __future__ import annotations

import subprocess
import tempfile
import time
from pathlib import Path

import click

from renode import Renode

DRAL_MEMORY = 0x20000000
DRAL_SIZE = 0x80000


def hexdump(binfile: Path) -> str:
    """Return hexdump of a binary file"""
    process = subprocess.run(["hexdump", "-v", str(binfile.expanduser().resolve())], capture_output=True, check=True)
    return process.stdout.decode("utf-8")


def emulate(platform: Path, app: Path, dumpfile: Path):
    renode = Renode()
    renode.create_machine(platform)
    renode.stop()
    renode.power_on_reset()
    renode.load_elf(app)
    renode.start()
    time.sleep(1)
    renode.stop()
    renode.dump_memory(DRAL_MEMORY, DRAL_SIZE, dumpfile)


def dump_memory(build_path: Path, platforms_path: Path, data_path: Path, platform: str, app: str):
    build_path = build_path / platform
    elffile = list(build_path.glob(f"*/**/{app}.elf"))[0]
    click.echo(f"Dumping memory from {click.style(elffile.name, fg='magenta')} for {click.style(platform, fg='blue')} platform...", color=True)
    with tempfile.NamedTemporaryFile() as f:
        dumpfile = Path(f.name)
        emulate(platforms_path / f"{platform}.repl", elffile, dumpfile)
        memdump = hexdump(dumpfile)
    with open(data_path / "dral_memory.hex", "w", encoding="utf-8") as f:
        f.write(memdump)


@click.command()
@click.argument("platform")
@click.argument("app")
def cli(platform: str, app: str) -> None:
    click.echo(f"Dumping memory...")
    platforms_path = Path(__file__).parent.parent / "renode" / "platforms"
    build_path = Path(__file__).parent.parent / "output" / "build" / "RelWithDebInfo"
    data_path = Path(__file__).parent.parent / "tests" / "data" / "memdump"
    dump_memory(build_path, platforms_path, data_path, platform, app)


if __name__ == "__main__":
    cli()
