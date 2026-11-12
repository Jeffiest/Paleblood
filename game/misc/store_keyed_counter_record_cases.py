#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_store_keyed_counter_record (0x00418060), for tools/verify.py run.

usage: store_keyed_counter_record_cases.py OUT_DIR

The record takes the cache's counter word (which then advances) and is marked as not yet kept. The
cache's level decides the lock: below two the lock is taken around the insert, otherwise not. The
insert is a scripted stub that takes the table and the key's hash; the record and key are compared
through the memory the function writes.
"""
import json
import struct
import sys
from pathlib import Path

ADDRESS = '0x00418060'
LOCK, UNLOCK = '0x02fbe598', '0x02fbe5a8'
INSERT = '0x02792dc0'
CACHE_SIZE = 0x160
RECORD_SIZE = 0x10
LEVEL_OFFSET = 0xe4
COUNTER_OFFSET = 0x140


def case(cid, level, counter, key):
    locked = level < 2
    buffers = {'cache': {'size': CACHE_SIZE, 'bytes': '5a' * CACHE_SIZE},
               'record': {'size': RECORD_SIZE, 'bytes': 'a5' * RECORD_SIZE},
               'key': {'size': 4, 'bytes': struct.pack('<I', key).hex()}}
    memory = [{'addr': 'buf:cache+' + str(LEVEL_OFFSET), 'bytes': struct.pack('<i', level).hex()},
              {'addr': 'buf:cache+' + str(COUNTER_OFFSET), 'bytes': struct.pack('<I', counter).hex()}]
    stubs = []
    if locked:
        stubs.append({'address': LOCK, 'argc': 1, 'argi': [0]})
    stubs.append({'address': INSERT, 'argc': 4, 'argi': [0, 1, 3]})
    if locked:
        stubs.append({'address': UNLOCK, 'argc': 1, 'argi': [0], 'ret': 0})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:record', 'rsi': 'buf:cache', 'rdx': 'buf:key'},
            'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('locked_level_zero', level=0, counter=5, key=0x12345678),
    case('locked_level_negative', level=-1, counter=0x10, key=0x0000ff01),
    case('unlocked_level_two', level=2, counter=7, key=0xdeadbeef),
    case('unlocked_level_large', level=0x7fffffff, counter=0xffffffff, key=0x1f2e3d4c),
    case('locked_level_one_counter_wraps', level=1, counter=0xffffffff, key=0),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print('usage: store_keyed_counter_record_cases.py OUT_DIR', file=sys.stderr)
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
