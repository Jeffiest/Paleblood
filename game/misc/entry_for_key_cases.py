#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic owned states for misc_entry_for_key (0x026e70e0): the key copied from its argument,
the lookup's index at zero, one, large and all-ones (the 32-bit index is zero-extended), keys at
zero, all ones and with high bits, and the stack canary cell the original checks.

usage: entry_for_key_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x026e70e0'
LOOKUP = '0x0122e460'
CANARY_CELL = '0x057e3be0'
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1
TABLE = 0x978
ENTRIES = 0x980
OBJECT_SIZE = 0x998
ENTRY_SIZE = 0x120
INDEX_OFFSET = 0x8
CANARY = 'a1b2c3d4e5f60718'


def case(cid, key, index, table_bytes=None):
    """One lookup: the table receives the copied key (compared as its bytes), and the result gives the
    index; the replacement returns the address of that entry in the array."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rsi': 'buf:key', 'rdi': 'buf:self'},
            'buffers': {'self': {'size': OBJECT_SIZE}, 'table': {'size': 16},
                        'entries': {'size': ENTRY_SIZE * 4}, 'key': {'size': 8, 'bytes': q(key)},
                        'lookup': {'size': 16}, 'cell': {'size': 8, 'bytes': CANARY}},
            'memory': [{'addr': 'buf:self+%d' % TABLE, 'pointer': 'table'},
                       {'addr': 'buf:self+%d' % ENTRIES, 'pointer': 'entries'},
                       {'addr': CANARY_CELL, 'pointer': 'cell'},
                       {'addr': 'buf:lookup+%d' % INDEX_OFFSET, 'bytes': u32(index)}],
            'stubs': [{'address': LOOKUP, 'argc': 2, 'argi': [0], 'argmem': [{'arg': 1, 'size': 8}],
                       'ret': 'buf:lookup'}],
            'imports': []}


def q(value):
    """A little-endian 64-bit value."""
    return (value & MASK64).to_bytes(8, 'little').hex()


def u32(value):
    """A little-endian 32-bit value."""
    return (value & MASK32).to_bytes(4, 'little').hex()


CASES = [
    case('index_zero', 0x1122334455667788, 0),
    case('index_one', 0x1122334455667788, 1),
    case('index_three', 0x1, 3),
    case('index_all_ones_32', 0x2, MASK32),
    case('index_high_bit_32', 0x3, 0x80000000),
    case('key_zero', 0, 2),
    case('key_all_ones', MASK64, 2),
    case('key_high_bit', 0x8000000000000001, 2),
    case('key_upper_word_only', 0xffffffff00000000, 1),
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
