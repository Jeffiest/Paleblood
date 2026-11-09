#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic slot tables for take_slot_item at 0x0139b0e0, for tools/verify.py run.

usage: take_slot_item_cases.py OUT_DIR

The table holds three 0x20-byte slots; each used slot has a capacity, a count, an item list and a
flag array. Covers out-of-range indices, full lists, counts above capacity, the last free entry,
both slots, and the item values that set a flag byte.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x0139b0e0'
TABLE_BYTES = 0x48
SLOT_BASE = (0x00, 0x20)
MASK32 = (1 << 32) - 1
GARBAGE = {'rsi': '0x1111111111111111', 'rdx': '0xffffffffffffffff', 'rcx': '0x0',
           'r8': '0x8080808080808080', 'r9': '0x7f'}


def i32(value):
    """Encode a signed 32-bit value."""
    return struct.pack('<i', value).hex()


def case(cid, index=0, slots=((4, 0, [0, 0, 0, 0]), (4, 0, [0, 0, 0, 0])), flags=(0, 0), limit=0x7fffffff,
         registers=None):
    """One take: the slots as (capacity, count, items), the flag arrays and the index argument."""
    buffers = {'table': {'size': TABLE_BYTES, 'bytes': 'd3' * TABLE_BYTES}}
    memory = [{'addr': 'buf:table+0x40', 'bytes': i32(limit)}]
    for number, (base, (capacity, count, items)) in enumerate(zip(SLOT_BASE, slots)):
        buffers[f'items{number}'] = {'size': 4 * len(items), 'bytes': ''.join(i32(v) for v in items)}
        buffers[f'flags{number}'] = {'size': 8, 'bytes': bytes(flags[number]).hex()}
        memory += [{'addr': f'buf:table+0x{base + 0x8:x}', 'bytes': i32(capacity)},
                   {'addr': f'buf:table+0x{base + 0xc:x}', 'bytes': i32(count)},
                   {'addr': f'buf:table+0x{base + 0x10:x}', 'pointer': f'items{number}'},
                   {'addr': f'buf:table+0x{base + 0x18:x}', 'pointer': f'flags{number}'}]
    args = {'rdi': 'buf:table', 'rsi': hex(index & MASK32), **GARBAGE}
    if registers is not None:
        args = dict(registers)
    args['rsi'] = hex(index & MASK32)
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i32', 'args': args,
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': []}


NO_FLAGS = ((0,) * 8, (0,) * 8)
SLOT_ITEMS = ((4, 1, [3, 2, 1, 0]), (4, 0, [5, 6, 7, 0]))

CASES = [
    case('slot0_takes_item_at_count', slots=SLOT_ITEMS, flags=NO_FLAGS),
    case('slot1_takes_first_item', index=1, slots=SLOT_ITEMS, flags=NO_FLAGS),
    case('index_two_rejected', index=2, slots=SLOT_ITEMS, flags=NO_FLAGS),
    case('index_all_ones_rejected', index=MASK32, slots=SLOT_ITEMS, flags=NO_FLAGS),
    case('full_list_rejected', slots=((2, 2, [3, 2]), (4, 0, [0, 0, 0, 0])), flags=NO_FLAGS),
    case('count_above_capacity_rejected', slots=((2, 3, [3, 2, 1]), (4, 0, [0, 0, 0, 0])), flags=NO_FLAGS),
    case('last_free_entry_taken', slots=((2, 1, [6, 4]), (4, 0, [0, 0, 0, 0])), flags=NO_FLAGS),
    case('first_item_zero_taken', slots=((4, 0, [0, 1, 2, 3]), (4, 0, [0, 0, 0, 0])), flags=NO_FLAGS),
    case('item_already_flagged_taken_again', slots=((4, 0, [4, 1, 2, 3]),
                                                    (4, 0, [0, 0, 0, 0])),
         flags=((0, 0, 0, 0, 1, 0, 0, 0), (0,) * 8)),
    case('other_slot_flags_untouched', index=1, slots=((4, 0, [3, 1, 2, 0]), (4, 0, [7, 1, 2, 0])),
         flags=((0,) * 8, (0,) * 8)),
    case('limit_word_not_read', slots=((4, 0, [2, 1, 0, 0]), (4, 0, [0, 0, 0, 0])), limit=0,
         flags=NO_FLAGS),
    case('count_zero_index_one_zero_capacity', index=1, slots=((4, 0, [0, 0, 0, 0]), (0, 0, [0, 0, 0, 0])),
         flags=NO_FLAGS),
]


def main():
    """Write deterministic fixtures to the requested directory."""
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
