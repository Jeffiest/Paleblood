#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic reference holders for bb_misc_ref_holder_attach (0x00b69c60).

usage: ref_holder_attach_cases.py OUT_DIR

Items with an uncounted word, a counted word, a counted word whose low half wraps, and a word below
the counted threshold; items already attached, attached lists that are full and need growing, and
holders with no, one and two children told about the attach.
"""
import json
import os
import struct
import sys

ADDRESS = '0x00b69c60'
GROW = '0x00819100'
NOTIFY_ADD = '0x00400180'
MASK32 = (1 << 32) - 1


def u32(v):
    return struct.pack('<I', v & MASK32).hex()


def case(cid, attached=0, attached_has_item=False, capacity=4, word=0x0, children=0,
         flag_bits=0):
    """attached: how many other items are attached before the call; attached_has_item puts the item
    in the list at the start instead. The grow call moves the attached list to a new buffer."""
    memory = [{'addr': 'buf:holder+0x20', 'pointer': 'attached'},
              {'addr': 'buf:holder+0x28', 'bytes': u32(attached + (1 if attached_has_item else 0))},
              {'addr': 'buf:holder+0x2c', 'bytes': u32(capacity | flag_bits)},
              {'addr': 'buf:holder+0x40', 'pointer': 'children'},
              {'addr': 'buf:holder+0x48', 'bytes': u32(children)},
              {'addr': 'buf:holder+0x4c', 'bytes': u32(4)},
              {'addr': 'buf:item+0x8', 'bytes': u32(word)}]
    if attached_has_item:
        memory.append({'addr': 'buf:attached+0x0', 'pointer': 'item'})
    for index in range(children):
        memory += [{'addr': f'buf:children+{8 * index:#x}', 'pointer': f'child{index}'},
                   {'addr': f'buf:child{index}', 'pointer': 'cvt'}]
    stubs = []
    count = attached + (1 if attached_has_item else 0)
    if not attached_has_item:
        if count == (capacity & 0x3fffffff):
            stubs.append({'address': GROW, 'argc': 3,
                          'writes': [{'arg': 1, 'offset': 0, 'pointer': 'grown_attached'}]})
    for _ in range(children):
        stubs.append({'address': NOTIFY_ADD, 'argc': 2})
    buffers = {'holder': {'size': 0x60, 'bytes': 'a5' * 0x60},
               'attached': {'size': 0x40, 'bytes': '5a' * 0x40},
               'grown_attached': {'size': 0x40, 'bytes': '00' * 0x40},
               'children': {'size': max(8 * children, 8), 'bytes': '00' * max(8 * children, 8)},
               'item': {'size': 0x10, 'bytes': '00' * 0x10},
               'cvt': {'size': 0x40, 'bytes': '00' * 0x40}}
    for index in range(children):
        buffers[f'child{index}'] = {'size': 8, 'bytes': '00' * 8}
    memory.append({'addr': 'buf:cvt+0x20', 'guest': NOTIFY_ADD})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:holder', 'rsi': 'buf:item'},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


# The search exits at a match with the index one below the count, never negative, so the not-negative
# fallthrough cannot happen; a compare-exchange retry needs another thread to change the word first.
UNREACHABLE = {
    '0x00b69c93': ('fallthrough', 'the search index after a match is never negative'),
    '0x00b69cc9': ('taken', 'compare-exchange retry needs another thread to change the word between read and exchange'),
}

CASES = [
    case('attach_uncounted_two_children', attached=1, word=0x0, children=2),
    case('attach_uncounted_no_children', attached=0, word=0x0, children=0),
    case('attach_below_threshold_high_bit', attached=0, word=0xffff, children=1),
    case('already_attached_returns', attached=0, attached_has_item=True, word=0x10001, children=2),
    case('counted_increments', attached=0, word=0x10001, children=1),
    case('counted_low_half_wraps', attached=0, word=0x1ffff, children=0),
    case('full_attached_grows', attached=4, capacity=4, word=0x0, children=1),
    case('capacity_flags_no_grow', attached=2, capacity=4, flag_bits=0xc0000000, word=0x20002, children=1),
    case('counted_and_grows', attached=4, capacity=4, word=0x10003, children=2),
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
