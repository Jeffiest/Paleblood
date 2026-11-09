#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic slots for bb_misc_set_value_clear_link (0x02b3e150): zero, all-ones, high-bit and
ordinary values stored over slots whose link word held something else.

usage: set_value_clear_link_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02b3e150'
MASK64 = (1 << 64) - 1


def u64(v):
    return struct.pack('<Q', v & MASK64).hex()


def case(cid, value, old_link=0xdeadbeef00000001):
    """The slot holds old values in both words; afterwards the value word is the argument and the
    link word is zero."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:slot', 'rsi': hex(value & MASK64)},
            'buffers': {'slot': {'size': 0x10, 'bytes': u64(0x1122334455667788) + u64(old_link)}},
            'memory': [], 'stubs': [], 'imports': []}


CASES = [
    case('store_zero', 0),
    case('store_ordinary', 0x1234),
    case('store_all_ones', MASK64),
    case('store_high_bit', 0x8000000000000000, old_link=0),
    case('store_over_zero_link', 0x42, old_link=0),
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
