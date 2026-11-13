#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic reads for misc_read_header_pair (0x018e0030), for tools/verify.py run.

usage: read_header_pair_cases.py OUT_DIR

The reader's vtable slot at 0x20 is a scripted read stub, called once for the 0x60-byte header
block and then, only when that read is complete, once for the 4-byte trailer word. Covers both reads
complete, a short or empty first read (the second read is not issued), a short or over-long second
read, and the full 64-bit comparison of each returned count.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x018e0030'
READ_SLOT = 0x20
READ_STUB = '0x00400020'
HEADER_SIZE = 0x60
WORD_SIZE = 4
MASK64 = (1 << 64) - 1


def case(cid, first=HEADER_SIZE, second=WORD_SIZE):
    """One call: the first read returns first and the second read returns second (second not issued when first is not 0x60)."""
    buffers = {'rec': {'size': 0x80, 'bytes': 'cd' * 0x80},
               'reader': {'size': 8},
               'reader_vt': {'size': 0x30}}
    memory = [{'addr': 'buf:reader', 'pointer': 'reader_vt'},
              {'addr': f'buf:reader_vt+{READ_SLOT}', 'guest': READ_STUB}]
    stubs = [{'address': READ_STUB, 'argc': 3, 'ret': hex(first & MASK64),
              'writes': [{'arg': 1, 'bytes': 'a1' * HEADER_SIZE, 'size': HEADER_SIZE}]}]
    if first == HEADER_SIZE:
        stubs.append({'address': READ_STUB, 'argc': 3, 'ret': hex(second & MASK64),
                      'writes': [{'arg': 1, 'bytes': 'b2' * WORD_SIZE, 'size': WORD_SIZE}]})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i8',
            'args': {'rdi': 'buf:rec', 'rsi': 'buf:reader'},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('both_reads_complete'),
    case('first_read_empty', first=0),
    case('first_read_short', first=HEADER_SIZE - 1),
    case('first_read_over_long', first=HEADER_SIZE + 1),
    case('first_read_high_bits_set', first=(1 << 32) | HEADER_SIZE),
    case('first_read_all_ones', first=MASK64),
    case('second_read_empty', second=0),
    case('second_read_short', second=WORD_SIZE - 1),
    case('second_read_over_long', second=WORD_SIZE + 1),
    case('second_read_high_bits_set', second=(1 << 32) | WORD_SIZE),
    case('second_read_all_ones', second=MASK64),
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
