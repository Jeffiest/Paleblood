#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic weighted tables for misc_weighted_slots_then_finish (0x018e08d0), for tools/verify.py run.

usage: weighted_slots_then_finish_cases.py OUT_DIR

The table has twelve 8-byte slots from +0x18 (key, extra). The query at RSI holds its key at +0x0 and a
node pointer at +0x8; the node's signed 16-bit scale is at +0x18. Each slot whose key matches the query
key adds the node's weight (three times the scale, or minus one with no node) to a sum; the extras of
matching slots then take the carried value (starting from the third argument) while the carry runs on.
The routine ends by tail-jumping to 0x018e0720, scripted here as a stub that returns a chosen word.
A node whose scale is minus one returns minus one at once and calls nothing.
Covers no node, a node with a weight, a matching and non-matching key, extras at or below zero, a
negative carry, the carry leaving the loop early, and the loop running out.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x018e08d0'
FINISH = '0x018e0720'
SLOT_COUNT = 12
TABLE_SIZE = 0x78
QUERY_SIZE = 0x10
MASK32 = (1 << 32) - 1


def case(cid, slots, key, value, scale=None, ret=0x5a5a1234):
    """slots: twelve (key, extra) pairs; scale: the node's scale word, or None for no node."""
    assert len(slots) == SLOT_COUNT
    raw = bytearray(b'\x77' * TABLE_SIZE)
    for k, (slot_key, extra) in enumerate(slots):
        raw[0x18 + k * 8:0x18 + k * 8 + 4] = struct.pack('<I', slot_key & MASK32)
        raw[0x1c + k * 8:0x1c + k * 8 + 4] = struct.pack('<I', extra & MASK32)
    buffers = {'table': {'size': TABLE_SIZE, 'bytes': raw.hex()},
               'query': {'size': QUERY_SIZE, 'bytes': struct.pack('<I', key & MASK32).hex() + '00' * 12}}
    memory = []
    stubs = []
    if scale is None:
        memory.append({'addr': 'buf:query+8', 'bytes': '00' * 8})
    else:
        buffers['node'] = {'size': 0x20, 'bytes': '00' * 0x18 + struct.pack('<h', scale).hex() + '00' * 6}
        memory.append({'addr': 'buf:query+8', 'pointer': 'node'})
    if scale != -1:
        stubs.append({'address': FINISH, 'argc': 2, 'ret': hex(ret & MASK32)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i32',
            'args': {'rdi': 'buf:table', 'rsi': 'buf:query', 'rdx': hex(value & MASK32)},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


NONE_SLOTS = [(0, 0)] * SLOT_COUNT
CASES = [
    case('no_node_key_absent', [(1, 5)] * SLOT_COUNT, 9, 4),
    case('no_node_two_matches_grow', [(0, 0), (0, 0), (1, 10), (0, 0), (0, 0), (1, 20), (0, 0), (0, 0),
                                      (0, 0), (0, 0), (0, 0), (0, 0)], 1, 4),
    case('scale_two_break_on_first', [(3, 50)] + [(3, 0)] * 8 + [(0, 0)] * 3, 3, 0, scale=2),
    case('scale_one_loop_runs_out', [(4, 100), (4, 100), (4, 100)] + [(0, 0)] * 9, 4, 0, scale=1),
    case('negative_carry_clamps_then_adds', [(4, 3), (4, 100), (7, 1)] + [(0, 0)] * 9, 4, -10, scale=1),
    case('non_positive_extras_unchanged', [(5, -5), (5, 0), (5, 9)] + [(0, 0)] * 9, 5, 2, scale=0),
    case('key_matches_none_positive', [(6, 1)] * SLOT_COUNT, 6, 0, scale=0x7fff),
    case('scale_negative_large_weight', [(8, 40), (8, 40)] + [(0, 0)] * 10, 8, 3, scale=-0x8000),
    case('scale_minus_one_returns_early', [(2, 7)] * SLOT_COUNT, 2, 5, scale=-1),
    case('node_no_matching_key', [(1, 9)] * SLOT_COUNT, 2, 5, scale=3),
    case('zero_value_no_carry', [(3, 0), (3, 4), (3, 0)] + [(0, 0)] * 9, 3, 0, scale=-3),
    case('carry_stays_positive_across_slots', [(4, 100), (4, 100), (4, 100)] + [(0, 0)] * 9, 4, 0, scale=1,
         ret=0x7fffffff),
    case('finish_result_passed_back', [(9, 1)] + [(0, 0)] * 11, 9, 0, scale=None, ret=0xfedcba98),
]


# Outcomes no input can reach: three times a 16-bit scale is a multiple of three, so it is never minus one,
# and a node whose scale was just accepted as set (not minus one) cannot have a scale of minus one again.
UNREACHABLE = {
    '0x018e08fa': ('taken', 'three times a 16-bit scale is a multiple of three, so it can never be minus one'),
    '0x018e0939': ('taken', 'the node scale was already checked against minus one before this loop, so it cannot match again'),
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
