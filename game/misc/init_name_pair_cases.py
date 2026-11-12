#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_init_name_pair_013b92f0 (0x013b92f0), for tools/verify.py run.

usage: init_name_pair_cases.py OUT_DIR

The allocator is a fake object whose info slot (0x20) gives its valid flag; the info slot runs once per name, and
the fatal report (0x024b55b0) runs when a heap is not valid and then returns. The length (0x02fbf228) is taken only
for a non-empty text, and the assignment (0x02a2a720) runs once per name, the first before the second. A null text
takes the default text of its name, read from the executable's data at 0x056f3978 (first) and 0x056f3980 (second).
The capacity test of the first name after its own reset is never taken on the original's path (the capacity was
set to 7 just before), which is declared below.
"""
import json
import os
import struct
import sys

ADDRESS = '0x013b92f0'
ALLOC_INFO = '0x00400020'
LENGTH = '0x02fbf228'
ASSIGN = '0x02a2a720'
FATAL = '0x024b55b0'
DEFAULT_FIRST = '0x056f3978'
DEFAULT_SECOND = '0x056f3980'
OBJECT_BYTES = 0x88
CALLBACK_A = 0x1122334455667788
CALLBACK_B = 0xffffffff00000001

# The branch at 0x013b93d8 tests the first name's capacity right after it was set to the inline capacity (7),
# so its heap side cannot be reached by any input.
UNREACHABLE = {
    '0x013b93d8': ('fallthrough', 'the first name capacity was set to 7 just before, so the heap branch is never taken'),
}


def u8(v):
    return struct.pack('<B', v & 0xff).hex()


def case(cid, first='one', second='one', d1='one', d2='one', info1=0x20, info2=0x20, callback=CALLBACK_A):
    """first and second: 'one' (one character), 'empty' (a zero character), or None (a null pointer, which takes the
    default text). d1 and d2: the default texts the executable's data points at. info1 and info2: the flags byte the
    info slot writes for the first and second name check."""
    b = {'object': {'size': OBJECT_BYTES, 'bytes': 'ee' * OBJECT_BYTES},
         'alloc': {'size': 8}, 'alloc_vt': {'size': 0x78},
         'one': {'size': 0x10, 'bytes': '4100'}, 'empty': {'size': 0x10}}
    m = [{'addr': 'buf:alloc', 'pointer': 'alloc_vt'},
         {'addr': 'buf:alloc_vt+32', 'guest': ALLOC_INFO},
         {'addr': DEFAULT_FIRST, 'pointer': d1},
         {'addr': DEFAULT_SECOND, 'pointer': d2}]
    stubs = [{'address': ALLOC_INFO, 'argc': 3, 'argi': [0, 1, 2],
              'writes': [{'arg': 0, 'offset': 0, 'bytes': u8(info1)}]}]
    if not info1 & 0x20:
        stubs.append({'address': FATAL, 'argc': 3, 'argi': [0, 1, 2]})
    stubs.append({'address': ALLOC_INFO, 'argc': 3, 'argi': [0, 1, 2],
                  'writes': [{'arg': 0, 'offset': 0, 'bytes': u8(info2)}]})
    if not info2 & 0x20:
        stubs.append({'address': FATAL, 'argc': 3, 'argi': [0, 1, 2]})
    # The first name's text, then the second's: a length call for a non-empty text, then the assignment.
    for text in (first if first is not None else d1, second if second is not None else d2):
        if text == 'one':
            stubs.append({'address': LENGTH, 'argc': 1, 'argi': [0], 'ret': 1})
        stubs.append({'address': ASSIGN, 'argc': 3, 'argi': [0, 1, 2]})
    args = {'rdi': 'buf:object', 'rsi': 'buf:alloc',
            'rdx': 0 if first is None else f'buf:{first}',
            'rcx': 0 if second is None else f'buf:{second}',
            'r8': callback}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': args,
            'buffers': b, 'memory': m, 'stubs': stubs, 'imports': []}


CASES = [
    case('both_texts', first='one', second='one'),
    case('both_empty_texts', first='empty', second='empty', callback=CALLBACK_B),
    case('first_one_second_empty', first='one', second='empty'),
    case('first_null_default_one_second_null_default_empty', first=None, second=None, d1='one', d2='empty'),
    case('first_null_default_empty_second_null_default_one', first=None, second=None, d1='empty', d2='one'),
    case('first_text_second_null_default_one', first='one', second=None, d2='one'),
    case('first_empty_second_null_default_empty', first='empty', second=None, d2='empty'),
    case('first_heap_invalid', first='one', second='one', info1=0x00, info2=0x20),
    case('second_heap_invalid', first='one', second='empty', info1=0x20, info2=0x00),
    case('both_heap_invalid_defaults', first=None, second=None, d1='one', d2='one', info1=0x00, info2=0x00),
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
