#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic searches for bb_misc_find_largest_value_at_most (0x004153f0): a null table, a table
whose entries are all empty, one with a value above the key, one whose value is the largest at most
the key among several, a skipped empty entry, a tie that the later entry wins, a value below the
best so far, zero and the top of the value range, and an absent output. The search calls nothing.

usage: find_largest_value_at_most_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x004153f0'
EMPTY = -2
HEADER_SIZE = 0x10
ENTRY_SIZE = 0x20
MASK64 = (1 << 64) - 1


def entry_bytes(index, spec):
    """One 0x20-byte entry: a key, a zero word, a target tag, a value and padding; spec is None for an
    empty entry, otherwise (key, value)."""
    key, value = (EMPTY, 0) if spec is None else spec
    return (struct.pack('<q', key) + bytes(8) + bytes([0x10 + index]) * 8
            + struct.pack('<I', value & 0xffffffff) + bytes(4)).hex()


def table_hex(entries):
    """A table: a zero word, the last index, then the entries."""
    last = len(entries) - 1
    return bytes(8).hex() + struct.pack('<Q', last).hex() + ''.join(
        entry_bytes(i, spec) for i, spec in enumerate(entries))


def case(cid, entries, key, out=True):
    """One search. entries None means a null table; out says whether the output is given."""
    buffers = {'holder': {'size': 8}, 'out': {'size': 4, 'bytes': 'cc' * 4}}
    memory = []
    if entries is None:
        memory.append({'addr': 'buf:holder', 'bytes': '00' * 8})
    else:
        buffers['table'] = {'size': HEADER_SIZE + ENTRY_SIZE * len(entries), 'bytes': table_hex(entries)}
        memory.append({'addr': 'buf:holder', 'pointer': 'table'})
    args = {'rdi': 'buf:holder', 'rsi': hex(key & 0xffffffff),
            'rdx': 'buf:out' if out else '0x0'}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': args,
            'buffers': buffers, 'memory': memory, 'stubs': [], 'imports': []}


CASES = [
    case('null_table_with_out', entries=None, key=10),
    case('null_table_no_out', entries=None, key=10, out=False),
    case('single_entry_matches', entries=[(5, 3)], key=9),
    case('single_entry_above_key', entries=[(5, 12)], key=9),
    case('empty_entries_skipped', entries=[None, (7, 4), None, (8, 6)], key=10),
    case('tie_later_wins', entries=[(1, 4), (2, 4)], key=10),
    case('above_key_then_below', entries=[(1, 20), (2, 2), (3, 15)], key=10),
    case('all_empty', entries=[None, None], key=10),
    case('zero_value_zero_key', entries=[(1, 0)], key=0),
    case('top_value_first', entries=[(1, 0xffffffff), (2, 7)], key=0xffffffff),
    case('descending_values', entries=[(1, 9), (2, 5), (3, 2)], key=6),
    case('no_entry_below_key', entries=[(1, 30), (2, 40)], key=10, out=False),
]

# The table pointer was tested non-null at 0x0041540a before any path that reaches this test, so the null outcome is unreachable.
UNREACHABLE = {'0x00415461': ('taken', 'table pointer already tested non-null at 0x0041540a')}


def main():
    """Write deterministic synthetic input for the cases above."""
    if len(sys.argv) != 2:
        print(__doc__)
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
