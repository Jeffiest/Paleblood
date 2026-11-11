#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_ensure_shared_instance_013a1850 (0x013a1850), for tools/verify.py run.

usage: ensure_shared_instance_cases.py OUT_DIR

The holder carries an active word at +0x00 and the owner at +0x08. The shared instance global at
0x058b35f0 is scripted before each call. The lookup stub fills the 0x20-byte record; the creation
stub returns a buffer or zero; the instance and finish stubs compare the record bytes. Covers an
inactive holder, an instance already set, a created instance and a failed allocation. The second
check after the lookup (the global set by the lookup) has no input that can reach it: the lookup
never references the global, so that outcome is declared unreachable.
"""
import json
import os
import struct
import sys

ADDRESS = '0x013a1850'
SHARED = '0x058b35f0'
LOOKUP = '0x013a6520'
CREATE = '0x0247c4e0'
ATTACH = '0x013a5100'
FINISH = '0x013a6570'
RECORD_PATTERN = '5a' * 0x20

UNREACHABLE = {
    '0x013a1899': ('taken',
                   'the lookup 0x013a6520 never references the shared instance global, so it is still zero for the second check'),
}


def u32(v):
    return struct.pack('<I', v & 0xffffffff).hex()


def case(cid, active=1, existing=False, created=True):
    """One call: the holder active or not, the instance already set, and the allocation result."""
    b = {'holder': {'size': 0x10, 'bytes': u32(active)}, 'owner': {'size': 8}, 'instance': {'size': 0x70},
         'existing': {'size': 8}}
    m = [{'addr': 'buf:holder+8', 'pointer': 'owner'},
         {'addr': SHARED, 'pointer': 'existing'} if existing else {'addr': SHARED, 'bytes': '00' * 8}]
    stubs = []
    if active and not existing:
        stubs.append({'address': LOOKUP, 'argc': 3, 'argi': [0, 1, 2],
                      'writes': [{'arg': 0, 'offset': 0, 'bytes': RECORD_PATTERN}]})
        stubs.append({'address': CREATE, 'argc': 3, 'argi': [0, 1, 2], 'ret': 'buf:instance' if created else 0})
        if created:
            stubs.append({'address': ATTACH, 'argc': 2, 'argi': [0, 1],
                          'argmem': [{'arg': 1, 'size': 0x20}]})
        stubs.append({'address': FINISH, 'argc': 1, 'argi': [0], 'argmem': [{'arg': 0, 'size': 0x20}]})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:holder', 'rsi': 0x2a}, 'buffers': b, 'memory': m, 'stubs': stubs,
            'imports': [], 'UNREACHABLE': UNREACHABLE}


CASES = [
    case('inactive_holder', active=0),
    case('instance_already_set', existing=True),
    case('instance_created'),
    case('allocation_fails', created=False),
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
