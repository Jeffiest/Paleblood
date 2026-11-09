#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic arguments for misc_resolve_then_forward (0x00406d30): zero, all-ones, high-bit and
upper-word values in both arguments, and resolved values that differ from the first argument.

usage: resolve_then_forward_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x00406d30'
RESOLVE = '0x00400300'
FORWARD = '0x004de260'
MASK64 = (1 << 64) - 1


def case(cid, first, second, resolved, forwarded):
    """One call: the resolver receives the first argument and returns resolved; the forward stage
    receives that result and the second argument, and returns forwarded."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': hex(first & MASK64), 'rsi': hex(second & MASK64)},
            'buffers': {}, 'memory': [],
            'stubs': [{'address': RESOLVE, 'argc': 1, 'ret': hex(resolved & MASK64)},
                      {'address': FORWARD, 'argc': 2, 'ret': hex(forwarded & MASK64)}],
            'imports': []}


CASES = [
    case('all_zero', 0, 0, 0, 0),
    case('ordinary_values', 0x1000, 0x2000, 0x7000, 5),
    case('resolved_zero_second_set', 0x1000, 0x2000, 0, 0x2000),
    case('first_zero_resolved_set', 0, 0x2000, 0x3000, 1),
    case('all_ones', MASK64, MASK64, MASK64, MASK64),
    case('high_bit_first', 0x8000000000000000, 1, 0x123, 0x8000000000000001),
    case('upper_word_second', 0x7fffffff, 0x100000000, 0xffffffff00000000, 2),
    case('negative_forwarded', 0x10, 0xfffffffffffffffe, 0x20, MASK64 - 5),
    case('resolved_equals_second', 0x44, 0x55, 0x55, 0x66),
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
