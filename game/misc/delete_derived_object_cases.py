#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_delete_derived_object (0x00c244d0), for tools/verify.py run.

usage: delete_derived_object_cases.py OUT_DIR

A derived object (0xb8 bytes) holding a reference item at +0xb0, or nothing. The item's count word is
varied: last reference (destroyed), two references, not counted (no flag), counted with a zero low half
(wraps, not destroyed), and no item at all. The size word's high half is the default marker (0xffff,
block size 0xc0) or a block size of 0x30. The base destructor (0x00cb4720) and the thread allocator's
sized free (slot 0x18) are stubs; the free's result comes back in RAX.
The thread's allocator holder is reached from the thread-local offset at 0x057e40f8, as in the other
loading and misc cases.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x00c244d0'
BASE_DESTRUCTOR = '0x00cb4720'
ITEM_DESTROY = '0x00400020'      # the reference item's destroy slot at 0x20; stubbed (a real game entry)
SIZED_FREE = '0x004000a0'        # the allocator's sized free slot at 0x18; stubbed (a real game entry)
TLS_SLOT = -0x730                # value of the thread-local offset global at 0x057e40f8
HOLDER_ALLOCATOR_SLOT = 0x58
OBJECT_SIZE = 0xb8
HOLDER_OFFSET = 0xb0
DEFAULT_SIZE_WORD = 0xffff0000
FREE_RESULT = 0x7777
BASE_RESULT = 0x5151

UNREACHABLE = {
    '0x00c2452d': ('taken', 'compare-exchange retry: no other thread can change the count word'),
}


def case(cid, count=None, size_word=DEFAULT_SIZE_WORD, fill='a5'):
    """count: the reference item's count word, or None for no held item."""
    below = -TLS_SLOT
    obj = (fill * 8 + struct.pack('<I', size_word).hex() + fill * (HOLDER_OFFSET - 12) + '00' * 8
           + fill * (OBJECT_SIZE - HOLDER_OFFSET - 8))
    buffers = {'tls': {'size': below + 8}, 'holder': {'size': 0x60}, 'talloc': {'size': 0x10},
               'talloc_vt': {'size': 0x80}, 'obj': {'size': OBJECT_SIZE, 'bytes': obj}}
    memory = [{'addr': '0x057e40f8', 'bytes': struct.pack('<q', TLS_SLOT).hex()},
              {'addr': f'buf:tls+{below}', 'pointer': f'tls+{below}'},
              {'addr': 'buf:tls+0', 'pointer': 'holder'},
              {'addr': f'buf:holder+{HOLDER_ALLOCATOR_SLOT:#x}', 'pointer': 'talloc'},
              {'addr': 'buf:talloc+0', 'pointer': 'talloc_vt'},
              {'addr': f'buf:talloc_vt+{0x18:#x}', 'guest': SIZED_FREE}]
    stubs = [{'address': BASE_DESTRUCTOR, 'argc': 1, 'ret': BASE_RESULT},
             {'address': SIZED_FREE, 'argc': 3, 'ret': FREE_RESULT}]
    if count is not None:
        buffers['item'] = {'size': 0x40}
        buffers['item_vt'] = {'size': 0x28}
        memory += [{'addr': f'buf:obj+{HOLDER_OFFSET}', 'pointer': 'item'},
                   {'addr': 'buf:item+0', 'pointer': 'item_vt'},
                   {'addr': 'buf:item+8', 'bytes': struct.pack('<I', count).hex()},
                   {'addr': f'buf:item_vt+{0x20:#x}', 'guest': ITEM_DESTROY}]
        if count >= 0x10000 and (count & 0xffff) == 1:
            stubs.insert(0, {'address': ITEM_DESTROY, 'argc': 1})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'gs': f'buf:tls+{below}',
            'args': {'rdi': 'buf:obj'}, 'buffers': buffers, 'memory': memory, 'imports': [],
            'stubs': stubs}


CASES = [
    case('no_held_item'),
    case('last_reference_destroys', count=0x10001),
    case('two_references_keep', count=0x10002),
    case('not_counted_skipped', count=0x5),
    case('zero_low_half_wraps', count=0x10000),
    case('last_reference_small_block', count=0x10001, size_word=0x00300000),
    case('no_item_small_block', size_word=0x00300000),
    case('two_references_all_ones_high', count=0xffff0002, size_word=0x00300000, fill='00'),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        (output / (fixture['id'] + '.json')).write_text(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} cases written to {output}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
