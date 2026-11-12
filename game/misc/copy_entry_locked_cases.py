#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_copy_entry_locked (0x00418c60), for tools/verify.py run.

usage: copy_entry_locked_cases.py OUT_DIR

The list's level word decides the lock: at or below one the lock (at +0x170) is taken around the copy. The
copy takes the sixteen-byte entry at the signed index of the first array and stores its 64-bit key and 32-bit
tag into the caller's record; the record's last four bytes are never written. The record is returned.
"""
import json
import struct
import sys
from pathlib import Path

ADDRESS = '0x00418c60'
LOCK, UNLOCK = '0x02fbe598', '0x02fbe5a8'
LIST_SIZE = 0x1c0
ENTRY_SIZE = 0x10
ENTRY_SLOTS = 8
LEVEL_OFFSET, ENTRIES_OFFSET = 0xe4, 0x178
LOCKED_LEVEL_LIMIT = 2
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1


def entry(key, tag):
    return struct.pack('<Q', key & MASK64).hex() + struct.pack('<I', tag & MASK32).hex() + '0c' * 4


def case(cid, level, index, key=0x0123456789abcdef, tag=0x89abcdef):
    locked = level < LOCKED_LEVEL_LIMIT
    entries = ''.join(entry(0x1000 + i * 0x101, 0x20 + i) for i in range(ENTRY_SLOTS))
    stubs = []
    if locked:
        stubs.append({'address': LOCK, 'argc': 1, 'argi': [0]})
        stubs.append({'address': UNLOCK, 'argc': 1, 'argi': [0], 'ret': 0x4444})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:record', 'rsi': 'buf:list', 'rdx': hex(index & MASK32)},
            'buffers': {'record': {'size': ENTRY_SIZE, 'bytes': 'a5' * ENTRY_SIZE},
                        'list': {'size': LIST_SIZE, 'bytes': 'c3' * LIST_SIZE},
                        'entries': {'size': ENTRY_SIZE * ENTRY_SLOTS, 'bytes': entries}},
            'memory': [{'addr': 'buf:list+' + str(LEVEL_OFFSET), 'bytes': struct.pack('<i', level).hex()},
                       {'addr': 'buf:list+' + str(ENTRIES_OFFSET), 'pointer': 'entries'}],
            'stubs': stubs, 'imports': []}


CASES = [
    case('locked_level_zero_index_three', level=0, index=3),
    case('locked_level_one_first_slot', level=1, index=0, key=0, tag=0),
    case('locked_level_negative_last_slot', level=-1, index=ENTRY_SLOTS - 1, key=MASK64, tag=MASK32),
    case('unlocked_level_two_slot_two', level=2, index=2),
    case('unlocked_level_large_slot_five', level=0x7fffffff, index=5),
    case('unlocked_level_three_last_slot', level=3, index=ENTRY_SLOTS - 1),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print('usage: copy_entry_locked_cases.py OUT_DIR', file=sys.stderr)
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
