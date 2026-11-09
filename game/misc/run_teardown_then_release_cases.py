#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic arguments for bb_misc_run_teardown_then_release (0x02b3f410): the teardown routine runs
first with the object, then the library release gets the same object and its result is returned.
Covers a null object, all-ones and high-bit pointers, and ordinary values.

usage: run_teardown_then_release_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02b3f410'
TEARDOWN = '0x02b3f430'
RELEASE = '0x02fbe588'
MASK64 = (1 << 64) - 1


def case(cid, obj, result):
    """One call with the object in RDI; the teardown receives the object and the release receives it
    too and returns result."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': hex(obj & MASK64)}, 'buffers': {}, 'memory': [],
            'stubs': [{'address': TEARDOWN, 'argc': 1},
                      {'address': RELEASE, 'argc': 1, 'ret': hex(result & MASK64)}],
            'imports': []}


CASES = [
    case('object_null', 0, 0),
    case('object_ordinary_result_zero', 0x7000, 0),
    case('object_ordinary', 0x1000, 0x1234),
    case('object_all_ones', MASK64, MASK64),
    case('object_high_bit', 0x8000000000000001, 0x8000000000000002),
    case('object_upper_word', 0x100000000, 0xffffffff00000000),
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
