#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_member_object_013a3040 (0x013a3040), for tools/verify.py run.

usage: member_object_013a3040_cases.py OUT_DIR

The holder has an enable word at +0x00 and a member at +0x18. Covers a disabled holder, a holder without
a member, and a member for which the routine at 0x013ac0a0 gives an object or zero.
"""
import json
import os
import struct
import sys

ADDRESS = '0x013a3040'
ROUTINE = '0x013ac0a0'


def u32(v):
    return struct.pack('<I', v & 0xffffffff).hex()


def case(cid, enabled=1, member=True, result=True):
    b = {'holder': {'size': 0x20, 'bytes': u32(enabled)}, 'member': {'size': 8}, 'obj': {'size': 8}}
    m = [{'addr': 'buf:holder+24', 'pointer': 'member'} if member else {'addr': 'buf:holder+24', 'bytes': '00' * 8}]
    stubs = []
    if enabled and member:
        stubs.append({'address': ROUTINE, 'argc': 1, 'argi': [0], 'ret': 'buf:obj' if result else 0})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': {'rdi': 'buf:holder'},
            'buffers': b, 'memory': m, 'stubs': stubs, 'imports': []}


CASES = [
    case('disabled_holder', enabled=0),
    case('holder_without_member', member=False),
    case('member_gives_object'),
    case('member_gives_nothing', result=False),
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
