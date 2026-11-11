#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_report_member_text_013a3260 (0x013a3260), for tools/verify.py run.

usage: report_member_text_cases.py OUT_DIR

The holder has an enable word at +0x00 and a member at +0x18. The length stub (0x02fbf228) gives the
text length; the report stub (0x013abd10) is the tail call. Covers a disabled holder, a holder without
a member, a null text, an empty text, and a text that is reported with both flags.
"""
import json
import os
import struct
import sys

ADDRESS = '0x013a3260'
LENGTH = '0x02fbf228'
REPORT = '0x013abd10'


def u32(v):
    return struct.pack('<I', v & 0xffffffff).hex()


def case(cid, enabled=1, member=True, text='text', length=3):
    b = {'holder': {'size': 0x20, 'bytes': u32(enabled)}, 'member': {'size': 8}, 'text': {'size': 0x10, 'bytes': '4100'}}
    m = [{'addr': 'buf:holder+24', 'pointer': 'member'} if member else {'addr': 'buf:holder+24', 'bytes': '00' * 8}]
    stubs = []
    if enabled and member and text is not None:
        stubs.append({'address': LENGTH, 'argc': 1, 'argi': [0], 'ret': length})
        if length:
            stubs.append({'address': REPORT, 'argc': 4, 'argi': [0, 1, 2, 3]})
    args = {'rdi': 'buf:holder', 'rsi': 0 if text is None else 'buf:text', 'rdx': 0x11, 'rcx': 0x22}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': args,
            'buffers': b, 'memory': m, 'stubs': stubs, 'imports': []}


CASES = [
    case('disabled_holder', enabled=0),
    case('holder_without_member', member=False),
    case('text_null', text=None),
    case('text_empty', length=0),
    case('text_reported'),
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
