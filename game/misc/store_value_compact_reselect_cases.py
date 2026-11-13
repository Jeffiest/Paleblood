#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic slot tables for misc_store_value_compact_reselect (0x018e0a50), for tools/verify.py run.

usage: store_value_compact_reselect_cases.py OUT_DIR

For an index up to 11 the routine looks the value up through 0x023210e0; a found object's signed word
at +0x18 gives the slot's second word (three times the scale, or minus one when unset or not found), and
the slot becomes (value, second word). Then, for any index, occupied slots move forward into empty ones
and the selected slot's key is passed to 0x018e0b60 (stubbed). The routine returns true only when a slot
was written. Covers an index past the end, the ends of the range, a found scale, an unset scale, no
object found, a value of minus one, and selections in range, at the top, negative and past the end.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x018e0a50'
LOOKUP = '0x023210e0'
SELECT = '0x018e0b60'
SLOT_COUNT = 12
TABLE_SIZE = 0x7c
MASK32 = (1 << 32) - 1


def case(cid, keys, index, value, selected, scale=None):
    """keys: the twelve slot keys; scale: the found object's scale word, or None when the lookup finds nothing."""
    assert len(keys) == SLOT_COUNT
    raw = bytearray(b'\x6e' * TABLE_SIZE)
    for k, key in enumerate(keys):
        raw[0x18 + k * 8:0x18 + k * 8 + 4] = struct.pack('<I', key & MASK32)
        raw[0x1c + k * 8:0x1c + k * 8 + 4] = struct.pack('<I', 0xb0000000 | k)
    raw[0x78:0x7c] = struct.pack('<I', selected & MASK32)
    buffers = {'table': {'size': TABLE_SIZE, 'bytes': raw.hex()}}
    stubs = []
    if index <= SLOT_COUNT - 1:
        write = {'arg': 0, 'offset': 8, 'size': 8}
        if scale is None:
            write['bytes'] = '00' * 8
        else:
            buffers['match'] = {'size': 0x1a, 'bytes': '00' * 0x18 + struct.pack('<h', scale).hex()}
            write['pointer'] = 'match'
        stubs.append({'address': LOOKUP, 'argc': 2, 'argi': [1], 'writes': [write]})
    stubs.append({'address': SELECT, 'argc': 2, 'argi': [1]})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i8',
            'args': {'rdi': 'buf:table', 'rsi': hex(index & MASK32), 'rdx': hex(value & MASK32)},
            'buffers': buffers, 'memory': [], 'imports': [], 'stubs': stubs}


FULL = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120]
CASES = [
    case('index_past_end', FULL, 12, 7, 2, scale=3),
    case('index_high_bit', FULL, 0x80000000, 7, 2),
    case('found_scale_first', FULL, 0, 77, 5, scale=4),
    case('found_scale_last', FULL, 11, 77, 5, scale=-6),
    case('found_scale_middle_gap', [1, -1, 3, -1, 5, 6, -1, 8, 9, 10, 11, 12], 3, 33, 8, scale=0x7fff),
    case('unset_scale_stores_minus_one', FULL, 4, 88, 9, scale=-1),
    case('no_object_found', FULL, 6, 66, 1, scale=None),
    case('value_minus_one', [1, 2, -1, 4, 5, -1, 7, 8, 9, 10, 11, 12], 2, -1, 4),
    case('value_minus_one_no_object', FULL, 9, -1, 11),
    case('compacts_after_store', [-1, -1, 3, 4, -1, 6, -1, 8, 9, 10, 11, 12], 1, 500, 0, scale=2),
    case('tail_run_empty_scan_exits', [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -1, -1], 0, 999, 11, scale=1),
    case('past_end_still_compacts', [-1, 2, -1, 4, -1, 6, 7, 8, 9, 10, 11, 12], 30, 5, 2),
    case('select_negative', FULL, 5, 60, -1, scale=-1),
    case('select_past_range', FULL, 5, 60, 12, scale=0),
    case('select_top_of_range', FULL, 5, 60, 11, scale=5),
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
