#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic record-table lookups for the index search at 0x02b3c570.

usage: find_record_index_cases.py OUT_DIR

The table holds its storage pointer at +0x18 and its count (32 bits) at +0x20; the records live in
'records', 24 bytes each. Covers an empty table, the first, middle and last record, a record one
past the count, a record below the storage, a record between two record starts, a null storage
pointer that matches record zero and one, and a sixteen-record table searched at its last record.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02b3c570'
RECORD_BYTES = 0x18
RECORDS_SIZE = 0x18 * 16
BELOW_STORAGE = '0xfedcba9876543210'


def case(cid, count, record, storage=True):
    """One search: record is the argument text ('buf:records+N' or a literal address); storage False
    leaves the storage pointer null."""
    memory = [{'addr': 'buf:table+24', 'pointer': 'records'}] if storage else []
    memory.append({'addr': 'buf:table+32', 'bytes': struct.pack('<I', count & 0xffffffff).hex()})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i32',
            'args': {'rdi': 'buf:table', 'rsi': record},
            'buffers': {'table': {'size': 0x28}, 'records': {'size': RECORDS_SIZE}},
            'memory': memory, 'imports': [], 'stubs': []}


CASES = [
    case('empty_table_matching_storage', 0, 'buf:records'),
    case('single_record_first', 1, 'buf:records'),
    case('single_record_one_past', 1, 'buf:records+24'),
    case('first_of_three', 3, 'buf:records'),
    case('middle_of_three', 3, 'buf:records+48'),
    case('last_of_four', 4, 'buf:records+72'),
    case('last_of_sixteen', 16, f'buf:records+{15 * RECORD_BYTES}'),
    case('one_past_count', 2, 'buf:records+72'),
    case('below_storage', 2, BELOW_STORAGE),
    case('between_record_starts', 3, 'buf:records+8'),
    case('null_storage_record_zero', 2, '0x0', storage=False),
    case('null_storage_record_one', 2, '0x18', storage=False),
    case('null_storage_past_count', 1, '0x30', storage=False),
    case('count_high_bit_is_unsigned', 0x80000001, 'buf:records+24'),
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
