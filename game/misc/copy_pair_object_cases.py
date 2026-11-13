#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic dual member objects for misc_copy_pair_object at 0x00d47c80, for tools/verify.py run.

usage: copy_pair_object_cases.py OUT_DIR

The copy calls the base copy routine at 0x00d628a0 with the destination and the source, stores the base vtable
(guest 0x05680200), initialises the first member at 0x00d6df20, clears the word at 0x78, stores the derived vtable
(guest 0x0567e460) and copies the second member with 0x008367c0. The source's held item at 0x90 gains a reference
when it is counted (its word at 0x08 has a high half of at least one; the low half wraps from 0xffff to 0), and the
destination takes the same pointer, which is also the function's result (zero when the source holds nothing).
The compare-exchange retry of the increment is declared unreachable.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x00d47c80'
BASE_COPY = '0x00d628a0'
FIRST_MEMBER = '0x00d6df20'
COPY_SECOND = '0x008367c0'
ITEM_SIZE = 0x40
OBJECT_SIZE = 0x98
GARBAGE = {'rdx': '0xffffffffffffffff', 'rcx': '0x8080808080808080', 'r8': '0x0123456789abcdef',
           'r9': '0x7f7f7f7f7f7f7f7f'}

# The retry of the compare-exchange in the increment only happens when another thread changes the word first.
UNREACHABLE = {
    '0x00d47d19': ('taken', 'compare-exchange retry: no other thread can change the value'),
}


def case(cid, held_word=None, registers=None):
    """One copy from a source holding an item with refcount word held_word (None for no item)."""
    buffers = {'self': {'size': OBJECT_SIZE, 'bytes': 'c3' * OBJECT_SIZE},
               'source': {'size': OBJECT_SIZE, 'bytes': 'a5' * OBJECT_SIZE}}
    memory = []
    if held_word is None:
        memory.append({'addr': 'buf:source+0x90', 'bytes': '00' * 8})
    else:
        item = bytearray(b'\xb2' * ITEM_SIZE)
        struct.pack_into('<I', item, 0x8, held_word & 0xffffffff)
        buffers['held'] = {'size': ITEM_SIZE, 'bytes': item.hex()}
        memory.append({'addr': 'buf:source+0x90', 'pointer': 'held'})
    args = {'rdi': 'buf:self', 'rsi': 'buf:source'}
    args.update(GARBAGE if registers is None else registers)
    stubs = [{'address': BASE_COPY, 'argc': 2, 'argi': [0, 1]},
             {'address': FIRST_MEMBER, 'argc': 1, 'argi': [0]},
             {'address': COPY_SECOND, 'argc': 2, 'argi': [0, 1]}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': args,
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('source_holds_nothing'),
    case('source_item_uncounted', held_word=0x0001),
    case('source_item_below_threshold', held_word=0xffff),
    case('source_item_at_threshold_increments', held_word=0x10000),
    case('source_item_counted_increments', held_word=0x10002),
    case('source_count_wraps_keeps_flag', held_word=0x1ffff),
    case('zero_registers_counted', held_word=0x10001, registers={k: '0x0' for k in GARBAGE}),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print(f'usage: {Path(__file__).name} OUT_DIR', file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        (output / (fixture['id'] + '.json')).write_text(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} synthetic cases written to {output}')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
