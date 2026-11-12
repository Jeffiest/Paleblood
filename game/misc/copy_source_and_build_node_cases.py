#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_copy_source_and_build_node (0x00416770), for tools/verify.py run.

usage: copy_source_and_build_node_cases.py OUT_DIR

The source's words and 16-byte block are copied into the state, then the slot builder fills the
state's slot and its result is returned. A state with no node keeps its count and returns the
builder's result; a state with a node hands its inner object to the inner call, sets the count and
flag, hands its link to the link call and returns the inner tail call's result. The builder's and
the calls' results are scripted stubs.
"""
import json
import struct
import sys
from pathlib import Path

ADDRESS = '0x00416770'
BUILD_SLOT = '0x004102b0'
INNER_CALL = '0x004658d0'
LINK_CALL = '0x00465ec0'
TAIL_CALL = '0x00465930'
STATE_SIZE = 0x100
SOURCE_SIZE = 0x50
NODE_SIZE = 0x40
NODE_OFFSET = 0xf8
COUNT_OFFSET = 0xe8
BUILD_RESULT = 0x1234abcd
TAIL_RESULT = 0x5566


def u64(v):
    return struct.pack('<Q', v).hex()


def case(cid, with_node, source_byte, count):
    """with_node: the state points at a node. source_byte: the byte the source is filled with."""
    buffers = {'state': {'size': STATE_SIZE, 'bytes': '00' * STATE_SIZE},
               'source': {'size': SOURCE_SIZE, 'bytes': source_byte * SOURCE_SIZE},
               'node': {'size': NODE_SIZE, 'bytes': '77' * NODE_SIZE}}
    memory = [{'addr': 'buf:state+' + str(COUNT_OFFSET), 'bytes': struct.pack('<I', count).hex()}]
    if with_node:
        memory.append({'addr': 'buf:state+' + str(NODE_OFFSET), 'pointer': 'node'})
    else:
        memory.append({'addr': 'buf:state+' + str(NODE_OFFSET), 'bytes': u64(0)})
    stubs = [{'address': BUILD_SLOT, 'argc': 7, 'argi': [0, 1, 2, 3, 4, 5, 6], 'ret': BUILD_RESULT}]
    if with_node:
        stubs.append({'address': INNER_CALL, 'argc': 1, 'argi': [0]})
        stubs.append({'address': LINK_CALL, 'argc': 1, 'argi': [0]})
        stubs.append({'address': TAIL_CALL, 'argc': 1, 'argi': [0], 'ret': TAIL_RESULT})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:state', 'rsi': 'buf:source'}, 'buffers': buffers, 'memory': memory,
            'stubs': stubs, 'imports': []}


CASES = [
    case('no_node_keeps_count', with_node=False, source_byte='11', count=0x11223344),
    case('node_finishes_with_tail_result', with_node=True, source_byte='22', count=0x55667788),
    case('node_with_all_ones_source', with_node=True, source_byte='ff', count=0),
    case('no_node_all_ones_source', with_node=False, source_byte='ff', count=0xffffffff),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print('usage: copy_source_and_build_node_cases.py OUT_DIR', file=sys.stderr)
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
