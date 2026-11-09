#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic calls for bb_misc_alloc_block_with_value (0x02b3e300): the object's slot at +0x28 gives
zero or a value, the allocator gives a block or zero, and the fill routine receives the value, the
word and the context. Every stub is scripted, so the fill routine's result is not used.

usage: alloc_block_with_value_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02b3e300'
SLOT_28 = '0x004000a0'       # a real game function entry stubbed as the object's slot at +0x28
ALLOCATE = '0x0247c4e0'
FILL = '0x02b40850'
SLOT = 0x28
MASK64 = (1 << 64) - 1


def u64(v):
    return struct.pack('<Q', v & MASK64).hex()


def case(cid, slot_ret, block=None, value=0x11, word=0x22):
    """slot_ret is what the object's slot gives; block is what the allocator gives (None for zero).
    The fill routine is stubbed only when a block was given."""
    buffers = {'ref': {'size': 0x10, 'bytes': '00' * 0x10},
               'object': {'size': 0x10, 'bytes': '00' * 0x10},
               'vtable': {'size': 0x48, 'bytes': '00' * 0x48},
               'context': {'size': 0x10, 'bytes': '00' * 0x10},
               'block': {'size': 0x30, 'bytes': '00' * 0x30}}
    memory = [{'addr': 'buf:ref+0x0', 'pointer': 'object'},
              {'addr': 'buf:ref+0x8', 'pointer': 'context'},
              {'addr': 'buf:object+0x0', 'pointer': 'vtable'},
              {'addr': f'buf:vtable+{SLOT:#x}', 'guest': SLOT_28}]
    stubs = [{'address': SLOT_28, 'argc': 2, 'ret': slot_ret}]
    if slot_ret != '0x0':
        stubs.append({'address': ALLOCATE, 'argc': 3,
                      'ret': 'buf:block' if block else '0x0'})
    if block:
        stubs.append({'address': FILL, 'argc': 4})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:ref', 'rsi': hex(word & MASK64), 'rdx': hex(value)},
            'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('slot_gives_zero', slot_ret='0x0'),
    case('slot_gives_value_allocation_fails', slot_ret='0x77'),
    case('slot_gives_value_block_made', slot_ret='0x77', block=True),
    case('block_made_high_word', slot_ret='0x8000000000000001', block=True,
         value=0xffffffff, word=MASK64),
    case('block_made_zero_word', slot_ret='0x5', block=True, value=0, word=0),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print(f'usage: {Path(__file__).name} OUT_DIR', file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        with (output / (fixture['id'] + '.json')).open('w') as stream:
            stream.write(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} synthetic cases written to {output}')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
