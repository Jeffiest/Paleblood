#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for bb_misc_init_entry_table_state (0x00f2b760).

usage: init_entry_table_state_cases.py OUT_DIR

The function has no branches. Each case gives the table, the owner, the source and the count, a
stubbed fill call that hands the table its four blocks (written as pointers into the table), and
buffers around the blocks that are pre-filled with a marker so every byte the function touches
shows in the comparison.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x00f2b760'
FILL = '0x00f2b990'
TABLE_SIZE = 0xe0
BLOCK_SIZE = 0xb0
BLOCK_START = 0x10
MARK_SIZE = 0x30
MARK_START = 0x10


def case(cid, owner, count, table_fill, block_fill, mark_fill):
    """One initialisation with the given prior contents of the table and blocks."""
    buffers = {
        'table': {'size': TABLE_SIZE, 'bytes': table_fill * TABLE_SIZE},
        'blocks': {'size': BLOCK_SIZE, 'bytes': block_fill * BLOCK_SIZE},
        'marks': {'size': MARK_SIZE, 'bytes': mark_fill * MARK_SIZE},
        'bytes': {'size': 0x10, 'bytes': '3c' * 0x10},
        'limits': {'size': 0x10, 'bytes': '4d' * 0x10},
        'source': {'size': 0x20},
    }
    writes = [
        {'arg': 0, 'offset': 0x10, 'pointer': f'blocks+{BLOCK_START}', 'size': 8},
        {'arg': 0, 'offset': 0x28, 'pointer': f'marks+{MARK_START}', 'size': 8},
        {'arg': 0, 'offset': 0x78, 'pointer': 'bytes+3', 'size': 8},
        {'arg': 0, 'offset': 0x98, 'pointer': 'limits+4', 'size': 8},
    ]
    return {
        'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
        'args': {'rdi': 'buf:table', 'rsi': owner, 'rdx': 'buf:source', 'rcx': count},
        'buffers': buffers, 'memory': [], 'imports': [],
        'stubs': [{'address': FILL, 'argc': 3, 'writes': writes}],
    }


CASES = [
    case('zero_count', '0x0', '0x0', '5a', 'a5', '6b'),
    case('small_count', '0x1234567890abcdef', '0x7', '00', 'ff', '00'),
    case('large_count', '0xffffffffffffffff', '0xffffffff', 'ff', '00', 'ff'),
    case('upper_rcx_bits_ignored', '0x42', '0x123400000010', '77', '12', 'e1'),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        (output / (fixture['id'] + '.json')).write_text(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} cases written to {output}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
