#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_init_member_and_push (0x00410d90), for tools/verify.py run.

usage: init_member_and_push_cases.py OUT_DIR

The member gets the member vtable (0x0553c2c0), its kind, its width and a zero value word; its
source is retained (0x0045a4b0) and kept; the source's list is locked (0x02fbe598); a node is
allocated from the scratch service (slot 0x50, size 0x18) and pushed in front of the old head with
the member as its value; the unlock (0x02fbe5a8, a tail call) returns the function's result. A
null source is not reached: the list is read from it first, so that branch is declared unreachable.
"""
import json
import os
import struct
import sys

ADDRESS = '0x00410d90'
RETAIN, LOCK, UNLOCK = '0x0045a4b0', '0x02fbe598', '0x02fbe5a8'
ALLOCATE = '0x00400230'
SCRATCH_GLOBAL = '0x057e7320'

UNREACHABLE = {
    '0x00410ddf': ('taken', 'the source is read for its list right after this test, so it is never null'),
}


def u32(v):
    return struct.pack('<I', v & 0xffffffff).hex()


def case(cid, width, result):
    b = {'member': {'size': 0x20}, 'source': {'size': 0x70}, 'list': {'size': 0x48}, 'n1': {'size': 0x18},
         'n2': {'size': 0x18}, 'node': {'size': 0x18}, 'service': {'size': 8}, 'service_vt': {'size': 0x58}}
    m = [{'addr': 'buf:source+104', 'pointer': 'list'},
         {'addr': 'buf:list+48', 'pointer': 'n1'}, {'addr': 'buf:list+56', 'pointer': 'n2'},
         {'addr': 'buf:n1', 'pointer': 'n2'}, {'addr': 'buf:n1+8', 'pointer': 'list+48'},
         {'addr': 'buf:n2', 'pointer': 'list+48'}, {'addr': 'buf:n2+8', 'pointer': 'n1'},
         {'addr': 'buf:service', 'pointer': 'service_vt'},
         {'addr': 'buf:service_vt+80', 'guest': ALLOCATE},
         {'addr': SCRATCH_GLOBAL, 'pointer': 'service'}]
    stubs = [{'address': RETAIN, 'argc': 1, 'argi': [0]},
             {'address': LOCK, 'argc': 1, 'argi': [0]},
             {'address': ALLOCATE, 'argc': 3, 'argi': [0, 1, 2], 'ret': 'buf:node'},
             {'address': UNLOCK, 'argc': 1, 'argi': [0], 'ret': hex(result)}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:member', 'rsi': 'buf:source', 'rdx': hex(width)},
            'buffers': b, 'memory': m, 'stubs': stubs, 'imports': []}


CASES = [
    case('member_pushed_width_two', width=0x2, result=0),
    case('member_pushed_high_width', width=0x80000000, result=0x55),
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
