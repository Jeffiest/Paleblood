#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic arguments for misc_forward_embedded_context (0x00cdce00): ordinary values, zero, all
ones and high-bit values in the context and both arguments, and routine results that are zero,
all ones and high-bit values.

usage: forward_embedded_context_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x00cdce00'
ROUTINE = '0x00cda840'
MASK64 = (1 << 64) - 1


def case(cid, context, first, second, routine_result):
    """One call: the routine receives the embedded object (context + 0x114), the context, the first
    and the second argument, and returns routine_result, which the replacement returns unchanged."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': hex(context & MASK64), 'rsi': hex(first & MASK64),
                     'rdx': hex(second & MASK64)},
            'buffers': {}, 'memory': [],
            'stubs': [{'address': ROUTINE, 'argc': 4,
                       'ret': hex(routine_result & MASK64)}],
            'imports': []}


CASES = [
    case('ordinary_values', 0x20000, 0x1000, 0x2000, 0x77),
    case('all_zero', 0, 0, 0, 0),
    case('all_ones', MASK64, MASK64, MASK64, MASK64),
    case('high_bit_context_and_first', 0x7fffffffffff0000, 0x8000000000000000, 1, 0x123),
    case('upper_word_second', 0x7fffffff, 0x100000000, 0xffffffff, 0xffffffff00000000),
    case('second_zero_result_negative', 0x40000, 0x10, 0, MASK64 - 5),
    case('first_equals_second', 0x30000, 0x55, 0x55, 0x66),
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
