#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic appends for misc_append_indexed_node (0x0040e1a0): an empty or non-empty chain, a
holder whose first node is set or not, index and count counters at zero and at the top of their
range, and a node whose next link is left alone when the chain was empty.

usage: append_indexed_node_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x0040e1a0'
HOLDER_SIZE = 0x3a0
CHAIN_SIZE = 0x120
NODE_SIZE = 0x30


def holder_bytes(next_index, count):
    """The holder's two counters; its pointer fields are set through memory entries."""
    data = bytearray(HOLDER_SIZE)
    data[0x36c:0x370] = struct.pack('<I', next_index & 0xffffffff)
    data[0x378:0x37c] = struct.pack('<I', count & 0xffffffff)
    return data.hex()


def case(cid, chain_has_nodes=False, first_set=False, next_index=0x10, count=3):
    """One append of node. When the chain has nodes, old is its head and its tail, and old's next
    link is the field the append rewrites."""
    buffers = {
        'holder': {'size': HOLDER_SIZE, 'bytes': holder_bytes(next_index, count)},
        'chain': {'size': CHAIN_SIZE},
        'old': {'size': NODE_SIZE, 'bytes': 'dd' * NODE_SIZE},
        'node': {'size': NODE_SIZE, 'bytes': 'cc' * NODE_SIZE},
    }
    memory = [{'addr': 'buf:holder+56', 'pointer': 'chain'}]
    if chain_has_nodes:
        memory.append({'addr': 'buf:chain+272', 'pointer': 'old'})
        memory.append({'addr': 'buf:chain+280', 'pointer': 'old'})
    else:
        memory.append({'addr': 'buf:chain+272', 'bytes': '00' * 8})
        memory.append({'addr': 'buf:chain+280', 'bytes': '00' * 8})
    if first_set:
        memory.append({'addr': 'buf:holder+912', 'pointer': 'old'})
    else:
        memory.append({'addr': 'buf:holder+912', 'bytes': '00' * 8})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:holder', 'rsi': 'buf:node'},
            'buffers': buffers, 'memory': memory, 'stubs': [], 'imports': []}


CASES = [
    case('empty_chain_first_unset'),
    case('empty_chain_first_set', first_set=True),
    case('chain_with_nodes_first_unset', chain_has_nodes=True),
    case('chain_with_nodes_first_set', chain_has_nodes=True, first_set=True),
    case('index_wraps', chain_has_nodes=True, next_index=0xffffffff),
    case('count_wraps', count=0xffffffff, first_set=True),
    case('index_and_count_zero', next_index=0, count=0),
    case('high_index_bit', next_index=0x80000000, count=0x7fffffff, chain_has_nodes=True),
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
