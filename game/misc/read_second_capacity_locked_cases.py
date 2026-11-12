#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_read_second_capacity_locked (0x00418d50), for tools/verify.py run.

usage: read_second_capacity_locked_cases.py OUT_DIR

The list's lock (at +0x170) is taken, the low 32 bits of the second capacity (at +0x198) are read, and the lock
is released. The result is those 32 bits; the upper half of the capacity is not returned.
"""
import json
import struct
import sys
from pathlib import Path

ADDRESS = '0x00418d50'
LOCK, UNLOCK = '0x02fbe598', '0x02fbe5a8'
LIST_SIZE = 0x1c0
CAPACITY_OFFSET = 0x198
MASK64 = (1 << 64) - 1


def case(cid, capacity):
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i32',
            'args': {'rdi': 'buf:list'},
            'buffers': {'list': {'size': LIST_SIZE, 'bytes': 'c3' * LIST_SIZE}},
            'memory': [{'addr': 'buf:list+' + str(CAPACITY_OFFSET),
                        'bytes': struct.pack('<Q', capacity & MASK64).hex()}],
            'stubs': [{'address': LOCK, 'argc': 1, 'argi': [0]},
                      {'address': UNLOCK, 'argc': 1, 'argi': [0], 'ret': 0xdeadbeef00000001}],
            'imports': []}


CASES = [
    case('capacity_small', capacity=5),
    case('capacity_zero', capacity=0),
    case('capacity_low_word_all_ones', capacity=0xffffffff),
    case('capacity_upper_word_dropped', capacity=0x100000005),
    case('capacity_high_bit_low_word', capacity=0x80000000),
    case('capacity_upper_word_only', capacity=0x700000000),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print('usage: read_second_capacity_locked_cases.py OUT_DIR', file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        with (output / (fixture['id'] + '.json')).open('w') as stream:
            stream.write(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} synthetic cases written to {output}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
