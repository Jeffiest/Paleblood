#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic objects for the counted word object build (0x01e90aa0): the virtual table and the default mask are set,
the word after them is left as it was, and the routine returns the mask. Two fills of the object show that nothing
else is read or written.

usage: build_counted_word_object_01e90aa0_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x01e90aa0'
OBJECT_SIZE = 0x10
MASK = 0x80000000


def case(cid, fill):
    """An object of OBJECT_SIZE bytes filled with one byte value; the routine returns the default mask."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:object'},
            'buffers': {'object': {'size': OBJECT_SIZE, 'bytes': f'{fill:02x}' * OBJECT_SIZE}},
            'memory': [], 'stubs': [], 'imports': []}


CASES = [
    case('object_zero_filled', 0x00),
    case('object_all_ones_filled', 0xff),
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
