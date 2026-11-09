#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic element tables for bb_misc_element_key_at (0x02b3ea30): the first, a middle and the
last element, a negative index that reaches before the array, a high-bit index that scales past
32 bits, and key results that are zero, positive, negative and all ones.

usage: element_key_at_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02b3ea30'
KEY_CALLEE = '0x02b3b310'
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1
MARGIN = 0x40
ELEMENT_BYTES = 0x20
ELEMENT_COUNT = 4


def table_bytes(count):
    """ElementTable bytes: the element pointer at +0x18 is filled in by a memory entry; the count is
    at +0x20 and the other words hold a pattern that must not be read."""
    raw = bytearray(b'\xa5' * 0x48)
    raw[0x20:0x24] = (count & MASK32).to_bytes(4, 'little')
    return raw.hex()


def case(cid, index, key, count=ELEMENT_COUNT):
    """One call: the key callee receives the element address and returns the key, which is returned
    as it is."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i32',
            'args': {'rdi': 'buf:table', 'rsi': hex(index & MASK32)},
            'buffers': {'table': {'size': 0x48, 'bytes': table_bytes(count)},
                        'elements': {'size': MARGIN + ELEMENT_BYTES * ELEMENT_COUNT,
                                     'bytes': 'c3' * (MARGIN + ELEMENT_BYTES * ELEMENT_COUNT)}},
            'memory': [{'addr': 'buf:table+0x18', 'pointer': 'elements+0x40'}],
            'stubs': [{'address': KEY_CALLEE, 'argc': 1, 'ret': hex(key & MASK32)}],
            'imports': []}


CASES = [
    case('index_first', 0, 0x11223344),
    case('index_middle', 2, 0x00000007),
    case('index_last', 3, 0x7fffffff),
    case('index_negative_reaches_before', -2 & MASK32, 0x55667788),
    case('index_high_bit_wraps', 0x80000000, 0x12345678),
    case('key_all_ones', 1, MASK32),
    case('key_zero', 1, 0),
    case('key_high_bit', 0, 0x80000000),
    case('index_all_ones_is_minus_one', MASK32, 0x0badf00d),
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
