#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic countdowns for bb_misc_tick_timed_record (0x0189e9e0).

usage: tick_timed_record_cases.py OUT_DIR

The record is 0x78 bytes: the period at 0x68, the remaining time at 0x6c and the counter at 0x70, with a pattern
around them so that every byte the function must leave alone is visible. The step is a float in XMM0. Covers time
left over, time that runs out exactly, time that goes negative, and the counter below, at and past its limit.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x0189e9e0'
RECORD_SIZE = 0x78


def f32(value):
    """Four little-endian bytes of a float as hex."""
    return struct.pack('<f', value).hex()


def i32(value):
    """Four little-endian bytes of a signed 32-bit value as hex."""
    return struct.pack('<i', value).hex()


def record_bytes(period, remaining, counter):
    """A record with the given period, remaining time and counter, and a pattern in the bytes around them."""
    return ('ee' * 8 + 'cc' * 0x60 + f32(period) + f32(remaining) + i32(counter) + 'dd' * 4)


def case(cid, period, remaining, step, counter):
    """One tick: the record's fields before the call and the step passed in XMM0."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:record', 'xmm0': f32(step)},
            'buffers': {'record': {'size': RECORD_SIZE, 'bytes': record_bytes(period, remaining, counter)}},
            'memory': [], 'stubs': [], 'imports': []}


CASES = [
    case('time_left_over', period=5.0, remaining=5.0, step=1.0, counter=0),
    case('time_runs_out_exactly_reloads', period=5.0, remaining=2.0, step=2.0, counter=0),
    case('time_goes_negative_reloads', period=5.0, remaining=1.0, step=3.0, counter=0),
    case('counter_two_advances_to_three', period=5.0, remaining=0.5, step=0.5, counter=2),
    case('counter_three_stays_three', period=5.0, remaining=0.5, step=1.0, counter=3),
    case('counter_one_advances_to_two_on_reload', period=2.0, remaining=0.25, step=1.0, counter=1),
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
