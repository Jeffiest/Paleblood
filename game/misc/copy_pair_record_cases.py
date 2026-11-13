#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic record copies for misc_copy_pair_record (0x018e00d0), for tools/verify.py run.

usage: copy_pair_record_cases.py OUT_DIR

The routine copies the 0x68 bytes at offset 0x10 and the 32-bit word at 0x78 from the source record
into the destination record, with no branches. RAX at the return holds the word zero-extended, which
the case compares. Covers distinct source patterns, a trailing word with its top bit set (zero
extended, not sign extended), zero words, and a destination whose bytes outside the copied fields
must stay as they were.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x018e00d0'
RECORD_SIZE = 0x80
COPY_START = 0x10
BLOCK_SIZE = 0x68
WORD_OFFSET = 0x78


def case(cid, src_fill='b7', dst_fill='5e', word=0x13579bdf):
    """Copy one source record into one destination record with the given fill and trailing word."""
    source = bytearray(bytes.fromhex(src_fill * RECORD_SIZE))
    source[WORD_OFFSET:WORD_OFFSET + 4] = (word & 0xffffffff).to_bytes(4, 'little')
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:dst', 'rsi': 'buf:src'},
            'buffers': {'dst': {'size': RECORD_SIZE, 'bytes': dst_fill * RECORD_SIZE},
                        'src': {'size': RECORD_SIZE, 'bytes': source.hex()}},
            'memory': [], 'imports': [], 'stubs': []}


CASES = [
    case('distinct_patterns'),
    case('word_top_bit_set', word=0x80000001),
    case('word_all_ones', word=0xffffffff),
    case('word_zero', word=0),
    case('word_upper_source_bits_ignored', src_fill='00', dst_fill='ff', word=0x7654321),
    case('destination_already_equal', src_fill='5e', dst_fill='5e', word=0x2468ace0),
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
