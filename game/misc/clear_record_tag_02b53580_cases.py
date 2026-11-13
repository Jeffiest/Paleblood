#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic records for misc_clear_record_tag_02b53580 (0x02b53580), for tools/verify.py run.

usage: clear_record_tag_02b53580_cases.py OUT_DIR

The record is 0x80 bytes: fifteen words cleared and the tag word at +0x78 set to the first argument.
The original leaves RAX at zero, so every case expects a zero return. Covers a zero tag, all-ones,
a high-bit tag, and a record whose words are all set beforehand, so each stored word is compared.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02b53580'
MASK64 = (1 << 64) - 1
RECORD_SIZE = 0x80


def case(cid, tag, fill='a5'):
    """One call: the record starts filled with the given byte, and the routine clears and tags it."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': hex(tag & MASK64), 'rsi': 'buf:record'},
            'buffers': {'record': {'size': RECORD_SIZE, 'bytes': fill * RECORD_SIZE}},
            'memory': [], 'imports': [], 'stubs': []}


CASES = [
    case('zero_tag', 0),
    case('ordinary_tag', 0x1234),
    case('all_ones_tag', MASK64),
    case('high_bit_tag', 0x8000000000000000),
    case('record_already_zero', 0x77, fill='00'),
    case('record_all_ones', 0x55aa, fill='ff'),
]


def main():
    """Write deterministic synthetic calls to the requested directory."""
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
