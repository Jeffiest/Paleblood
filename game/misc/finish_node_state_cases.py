#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_finish_node_state (0x00417e70), for tools/verify.py run.

usage: finish_node_state_cases.py OUT_DIR

A state with a node hands the node's inner object to the inner call, its link to the link call (read
from the state again), and returns the tail call's result. A state with no node makes no call and
leaves RAX alone, so those cases compare no return value.
"""
import json
import struct
import sys
from pathlib import Path

ADDRESS = '0x00417e70'
INNER_CALL = '0x004658d0'
LINK_CALL = '0x00465ec0'
TAIL_CALL = '0x00465930'
STATE_SIZE = 0x100
NODE_OFFSET = 0xf8
NODE_SIZE = 0x40
TAIL_RESULT = 0x7a7a


def u64(v):
    return struct.pack('<Q', v).hex()


def case(cid, with_node, tail_result=TAIL_RESULT):
    buffers = {'state': {'size': STATE_SIZE, 'bytes': '00' * STATE_SIZE},
               'node': {'size': NODE_SIZE, 'bytes': '88' * NODE_SIZE}}
    memory = []
    if with_node:
        memory.append({'addr': 'buf:state+' + str(NODE_OFFSET), 'pointer': 'node'})
    else:
        memory.append({'addr': 'buf:state+' + str(NODE_OFFSET), 'bytes': u64(0)})
    stubs = []
    if with_node:
        stubs.append({'address': INNER_CALL, 'argc': 1, 'argi': [0]})
        stubs.append({'address': LINK_CALL, 'argc': 1, 'argi': [0]})
        stubs.append({'address': TAIL_CALL, 'argc': 1, 'argi': [0], 'ret': tail_result})
    result = {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64' if with_node else 'void',
              'args': {'rdi': 'buf:state'}, 'buffers': buffers, 'memory': memory, 'stubs': stubs,
              'imports': []}
    return result


CASES = [
    case('node_tail_result', with_node=True),
    case('node_tail_zero', with_node=True, tail_result=0),
    case('no_node_no_calls', with_node=False),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print('usage: finish_node_state_cases.py OUT_DIR', file=sys.stderr)
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
