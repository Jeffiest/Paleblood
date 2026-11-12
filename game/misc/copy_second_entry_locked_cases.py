#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_copy_second_entry_locked (0x00418ce0), for tools/verify.py run.

usage: copy_second_entry_locked_cases.py OUT_DIR

The list's second array is checked under its lock: the index, read as an unsigned 32-bit value, must be below
the array's 64-bit capacity. Then the sixteen-byte entry at the index (taken as signed) is copied into the
caller's record, without its last four bytes. The result is one when the entry was copied and zero otherwise.
"""
import json
import struct
import sys
from pathlib import Path

ADDRESS = '0x00418ce0'
LOCK, UNLOCK = '0x02fbe598', '0x02fbe5a8'
LIST_SIZE = 0x1c0
ENTRY_SIZE = 0x10
ENTRY_SLOTS = 8
ENTRIES_OFFSET, CAPACITY_OFFSET = 0x190, 0x198
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1


def entry(key, tag):
    return struct.pack('<Q', key & MASK64).hex() + struct.pack('<I', tag & MASK32).hex() + '0c' * 4


def case(cid, index, capacity):
    entries = ''.join(entry(0x2000 + i * 0x203, 0x40 + i) for i in range(ENTRY_SLOTS))
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i8',
            'args': {'rdi': 'buf:list', 'rsi': 'buf:record', 'rdx': hex(index & MASK32)},
            'buffers': {'record': {'size': ENTRY_SIZE, 'bytes': 'a5' * ENTRY_SIZE},
                        'list': {'size': LIST_SIZE, 'bytes': 'c3' * LIST_SIZE},
                        'entries': {'size': ENTRY_SIZE * ENTRY_SLOTS, 'bytes': entries}},
            'memory': [{'addr': 'buf:list+' + str(CAPACITY_OFFSET), 'bytes': struct.pack('<Q', capacity & MASK64).hex()},
                       {'addr': 'buf:list+' + str(ENTRIES_OFFSET), 'pointer': 'entries'}],
            'stubs': [{'address': LOCK, 'argc': 1, 'argi': [0]},
                      {'address': UNLOCK, 'argc': 1, 'argi': [0], 'ret': 0x4444}],
            'imports': []}


CASES = [
    case('in_range_copies_entry_three', index=3, capacity=5),
    case('first_entry_capacity_one', index=0, capacity=1),
    case('last_slot_below_capacity', index=ENTRY_SLOTS - 1, capacity=ENTRY_SLOTS),
    case('at_capacity_is_not_copied', index=5, capacity=5),
    case('zero_capacity_is_not_copied', index=0, capacity=0),
    case('index_high_bit_zero_extended', index=0xffffffff, capacity=0x7fffffff),
    case('capacity_above_32_bits_copies', index=2, capacity=0x100000000),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print('usage: copy_second_entry_locked_cases.py OUT_DIR', file=sys.stderr)
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
