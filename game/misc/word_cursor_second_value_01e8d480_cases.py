#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cursors for the second header value (0x01e8d480): a cursor with no block returns zero, and a cursor with
a block returns the value at +0x1c of that block (zero and all ones, to show the full width).

usage: word_cursor_second_value_01e8d480_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01e8d480'
CURSOR_SIZE = 0x18
BLOCK_SIZE = 0x40
BLOCK_VALUE_OFFSET = 0x1c


def le32(value):
    """The four little-endian bytes of a 32-bit value, as hex."""
    return struct.pack('<I', value & 0xffffffff).hex()


def case(cid, value=None):
    """A cursor whose block is set to the block buffer when value is given, which holds value at +0x1c."""
    memory = []
    if value is not None:
        memory.append({'addr': 'buf:cursor+0x8', 'pointer': 'block'})
        memory.append({'addr': f'buf:block+{BLOCK_VALUE_OFFSET:#x}', 'bytes': le32(value)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i32',
            'args': {'rdi': 'buf:cursor'},
            'buffers': {'cursor': {'size': CURSOR_SIZE}, 'block': {'size': BLOCK_SIZE}},
            'memory': memory, 'stubs': [], 'imports': []}


CASES = [
    case('no_block_returns_zero'),
    case('block_value_zero', 0x0),
    case('block_value_all_ones', 0xffffffff),
    case('block_value_plain', 0x0badf00d),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print(f'usage: {Path(__file__).name} OUT_DIR', file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        with (output / (fixture['id'] + '.json')).open('w') as stream:
            stream.write(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} synthetic cases written to {output}')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
