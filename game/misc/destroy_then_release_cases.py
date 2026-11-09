#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic objects for misc_reset_then_release (0x0139b610): the destruction runs first with the object,
then the library routine gets the same object, and its result is returned: zero, all ones, and an
ordinary value.

usage: reset_then_release_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x0139b610'
RESET = '0x0139b630'
RELEASE = '0x02fbe588'
MASK64 = (1 << 64) - 1


def case(cid, result):
    """One call on an object of 32 bytes; the reset and the library routine each see it."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:object'}, 'buffers': {'object': {'size': 32, 'bytes': 'c3' * 32}},
            'memory': [],
            'stubs': [{'address': RESET, 'argc': 1}, {'address': RELEASE, 'argc': 1, 'ret': hex(result & MASK64)}],
            'imports': []}


CASES = [
    case('result_zero', 0),
    case('result_all_ones', MASK64),
    case('result_ordinary', 0x1234),
    case('result_high_bit', 0x8000000000000001),
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
