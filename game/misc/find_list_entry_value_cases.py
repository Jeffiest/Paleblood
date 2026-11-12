#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_find_list_entry_value (0x00418290), for tools/verify.py run.

usage: find_list_entry_value_cases.py OUT_DIR

The list starts at the object's +0x120. Each entry holds its key (32 bits), its value at +0x8 and the
link to the next entry at +0x18. The first entry with the key gives its value; no match gives zero.
"""
import json
import struct
import sys
from pathlib import Path

ADDRESS = '0x00418290'
OBJECT_SIZE = 0x130
HEAD_OFFSET = 0x120
NEXT_OFFSET = 0x18
ENTRY_SIZE = 0x20


def entry_bytes(key, value, unknown):
    """A list entry's bytes: the key, the unknown word after it, the value and an unknown tail."""
    return (struct.pack('<I', key) + struct.pack('<I', unknown) + struct.pack('<Q', value)
            + b'\xaa' * 8).hex() + '00' * 8


def case(cid, entries, key, unknown=0):
    """entries: (key, value) pairs in list order. The list's entries are buffers e0, e1, ..."""
    buffers = {'object': {'size': OBJECT_SIZE, 'bytes': '00' * OBJECT_SIZE},
               'key': {'size': 4, 'bytes': struct.pack('<I', key).hex()}}
    memory = []
    names = []
    for index, (entry_key, value) in enumerate(entries):
        name = f'e{index}'
        names.append(name)
        buffers[name] = {'size': ENTRY_SIZE, 'bytes': entry_bytes(entry_key, value, unknown)[:ENTRY_SIZE * 2]}
    if names:
        memory.append({'addr': 'buf:object+' + str(HEAD_OFFSET), 'pointer': names[0]})
    for index, name in enumerate(names):
        if index + 1 < len(names):
            memory.append({'addr': 'buf:' + name + '+' + str(NEXT_OFFSET), 'pointer': names[index + 1]})
        else:
            memory.append({'addr': 'buf:' + name + '+' + str(NEXT_OFFSET), 'bytes': '00' * 8})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:object', 'rsi': 'buf:key'}, 'buffers': buffers, 'memory': memory,
            'stubs': [], 'imports': []}


CASES = [
    case('empty_list_gives_zero', entries=[], key=0x11),
    case('first_entry_matches', entries=[(0x11, 0x1111), (0x22, 0x2222)], key=0x11),
    case('second_entry_matches', entries=[(0x22, 0x2222), (0x33, 0x3333)], key=0x33),
    case('no_entry_matches', entries=[(0x22, 0x2222), (0x33, 0x3333)], key=0x99),
    case('matching_value_zero', entries=[(0x44, 0)], key=0x44),
    case('unknown_word_ignored', entries=[(0x55, 0x5555)], key=0x55, unknown=0xffffffff),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print('usage: find_list_entry_value_cases.py OUT_DIR', file=sys.stderr)
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
