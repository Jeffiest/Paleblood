#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic holders for the allocated block holder constructor (0x01e59020): a heap allocation that fails, and one
that succeeds with the source word zero, ordinary, and all ones. The heap allocator is scripted through the global
at 0x05940408; its allocate slot (0x58) returns the state block or null.

usage: allocated_block_holder_construct_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x01e59020'
HEAP_ALLOCATOR = '0x05940408'
ALLOCATE = '0x00400020'        # a real game function entry, stubbed as the allocator's allocate slot
ALLOCATE_SLOT = 0x58
STATE_SIZE = 0x60
ALLOCATOR_VTABLE_SIZE = 0x68
HOLDER_SIZE = 0x30
MASK64 = (1 << 64) - 1


def case(cid, allocated=True, source=0x1234):
    """A holder constructed from source; the heap allocator's allocate call returns the state block, or null."""
    buffers = {'holder': {'size': HOLDER_SIZE, 'bytes': 'ff' * HOLDER_SIZE},
               'alloc': {'size': 0x10},
               'alloc_vt': {'size': ALLOCATOR_VTABLE_SIZE},
               'state': {'size': STATE_SIZE, 'bytes': 'ee' * STATE_SIZE}}
    memory = [{'addr': HEAP_ALLOCATOR, 'pointer': 'alloc'},
              {'addr': 'buf:alloc+0x0', 'pointer': 'alloc_vt'},
              {'addr': f'buf:alloc_vt+{ALLOCATE_SLOT:#x}', 'guest': ALLOCATE}]
    ret = 'buf:state' if allocated else 0
    stubs = [{'address': ALLOCATE, 'argc': 3, 'ret': ret}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:holder', 'rsi': hex(source & MASK64)},
            'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('allocation_fails', allocated=False, source=0x1234),
    case('allocation_succeeds_source_ordinary', source=0x1234),
    case('allocation_succeeds_source_zero', source=0),
    case('allocation_succeeds_source_all_ones', source=MASK64),
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
