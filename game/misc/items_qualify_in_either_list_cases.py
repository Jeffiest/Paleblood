#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic item list pairs (0x022553a0): empty lists, a first-list item qualifying by rank above six or by its flag
bit 0x02 (at +0xed), a first list that does not qualify and does not stop the second, second-list items qualifying by
rank above four or by bit 0x04 at +0x128, and a qualifying second item after a non-qualifying one. Each visited item's
rank slot is stubbed in call order; the result is a bool in AL.

usage: items_qualify_in_either_list_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x022553a0'
RANK = '0x00400170'          # a real game function entry, stubbed as each item's rank slot
ITEM_VT_RANK_SLOT = 0x58
ITEM_SIZE = 0x130
FIRST_FLAGS = 0xed
SECOND_FLAGS = 0x128
FIRST_RANK_LIMIT = 6
SECOND_RANK_LIMIT = 4
FIRST_BIT = 0x02
SECOND_BIT = 0x04
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1


def case(cid, first=(), second=()):
    """A pair of lists of (rank, flag byte) items. Items are visited in order and each visited item's rank is stubbed;
    a first-list item qualifies by rank above six or its flag bit 0x02, a second-list item by rank above four or its
    flag bit 0x04. A list walk ends at its first qualifying item, and the second list is walked whatever the first gave."""
    buffers = {'pair': {'size': 0x48},
               'first': {'size': max(1, len(first)) * 8},
               'second': {'size': max(1, len(second)) * 8},
               'item_vt': {'size': ITEM_VT_RANK_SLOT + 8}}
    memory = [{'addr': f'buf:item_vt+{ITEM_VT_RANK_SLOT:#x}', 'guest': RANK}]
    stubs = []
    for name, items, limit, bit, flags_offset in (
            ('first', first, FIRST_RANK_LIMIT, FIRST_BIT, FIRST_FLAGS),
            ('second', second, SECOND_RANK_LIMIT, SECOND_BIT, SECOND_FLAGS)):
        for index, (rank, flags) in enumerate(items):
            item = f'{name}_item_{index}'
            body = bytearray(b'\xee' * ITEM_SIZE)
            body[flags_offset] = flags & 0xff
            buffers[item] = {'size': ITEM_SIZE, 'bytes': body.hex()}
            memory.append({'addr': f'buf:{item}+0x0', 'pointer': 'item_vt'})
            memory.append({'addr': f'buf:{name}+{index * 8:#x}', 'pointer': item})
            stubs.append({'address': RANK, 'argc': 1, 'ret': hex((rank & MASK32) | 0xab00000000)})
            if rank > limit or flags & bit:
                break
        end = f'{name}+{len(items) * 8:#x}' if items else name
        begin_offset, end_offset = (0x10, 0x18) if name == 'first' else (0x38, 0x40)
        memory.append({'addr': f'buf:pair+{begin_offset:#x}', 'pointer': name})
        memory.append({'addr': f'buf:pair+{end_offset:#x}', 'pointer': end})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i8',
            'args': {'rdi': 'buf:pair'}, 'buffers': buffers, 'memory': memory, 'imports': [],
            'stubs': stubs}


CASES = [
    case('both_empty'),
    case('first_rank_above_six', first=[(7, 0x00)]),
    case('first_rank_exact_six_fails', first=[(6, 0x00)]),
    case('first_flag_qualifies', first=[(1, 0x02)]),
    case('first_walk_continues_to_later_flag', first=[(1, 0x00), (2, 0x02)]),
    case('first_fails_second_qualifies_by_rank', first=[(1, 0x00)], second=[(5, 0x00)]),
    case('first_fails_second_qualifies_by_flag', first=[(1, 0x00)], second=[(1, 0x04)]),
    case('first_qualifies_second_fails', first=[(9, 0x00)], second=[(4, 0x00)]),
    case('second_rank_exact_four_fails', second=[(4, 0x00)]),
    case('second_later_qualifies', second=[(1, 0x00), (2, 0x00), (3, 0x04)]),
    case('neither_qualifies', first=[(1, 0x00)], second=[(2, 0x00), (3, 0x00)]),
    case('first_flag_other_bits_fail', first=[(0, 0x01), (0, 0xfd)]),
    case('second_flag_other_bits_fail', second=[(0, 0xfb)]),
    case('negative_rank_is_not_above', first=[(-1, 0x00)], second=[(-5, 0x00)]),
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
    sys.exit(main())
