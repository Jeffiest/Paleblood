#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic fixtures for run_four_stages at 0x013987d0, for tools/verify.py run.

usage: run_four_stages_cases.py OUT_DIR

Each of the four stages is stubbed in call order. The object is opaque, the index is passed as a
32-bit value, and the final stage's return value is returned unchanged. Index values cover zero,
the low and high halves of 32 bits, and the sign bit.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x013987d0'
STAGES = ['0x02fa5b90', '0x02fa5d70', '0x02fa5e60', '0x02fa5c80']
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1
RESULT_TAIL = 0x1234567890abcdef


def case(cid, index=3, final=RESULT_TAIL, object_garbage='5a' * 32):
    """One call: the object is an opaque buffer, the index is a 32-bit register value."""
    stubs = [{'address': address, 'argc': 2, 'argi': [0, 1], 'argf32': [0]} for address in STAGES[:3]]
    stubs.append({'address': STAGES[3], 'argc': 2, 'argi': [0, 1], 'argf32': [0],
                  'ret': hex(final & MASK64)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:object', 'rsi': hex(index & MASK32), 'rdx': '0x0', 'rcx': '0x0',
                     'r8': '0x0', 'r9': '0x0'},
            'buffers': {'object': {'size': 64, 'bytes': object_garbage}},
            'memory': [], 'imports': [], 'stubs': stubs}


CASES = [
    case('ordinary_index'),
    case('index_zero', index=0),
    case('index_all_ones_32', index=MASK32),
    case('index_sign_bit', index=0x80000000),
    case('index_high_half_clear', index=0x7fffffff),
    case('final_returns_zero', final=0),
    case('final_returns_all_ones', final=MASK64),
    case('final_returns_upper_word', final=0x100000007),
    case('object_bytes_untouched', object_garbage='00' * 64),
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
