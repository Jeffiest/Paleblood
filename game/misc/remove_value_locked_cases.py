#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_remove_value_locked (0x00410fb0), for tools/verify.py run.

usage: remove_value_locked_cases.py OUT_DIR

The owner has two nodes: the head (n1, value 0x11) and the tail (n2, value 0x22), with the head
slot as the sentinel that ends the walk from the tail back. The lock is taken (0x02fbe598), the walk
from the tail unlinks the first node whose value matches and releases it through the scratch
service's slot 0x68, and the lock is released by the tail call (0x02fbe5a8), whose result is the
function's result.
"""
import json
import os
import struct
import sys

ADDRESS = '0x00410fb0'
LOCK, UNLOCK = '0x02fbe598', '0x02fbe5a8'
SERVICE_RELEASE = '0x00400020'
SCRATCH_GLOBAL = '0x057e7320'
HEAD_VALUE, TAIL_VALUE = 0x11, 0x22

UNREACHABLE = {
    '0x00411006': ('taken',
                   'the removed node was dereferenced just before this test, so it is never null'),
}


def u64(v):
    return struct.pack('<Q', v).hex()


def case(cid, value, unlock_result, release_node=None):
    """release_node: 'n1' or 'n2' when that node is removed, None when nothing matches."""
    b = {'owner': {'size': 0x48}, 'n1': {'size': 0x18}, 'n2': {'size': 0x18}, 'service': {'size': 8},
         'service_vt': {'size': 0x78}}
    m = [{'addr': 'buf:owner+48', 'pointer': 'n1'}, {'addr': 'buf:owner+56', 'pointer': 'n2'},
         {'addr': 'buf:n1', 'pointer': 'n2'}, {'addr': 'buf:n1+8', 'pointer': 'owner+48'},
         {'addr': 'buf:n1+16', 'bytes': u64(HEAD_VALUE)},
         {'addr': 'buf:n2', 'pointer': 'owner+48'}, {'addr': 'buf:n2+8', 'pointer': 'n1'},
         {'addr': 'buf:n2+16', 'bytes': u64(TAIL_VALUE)},
         {'addr': 'buf:service', 'pointer': 'service_vt'},
         {'addr': 'buf:service_vt+104', 'guest': SERVICE_RELEASE},
         {'addr': SCRATCH_GLOBAL, 'pointer': 'service'}]
    stubs = [{'address': LOCK, 'argc': 1, 'argi': [0]}]
    if release_node is not None:
        stubs.append({'address': SERVICE_RELEASE, 'argc': 2, 'argi': [0, 1], 'ret': 0})
    stubs.append({'address': UNLOCK, 'argc': 1, 'argi': [0], 'ret': hex(unlock_result)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:owner', 'rsi': hex(value)}, 'buffers': b, 'memory': m, 'stubs': stubs,
            'imports': []}


CASES = [
    case('removes_tail_node', value=TAIL_VALUE, unlock_result=0, release_node='n2'),
    case('removes_head_node', value=HEAD_VALUE, unlock_result=0x9, release_node='n1'),
    case('no_matching_node', value=0x99, unlock_result=0x3),
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
