#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic slot tables for release_slot_item at 0x0139b120, for tools/verify.py run.

usage: release_slot_item_cases.py OUT_DIR

Three 0x20-byte slots, each with a limit word, capacity, count, item list and flag array. The
release reads the limit of the slot after the one it works on. Covers out-of-range indices,
negative items, items at and below the limit, unset flags, the accepted release for both slots,
and the list's last position.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x0139b120'
TABLE_BYTES = 0x60
SLOT_BASE = (0x00, 0x20, 0x40)
MASK32 = (1 << 32) - 1
GARBAGE = {'rdx': '0xffffffffffffffff', 'rcx': '0x0', 'r8': '0x8080808080808080', 'r9': '0x7f'}


def i32(value):
    """Encode a signed 32-bit value."""
    return struct.pack('<i', value).hex()


def case(cid, index=0, item=1, slots=((0x7fffffff, 4, 0, [0, 0, 0, 0]),
                                       (0x7fffffff, 4, 0, [0, 0, 0, 0]),
                                       (0x7fffffff, 4, 0, [0, 0, 0, 0])),
         flags=((0,) * 8, (0,) * 8, (0,) * 8), registers=None):
    """One release: each slot is (limit, capacity, count, items) and each flag row has eight bytes."""
    buffers = {'table': {'size': TABLE_BYTES, 'bytes': 'd3' * TABLE_BYTES}}
    memory = []
    for number, (base, (limit, capacity, count, items)) in enumerate(zip(SLOT_BASE, slots)):
        buffers[f'items{number}'] = {'size': 4 * len(items), 'bytes': ''.join(i32(v) for v in items)}
        buffers[f'flags{number}'] = {'size': 8, 'bytes': bytes(flags[number]).hex()}
        memory += [{'addr': f'buf:table+0x{base:x}', 'bytes': i32(limit)},
                   {'addr': f'buf:table+0x{base + 0x8:x}', 'bytes': i32(capacity)},
                   {'addr': f'buf:table+0x{base + 0xc:x}', 'bytes': i32(count)},
                   {'addr': f'buf:table+0x{base + 0x10:x}', 'pointer': f'items{number}'},
                   {'addr': f'buf:table+0x{base + 0x18:x}', 'pointer': f'flags{number}'}]
    args = {'rdi': 'buf:table', 'rsi': hex(index & MASK32), 'rdx': hex(item & MASK32), **GARBAGE}
    if registers is not None:
        args = dict(registers)
    args['rsi'] = hex(index & MASK32)
    args['rdx'] = hex(item & MASK32)
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': args,
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': []}


ONE_FLAG = ((0, 1, 0, 0, 0, 0, 0, 0), (0,) * 8, (0,) * 8)
HELD = ((0,) * 8, (0, 1, 0, 0, 0, 0, 0, 0), (0,) * 8)
ITEMS_SLOT0 = ((0x7fffffff, 4, 2, [9, 1, 0, 0]), (0x7fffffff, 4, 0, [0] * 4), (0x7fffffff, 4, 0, [0] * 4))

CASES = [
    case('slot0_releases_flagged_item', slots=ITEMS_SLOT0, item=1, flags=ONE_FLAG),
    case('slot1_releases_flagged_item', index=1, slots=((0x7fffffff, 4, 0, [0] * 4),
                                                        (0x7fffffff, 4, 1, [4, 5, 0, 0]),
                                                        (0x7fffffff, 4, 0, [0] * 4)),
         item=1, flags=HELD),
    case('index_two_rejected', index=2, slots=ITEMS_SLOT0, item=1, flags=ONE_FLAG),
    case('index_all_ones_rejected', index=MASK32, slots=ITEMS_SLOT0, item=1, flags=ONE_FLAG),
    case('negative_item_rejected', slots=ITEMS_SLOT0, item=-1, flags=ONE_FLAG),
    case('item_at_limit_rejected', slots=((0x7fffffff, 4, 2, [9, 1, 0, 0]), (1, 4, 0, [0] * 4),
                                          (0x7fffffff, 4, 0, [0] * 4)),
         item=1, flags=ONE_FLAG),
    case('item_below_limit_accepted', slots=((0x7fffffff, 4, 2, [9, 1, 0, 0]), (2, 4, 0, [0] * 4),
                                             (0x7fffffff, 4, 0, [0] * 4)),
         item=1, flags=ONE_FLAG),
    case('unflagged_item_rejected', slots=ITEMS_SLOT0, item=2, flags=ONE_FLAG),
    case('zero_item_accepted', slots=((0x7fffffff, 4, 1, [0, 0, 0, 0]), (0x7fffffff, 4, 0, [0] * 4),
                                      (0x7fffffff, 4, 0, [0] * 4)),
         item=0, flags=((1, 0, 0, 0, 0, 0, 0, 0), (0,) * 8, (0,) * 8)),
    case('index_two_flagged_rejected', index=2, slots=((0x7fffffff, 4, 0, [0] * 4),
                                                    (0x7fffffff, 4, 0, [0] * 4),
                                                    (0x7fffffff, 4, 1, [4, 5, 0, 0])),
         item=1, flags=((0,) * 8, (0,) * 8, HELD[1])),
    case('count_one_goes_to_zero', slots=((0x7fffffff, 4, 1, [3, 0, 0, 0]), (0x7fffffff, 4, 0, [0] * 4),
                                          (0x7fffffff, 4, 0, [0] * 4)),
         item=3, flags=((0, 0, 0, 1, 0, 0, 0, 0), (0,) * 8, (0,) * 8)),
    case('last_index_limit_from_third_slot', index=1, slots=((0x7fffffff, 4, 0, [0] * 4),
                                                             (0x7fffffff, 4, 1, [4, 5, 0, 0]),
                                                             (2, 4, 0, [0] * 4)),
         item=1, flags=HELD),
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
