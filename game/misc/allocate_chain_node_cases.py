#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic chain allocations for bb_misc_allocate_chain_node (0x00414c90): a block that the
allocator refuses or grants, a chain that is empty or already has a head, and payload sizes of zero,
ordinary and near the top of the range. The allocate slot (0x50) is a scripted stub.

usage: allocate_chain_node_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x00414c90'
ALLOCATE = '0x00400020'         # a real game entry the allocator's allocate slot points at
MASK64 = (1 << 64) - 1
CHAIN_SIZE = 0x20
BLOCK_SIZE = 0x18
LINK_SIZE = 8
OLD_HEAD_SIZE = 0x18


def case(cid, payload, granted, head=None):
    """One allocation. granted says whether the allocator returns a block; head names an old head
    node already in the chain (None for an empty chain)."""
    buffers = {'chain': {'size': CHAIN_SIZE, 'bytes': 'a5' * CHAIN_SIZE},
               'allocator': {'size': 8},
               'alloc_vt': {'size': 0x78},
               'block': {'size': BLOCK_SIZE, 'bytes': '5a' * BLOCK_SIZE}}
    memory = [{'addr': 'buf:allocator', 'pointer': 'alloc_vt'},
              {'addr': 'buf:alloc_vt+80', 'guest': ALLOCATE},
              {'addr': 'buf:chain+24', 'pointer': 'allocator'}]
    if head is None:
        memory.append({'addr': 'buf:chain+16', 'bytes': '00' * 8})
    else:
        buffers['old_head'] = {'size': OLD_HEAD_SIZE, 'bytes': '3c' * OLD_HEAD_SIZE}
        memory.append({'addr': 'buf:chain+16', 'pointer': 'old_head'})
        memory.append({'addr': 'buf:old_head+0', 'bytes': '00' * 8})
    ret = 'buf:block' if granted else 0
    stubs = [{'address': ALLOCATE, 'argc': 3, 'argi': [0, 1, 2], 'ret': ret}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:chain', 'rsi': hex(payload & MASK64)},
            'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('refused_empty_chain', payload=0x10, granted=False),
    case('refused_with_head', payload=0x10, granted=False, head=True),
    case('granted_empty_chain', payload=0x10, granted=True),
    case('granted_with_head', payload=0x20, granted=True, head=True),
    case('granted_zero_payload', payload=0, granted=True),
    case('granted_large_payload', payload=0x7fffffffffff, granted=True, head=True),
    case('granted_top_payload', payload=MASK64 - LINK_SIZE, granted=True),
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
