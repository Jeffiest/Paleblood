#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic forwarding calls for misc_forward_index_02242c30 (0x02242c30).

usage: forward_index_02242c30_cases.py OUT_DIR

The object stores the value at 0x34, then the forwarding function (0x00f6a370) receives the inner object
(0x38), the index (0x30), the value and the mode zero. The forwarding function is a stub that returns a
chosen result. Covers positive, negative, zero and high-bit values and indices, an absent inner object,
and results of zero, all ones and high bits.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02242c30'
FORWARD = '0x00f6a370'
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1
OBJECT_SIZE = 0x40


def case(cid, value=0x1234, index=3, inner=True, result=0x55):
    """One call: the object's value is stored, then the forwarding stub runs with the inner object and index."""
    memory = [{'addr': 'buf:obj+48', 'bytes': struct.pack('<i', index).hex()}]
    if inner:
        memory.append({'addr': 'buf:obj+56', 'pointer': 'inner'})
    else:
        memory.append({'addr': 'buf:obj+56', 'bytes': '00' * 8})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:obj', 'rsi': hex(value & MASK32)},
            'buffers': {'obj': {'size': OBJECT_SIZE, 'bytes': 'ee' * OBJECT_SIZE},
                        'inner': {'size': 0x20, 'bytes': 'aa' * 0x20}},
            'memory': memory,
            'imports': [],
            'stubs': [{'address': FORWARD, 'argc': 4, 'ret': hex(result & MASK64)}]}


CASES = [
    case('ordinary_value'),
    case('negative_value', value=-5),
    case('zero_value_and_index', value=0, index=0),
    case('negative_index', index=-1),
    case('int_min_value', value=-0x80000000),
    case('int_max_index', index=0x7fffffff),
    case('absent_inner_object', inner=False),
    case('result_zero', result=0),
    case('result_all_ones', result=MASK64),
    case('result_high_bit', result=1 << 63),
    case('high_bits_of_value_ignored', value=0x123456789)
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
    print(f'{len(CASES)} synthetic cases written to {output}')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
