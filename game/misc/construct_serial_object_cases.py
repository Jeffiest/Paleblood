#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic objects for the serial object constructor at 0x0139b5d0, for tools/verify.py run.

usage: construct_serial_object_cases.py OUT_DIR

The global counter at 0x058b33b0 is given explicit old values: ordinary, zero, the largest value
(which wraps to zero), a value with only upper bits set and a value above 32 bits. The 32-byte
object starts filled with a pattern so every field it receives is observed.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x0139b5d0'
COUNTER = '0x058b33b0'
MASK64 = (1 << 64) - 1


def word(value):
    """Encode the complete eight-byte value stored at a fixed guest slot."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, counter):
    """One construction with the counter holding the given value before the call."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:object', 'rsi': '0x1111111111111111', 'rdx': '0xffffffffffffffff'},
            'buffers': {'object': {'size': 0x20, 'bytes': 'c3' * 0x20}},
            'imports': [], 'stubs': [],
            'memory': [{'addr': COUNTER, 'bytes': word(counter)}]}


CASES = [
    case('counter_zero_becomes_one', 0),
    case('counter_ordinary', 0x41),
    case('counter_all_ones_wraps_to_zero', MASK64),
    case('counter_above_32_bits', 0x100000000),
    case('counter_high_bit', 1 << 63),
    case('counter_upper_bits_only', 0xffffffff00000000),
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
