#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic index lookups for misc_entry_address_by_index (0x018e01d0), for tools/verify.py run.

usage: entry_address_by_index_cases.py OUT_DIR

The routine returns the address of entry ESI in the record at RDI, or 0 when ESI is above 11 as an
unsigned 32-bit value. Only ESI is read, so the upper half of RSI is set in some cases to check that
it is ignored. Covers the first, last and middle entries, the first index past the end, and large and
negative indices.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x018e01d0'
RECORD_SIZE = 0x80


def case(cid, index):
    """Look up one index in a record of recognisable bytes; the index is passed as the full RSI value."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:rec', 'rsi': hex(index & 0xffffffffffffffff)},
            'buffers': {'rec': {'size': RECORD_SIZE, 'bytes': '3c' * RECORD_SIZE}},
            'memory': [], 'imports': [], 'stubs': []}


CASES = [
    case('index_0_first_entry', 0),
    case('index_1', 1),
    case('index_6_middle', 6),
    case('index_10', 10),
    case('index_11_last_entry', 11),
    case('index_12_first_past_end', 12),
    case('index_13', 13),
    case('index_large_positive', 0x7fffffff),
    case('index_sign_boundary', 0x80000000),
    case('index_all_ones', 0xffffffff),
    case('index_negative_low', 0xfffffff0),
    case('upper_rsi_bits_ignored_in_range', 0xdeadbeef00000003),
    case('upper_rsi_bits_ignored_out_of_range', 0x0000000100000010),
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
