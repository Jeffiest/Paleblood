#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_index_record_locked (0x00418470), for tools/verify.py run.

usage: index_record_locked_cases.py OUT_DIR

The owner's level word decides the lock: below two the lock (at +0x148) is taken around the work and its
unlock result is returned; otherwise the work runs alone and the function returns nothing (the original
leaves the stack-guard word in RAX there). The table's first word points at the slots; the lookup (0x0278fa00)
gives a slot index, and the link call (0x027914b0) gets the lookup record that names the slot's payload.
"""
import json
import struct
import sys
from pathlib import Path

ADDRESS = '0x00418470'
LOCK, UNLOCK = '0x02fbe598', '0x02fbe5a8'
PREPARE, FIND, LINK = '0x0278de80', '0x0278fa00', '0x027914b0'
OWNER_SIZE = 0x180
TABLE_OFFSET, LEVEL_OFFSET = 0x160, 0xe4
SLOT_SIZE = 0x28
SLOT_COUNT = 8
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1
LOCKED_LEVEL_LIMIT = 2


def case(cid, level, index=2, key=0x0123456789abcdef, value=0xfedcba9876543210, extra=0x55aa55aa,
         unlock_ret=0x1122334455667788):
    locked = level < LOCKED_LEVEL_LIMIT
    stubs = []
    if locked:
        stubs.append({'address': LOCK, 'argc': 1, 'argi': [0]})
    stubs.append({'address': PREPARE, 'argc': 3, 'argi': [0, 1, 2]})
    stubs.append({'address': FIND, 'argc': 2, 'argi': [0, 1], 'ret': hex(index & MASK64)})
    stubs.append({'address': LINK, 'argc': 3, 'argi': [0, 1, 2]})
    if locked:
        stubs.append({'address': UNLOCK, 'argc': 1, 'argi': [0], 'ret': hex(unlock_ret & MASK64)})
    slots = 'e9' * (SLOT_SIZE * SLOT_COUNT)
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64' if locked else 'void',
            'args': {'rdi': 'buf:owner', 'rsi': hex(key & MASK64), 'rdx': hex(value & MASK64),
                     'rcx': hex(extra & MASK64)},
            'buffers': {'owner': {'size': OWNER_SIZE, 'bytes': 'c3' * OWNER_SIZE},
                        'slots': {'size': SLOT_SIZE * SLOT_COUNT, 'bytes': slots}},
            'memory': [{'addr': 'buf:owner+' + str(LEVEL_OFFSET), 'bytes': struct.pack('<i', level).hex()},
                       {'addr': 'buf:owner+' + str(TABLE_OFFSET), 'pointer': 'slots'}],
            'stubs': stubs, 'imports': []}


CASES = [
    case('locked_level_zero_slot_two', level=0, index=2),
    case('locked_level_negative_first_slot', level=-1, index=0, key=0, value=0, extra=0),
    case('locked_level_one_last_slot', level=1, index=SLOT_COUNT - 1, unlock_ret=0xffffffffffffff80),
    case('unlocked_level_two_slot_three', level=2, index=3),
    case('unlocked_level_large', level=0x7fffffff, index=5, key=MASK64, value=MASK64, extra=MASK64),
    case('unlocked_level_three_slot_zero', level=3, index=0, key=1, value=2, extra=3),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print('usage: index_record_locked_cases.py OUT_DIR', file=sys.stderr)
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
