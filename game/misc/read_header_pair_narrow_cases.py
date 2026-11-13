#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic reads for misc_read_header_pair_narrow (0x018e0080), for tools/verify.py run.

usage: read_header_pair_narrow_cases.py OUT_DIR

The same two-read shape as misc_read_header_pair, but the original compares only EAX, so a returned
count is complete when its low 32 bits equal the expected size whatever the upper 32 bits hold. Covers
both reads complete, each read short, empty or over-long in its low 32 bits, and upper bits set on
each count with the low bits right and wrong.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x018e0080'
READ_SLOT = 0x20
READ_STUB = '0x00400020'
HEADER_SIZE = 0x60
WORD_SIZE = 4
MASK64 = (1 << 64) - 1


def case(cid, first=HEADER_SIZE, second=WORD_SIZE):
    """One call: the first read returns first; the second read (issued only when the first is complete) returns second."""
    buffers = {'rec': {'size': 0x80, 'bytes': 'cd' * 0x80},
               'reader': {'size': 8},
               'reader_vt': {'size': 0x30}}
    memory = [{'addr': 'buf:reader', 'pointer': 'reader_vt'},
              {'addr': f'buf:reader_vt+{READ_SLOT}', 'guest': READ_STUB}]
    stubs = [{'address': READ_STUB, 'argc': 3, 'ret': hex(first & MASK64),
              'writes': [{'arg': 1, 'bytes': 'a1' * HEADER_SIZE, 'size': HEADER_SIZE}]}]
    if (first & 0xffffffff) == HEADER_SIZE:
        stubs.append({'address': READ_STUB, 'argc': 3, 'ret': hex(second & MASK64),
                      'writes': [{'arg': 1, 'bytes': 'b2' * WORD_SIZE, 'size': WORD_SIZE}]})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i8',
            'args': {'rdi': 'buf:rec', 'rsi': 'buf:reader'},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('both_reads_complete'),
    case('first_read_high_bits_set', first=(1 << 32) | HEADER_SIZE),
    case('first_read_high_bits_all_ones', first=0xffffffff00000000 | HEADER_SIZE),
    case('first_read_empty', first=0),
    case('first_read_short', first=HEADER_SIZE - 1),
    case('first_read_over_long', first=HEADER_SIZE + 1),
    case('first_read_high_bits_wrong_low', first=(1 << 32) | (HEADER_SIZE + 1)),
    case('second_read_high_bits_set', second=(1 << 32) | WORD_SIZE),
    case('second_read_high_bits_all_ones', second=0xffffffff00000000 | WORD_SIZE),
    case('second_read_empty', second=0),
    case('second_read_short', second=WORD_SIZE - 1),
    case('second_read_over_long', second=WORD_SIZE + 1),
    case('second_read_high_bits_wrong_low', second=(1 << 32) | (WORD_SIZE + 1)),
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
