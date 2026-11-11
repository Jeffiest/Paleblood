#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic marks for bb_misc_mark_flagged_member (0x00415100): a flagged member whose signed count
is negative, zero, one, two or at the top of its range, with its flag clear at the start. The
original never writes RAX, so every case returns void.

usage: mark_flagged_member_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x00415100'
MEMBER_SIZE = 0xf0


def case(cid, count):
    """One mark: a member with the given signed count and its flag clear."""
    data = bytearray(MEMBER_SIZE)
    data[0xe4:0xe8] = struct.pack('<i', count)
    buffers = {'member': {'size': MEMBER_SIZE, 'bytes': data.hex()}}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:member'},
            'buffers': buffers, 'memory': [], 'stubs': [], 'imports': []}


CASES = [
    case('negative_count', count=-3),
    case('zero_count', count=0),
    case('one_count', count=1),
    case('two_count', count=2),
    case('top_count', count=0x7fffffff),
]


def main():
    """Write deterministic synthetic input for the cases above."""
    if len(sys.argv) != 2:
        print(__doc__)
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
