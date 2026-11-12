#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cursors for the item read (0x01e8d490): a cursor with no block returns all ones; a cursor with a block
returns the item at the index, from +0x20 (the first and a later index), and the index is taken as its 32-bit value,
so the upper half of RSI is ignored.

usage: word_cursor_item_01e8d490_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01e8d490'
CURSOR_SIZE = 0x18
BLOCK_SIZE = 0x40
ITEMS_OFFSET = 0x20
ITEMS = [0x11111111, 0x22222222, 0x33333333, 0x44444444]
UPPER_HALF = 0x7 << 32       # garbage above the 32-bit index in RSI


def le32(value):
    """The four little-endian bytes of a 32-bit value, as hex."""
    return struct.pack('<I', value & 0xffffffff).hex()


def case(cid, index, with_block=True):
    """A cursor reading the item at index; the block buffer holds ITEMS from +0x20 when with_block is true."""
    memory = []
    if with_block:
        memory.append({'addr': 'buf:cursor+0x8', 'pointer': 'block'})
        for position, item in enumerate(ITEMS):
            memory.append({'addr': f'buf:block+{ITEMS_OFFSET + 4 * position:#x}', 'bytes': le32(item)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i32',
            'args': {'rdi': 'buf:cursor', 'rsi': hex(index)},
            'buffers': {'cursor': {'size': CURSOR_SIZE}, 'block': {'size': BLOCK_SIZE}},
            'memory': memory, 'stubs': [], 'imports': []}


CASES = [
    case('no_block_returns_all_ones', 0x1, with_block=False),
    case('first_item', 0x0),
    case('later_item', 0x2),
    case('last_item_upper_bits_ignored', 0x3 | UPPER_HALF),
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
