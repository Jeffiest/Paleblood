#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic calls for misc_call_then_forward (0x026f39b0), for tools/verify.py run.

usage: call_then_forward_cases.py OUT_DIR

The original runs the routine at 0x026f4330 on its argument, then tail-jumps to the library routine at
0x02fbe588 with the same argument and returns that routine's result. Both are stubs: the object routine
returns nothing and the library routine's result is scripted. The cases cover a zero, an all-ones and an
ordinary result, and a result with only its high half set.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x026f39b0'
OBJECT_ROUTINE = '0x026f4330'
LIBRARY = '0x02fbe588'
MASK64 = (1 << 64) - 1


def case(cid, result):
    """One call on an object; the library routine's result is returned."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:object'},
            'buffers': {'object': {'size': 0x40, 'bytes': 'aa' * 0x40}},
            'memory': [], 'imports': [],
            'stubs': [{'address': OBJECT_ROUTINE, 'argc': 1},
                      {'address': LIBRARY, 'argc': 1, 'ret': hex(result & MASK64)}]}


CASES = [
    case('zero_result', 0),
    case('all_ones_result', MASK64),
    case('ordinary_result', 0x1234),
    case('high_half_result', 0x8000000000000000),
]


def main():
    """Write deterministic synthetic calls to the requested directory."""
    if len(sys.argv) != 2:
        print(f'usage: {Path(__file__).name} OUT_DIR', file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        (output / (fixture['id'] + '.json')).write_text(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} synthetic cases written to {output}')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
