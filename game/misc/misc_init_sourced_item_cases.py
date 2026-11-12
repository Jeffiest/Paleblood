#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic sourced item objects for bb_misc_init_sourced_item (0x00cd44b0).

usage: misc_init_sourced_item_cases.py OUT_DIR

No held item, an uncounted item, a counted item that gains a reference, and a counted item whose low half
wraps from 0xffff. The object starts with marker bytes, the source record has a pattern in all 32 bytes, and
the held item's bytes are compared, so the copy, the vtables, the stores and the retained count are checked.
The routine returns the marker value.
"""
import json
import os
import struct
import sys

ADDRESS = '0x00cd44b0'
OBJECT_SIZE = 0x78
SOURCE_SIZE = 0x20
ITEM_SIZE = 0x20
MARKER = 0x3a83126f00000000
MASK32 = (1 << 32) - 1


def u32(v):
    return struct.pack('<I', v & MASK32).hex()


def case(cid, held=None, word=0x0, low=0x1122334455667788, high=0x99aabbccddeeff00,
         qword=0x0123456789abcdef, tail=0xfedcba9876543210):
    """held: None for no item, else True; word: the held item's count word."""
    source = struct.pack('<QQQQ', low, high, qword, tail).hex()
    memory = []
    args = {'rdi': 'buf:object', 'rdx': 'buf:source'}
    if held is None:
        args['rsi'] = 0
    else:
        args['rsi'] = 'buf:item'
        memory.append({'addr': 'buf:item+0x8', 'bytes': u32(word)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': args,
            'buffers': {'object': {'size': OBJECT_SIZE, 'bytes': 'a5' * OBJECT_SIZE},
                        'source': {'size': SOURCE_SIZE, 'bytes': source},
                        'item': {'size': ITEM_SIZE, 'bytes': '00' * ITEM_SIZE}},
            'memory': memory, 'imports': [], 'stubs': []}


# A compare-exchange retry needs another thread to change the word between the read and the exchange.
UNREACHABLE = {
    '0x00cd4522': ('taken', 'compare-exchange retry needs another thread to change the word between read and exchange'),
}

CASES = [
    case('no_held_item'),
    case('uncounted_item', held=True, word=0x0),
    case('counted_item_gains_reference', held=True, word=0x10005),
    case('counted_low_half_wraps', held=True, word=0x1ffff),
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
