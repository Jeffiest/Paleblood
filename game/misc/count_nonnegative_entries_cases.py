#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic entry records for misc_count_nonnegative_entries (0x018e0140), for tools/verify.py run.

usage: count_nonnegative_entries_cases.py OUT_DIR

Twelve 8-byte entries from offset 0x18, each a signed dword followed by an unread dword. The routine
returns how many entries have a clear sign bit, in EAX. Covers all and none non-negative, zero and
the largest positive value, the sign boundary, negative values alone at each end, alternating
signs, and an unread upper dword with a sign bit set.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x018e0140'
ENTRY_BASE = 0x18
ENTRY_STRIDE = 8
ENTRY_COUNT = 12
RECORD_SIZE = 0x80


def case(cid, values, upper=0x7f7f7f7f):
    """One record whose entry k holds values[k]; the unread upper dword is upper."""
    raw = bytearray(b'\xaa' * RECORD_SIZE)
    for k, value in enumerate(values):
        base = ENTRY_BASE + k * ENTRY_STRIDE
        raw[base:base + 4] = struct.pack('<I', value & 0xffffffff)
        raw[base + 4:base + 8] = struct.pack('<I', upper & 0xffffffff)
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i32',
            'args': {'rdi': 'buf:rec'},
            'buffers': {'rec': {'size': RECORD_SIZE, 'bytes': raw.hex()}},
            'memory': [], 'imports': [], 'stubs': []}


ALL_POSITIVE = list(range(1, ENTRY_COUNT + 1))
CASES = [
    case('all_positive', ALL_POSITIVE),
    case('all_negative', [-1] * ENTRY_COUNT),
    case('all_zero', [0] * ENTRY_COUNT),
    case('zero_counts_as_nonnegative', [0, -5, 0, -5, 0, -5, 0, -5, 0, -5, 0, -5]),
    case('largest_positive_counts', [0x7fffffff] * ENTRY_COUNT),
    case('sign_boundary_negative', [0x80000000] * ENTRY_COUNT),
    case('all_ones_negative', [0xffffffff] * ENTRY_COUNT),
    case('only_first_negative', [-1] + ALL_POSITIVE[1:]),
    case('only_last_negative', ALL_POSITIVE[:-1] + [-1]),
    case('alternating_signs', [1 if k % 2 == 0 else -1 for k in range(ENTRY_COUNT)]),
    case('one_non_negative_at_middle', [-1] * 6 + [7] + [-1] * 5),
    case('upper_dword_sign_bit_ignored', [1, -1] * 6, upper=0x80000000),
    case('upper_dword_all_ones_ignored', [-2, 3] * 6, upper=0xffffffff),
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
