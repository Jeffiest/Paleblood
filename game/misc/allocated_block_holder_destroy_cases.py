#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic holders for the allocated block holder destructor (0x01e59110): a holder with no block, and a holder
whose block's allocator frees it. The base destructor's result is scripted as ordinary, zero, and all ones, and is
returned as it is.

usage: allocated_block_holder_destroy_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x01e59110'
ALLOCATOR_OF = '0x0247b720'
BASE_DESTRUCTOR = '0x02fbe588'
FREE = '0x00400020'        # a real game function entry, stubbed as the allocator's free slot
FREE_SLOT = 0x70
HOLDER_SIZE = 0x30
BLOCK_SIZE = 0x18
ALLOCATOR_SIZE = 0x10
ALLOCATOR_VTABLE_SIZE = 0x80
BLOCK_SLOT = 0x28
MASK64 = (1 << 64) - 1


def case(cid, present=True, base_result=0x1234, contents='dd'):
    """A holder with its block at +0x28, or without one. The allocator lookup returns an allocator whose free slot
    is scripted; the base destructor returns base_result."""
    buffers = {'holder': {'size': HOLDER_SIZE, 'bytes': 'ff' * HOLDER_SIZE},
               'block': {'size': BLOCK_SIZE, 'bytes': contents * BLOCK_SIZE},
               'alloc': {'size': ALLOCATOR_SIZE},
               'alloc_vt': {'size': ALLOCATOR_VTABLE_SIZE}}
    memory = [{'addr': f'buf:alloc+0x0', 'pointer': 'alloc_vt'},
              {'addr': f'buf:alloc_vt+{FREE_SLOT:#x}', 'guest': FREE}]
    stubs = []
    if present:
        memory.append({'addr': f'buf:holder+{BLOCK_SLOT:#x}', 'pointer': 'block'})
        stubs.append({'address': ALLOCATOR_OF, 'argc': 1, 'ret': 'buf:alloc'})
        stubs.append({'address': FREE, 'argc': 2})
    else:
        memory.append({'addr': f'buf:holder+{BLOCK_SLOT:#x}', 'bytes': '00' * 8})
    stubs.append({'address': BASE_DESTRUCTOR, 'argc': 1, 'ret': hex(base_result & MASK64)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:holder'}, 'buffers': buffers, 'memory': memory,
            'stubs': stubs, 'imports': []}


CASES = [
    case('block_absent', present=False, base_result=0x1234),
    case('block_present_result_ordinary', base_result=0x55aa),
    case('block_present_result_zero', base_result=0),
    case('block_present_result_all_ones', base_result=MASK64),
    case('block_present_contents_zero', contents='00', base_result=0x1234),
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
