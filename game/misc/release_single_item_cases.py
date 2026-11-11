#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_release_single_item (0x00cb1480), for tools/verify.py run.

usage: release_single_item_cases.py OUT_DIR

An object whose item pointer at +0x20 is null, or a reference item counted with a last reference
(destroyed through its vtable slot 0x20, a stub), two references, a zero low half (wraps), or no flag.
The count word at +0x28 starts non-zero and must be cleared. The function returns nothing: its
original leaves RAX holding whatever the callee or count left there, and the virtual callers take no
value, so every case sets 'returns': 'void'.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x00cb1480'
DESTROY = '0x00400020'        # the item's destroy slot at 0x20; stubbed (a real game entry)
DESTROY_SLOT = 0x20

UNREACHABLE = {
    '0x00cb14bd': ('taken', 'compare-exchange retry: no other thread can change the count word'),
}


def u32(value):
    """A 32-bit little-endian word as hex."""
    return struct.pack('<I', value & 0xffffffff).hex()


def case(cid, count=None):
    """count: the held item's count word, or None for no item."""
    buffers = {'obj': {'size': 0x30, 'bytes': 'a5' * 0x20 + '00' * 8 + u32(0xdeadbeef)}}
    memory = []
    stubs = []
    if count is None:
        memory.append({'addr': 'buf:obj+32', 'bytes': '00' * 8})
    else:
        buffers['item'] = {'size': 0x40}
        buffers['item_vt'] = {'size': 0x28}
        memory += [{'addr': 'buf:obj+32', 'pointer': 'item'},
                   {'addr': 'buf:item+0', 'pointer': 'item_vt'},
                   {'addr': 'buf:item+8', 'bytes': u32(count)},
                   {'addr': f'buf:item_vt+{DESTROY_SLOT:#x}', 'guest': DESTROY}]
        if count >= 0x10000 and (count & 0xffff) == 1:
            stubs.append({'address': DESTROY, 'argc': 1})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:obj'}, 'buffers': buffers, 'memory': memory, 'imports': [],
            'stubs': stubs}


CASES = [
    case('no_item'),
    case('last_reference_destroyed', count=0x10001),
    case('two_references_kept', count=0x10002),
    case('zero_low_half_wraps', count=0x10000),
    case('not_counted_skipped', count=0x5),
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
