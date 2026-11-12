#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_allocate_capped_buffer_copy (0x00418010), for tools/verify.py run.

usage: allocate_capped_buffer_copy_cases.py OUT_DIR

The view's allocator (slot 0x50, a scripted stub) is asked for a block of the size with flags zero.
The view keeps the block; when one was taken, the size becomes the capacity and the source is copied
into the block (a scripted stub). A refused allocation leaves the capacity alone and copies nothing.
The function returns nothing; RAX is not compared.
"""
import json
import struct
import sys
from pathlib import Path

ADDRESS = '0x00418010'
ALLOCATE = '0x00400020'   # a real game entry for the allocator's slot 0x50
COPY = '0x02fbe578'
VIEW_SIZE = 0x100
ALLOCATOR_SLOT = 80
OLD_CAPACITY = 0x12345678


def case(cid, size, granted):
    buffers = {'view': {'size': VIEW_SIZE, 'bytes': '00' * VIEW_SIZE},
               'allocator': {'size': 8},
               'alloc_vt': {'size': 0x60},
               'src': {'size': 0x40, 'bytes': 'cd' * 0x40},
               'block': {'size': 0x100, 'bytes': '5a' * 0x100}}
    memory = [{'addr': 'buf:view+56', 'pointer': 'allocator'},
              {'addr': 'buf:allocator+0', 'pointer': 'alloc_vt'},
              {'addr': 'buf:alloc_vt+' + str(ALLOCATOR_SLOT), 'guest': ALLOCATE},
              {'addr': 'buf:view+224', 'bytes': struct.pack('<I', OLD_CAPACITY).hex()}]
    ret = 'buf:block' if granted else 0
    stubs = [{'address': ALLOCATE, 'argc': 3, 'argi': [0, 1, 2], 'ret': ret}]
    if granted:
        stubs.append({'address': COPY, 'argc': 3, 'argi': [0, 1, 2]})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:view', 'rsi': 'buf:src', 'rdx': hex(size)},
            'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('allocation_refused', size=0x10, granted=False),
    case('allocation_granted', size=0x10, granted=True),
    case('zero_size_granted', size=0, granted=True),
    case('large_size_granted', size=0xffffffff, granted=True),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print('usage: allocate_capped_buffer_copy_cases.py OUT_DIR', file=sys.stderr)
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
