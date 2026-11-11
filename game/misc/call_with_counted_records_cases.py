#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic calls for the counted record call (0x01e87f90): an object and argument passed through to the routine at
0x01e876d0, with the mode given as a 32-bit value. The routine's stub writes nothing; the records and counter it is
given are the caller's own stack.

usage: call_with_counted_records_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x01e87f90'
FILL = '0x01e876d0'
OBJECT_SIZE = 0x20


def case(cid, argument, mode, object_bytes='00'):
    """One call. The routine's stub returns nothing and takes six arguments."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:object', 'rsi': argument, 'rdx': mode},
            'buffers': {'object': {'size': OBJECT_SIZE, 'bytes': object_bytes * OBJECT_SIZE}},
            'memory': [], 'stubs': [{'address': FILL, 'argc': 6}], 'imports': []}


CASES = [
    case('plain_zero_argument', 0x0, 0x0),
    case('ordinary_argument_and_mode', 0x1234, 0x7),
    case('high_argument_bits', 0xfffffffffffffff0, 0x80000001),
    case('all_ones_mode', 0x42, 0xffffffff),
    case('object_bytes_set', 0x9, 0x3, object_bytes='a5'),
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
