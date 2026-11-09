#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic bounded range objects built by bb_misc_bounded_range_object_init (0x00be9280).

usage: bounded_range_object_init_cases.py OUT_DIR

The constructor makes no calls and has no branches. The object starts as garbage (two fill patterns), so
every word it sets, and the bytes it must leave alone (the unknown words at 0x0c and 0x18), are visible.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x00be9280'
OBJECT_BYTES = 0xc0


def case(cid, fill):
    """fill: the byte pattern the object starts with."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': {'rdi': 'buf:object'},
            'buffers': {'object': {'size': OBJECT_BYTES, 'bytes': fill * OBJECT_BYTES}},
            'memory': [], 'imports': [], 'stubs': []}


CASES = [
    case('garbage_object', 'a5'),
    case('all_ones_object', 'ff'),
]


def main():
    output = Path(sys.argv[1]) if len(sys.argv) == 2 else None
    if output is None:
        print(__doc__, file=sys.stderr)
        return 2
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        with (output / (fixture['id'] + '.json')).open('w') as stream:
            stream.write(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} cases written to {output}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
