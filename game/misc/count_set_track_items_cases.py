#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic index groups for misc_count_set_track_items at 0x00d3a380, for tools/verify.py run.

usage: count_set_track_items_cases.py OUT_DIR

Bit 0x01 of the flags argument (the low byte of RSI) set returns 1 at once. Otherwise the result is the member
count (the value at 0xd8, kept even when negative) plus, for each member whose track pointer at 0x50 is set and
whose item count at 0x18 is above zero, the number of its items whose first word is nonzero; then the same for the
auxiliary track at 0xe0. Items are 0x48 bytes each, starting 0x20 bytes into the track's item list.
The result is the 32-bit EAX value, so it is an i32.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x00d3a380'
GROUP_SIZE = 0x13c
MEMBER_SIZE = 0x70
TRACK_SIZE = 0x20
ITEM_SIZE = 0x48
LIST_HEADER = 0x20
GARBAGE = {'rdx': '0xffffffffffffffff', 'rcx': '0x8080808080808080', 'r8': '0x0123456789abcdef',
           'r9': '0x7f7f7f7f7f7f7f7f'}


def track_parts(name, item_count, words):
    """A track buffer and its item list: words are the first words of the items, in order."""
    items = bytearray(b'\xee' * (LIST_HEADER + ITEM_SIZE * max(1, len(words))))
    for index, word in enumerate(words):
        start = LIST_HEADER + ITEM_SIZE * index
        struct.pack_into('<Q', items, start, word & ((1 << 64) - 1))
        items[start + 8:start + ITEM_SIZE] = b'\xdd' * (ITEM_SIZE - 8)
    track = bytearray(b'\xcc' * TRACK_SIZE)
    struct.pack_into('<i', track, 0x18, item_count)
    buffers = {f'{name}': {'size': TRACK_SIZE, 'bytes': track.hex()},
               f'{name}_list': {'size': len(items), 'bytes': items.hex()}}
    memory = [{'addr': f'buf:{name}+0x10', 'pointer': f'{name}_list'}]
    return buffers, memory


def case(cid, flags=0, count=0, members=(), aux=None, registers=None):
    """members is a list of (item_count, words) tracks, or None for a member without a track; aux likewise."""
    group = bytearray(b'\xa5' * GROUP_SIZE)
    struct.pack_into('<i', group, 0xd8, count)
    listed = list(members)
    buffers = {'group': {'size': GROUP_SIZE, 'bytes': group.hex()},
               'members': {'size': 8 * max(1, len(listed)), 'bytes': '00' * (8 * max(1, len(listed)))}}
    memory = [{'addr': 'buf:group+0xd0', 'pointer': 'members'}]
    if aux is None:
        memory.append({'addr': 'buf:group+0xe0', 'bytes': '00' * 8})
    else:
        aux_buffers, aux_memory = track_parts('aux', *aux)
        buffers.update(aux_buffers)
        memory += aux_memory + [{'addr': 'buf:group+0xe0', 'pointer': 'aux'}]
    for position, entry in enumerate(listed):
        member = bytearray(b'\xb1' * MEMBER_SIZE)
        memory.append({'addr': f'buf:members+{8 * position}', 'pointer': f'm{position}'})
        if entry is None:
            memory.append({'addr': f'buf:m{position}+0x50', 'bytes': '00' * 8})
        else:
            track_buffers, track_memory = track_parts(f't{position}', *entry)
            buffers.update(track_buffers)
            memory += track_memory
            memory.append({'addr': f'buf:m{position}+0x50', 'pointer': f't{position}'})
        buffers[f'm{position}'] = {'size': MEMBER_SIZE, 'bytes': member.hex()}
    args = {'rdi': 'buf:group', 'rsi': hex(flags & ((1 << 64) - 1))}
    args.update(GARBAGE if registers is None else registers)
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i32', 'args': args,
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': []}


CASES = [
    case('flag_bit_set_returns_one', flags=0x01, count=2, members=[(2, [0, 0]), None]),
    case('flag_bit_set_high_bits_ignored', flags=0xdead000000000003, count=1, members=[(1, [0])]),
    case('flag_bit_clear_other_bits_only', flags=0xfe, count=0),
    case('no_members_no_aux_zero', count=0),
    case('negative_count_kept_in_total', count=-2, members=[], aux=(2, [0, 0])),
    case('member_without_track_counts_member', count=1, members=[None]),
    case('track_with_no_items_counts_member', count=1, members=[(0, [])]),
    case('track_negative_items_counts_none', count=1, members=[(-1, [0])]),
    case('three_items_mixed', count=1, members=[(3, [0, 5, 0])]),
    case('four_items_all_zero', count=1, members=[(4, [0, 0, 0, 0])]),
    case('five_items_mixed', count=1, members=[(5, [0, 1, 0, 0, 7])]),
    case('eight_items_all_nonzero', count=1, members=[(8, [1, 2, 3, 4, 5, 6, 7, 8])]),
    case('nine_items_zero_at_each_group', count=1, members=[(9, [0, 1, 0, 2, 0, 3, 0, 4, 0])]),
    case('several_members_and_aux', count=3,
         members=[(1, [0]), (2, [9, 0]), (4, [0, 0, 0, 0])], aux=(5, [0, 3, 0, 0, 0])),
    case('aux_absent_counts_members_only', count=1, members=[(2, [0, 0])]),
    case('aux_with_no_items_counts_nothing', count=0, aux=(0, [])),
    case('aux_four_items_exact_groups', count=0, aux=(4, [0, 0, 1, 0])),
    case('aux_three_items_nonzero', count=0, aux=(3, [1, 2, 3])),
    case('aux_nine_items_repeats_groups', count=0, aux=(9, [0, 1, 0, 0, 2, 0, 3, 0, 0])),
    case('aux_negative_items', count=0, aux=(-3, [0, 0, 0])),
    case('registers_garbage_flag_clear', flags=0x00, count=1, members=[(2, [0, 0])], aux=(1, [0]),
         registers={'rdx': '0x0', 'rcx': '0x0', 'r8': '0x0', 'r9': '0x0'}),
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
