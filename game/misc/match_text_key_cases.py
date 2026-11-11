#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_match_text_key_013a3060 (0x013a3060), for tools/verify.py run.

usage: match_text_key_cases.py OUT_DIR

The copy stub (0x013a3110) writes the text length, the heap or inline characters and the allocator into
the caller's record; the matcher stub (0x013abad0) and the allocator's free slot are stubbed. Covers a
disabled holder, an inline text with no member, an inline text the matcher accepts or refuses, a heap
text the matcher accepts, and a heap text whose pointer is null.
"""
import json
import os
import struct
import sys

ADDRESS = '0x013a3060'
COPY = '0x013a3110'
MATCHER = '0x013abad0'
FREE = '0x004000a0'


def u32(v):
    return struct.pack('<I', v & 0xffffffff).hex()


def u64(v):
    return struct.pack('<Q', v & (2 ** 64 - 1)).hex()


def case(cid, enabled=1, member=True, length=3, heap=True, matched=True, copy_disables=False):
    b = {'holder': {'size': 0x20, 'bytes': u32(enabled)}, 'member': {'size': 8}, 'heap': {'size': 0x20},
         'alloc': {'size': 8}, 'alloc_vt': {'size': 0x78}, 'matched': {'size': 8}}
    m = [{'addr': 'buf:holder+24', 'pointer': 'member'} if member else {'addr': 'buf:holder+24', 'bytes': '00' * 8},
         {'addr': 'buf:alloc', 'pointer': 'alloc_vt'}, {'addr': 'buf:alloc_vt+112', 'guest': FREE}]
    if length >= 8:
        data = {'arg': 0, 'offset': 8, 'pointer': 'heap'} if heap else {'arg': 0, 'offset': 8, 'bytes': '00' * 8}
    else:
        data = {'arg': 0, 'offset': 8, 'bytes': '4142434445464748'}
    writes = [{'arg': 0, 'offset': 0x20, 'bytes': u64(length)}, {'arg': 0, 'offset': 0x28, 'pointer': 'alloc'}, data]
    if copy_disables:
        writes.append({'arg': 1, 'offset': 0, 'bytes': '00' * 4})
    stubs = [{'address': COPY, 'argc': 2, 'argi': [0, 1], 'writes': writes}]
    if enabled and member and (length < 8 or heap) and not copy_disables:
        stubs.append({'address': MATCHER, 'argc': 2, 'argi': [0, 1], 'ret': 'buf:matched' if matched else 0})
    if length >= 8:
        stubs.append({'address': FREE, 'argc': 2, 'argi': [0, 1]})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:holder', 'rsi': 0x1234}, 'buffers': b, 'memory': m, 'stubs': stubs, 'imports': []}


CASES = [
    case('disabled_holder', enabled=0),
    case('inline_without_member', member=False),
    case('inline_matched', matched=True),
    case('inline_refused', matched=False),
    case('heap_matched', length=9, heap=True, matched=True),
    case('heap_pointer_null', length=8, heap=False),
    case('copy_disables_holder', copy_disables=True),
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
