#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_copy_capped_buffer (0x00417fd0), for tools/verify.py run.

usage: copy_capped_buffer_cases.py OUT_DIR

The copy takes the smaller of the requested count and the view's capacity, and only when there is a
destination; the bytes are copied (a scripted stub) only when the view has a buffer. The result is
that smaller count, or the capacity when there is no destination.
"""
import json
import struct
import sys
from pathlib import Path

ADDRESS = '0x00417fd0'
COPY = '0x02fbe578'
BUFFER_OFFSET = 0xd8
CAPACITY_OFFSET = 0xe0
VIEW_SIZE = 0x100
DESTINATION_SIZE = 0x40


def case(cid, destination, buffer_present, capacity, count):
    buffers = {'view': {'size': VIEW_SIZE, 'bytes': '00' * VIEW_SIZE},
               'bytes': {'size': 0x40, 'bytes': 'ab' * 0x40},
               'dst': {'size': DESTINATION_SIZE}}
    memory = [{'addr': 'buf:view+' + str(CAPACITY_OFFSET),
               'bytes': struct.pack('<I', capacity).hex()}]
    if buffer_present:
        memory.append({'addr': 'buf:view+' + str(BUFFER_OFFSET), 'pointer': 'bytes'})
    else:
        memory.append({'addr': 'buf:view+' + str(BUFFER_OFFSET), 'bytes': '00' * 8})
    args = {'rdi': 'buf:view', 'rsi': 'buf:dst' if destination else 0, 'rdx': hex(count)}
    stubs = []
    if destination and buffer_present:
        stubs.append({'address': COPY, 'argc': 3, 'argi': [0, 1, 2]})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i32',
            'args': args, 'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('no_destination_returns_capacity', destination=False, buffer_present=True, capacity=8, count=3),
    case('no_buffer_returns_limited_count', destination=True, buffer_present=False, capacity=8, count=3),
    case('count_below_capacity', destination=True, buffer_present=True, capacity=8, count=3),
    case('capacity_below_count', destination=True, buffer_present=True, capacity=4, count=9),
    case('capacity_equal_count', destination=True, buffer_present=True, capacity=5, count=5),
    case('capacity_all_ones_count_large', destination=True, buffer_present=True, capacity=0xffffffff,
         count=0x10),
    case('zero_count', destination=True, buffer_present=True, capacity=7, count=0),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print('usage: copy_capped_buffer_cases.py OUT_DIR', file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        with (output / (fixture['id'] + '.json')).open('w') as stream:
            stream.write(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} synthetic cases written to {output}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
