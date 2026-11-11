#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_match_member_text_013a2bd0 (0x013a2bd0), for tools/verify.py run.

usage: match_member_text_cases.py OUT_DIR

The holder has an enable word at +0x00 and a member at +0x18. The matcher stub (0x013abad0) and the
value stub (0x013abac0, the tail call) each return a buffer or zero. Covers a disabled holder, a
holder without a member, a matcher that accepts, and a refused text with a value and without one.
"""
import json
import os
import struct
import sys

ADDRESS = '0x013a2bd0'
MATCHER = '0x013abad0'
VALUE = '0x013abac0'


def u32(v):
    return struct.pack('<I', v & 0xffffffff).hex()


def case(cid, enabled=1, member=True, matcher=None, value=None):
    """matcher and value name the returned buffer (or None for zero) when the stub is reached."""
    b = {'holder': {'size': 0x20, 'bytes': u32(enabled)}, 'member': {'size': 8}, 'text': {'size': 0x10},
         'matched': {'size': 8}, 'value': {'size': 8}}
    m = [{'addr': 'buf:holder+24', 'pointer': 'member'} if member else {'addr': 'buf:holder+24', 'bytes': '00' * 8}]
    stubs = []
    if enabled and member:
        stubs.append({'address': MATCHER, 'argc': 2, 'argi': [0, 1], 'ret': 'buf:matched' if matcher else 0})
        if not matcher:
            stubs.append({'address': VALUE, 'argc': 4, 'argi': [0, 1, 2, 3],
                          'ret': 'buf:value' if value else 0})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:holder', 'rsi': 'buf:text', 'rdx': 0x5678}, 'buffers': b, 'memory': m,
            'stubs': stubs, 'imports': []}


CASES = [
    case('disabled_holder', enabled=0),
    case('holder_without_member', member=False),
    case('matcher_accepts', matcher=True),
    case('matcher_refuses_value_found', matcher=False, value=True),
    case('matcher_refuses_no_value', matcher=False, value=False),
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
