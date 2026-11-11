#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic counter tables for the keyed entry count (0x01e86dc0): values whose low bits name no entry, values
that name an entry whose key differs, matches, matches with bits above the index, and the first and last entries.

usage: count_keyed_entry_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01e86dc0'
ENTRIES_OFFSET = 0x8008
ENTRY_SIZE = 0x08
TABLE_SIZE = 0x88000

# The branch at 0x01e86de2 (value zero, so no flag bit can be set) is only reached with a non-zero value.
UNREACHABLE = {'0x01e86de2': ('taken', 'value zero has a low 24 bits of zero, so the flag test before it exits first')}


def le32(value):
    """The four little-endian bytes of a 32-bit value, as hex."""
    return struct.pack('<I', value & 0xffffffff).hex()


def entry_offset(index):
    """The offset of an entry from the table's start."""
    return ENTRIES_OFFSET + ENTRY_SIZE * index


def case(cid, value, entries=()):
    """A table with the given (index, key, count) entries set, and the value the routine reads. Entries not listed
    are zero. The routine returns the value."""
    memory = [{'addr': f'buf:table+{entry_offset(index):#x}', 'bytes': le32(key) + le32(count)}
              for index, key, count in entries]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:table', 'rsi': 'buf:value'},
            'buffers': {'table': {'size': TABLE_SIZE},
                        'value': {'size': 4, 'bytes': le32(value)}},
            'memory': memory, 'stubs': [], 'imports': []}


CASES = [
    case('low24_all_ones_no_entry', 0xabffffff),
    case('no_flag_bit', 0x00123456),
    case('value_zero', 0x00000000),
    case('low16_all_ones_no_entry', 0x0080ffff),
    case('key_differs', 0x00800005, [(5, 0x00800006, 9)]),
    case('key_matches_counts', 0x00800005, [(5, 0x00800005, 9)]),
    case('key_matches_with_high_bits', 0x7f800005, [(5, 0x7f800005, 0)]),
    case('flag_set_other_key', 0x00ff0005, [(5, 0x12345678, 3)]),
    case('first_entry_matches', 0x00800000, [(0, 0x00800000, 0)]),
    case('last_entry_matches', 0x0080fffe, [(0xfffe, 0x0080fffe, 0)]),
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
