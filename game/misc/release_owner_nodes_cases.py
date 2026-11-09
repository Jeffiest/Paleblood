#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic owners for the owner teardown (0x01e47ec0): no object or an object with and without a
child and with a zero or nonzero counter, and node lists of zero, one, two and three nodes, each
freed through the allocator that the node's allocator_of call returns."""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01e47ec0'
CHILD_RELEASE = '0x01c06cb0'
ALLOCATOR_OF = '0x0247b720'
OBJECT_SLOT = '0x00400040'
FREE = '0x00400080'
MASK64 = (1 << 64) - 1
OWNER_SIZE = 0x58
OBJECT_SIZE = 0x40
OBJECT_VT_SIZE = 0x28
NODE_SIZE = 0x10
ALLOC_SIZE = 0x8
ALLOC_VT_SIZE = 0x78
FREE_SLOT = 0x70
SLOT_20 = 0x20


def u64(value):
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, obj=False, child=False, counter=0, nodes=0):
    """An owner with the object (child and counter as given) and a list of `nodes` nodes."""
    buffers = {'owner': {'size': OWNER_SIZE, 'bytes': 'aa' * OWNER_SIZE},
               'alloc': {'size': ALLOC_SIZE, 'bytes': '00' * ALLOC_SIZE},
               'alloc_vt': {'size': ALLOC_VT_SIZE, 'bytes': '00' * ALLOC_VT_SIZE}}
    memory = [{'addr': 'buf:alloc', 'pointer': 'alloc_vt'},
              {'addr': f'buf:alloc_vt+{FREE_SLOT}', 'guest': FREE}]
    memory.append({'addr': 'buf:owner+8', 'bytes': 'c0' * 8})
    if obj:
        buffers['object'] = {'size': OBJECT_SIZE, 'bytes': '00' * OBJECT_SIZE}
        buffers['object_vt'] = {'size': OBJECT_VT_SIZE, 'bytes': '00' * OBJECT_VT_SIZE}
        memory += [
            {'addr': 'buf:owner+16', 'pointer': 'object'},
            {'addr': 'buf:object', 'pointer': 'object_vt'},
            {'addr': f'buf:object_vt+{SLOT_20}', 'guest': OBJECT_SLOT},
            {'addr': 'buf:object+10', 'bytes': '01'},
            {'addr': 'buf:object+32', 'bytes': u64(counter)},
            {'addr': 'buf:object+50', 'bytes': '03'},
        ]
        if child:
            buffers['child'] = {'size': 0x10, 'bytes': '00' * 0x10}
            memory.append({'addr': 'buf:object+24', 'pointer': 'child'})
        else:
            memory.append({'addr': 'buf:object+24', 'bytes': '00' * 8})
    else:
        memory.append({'addr': 'buf:owner+16', 'bytes': '00' * 8})
    for i in range(nodes):
        name = f'node{i}'
        buffers[name] = {'size': NODE_SIZE, 'bytes': '00' * NODE_SIZE}
        nxt = f'node{i + 1}' if i + 1 < nodes else None
        memory.append({'addr': f'buf:{name}', 'bytes': u64(0xbeef0000 + i)})
        memory.append({'addr': f'buf:{name}+8', 'pointer': nxt} if nxt else
                      {'addr': f'buf:{name}+8', 'bytes': '00' * 8})
    if nodes:
        memory.append({'addr': 'buf:owner+72', 'pointer': 'node0'})
        memory.append({'addr': 'buf:owner+80', 'pointer': f'node{nodes - 1}'})
    else:
        memory.append({'addr': 'buf:owner+72', 'bytes': '00' * 8})
        memory.append({'addr': 'buf:owner+80', 'bytes': 'bb' * 8})
    stubs = []
    if obj and child:
        stubs.append({'address': CHILD_RELEASE, 'argc': 2})
    if obj:
        stubs.append({'address': OBJECT_SLOT, 'argc': 2})
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
    case('owner_empty'),
    case('object_no_child_counter_zero', obj=True),
    case('object_child_counter_zero', obj=True, child=True),
    case('object_child_counter_set', obj=True, child=True, counter=5),
    case('object_counter_upper_bits', obj=True, counter=1 << 40),
    case('object_counter_all_bits', obj=True, counter=MASK64),
    case('nodes_one_no_object', nodes=1),
    case('nodes_two_no_object', nodes=2),
    case('nodes_three_no_object', nodes=3),
    case('object_child_counter_and_two_nodes', obj=True, child=True, counter=2, nodes=2),
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
