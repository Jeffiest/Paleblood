#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic slot tables for misc_compact_slots_reselect (0x018e0c90), for tools/verify.py run.

usage: compact_slots_reselect_cases.py OUT_DIR

The table has twelve 8-byte slots from +0x18 (key dword, second dword) and the selected index at +0x78.
The routine empties the slot at the index (ESI, up to 11), moves each occupied slot after an empty one
into it, then calls the selection routine 0x018e0b60 with the key of the selected slot (minus one when
the selection is out of range). The call is scripted as a stub. Covers an index past the end, the
index at each end, empties at the end with nothing to move, an empty slot followed by several empty
ones, and selections in range, at the top of the range, negative and past the end.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x018e0c90'
SELECT = '0x018e0b60'
SLOT_COUNT = 12
TABLE_SIZE = 0x7c
EMPTY = -1
MASK32 = (1 << 32) - 1


def case(cid, keys, index, selected, index_value=None):
    """keys: the twelve slot keys; index: the value passed in ESI; selected: the word at +0x78."""
    assert len(keys) == SLOT_COUNT
    raw = bytearray(b'\x3c' * TABLE_SIZE)
    for k, key in enumerate(keys):
        raw[0x18 + k * 8:0x18 + k * 8 + 4] = struct.pack('<I', key & MASK32)
        raw[0x1c + k * 8:0x1c + k * 8 + 4] = struct.pack('<I', 0xa0000000 | k)
    raw[0x78:0x7c] = struct.pack('<I', selected & MASK32)
    # The selection's key after compaction is the key of its slot; the stub records what the call receives.
    stubs = [{'address': SELECT, 'argc': 2, 'argi': [1]}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i8',
            'args': {'rdi': 'buf:table', 'rsi': hex(index & MASK32)},
            'buffers': {'table': {'size': TABLE_SIZE, 'bytes': raw.hex()}},
            'memory': [], 'imports': [], 'stubs': stubs if index <= SLOT_COUNT - 1 else []}


FULL = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120]
CASES = [
    case('index_past_end', FULL, 12, 0),
    case('index_all_ones', FULL, 0xffffffff, 0),
    case('index_high_bit', FULL, 0x80000000, 3),
    case('first_slot_emptied_full', FULL, 0, 5),
    case('last_slot_emptied_full', FULL, 11, 5),
    case('middle_slot_emptied_full', FULL, 6, 7),
    case('compacts_one_gap', [5, -1, -1, 7, 8, 9, 10, 11, 12, 13, 14, 15], 1, 3),
    case('empty_run_then_occupied', [1, 2, -1, -1, -1, 6, 7, 8, 9, 10, 11, 12], 2, 5),
    case('tail_empty_nothing_moves', [1, 2, 3, 4, 5, 6, 7, 8, 9, -1, -1, -1], 0, 1),
    case('tail_empty_scan_runs_out', [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -1, -1], 11, 4),
    case('gap_at_end_scan_exit', [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, -1], 0, 11),
    case('all_slots_empty', [-1] * SLOT_COUNT, 4, 2),
    case('select_top_of_range', FULL, 3, 11),
    case('select_past_range', FULL, 3, 12),
    case('select_negative', FULL, 3, -1),
    case('select_negative_large', FULL, 7, -0x40000000),
    case('select_emptied_slot', [9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 11, 12], 4, 4),
    case('emptied_then_selected', [9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 11, 12], 4, 5),
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
