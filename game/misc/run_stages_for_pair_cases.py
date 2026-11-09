#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic fixtures for run_stages_for_pair at 0x01398830, for tools/verify.py run.

usage: run_stages_for_pair_cases.py OUT_DIR

Eight stage calls in order: the first index gets three stages and the final stage, then the
second index gets the same. Both indices are passed as 32-bit values, and the final stage's
return value is returned unchanged. Covers equal indices, extremes and the zero index.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x01398830'
STAGES = ['0x02fa5b90', '0x02fa5d70', '0x02fa5e60', '0x02fa5c80']
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1
RESULT_TAIL = 0x1234567890abcdef


def stage_calls(final):
    """The eight stubs in call order; the last is the tail call that yields the return value."""
    calls = []
    for pass_index in range(2):
        for position, address in enumerate(STAGES):
            stub = {'address': address, 'argc': 2, 'argi': [0, 1], 'argf32': [0]}
            if position == len(STAGES) - 1:
                stub['ret'] = hex(final & MASK64)
            calls.append(stub)
    return calls


def case(cid, first=3, second=9, final=RESULT_TAIL, object_garbage='5a' * 32):
    """One call with two 32-bit indices, the object opaque and the return value scripted."""
    stubs = stage_calls(final)
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:object', 'rsi': hex(first & MASK32), 'rdx': hex(second & MASK32),
                     'rcx': '0x0', 'r8': '0x0', 'r9': '0x0'},
            'buffers': {'object': {'size': 64, 'bytes': object_garbage}},
            'memory': [], 'imports': [], 'stubs': stubs}


CASES = [
    case('distinct_indices'),
    case('equal_indices', first=5, second=5),
    case('first_index_zero', first=0),
    case('second_index_zero', second=0),
    case('both_zero', first=0, second=0),
    case('second_index_all_ones', second=MASK32),
    case('first_index_sign_bit', first=0x80000000),
    case('final_returns_zero', final=0),
    case('final_returns_all_ones', final=MASK64),
    case('final_returns_upper_word', final=0x100000007),
]


def main():
    """Write deterministic fixtures to the requested directory."""
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
