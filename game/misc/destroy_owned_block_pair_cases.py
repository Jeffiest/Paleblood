#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_destroy_owned_block_pair (0x0139b630), for tools/verify.py run.

usage: destroy_owned_block_pair_cases.py OUT_DIR

Each of the two owned pointers is null or present, with the library allocators' frees scripted by their
vtable slots; the stack guard word is the returned value, so several guard words are used.
"""
import json
import os
import struct
import sys

ADDRESS = '0x0139b630'
GUARD = '0x057e3be0'
ALLOCATOR_FOR_BLOCK = '0x0247b720'
RELEASE_BLOCK = '0x01440f50'
NODE_RECORD = '0x02d858c0'
FREE_PLAIN = '0x004000a0'
FREE_DATA = '0x00400300'
FREE_NODE = '0x00400020'
MASK64 = (1 << 64) - 1


def u64(value):
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, plain=True, node=True, guard=0x0123456789abcdef):
    """One destruction: the vtable is published, then each present pointer is released and cleared."""
    buffers = {'guard': {'size': 8, 'bytes': u64(guard)},
               'self': {'size': 0x20, 'bytes': 'a5' * 0x20}}
    memory = [{'addr': GUARD, 'pointer': 'guard'},
              {'addr': 'buf:self+8', 'pointer': 'plain'} if plain else {'addr': 'buf:self+8', 'bytes': u64(0)},
              {'addr': 'buf:self+0x18', 'pointer': 'node'} if node else {'addr': 'buf:self+0x18', 'bytes': u64(0)}]
    stubs = []
    if plain:
        buffers['plain'] = {'size': 0x10}
        buffers['plain_alloc'] = {'size': 8}
        buffers['plain_alloc_vt'] = {'size': 0x78}
        memory += [{'addr': 'buf:plain_alloc', 'pointer': 'plain_alloc_vt'},
                   {'addr': 'buf:plain_alloc_vt+112', 'guest': FREE_PLAIN}]
        stubs += [{'address': ALLOCATOR_FOR_BLOCK, 'argc': 1, 'ret': 'buf:plain_alloc'},
                  {'address': RELEASE_BLOCK, 'argc': 1},
                  {'address': FREE_PLAIN, 'argc': 2}]
    if node:
        buffers['node'] = {'size': 0x20}
        buffers['payload'] = {'size': 0x10, 'bytes': '3c' * 0x10}
        buffers['data_alloc'] = {'size': 8}
        buffers['data_alloc_vt'] = {'size': 0x78}
        buffers['node_alloc'] = {'size': 8}
        buffers['node_alloc_vt'] = {'size': 0x78}
        memory += [{'addr': 'buf:node+8', 'pointer': 'payload'},
                   {'addr': 'buf:node+0x18', 'pointer': 'data_alloc'},
                   {'addr': 'buf:data_alloc', 'pointer': 'data_alloc_vt'},
                   {'addr': 'buf:data_alloc_vt+112', 'guest': FREE_DATA},
                   {'addr': 'buf:node_alloc', 'pointer': 'node_alloc_vt'},
                   {'addr': 'buf:node_alloc_vt+112', 'guest': FREE_NODE}]
        stubs += [{'address': ALLOCATOR_FOR_BLOCK, 'argc': 1, 'ret': 'buf:node_alloc'},
                  {'address': NODE_RECORD, 'argc': 2, 'argi': [1]},
                  {'address': FREE_DATA, 'argc': 2},
                  {'address': FREE_NODE, 'argc': 2}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': {'rdi': 'buf:self'},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('both_null', plain=False, node=False),
    case('plain_only', node=False),
    case('node_only', plain=False),
    case('both_present'),
    case('both_present_zero_guard', guard=0),
    case('both_present_all_ones_guard', guard=(1 << 64) - 1),
]


def main():
    """Write one JSON case per call shape to the requested directory."""
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    os.makedirs(sys.argv[1], exist_ok=True)
    for fixture in CASES:
        with open(os.path.join(sys.argv[1], fixture['id'] + '.json'), 'w') as stream:
            json.dump(fixture, stream, indent=1)
    print(f'{len(CASES)} cases written to {sys.argv[1]}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
