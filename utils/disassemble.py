from __future__ import annotations

import subprocess
from pathlib import Path

import click

SYMBOLS = [
    "simple_register_read",
    "simple_register_write",
    "simple_field_read",
    "simple_field_write",
]


def disassemble(elffile: Path, symbol: str) -> str:
    """Return disassembly of a symbol in an ELF file"""
    process = subprocess.run(["arm-none-eabi-objdump", f"--disassemble={symbol}", "-C", str(elffile.expanduser().resolve())], capture_output=True, check=True)
    disassembly = process.stdout.decode("utf-8").splitlines()
    for i, line in enumerate(disassembly):
        if line.startswith("Disassembly of section"):
            disassembly = disassembly[i:]
            break
    return "\n".join(disassembly)


@click.command()
def cli() -> None:
    click.echo(f"Disassembling...")
    build_path = Path(__file__).parent.parent / "output" / "build" / "RelWithDebInfo"
    data_path = Path(__file__).parent.parent / "tests" / "data" / "disassembly"
    for_dissassembly = [(dir.name, list(dir.glob("*/**/app-model.elf"))[0]) for dir in build_path.iterdir() if dir.is_dir()]
    for platform, elffile in for_dissassembly:
        click.echo(f"Disassembling symbols for {platform} platform...")
        for symbol in SYMBOLS:
            click.echo(f"Disassembling {symbol} from {elffile}")
            content = disassemble(elffile, f"{symbol}()")
            with open(data_path / platform/ f"{symbol}.txt", "w", encoding="utf-8") as f:
                f.write(content)


if __name__ == "__main__":
    cli()
