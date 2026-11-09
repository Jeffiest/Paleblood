#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic owners for the node dispatch and free (0x01e48670): an empty list, and lists of one,
two and three nodes whose payloads are handed to the callee with the owner's context, then freed
through the allocator that each node's allocator_of call returns."""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01e48670'
DISPATCH = '0x01cc2230'
ALLOCATOR_OF = '0x0247b720'
FREE = '0x00400080'
MASK64 = (1 << 64) - 1
OWNER_SIZE = 0x58
NODE_SIZE = 0x10
ALLOC_SIZE = 0x8
ALLOC_VT_SIZE = 0x78
FREE_SLOT = 0x70
CONTEXT = 0xcafe0000beef0001


def u64(value):
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, nodes=0, context=CONTEXT, clear_head=False):
    """An owner with a context and a list of `nodes` nodes, each with its own payload. With clear_head
    the callee's first call zeroes the owner's list head through the context pointer, as a callee that
    empties the list would, so the list is left with no head to free."""
    buffers = {'owner': {'size': OWNER_SIZE, 'bytes': 'aa' * OWNER_SIZE},
               'alloc': {'size': ALLOC_SIZE, 'bytes': '00' * ALLOC_SIZE},
               'alloc_vt': {'size': ALLOC_VT_SIZE, 'bytes': '00' * ALLOC_VT_SIZE}}
    memory = [{'addr': 'buf:alloc', 'pointer': 'alloc_vt'},
              {'addr': f'buf:alloc_vt+{FREE_SLOT}', 'guest': FREE},
              {'addr': 'buf:owner+16', 'bytes': 'dd' * 8}]
    if clear_head:
        memory.append({'addr': 'buf:owner+8', 'pointer': 'owner'})
    else:
        memory.append({'addr': 'buf:owner+8', 'bytes': u64(context)})
    for i in range(nodes):
        name = f'node{i}'
        buffers[name] = {'size': NODE_SIZE, 'bytes': '00' * NODE_SIZE}
        memory.append({'addr': f'buf:{name}', 'bytes': u64(0x1000 + i)})
        if i + 1 < nodes:
            memory.append({'addr': f'buf:{name}+8', 'pointer': f'node{i + 1}'})
        else:
            memory.append({'addr': f'buf:{name}+8', 'bytes': '00' * 8})
    if nodes:
        memory.append({'addr': 'buf:owner+72', 'pointer': 'node0'})
        memory.append({'addr': 'buf:owner+80', 'pointer': f'node{nodes - 1}'})
    else:
        memory.append({'addr': 'buf:owner+72', 'bytes': '00' * 8})
        memory.append({'addr': 'buf:owner+80', 'bytes': 'bb' * 8})
    stubs = []
    for i in range(nodes):
        dispatch = {'address': DISPATCH, 'argc': 2}
        if clear_head and i == 0:
            dispatch['writes'] = [{'arg': 0, 'offset': 72, 'bytes': '00' * 8, 'size': 8}]
        stubs.append(dispatch)
    if not clear_head:
        for _ in range(nodes):
            stubs.append({'address': ALLOCATOR_OF, 'argc': 1, 'ret': 'buf:alloc'})
            stubs.append({'address': FREE, 'argc': 2})
    return {
        'schema': 1,
        'address': ADDRESS,
        'id': cid,
        'returns': 'void',
        'args': {'rdi': 'buf:owner'},
        'buffers': buffers,
        'memory': memory,
        'imports': [],
        'stubs': stubs,
    }


CASES = [
    case('list_empty'),
    case('list_one_node', nodes=1),
    case('list_two_nodes', nodes=2),
    case('list_three_nodes', nodes=3),
    case('context_all_bits_two_nodes', nodes=2, context=MASK64),
    case('context_zero_one_node', nodes=1, context=0),
    case('callee_clears_head_one_node', nodes=1, clear_head=True),
    case('callee_clears_head_two_nodes', nodes=2, clear_head=True),
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
