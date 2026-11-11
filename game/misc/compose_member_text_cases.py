#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_compose_member_text_013a2a40 (0x013a2a40), for tools/verify.py run.

usage: compose_member_text_cases.py OUT_DIR

The holder carries an enable word at +0x00 and a member at +0x18. Each text must pass the name check
(a stub). The allocator from 0x0247d7a0 is a fake object whose info slot (0x20) gives its valid flag
and whose free slot (0x70) is stubbed. The join stub for the separator writes a heap text when the
case asks for one. Covers a disabled holder, null and empty texts, a text that fails the name check,
an allocator whose heap is not valid (the fatal report, then on), inline and heap joins, and a
member that gives no value.
"""
import json
import os
import struct
import sys

ADDRESS = '0x013a2a40'
NAME_CHECK = '0x02fbf3b8'
STRLEN = '0x02fbf228'
ALLOC = '0x0247d7a0'
JOIN = '0x02a39560'
VALUE = '0x013abac0'
FATAL = '0x024b55b0'
INFO, FREE = '0x00400020', '0x004000a0'
SEPARATOR_LENGTH = 1


def u32(v):
    return struct.pack('<I', v & 0xffffffff).hex()


def u64(v):
    return struct.pack('<Q', v & (2 ** 64 - 1)).hex()


def case(cid, enabled=1, first='one', second='two', name1=1, name2=1, info=0x20, heap=False, value=True):
    """first and second: 'one' or 'two' (non-empty), 'empty', or None for a null pointer."""
    b = {'holder': {'size': 0x20, 'bytes': u32(enabled)}, 'member': {'size': 8},
         'one': {'size': 0x10, 'bytes': '4100'}, 'two': {'size': 0x10, 'bytes': '4200'},
         'empty': {'size': 0x10}, 'context': {'size': 0x10}, 'alloc': {'size': 8},
         'alloc_vt': {'size': 0x78}, 'heap': {'size': 0x20}, 'value': {'size': 8}}
    m = [{'addr': 'buf:holder+24', 'pointer': 'member'},
         {'addr': 'buf:alloc', 'pointer': 'alloc_vt'},
         {'addr': 'buf:alloc_vt+32', 'guest': INFO},
         {'addr': 'buf:alloc_vt+112', 'guest': FREE}]
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
            # The first text, the separator and the second text are each measured (when non-empty) and joined.
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
    case('allocator_heap_invalid', info=0),
    case('inline_join_with_value', value=True),
    case('inline_join_no_value', value=False),
    case('heap_join_with_value', heap=True),
    case('heap_join_no_value', heap=True, value=False),
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
