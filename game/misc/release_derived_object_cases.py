#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_release_derived_object (0x00c24590), for tools/verify.py run.

usage: release_derived_object_cases.py OUT_DIR

A derived object (0xb8 bytes) holding a reference item at +0xb0, or nothing. The item's count word is
varied as in misc_delete_derived_object: last reference (destroyed), two references, not counted, a zero
low half (wraps, not destroyed), and no item. The base destructor (0x00cb4720) is a stub whose result is
returned in RAX, since the original tail-calls it.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x00c24590'
BASE_DESTRUCTOR = '0x00cb4720'
ITEM_DESTROY = '0x00400020'      # the reference item's destroy slot at 0x20; stubbed (a real game entry)
OBJECT_SIZE = 0xb8
HOLDER_OFFSET = 0xb0
BASE_RESULT = 0x5151

UNREACHABLE = {
    '0x00c245ed': ('taken', 'compare-exchange retry: no other thread can change the count word'),
}


def case(cid, count=None, fill='a5'):
    """count: the reference item's count word, or None for no held item."""
    obj = fill * 8 + struct.pack('<I', 0xffff0000).hex() + fill * (HOLDER_OFFSET - 12) + '00' * 8
    buffers = {'obj': {'size': OBJECT_SIZE, 'bytes': obj}}
    memory = []
    stubs = [{'address': BASE_DESTRUCTOR, 'argc': 1, 'ret': BASE_RESULT}]
    if count is not None:
        buffers['item'] = {'size': 0x40}
        buffers['item_vt'] = {'size': 0x28}
        memory += [{'addr': f'buf:obj+{HOLDER_OFFSET}', 'pointer': 'item'},
                   {'addr': 'buf:item+0', 'pointer': 'item_vt'},
                   {'addr': 'buf:item+8', 'bytes': struct.pack('<I', count).hex()},
                   {'addr': f'buf:item_vt+{0x20:#x}', 'guest': ITEM_DESTROY}]
        if count >= 0x10000 and (count & 0xffff) == 1:
            stubs.insert(0, {'address': ITEM_DESTROY, 'argc': 1})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:obj'}, 'buffers': buffers, 'memory': memory, 'imports': [],
            'stubs': stubs}


CASES = [
    case('no_held_item'),
    case('last_reference_destroys', count=0x10001),
    case('two_references_keep', count=0x10002),
    case('not_counted_skipped', count=0x5),
    case('zero_low_half_wraps', count=0x10000),
    case('two_references_all_ones_high', count=0xffff0002, fill='00'),
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
