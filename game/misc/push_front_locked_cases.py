#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_push_front_locked (0x00410e60), for tools/verify.py run.

usage: push_front_locked_cases.py OUT_DIR

The owner's lock is taken (0x02fbe598), a node is allocated from the scratch service (slot 0x50,
size 0x18), linked in front of the old first node, and the lock is released by the tail call to
0x02fbe5a8, whose result is the function's result. The owner's head is never null, so the list
always has an old first node.
"""
import json
import os
import sys

ADDRESS = '0x00410e60'
LOCK, UNLOCK = '0x02fbe598', '0x02fbe5a8'
ALLOCATE = '0x00400230'
SCRATCH_GLOBAL = '0x057e7320'


def case(cid, value, unlock_result):
    b = {'owner': {'size': 0x50}, 'old_node': {'size': 0x18}, 'node': {'size': 0x18},
         'service': {'size': 8}, 'service_vt': {'size': 0x58}}
    m = [{'addr': 'buf:owner+48', 'pointer': 'old_node'},
         {'addr': 'buf:old_node', 'bytes': '00' * 8},
         {'addr': 'buf:old_node+8', 'bytes': '11' * 8},
         {'addr': 'buf:service', 'pointer': 'service_vt'},
         {'addr': 'buf:service_vt+80', 'guest': ALLOCATE},
         {'addr': SCRATCH_GLOBAL, 'pointer': 'service'}]
    stubs = [{'address': LOCK, 'argc': 1, 'argi': [0]},
             {'address': ALLOCATE, 'argc': 3, 'argi': [0, 1, 2], 'ret': 'buf:node'},
             {'address': UNLOCK, 'argc': 1, 'argi': [0], 'ret': hex(unlock_result)}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:owner', 'rsi': hex(value)}, 'buffers': b, 'memory': m, 'stubs': stubs,
            'imports': []}


CASES = [
    case('push_onto_one_node', value=0x1122334455667788, unlock_result=0),
    case('unlock_result_returned', value=0x55, unlock_result=0x8000000000000001),
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
