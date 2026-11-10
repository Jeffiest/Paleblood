#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic tail words for bb_misc_set_tail_value_40 (0x02b3e810): zero, all-ones, high-bit and
ordinary values stored over a second tail word, with the value word at +0x38 left unchanged.

usage: set_tail_value_40_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02b3e810'
MASK64 = (1 << 64) - 1
OBJECT_BYTES = 0x48


def u64(v):
    return struct.pack('<Q', v & MASK64).hex()


def case(cid, value, old_40=0xdeadbeef00000001):
    """The value takes the second tail word; the bytes before +0x40 are kept as they were."""
    body = ('a5' * 0x38) + u64(0x1122334455667788) + u64(old_40)
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:slots', 'rsi': hex(value & MASK64)},
            'buffers': {'slots': {'size': OBJECT_BYTES, 'bytes': body}},
            'memory': [], 'stubs': [], 'imports': []}


CASES = [
    case('value_zero', 0),
    case('value_ordinary', 0x7000),
    case('value_all_ones', MASK64),
    case('value_high_bit_old_zero', 0x8000000000000000, old_40=0),
    case('value_over_all_ones', 0x0123456789abcdef, old_40=MASK64),
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
