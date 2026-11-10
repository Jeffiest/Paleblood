#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic destructions of an owner with a member sub-object (a template: near_cases.py puts the
member's offset in place of the slot name and the addresses of the function in place of the ones
below).

usage: near_cases.py FUNCTION_NAME OUT_DIR

The owner holds its vtable word and, further in, the member sub-object. The member's destruction
routine is a stub that receives the member's address; the base part's destruction routine, which the
original tail-jumps to, is a stub whose result is the function's result. Covers zero, all-ones,
high-bit and ordinary results, and garbage, zero and all-ones owner bytes.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02244000'
MEMBER_DESTROY = '0x013e68b0'   # the member's destruction routine; stubbed
BASE_DESTROY = '0x013e8250'     # the base part's destruction routine, tail-jumped to; stubbed
MEMBER_FIELD = NEAR_SLOT_1
OWNER_SIZE = MEMBER_FIELD + 0x20
MASK64 = (1 << 64) - 1


def case(cid, result=0, fill='ee'):
    """One destruction of an owner whose bytes all start as fill; the base routine's result is returned."""
    stubs = [{'address': MEMBER_DESTROY, 'argc': 1, 'argi': [0]},
             {'address': BASE_DESTROY, 'argc': 1, 'argi': [0], 'ret': hex(result & MASK64)}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:owner'}, 'buffers': {'owner': {'size': OWNER_SIZE, 'bytes': fill * OWNER_SIZE}},
            'memory': [], 'imports': [], 'stubs': stubs}


CASES = [
    case('result_zero', result=0),
    case('result_all_ones', result=MASK64, fill='ff'),
    case('result_high_bit', result=1 << 63, fill='00'),
    case('result_ordinary', result=0x2a, fill='c3'),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print(f'usage: {Path(__file__).name} OUT_DIR', file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        (output / (fixture['id'] + '.json')).write_text(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} cases written to {output}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
