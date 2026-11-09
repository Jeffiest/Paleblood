#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_remove_member_from_list (0x00410f10), for tools/verify.py run.

usage: remove_member_from_list_cases.py OUT_DIR

The member's vtable is stored, its source's list is locked (0x02fbe598), the walk from the tail
unlinks the first node whose value is the member's address and releases it through the scratch
service, the list is unlocked (0x02fbe5a8), the source is released (0x0045a4c0), and the member goes
to the final release (0x0045a480, a tail call) whose result is the function's result.

The member's source is never null (its list is read first), and the walk's null test after the
unlink never sees null, so those outcomes are declared unreachable.
"""
import json
import os
import struct
import sys

ADDRESS = '0x00410f10'
LOCK, UNLOCK = '0x02fbe598', '0x02fbe5a8'
RELEASE_SOURCE, FINAL = '0x0045a4c0', '0x0045a480'
SERVICE_RELEASE = '0x00400020'
SCRATCH_GLOBAL = '0x057e7320'
HEAD_VALUE, TAIL_VALUE = 0x11, 0x22

UNREACHABLE = {
    '0x00410f76': ('taken', 'the removed node was dereferenced just before this test, so it is never null'),
    '0x00410f97': ('taken', 'the source was dereferenced to reach the list, so it is never null'),
}


def u64(v):
    return struct.pack('<Q', v & ((1 << 64) - 1)).hex()


def case(cid, tail_value, head_value, result):
    """tail_value and head_value: the node values, as 64-bit words or the string 'member' for the member's address."""
    b = {'member': {'size': 0x20}, 'member_source': {'size': 0x70}, 'list': {'size': 0x48},
         'n1': {'size': 0x18}, 'n2': {'size': 0x18}, 'service': {'size': 8}, 'service_vt': {'size': 0x78},
}
    m = [{'addr': 'buf:member+24', 'pointer': 'member_source'},
         {'addr': 'buf:member_source+104', 'pointer': 'list'},
         {'addr': 'buf:list+48', 'pointer': 'n1'}, {'addr': 'buf:list+56', 'pointer': 'n2'},
         {'addr': 'buf:n1', 'pointer': 'n2'}, {'addr': 'buf:n1+8', 'pointer': 'list+48'},
         {'addr': 'buf:n2', 'pointer': 'list+48'}, {'addr': 'buf:n2+8', 'pointer': 'n1'},
         {'addr': 'buf:service', 'pointer': 'service_vt'},
         {'addr': 'buf:service_vt+104', 'guest': SERVICE_RELEASE},
         {'addr': SCRATCH_GLOBAL, 'pointer': 'service'}]
    m.append({'addr': 'buf:n1+16', 'pointer': 'member'} if head_value == 'member' else
             {'addr': 'buf:n1+16', 'bytes': u64(head_value)})
    m.append({'addr': 'buf:n2+16', 'pointer': 'member'} if tail_value == 'member' else
             {'addr': 'buf:n2+16', 'bytes': u64(tail_value)})
    matched = 'member' in (tail_value, head_value)
    stubs = [{'address': LOCK, 'argc': 1, 'argi': [0]}]
    if matched:
        stubs.append({'address': SERVICE_RELEASE, 'argc': 2, 'argi': [0, 1], 'ret': 0})
    stubs.append({'address': UNLOCK, 'argc': 1, 'argi': [0], 'ret': 0})
    stubs.append({'address': RELEASE_SOURCE, 'argc': 1, 'argi': [0]})
    stubs.append({'address': FINAL, 'argc': 1, 'argi': [0], 'ret': hex(result)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:member'}, 'buffers': b, 'memory': m, 'stubs': stubs, 'imports': [],
            'UNREACHABLE': UNREACHABLE}


CASES = [
    case('member_is_tail_node', tail_value='member', head_value=HEAD_VALUE, result=0x77),
    case('member_is_head_node', tail_value=TAIL_VALUE, head_value='member', result=0x1),
    case('member_not_in_list', tail_value=TAIL_VALUE, head_value=HEAD_VALUE, result=0),
]


def main():
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    os.makedirs(sys.argv[1], exist_ok=True)
    for c in CASES:
        c.pop('UNREACHABLE', None)
        with open(os.path.join(sys.argv[1], f"{c['id']}.json"), 'w') as f:
            json.dump(c, f, indent=1)
    print(f'{len(CASES)} cases written to {sys.argv[1]}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
