#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_store_keyed_record_locked (0x00415a20), for tools/verify.py run.

usage: store_keyed_record_locked_cases.py OUT_DIR

The cache's level decides the lock: below two the lock is taken and released around the insert,
otherwise no lock call is made. An object is referenced before the insert and released after it,
since the insert never sets the record's flag (the caller clears it just before the call). The
insert is a scripted stub that takes the table and the hash of the key; the record argument is
not compared because it lives in each side's own frame.
"""
import json
import struct
import sys

ADDRESS = '0x00415a20'
LOCK, UNLOCK = '0x02fbe598', '0x02fbe5a8'
ADD_REFERENCE = '0x0042e5c0'
RELEASE_REFERENCE = '0x0042e5d0'
INSERT = '0x02792dc0'
CACHE_SIZE = 0x160
LEVEL_OFFSET = 0xe4

UNREACHABLE = {
    '0x00415aac': ('taken',
                   'the insert never writes the record flag, which the caller clears just before the call'),
}


def case(cid, level, key, with_object):
    """One store. A level below two takes the lock; an object is referenced and released around the insert."""
    locked = level < 2
    buffers = {'cache': {'size': CACHE_SIZE, 'bytes': '5a' * CACHE_SIZE},
               'key': {'size': 4, 'bytes': struct.pack('<I', key).hex()},
               'object': {'size': 0x40}}
    memory = [{'addr': 'buf:cache+' + hex(LEVEL_OFFSET), 'bytes': struct.pack('<i', level).hex()}]
    args = {'rdi': 'buf:cache', 'rsi': 'buf:key', 'rdx': 'buf:object' if with_object else 0}
    stubs = []
    if locked:
        stubs.append({'address': LOCK, 'argc': 1, 'argi': [0]})
    if with_object:
        stubs.append({'address': ADD_REFERENCE, 'argc': 1, 'argi': [0]})
    stubs.append({'address': INSERT, 'argc': 4, 'argi': [0, 1, 3]})
    if with_object:
        stubs.append({'address': RELEASE_REFERENCE, 'argc': 1, 'argi': [0]})
    if locked:
        stubs.append({'address': UNLOCK, 'argc': 1, 'argi': [0], 'ret': 0})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': args, 'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('locked_level_zero_with_object', level=0, key=0x12345678, with_object=True),
    case('locked_level_one_no_object', level=1, key=0x0000ff01, with_object=False),
    case('locked_level_negative_with_object', level=-1, key=0, with_object=True),
    case('unlocked_level_two_with_object', level=2, key=0xdeadbeef, with_object=True),
    case('unlocked_level_large_no_object', level=7, key=0x00010203, with_object=False),
    case('unlocked_level_max_with_object', level=0x7fffffff, key=0x1f2e3d4c, with_object=True),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print('usage: store_keyed_record_locked_cases.py OUT_DIR', file=sys.stderr)
        return 2
    from pathlib import Path
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        with (output / (fixture['id'] + '.json')).open('w') as stream:
            stream.write(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} synthetic cases written to {output}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
