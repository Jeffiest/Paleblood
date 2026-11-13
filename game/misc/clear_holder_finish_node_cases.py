#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_clear_holder_finish_node (0x004193a0), for tools/verify.py run.

usage: clear_holder_finish_node_cases.py OUT_DIR

The holder reaches its build state through its context (+0x18, then +0x40), and the state points at a node
(+0xf8). Both locks are taken and released around the two cleared words. The flag is set when the masked mode
is below two. With a node, the inner object and the link go to two calls and the inner object's tail call result
is returned; without one, the holder's context address stays in the result register.
"""
import json
import os
import struct
import sys

ADDRESS = '0x004193a0'
LOCK, UNLOCK = '0x02fbe598', '0x02fbe5a8'
INNER_CALL = '0x004658d0'
LINK_CALL = '0x00465ec0'
TAIL_CALL = '0x00465930'
HOLDER_SIZE = 0xc0
CONTEXT_SIZE = 0x48
STATE_SIZE = 0x100
NODE_SIZE = 0x40
MASK64 = (1 << 64) - 1


def u64(v):
    return struct.pack('<Q', v & MASK64).hex()


def case(cid, mode, node, tail_result=0):
    buffers = {'holder': {'size': HOLDER_SIZE, 'bytes': 'c3' * HOLDER_SIZE},
               'context': {'size': CONTEXT_SIZE, 'bytes': 'b4' * CONTEXT_SIZE},
               'state': {'size': STATE_SIZE, 'bytes': 'a6' * STATE_SIZE},
               'node': {'size': NODE_SIZE, 'bytes': 'd7' * NODE_SIZE}}
    memory = [{'addr': 'buf:holder+24', 'pointer': 'context'},
              {'addr': 'buf:holder+160', 'bytes': struct.pack('<I', mode).hex()},
              {'addr': 'buf:context+64', 'pointer': 'state'}]
    if node:
        memory.append({'addr': 'buf:state+248', 'pointer': 'node'})
    else:
        memory.append({'addr': 'buf:state+248', 'bytes': u64(0)})
    stubs = [{'address': LOCK, 'argc': 1, 'argi': [0]},
             {'address': UNLOCK, 'argc': 1, 'argi': [0]},
             {'address': LOCK, 'argc': 1, 'argi': [0]},
             {'address': UNLOCK, 'argc': 1, 'argi': [0]}]
    if node:
        stubs += [{'address': INNER_CALL, 'argc': 1, 'argi': [0]},
                  {'address': LINK_CALL, 'argc': 1, 'argi': [0]},
                  {'address': TAIL_CALL, 'argc': 1, 'argi': [0], 'ret': hex(tail_result)}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:holder'}, 'buffers': buffers, 'memory': memory, 'stubs': stubs,
            'imports': []}


CASES = [
    case('small_mode_with_node_returns_tail', mode=0x0, node=True, tail_result=0x77),
    case('mode_bit_zero_is_small_with_node', mode=0x1, node=True, tail_result=0x0),
    case('large_mode_leaves_flag_with_node', mode=0x4, node=True, tail_result=0x5),
    case('mode_at_limit_leaves_flag_with_node', mode=0x2, node=True, tail_result=0x6),
    case('no_node_keeps_context_result_small_mode', mode=0x0, node=False),
    case('no_node_keeps_context_result_large_mode', mode=0x8, node=False),
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
