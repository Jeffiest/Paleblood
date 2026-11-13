#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic slot tables for misc_select_slot_index (0x018e0b60), for tools/verify.py run.

usage: select_slot_index_cases.py OUT_DIR

The table has twelve 8-byte slots from +0x18 (a key dword, then a dword the routine never reads) and
the selected index at +0x78, which the routine always rewrites first. The routine has no callees; its
only write is that index. Covers a key found first, middle and last, a key not found, the empty key
(which is never searched for), an all-empty table, duplicate keys, empty keys among the slots, and the
rotating choice at the first, middle, last and only distinct position.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x018e0b60'
SLOT_COUNT = 12
TABLE_SIZE = 0x7c
EMPTY = -1
MASK32 = (1 << 32) - 1


def case(cid, keys, key):
    """keys: the twelve slot keys in order; key: the value passed in ESI."""
    assert len(keys) == SLOT_COUNT
    raw = bytearray(b'\x5a' * TABLE_SIZE)
    for k, slot_key in enumerate(keys):
        raw[0x18 + k * 8:0x18 + k * 8 + 4] = struct.pack('<I', slot_key & MASK32)
        raw[0x1c + k * 8:0x1c + k * 8 + 4] = struct.pack('<I', 0xdddd0000 | k)
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:table', 'rsi': hex(key & MASK32)},
            'buffers': {'table': {'size': TABLE_SIZE, 'bytes': raw.hex()}},
            'memory': [], 'imports': [], 'stubs': []}


DISTINCT = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120]
CASES = [
    case('key_found_first', DISTINCT, 10),
    case('key_found_middle', DISTINCT, 70),
    case('key_found_last', DISTINCT, 120),
    case('key_not_found', DISTINCT, 99),
    case('key_empty_not_searched', DISTINCT, EMPTY),
    case('all_slots_empty', [EMPTY] * SLOT_COUNT, 5),
    case('all_slots_empty_key_empty', [EMPTY] * SLOT_COUNT, EMPTY),
    case('duplicates_collapse', [5, 5, 5, 6, 6, 7, 8, 8, 8, 9, 9, 3], 42),
    case('empty_keys_among_slots', [EMPTY, 4, EMPTY, 6, 7, EMPTY, 8, 9, 10, 11, 12, 13], EMPTY),
    case('empty_slot_keys_found_for_key', [EMPTY, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, EMPTY], 6),
    case('one_distinct_key', [77] * SLOT_COUNT, 77),
    case('one_distinct_key_other', [77] * SLOT_COUNT, 78),
    case('last_key_first_distinct', [9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 11, 9], 3),
    case('last_key_is_last_distinct', [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12], 99),
    case('last_key_empty_no_match', [4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, EMPTY], 99),
    case('last_key_wraps_to_first', [2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24], 1),
    case('last_key_middle_chooses_next', [3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8], 0x7fffffff),
    case('max_value_key', [0x7fffffff, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0x80000000], 0x7fffffff),
    case('negative_keys_distinct', [-2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13], -7),
]


# Outcomes no input can reach: every key the search ends on was copied from a slot, the distinct list
# always keeps at least one empty entry below the twelfth, and a match leaves the count above zero.
UNREACHABLE = {
    '0x018e0ba1': ('fallthrough', 'a match in the first search leaves the index above zero, so the test never falls through'),
    '0x018e0bf3': ('taken', 'the distinct list has at most as many keys as slots already passed, so an empty entry is found before the end'),
    '0x018e0c63': ('taken', 'the chosen key is copied from a slot of the table, so the final search always finds that slot'),
    '0x018e0c71': ('taken', 'a match in the final search leaves the index above zero, so the test is never taken'),
}


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
