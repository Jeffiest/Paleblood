#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic records for misc_init_value_record (0x018883b0).

usage: init_value_record_cases.py OUT_DIR

The record is 0x18 bytes, filled with a pattern so that every byte the function must set or leave alone is
visible. The value is a 32-bit argument: its upper register bits are set in some cases and must be ignored.
Covers zero, all ones in the low word, the sign bit, an ordinary value, and a record whose flag and trailing
word start set.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x018883b0'
SIZE = 0x18
PATTERN = 'c5' * SIZE


def case(cid, value=0x12345678, upper=0, bytes_=PATTERN):
    """One call on a pattern-filled record with the value in ESI and the given upper register bits."""
    rsi = ((upper & 0xffffffff) << 32) | (value & 0xffffffff)
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:record', 'rsi': hex(rsi)},
            'buffers': {'record': {'size': SIZE, 'bytes': bytes_}}, 'memory': [], 'imports': [],
            'stubs': []}


CASES = [
    case('value_zero', value=0),
    case('value_all_ones_low_word', value=0xffffffff),
    case('value_sign_bit', value=0x80000000),
    case('value_ordinary', value=0x12345678),
    case('value_upper_register_bits_ignored', value=0x00000007, upper=0xdeadbeef),
    case('value_zero_with_upper_bits', value=0, upper=0xffffffff),
    case('record_all_zero_before', bytes_='00' * SIZE),
    case('record_all_ones_before', bytes_='ff' * SIZE),
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
