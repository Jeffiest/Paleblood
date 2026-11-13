#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_set_holder_mode_finish_node (0x004198d0), for tools/verify.py run.

usage: set_holder_mode_finish_node_cases.py OUT_DIR

The holder's mode word (+0xa0) is stored from the second argument. A holder with a node (+0xa8) has the node's
inner object (+0x10) given to one call, then the mode is stored, the link (+0x38) is given to a second call, and
the inner object's tail call result is returned. Without a node the mode is stored and the result register is
left alone by the original, so those cases compare no return value.
"""
import json
import os
import struct
import sys

ADDRESS = '0x004198d0'
INNER_CALL = '0x004658d0'
LINK_CALL = '0x00465ec0'
TAIL_CALL = '0x00465930'
HOLDER_SIZE = 0xc0
NODE_SIZE = 0x40
MODE_OFFSET, NODE_OFFSET = 0xa0, 0xa8
MASK64 = (1 << 64) - 1


def case(cid, mode, node, tail_result=0):
    memory = [{'addr': 'buf:holder+%d' % MODE_OFFSET, 'bytes': struct.pack('<I', 0).hex()}]
    if node:
        memory.append({'addr': 'buf:holder+%d' % NODE_OFFSET, 'pointer': 'node'})
        stubs = [{'address': INNER_CALL, 'argc': 1, 'argi': [0]},
                 {'address': LINK_CALL, 'argc': 1, 'argi': [0]},
                 {'address': TAIL_CALL, 'argc': 1, 'argi': [0], 'ret': hex(tail_result)}]
        returns = 'i64'
    else:
        memory.append({'addr': 'buf:holder+%d' % NODE_OFFSET, 'bytes': struct.pack('<Q', 0).hex()})
        stubs = []
        returns = 'void'
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': returns,
            'args': {'rdi': 'buf:holder', 'rsi': hex(mode & MASK64)},
            'buffers': {'holder': {'size': HOLDER_SIZE, 'bytes': 'c3' * HOLDER_SIZE},
                        'node': {'size': NODE_SIZE, 'bytes': 'd7' * NODE_SIZE}},
            'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('no_node_stores_mode', mode=0x5, node=False),
    case('no_node_stores_zero_mode', mode=0x0, node=False),
    case('node_finishes_and_returns_tail', mode=0x2, node=True, tail_result=0x77),
    case('node_high_mode_bits_stored', mode=0xfffffffe, node=True, tail_result=0x0),
]


def main():
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    os.makedirs(sys.argv[1], exist_ok=True)
    for c in CASES:
        with open(os.path.join(sys.argv[1], f"{c['id']}.json"), 'w') as f:
            json.dump(c, f, indent=1)
    print(f'{len(CASES)} cases written to {sys.argv[1]}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
