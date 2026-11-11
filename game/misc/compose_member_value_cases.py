#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_compose_member_value_013a2e50 (0x013a2e50), for tools/verify.py run.

usage: compose_member_value_cases.py OUT_DIR

The holder carries an enable word at +0x00 and a member at +0x18. Each text must pass the name check
(a stub); the allocator from 0x0247d7a0 is a fake object whose info slot (0x20) gives its valid flag and
whose free slot (0x70) is stubbed. The matcher stub (0x013abad0) runs on the joined text, first, with
no check on the member; the value stub (0x013abac0) runs only when the matcher gives nothing and the
holder is still enabled with a member. Covers a disabled holder, null and empty texts, a text that
fails the name check, an invalid allocator heap, a matcher that accepts inline and heap texts, a
refused text with and without a value, and a missing member.
"""
import json
import os
import struct
import sys

ADDRESS = '0x013a2e50'
NAME_CHECK = '0x02fbf3b8'
STRLEN = '0x02fbf228'
ALLOC = '0x0247d7a0'
JOIN = '0x02a39560'
MATCHER = '0x013abad0'
VALUE = '0x013abac0'
FATAL = '0x024b55b0'
INFO, FREE = '0x00400020', '0x004000a0'
SEPARATOR_LENGTH = 1


def u32(v):
    return struct.pack('<I', v & 0xffffffff).hex()


def u64(v):
    return struct.pack('<Q', v & (2 ** 64 - 1)).hex()


def case(cid, enabled=1, first='one', second='two', name1=1, name2=1, info=0x20, heap=False,
         matcher=False, value=True, member='buf', matcher_clears=None):
    """first and second: 'one' or 'two' (non-empty), 'empty', or None for a null pointer.

    member: 'buf', 'null', or 'holder' (the member is the holder itself, so the matcher's writes reach it);
    matcher_clears: 'enabled' makes the matcher stub clear the holder's enable word (member 'holder' only).
    """
    b = {'holder': {'size': 0x20, 'bytes': u32(enabled)}, 'member': {'size': 8},
         'one': {'size': 0x10, 'bytes': '4100'}, 'two': {'size': 0x10, 'bytes': '4200'},
         'empty': {'size': 0x10}, 'context': {'size': 0x10}, 'alloc': {'size': 8},
         'alloc_vt': {'size': 0x78}, 'heap': {'size': 0x20}, 'value': {'size': 8}, 'matched': {'size': 8}}
    m = [{'addr': 'buf:alloc', 'pointer': 'alloc_vt'},
         {'addr': 'buf:alloc_vt+32', 'guest': INFO},
         {'addr': 'buf:alloc_vt+112', 'guest': FREE}]
    if member == 'buf':
        m.append({'addr': 'buf:holder+24', 'pointer': 'member'})
    elif member == 'holder':
        m.append({'addr': 'buf:holder+24', 'pointer': 'holder'})
    else:
        m.append({'addr': 'buf:holder+24', 'bytes': '00' * 8})
    has_member = member != 'null'
    cleared = matcher_clears in ('enabled', 'member') and member == 'holder'
    stubs = []
    if enabled and first is not None and second is not None:
        stubs.append({'address': NAME_CHECK, 'argc': 2, 'argi': [0, 1], 'ret': name1})
        if name1:
            stubs.append({'address': NAME_CHECK, 'argc': 2, 'argi': [0, 1], 'ret': name2})
        if name1 and name2:
            stubs.append({'address': ALLOC, 'argc': 0, 'ret': 'buf:alloc'})
            stubs.append({'address': INFO, 'argc': 3, 'argi': [0, 1, 2],
                          'writes': [{'arg': 0, 'offset': 0, 'bytes': u32(info)[:2]}]})
            if not info & 0x20:
                stubs.append({'address': FATAL, 'argc': 3, 'argi': [0, 1, 2]})
            if first not in (None, 'empty'):
                stubs.append({'address': STRLEN, 'argc': 1, 'argi': [0], 'ret': 2})
            stubs.append({'address': STRLEN, 'argc': 1, 'argi': [0], 'ret': SEPARATOR_LENGTH})
            if second not in (None, 'empty'):
                stubs.append({'address': STRLEN, 'argc': 1, 'argi': [0], 'ret': 2})
            stubs.append({'address': JOIN, 'argc': 3, 'argi': [0, 1, 2]})
            join_heap = [{'arg': 0, 'offset': 0x20, 'bytes': u64(0x10)},
                         {'arg': 0, 'offset': 8, 'pointer': 'heap'}]
            stubs.append({'address': JOIN, 'argc': 3, 'argi': [0, 1, 2], 'writes': join_heap if heap else []})
            stubs.append({'address': JOIN, 'argc': 3, 'argi': [0, 1, 2]})
            matcher_writes = []
            if cleared:
                if matcher_clears == 'enabled':
                    matcher_writes = [{'arg': 0, 'offset': 0, 'bytes': '00' * 4}]
                else:
                    matcher_writes = [{'arg': 0, 'offset': 0x18, 'bytes': '00' * 8}]
            if has_member:
                stubs.append({'address': MATCHER, 'argc': 2, 'argi': [0, 1],
                              'ret': 'buf:matched' if matcher else 0, 'writes': matcher_writes})
            if has_member and not matcher and enabled and not cleared:
                stubs.append({'address': VALUE, 'argc': 4, 'argi': [0, 1, 2, 3],
                              'ret': 'buf:value' if value else 0})
            if heap:
                stubs.append({'address': FREE, 'argc': 2, 'argi': [0, 1]})
    args = {'rdi': 'buf:holder', 'rsi': 0 if first is None else f'buf:{first}',
            'rdx': 0 if second is None else f'buf:{second}', 'rcx': 'buf:context'}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': args,
            'buffers': b, 'memory': m, 'stubs': stubs, 'imports': []}


CASES = [
    case('disabled_holder', enabled=0),
    case('first_text_null', first=None),
    case('second_text_null', second=None),
    case('first_fails_name', name1=0),
    case('second_fails_name', name2=0),
    case('allocator_heap_invalid', info=0, matcher=True),
    case('inline_matcher_accepts', matcher=True),
    case('heap_matcher_accepts', heap=True, matcher=True),
    case('inline_value_found', value=True),
    case('inline_no_value', value=False),
    case('heap_no_value', heap=True, value=False),
    case('member_missing', member='null'),
    case('enabled_cleared_by_matcher', member='holder', matcher_clears='enabled'),
    case('member_cleared_by_matcher', member='holder', matcher_clears='member'),
    case('first_empty', first='empty'),
    case('second_empty', second='empty'),
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
