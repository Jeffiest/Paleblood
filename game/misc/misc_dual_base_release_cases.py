#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic two-base objects for bb_misc_dual_base_release (0x00cd4280).

usage: misc_dual_base_release_cases.py OUT_DIR

No item, an uncounted item, a counted item that stays referenced, and a counted item whose last reference
is released (its destroy slot, through a real entry at 0x00400020, is called). The object's marker bytes
are compared, so both vtable pointers and the cleared item pointer are checked.
"""
import json
import os
import struct
import sys

ADDRESS = '0x00cd4280'
DESTROY = '0x00400020'
OBJECT_SIZE = 0x28
ITEM_SIZE = 0x20
MASK32 = (1 << 32) - 1


def u32(v):
    return struct.pack('<I', v & MASK32).hex()


def case(cid, held=None, word=0x0):
    """held: None for no item, else the word of the item the object holds."""
    object_bytes = 'a5' * 0x20 + '00' * 8
    memory = [{'addr': 'buf:vt+0x20', 'guest': DESTROY}]
    stubs = []
    if held is not None:
        memory += [{'addr': 'buf:obj+0x20', 'pointer': 'item'},
                   {'addr': 'buf:item+0x0', 'pointer': 'vt'},
                   {'addr': 'buf:item+0x8', 'bytes': u32(word)}]
        if word >= 0x10000 and (word & 0xffff) == 1:
            stubs.append({'address': DESTROY, 'argc': 1})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:obj'},
            'buffers': {'obj': {'size': OBJECT_SIZE, 'bytes': object_bytes},
                        'item': {'size': ITEM_SIZE, 'bytes': '00' * ITEM_SIZE},
                        'vt': {'size': 0x40, 'bytes': '00' * 0x40}},
            'memory': memory, 'imports': [], 'stubs': stubs}


# The compare-exchange retry only repeats when another thread changes the word between the read and the exchange.
UNREACHABLE = {
    '0x00cd42dd': ('taken', 'compare-exchange retry needs another thread to change the word between read and exchange'),
}

CASES = [
    case('no_item'),
    case('uncounted_item', held=True, word=0x0),
    case('counted_item_kept', held=True, word=0x10005),
    case('counted_last_reference_destroyed', held=True, word=0x10001),
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
