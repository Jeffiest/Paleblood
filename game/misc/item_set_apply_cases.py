#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic item sets for bb_misc_item_set_apply (0x00b6e2a0).

usage: item_set_apply_cases.py OUT_DIR

A set that is disabled or enabled, with no items, items of the first and second kinds in any order,
and items of other kinds that are left alone. The two kind callbacks are scripted as stubs.
"""
import json
import os
import struct
import sys

ADDRESS = '0x00b6e2a0'
APPLY_FIRST = '0x00b72480'
APPLY_SECOND = '0x00b723f0'
GUARD = '0x057e3be0'
KIND_FIRST = 0xd
KIND_SECOND = 0x1


def u32(v):
    return struct.pack('<I', v & 0xffffffff).hex()


def case(cid, kinds=(), enabled=1, scale=0x3f800000):
    """kinds: the kind of each item in order; the scale is the float's bit pattern."""
    stubs = []
    for kind in kinds:
        if kind == KIND_FIRST:
            stubs.append({'address': APPLY_FIRST, 'argc': 4})
        elif kind == KIND_SECOND:
            stubs.append({'address': APPLY_SECOND, 'argc': 4})
    memory = [{'addr': 'buf:owner+0x10', 'pointer': 'set'},
              {'addr': 'buf:set+0xb8', 'pointer': 'items'},
              {'addr': 'buf:set+0xc0', 'bytes': u32(len(kinds))},
              {'addr': 'buf:set+0x138', 'bytes': f'{enabled & 0xff:02x}'},
              {'addr': 'buf:set+0x13c', 'bytes': u32(scale)},
              {'addr': GUARD, 'pointer': 'guard'}]
    buffers = {'owner': {'size': 0x20, 'bytes': '00' * 0x20},
               'set': {'size': 0x140, 'bytes': '00' * 0x140},
               'items': {'size': max(8 * len(kinds), 8), 'bytes': '00' * max(8 * len(kinds), 8)},
               'guard': {'size': 8, 'bytes': 'c3' * 8}}
    for index, kind in enumerate(kinds):
        buffers[f'item{index}'] = {'size': 0x20, 'bytes': '00' * 0x20}
        memory += [{'addr': f'buf:items+{8 * index:#x}', 'pointer': f'item{index}'},
                   {'addr': f'buf:item{index}+0x18', 'bytes': u32(kind)}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': '0x0', 'rsi': 'buf:owner', 'rdx': 'buf:context'},
            'buffers': dict(buffers, context={'size': 0x10, 'bytes': '00' * 0x10}),
            'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('disabled_set_untouched', kinds=(KIND_FIRST, KIND_SECOND), enabled=0),
    case('enabled_no_items', kinds=()),
    case('first_kind_once', kinds=(KIND_FIRST,)),
    case('second_kind_once', kinds=(KIND_SECOND,)),
    case('mixed_kinds_in_order', kinds=(KIND_SECOND, 0x5, KIND_FIRST, KIND_SECOND)),
    case('other_kinds_only', kinds=(0x0, 0x7)),
    case('negative_scale_bits', kinds=(KIND_FIRST,), scale=0xbf800000),
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
