#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic calls for bb_misc_span_forward (0x02b3d700): zero and all-ones forwarded values, runs
with an empty and a full count, a first entry whose upper word is set, and a count slot whose
upper half holds junk that must not reach the callee.

usage: span_forward_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02b3d700'
CALLEE = '0x02b787e0'
MASK64 = (1 << 64) - 1
MASK32 = (1 << 32) - 1


def u64(v):
    return struct.pack('<Q', v & MASK64).hex()


def u32(v):
    return struct.pack('<I', v & MASK32).hex()


def case(cid, first, count, second, third, ret, slot_upper='00000000'):
    """second arrives in RSI and third in RDX; the callee gets (second, third, first, count) and
    returns ret."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:span', 'rsi': hex(second & MASK64), 'rdx': hex(third & MASK64)},
            'buffers': {'span': {'size': 0x40, 'bytes': '00' * 0x40}},
            'memory': [{'addr': 'buf:span+0x28', 'bytes': u64(first)},
                       {'addr': 'buf:span+0x30', 'bytes': u32(count) + slot_upper}],
            'stubs': [{'address': CALLEE, 'argc': 4, 'ret': hex(ret & MASK64)}],
            'imports': []}


CASES = [
    case('all_zero', 0, 0, 0, 0, 0),
    case('ordinary_values', 0x1000, 4, 0x2000, 0x3000, 0x55),
    case('empty_run_keeps_arguments', 0x7000, 0, 0x11, 0x22, 0x33),
    case('single_entry_negative_result', 0x10, 1, 0x20, 0x30, MASK64),
    case('all_ones', MASK64, MASK32, MASK64, MASK64, MASK64),
    case('first_upper_word_set', 0xffffffff00000000, 2, 1, 2, 0x8000000000000000),
    case('count_top_bit', 0x40, 0x80000000, 0x5, 0x6, 0x1234),
    case('junk_above_count_ignored', 0x2000, 3, 0x9, 0xa, 0x77, slot_upper='ffffffff'),
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
