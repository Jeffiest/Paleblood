#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic entry runs for bb_misc_span_end (0x02b3d730): empty runs, ordinary runs, counts with
the top bit set and all ones, first entries whose upper word is set, and a count slot whose upper
half holds junk that must not leak into the result.

usage: span_end_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02b3d730'
MASK64 = (1 << 64) - 1
MASK32 = (1 << 32) - 1


def u64(v):
    return struct.pack('<Q', v & MASK64).hex()


def u32(v):
    return struct.pack('<I', v & MASK32).hex()


def case(cid, first, count, slot_upper='00000000'):
    """first goes to +0x28 and count to +0x30; slot_upper fills the four bytes above the count."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:span'},
            'buffers': {'span': {'size': 0x40, 'bytes': '00' * 0x40}},
            'memory': [{'addr': 'buf:span+0x28', 'bytes': u64(first)},
                       {'addr': 'buf:span+0x30', 'bytes': u32(count) + slot_upper}],
            'stubs': [], 'imports': []}


CASES = [
    case('empty_run_at_zero', 0, 0),
    case('empty_run_at_address', 0x1000, 0),
    case('ordinary_run', 0x1000, 4),
    case('single_entry', 0x7000, 1),
    case('count_top_bit', 0x10, 0x80000000),
    case('count_all_ones', 0x10, MASK32),
    case('first_upper_word_set', 0xffffffff00000000, 1),
    case('wrap_past_top', MASK64 - 3, 8),
    case('junk_above_count_ignored', 0x2000, 3, slot_upper='ffffffff'),
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
