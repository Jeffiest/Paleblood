#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for bb_misc_init_slot_pool_with_lists (0x00f4fcf0).

usage: init_slot_pool_with_lists_cases.py OUT_DIR

The slot set-up (0x00f4ff60) is stubbed and hands the pool its slot storage. A small model of the
function decides which array-growth calls (0x00819040, 0x00819100) and which frees (through the
allocator at 0x058018b0, slot 0x28) each case makes, and the stubs write what those calls would
leave in the arrays: a new storage pointer and a new capacity. Cases cover an empty description,
growth of the list array (doubling and clamped), shrinking over owned and unowned lists, lists that
already fit, lists that need to grow, full lists, and a negative share per list.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x00f4fcf0'
SLOTS = '0x00f4ff60'
RESERVE = '0x00819040'
GROW = '0x00819100'
FREE = '0x00400020'
ALLOCATOR = '0x058018b0'
FREE_SLOT = 0x28
MASK30 = 0x3fffffff
UNOWNED = 0x80000000
MAX_LISTS = 8


def u32(value):
    """A 32-bit little-endian word as hex."""
    return struct.pack('<I', value & 0xffffffff).hex()


def s32(value):
    """A 32-bit value read as signed."""
    value &= 0xffffffff
    return value - (1 << 32) if value & 0x80000000 else value


def share_of(second, wanted):
    """The signed 32-bit quotient of (second << 2) by wanted, truncated toward zero."""
    numerator = s32(second << 2)
    quotient = abs(numerator) // wanted
    return quotient if numerator >= 0 else -quotient


def case(cid, wanted, second=0x10, pool_cap=0x20, lists=(), owner=0x1122334455667788):
    """lists: the existing lists as (length, capacity word); the pool's count is len(lists)."""
    buffers = {
        'pool': {'size': 0x50, 'bytes': 'a5' * 0x50},
        'slots': {'size': 0x80, 'bytes': '3d' * 0x80},
        'desc': {'size': 0x20, 'bytes': '00' * 0x1c + u32(wanted)},
        'lists': {'size': 16 * MAX_LISTS, 'bytes': '6e' * (16 * MAX_LISTS)},
        'lists2': {'size': 16 * MAX_LISTS, 'bytes': '6e' * (16 * MAX_LISTS)},
        'alloc_vt': {'size': 0x30},
    }
    memory = [{'addr': ALLOCATOR, 'pointer': 'alloc_vt'},
              {'addr': f'buf:alloc_vt+{FREE_SLOT:#x}', 'guest': FREE},
              {'addr': 'buf:pool+0x30', 'pointer': 'lists'},
              {'addr': 'buf:pool+0x38', 'bytes': u32(len(lists)) + u32(pool_cap)}]
    # The existing lists, and the same bytes in the array the first growth call hands over.
    for index, (length, capacity) in enumerate(lists):
        name = f'old{index}'
        buffers[name] = {'size': 0x40, 'bytes': '5c' * 0x40}
        for array in ('lists', 'lists2'):
            memory.append({'addr': f'buf:{array}+{16 * index}', 'pointer': name})
            memory.append({'addr': f'buf:{array}+{16 * index + 8}', 'bytes': u32(length) + u32(capacity)})
    stubs = [{'address': SLOTS, 'argc': 3,
              'writes': [{'arg': 0, 'offset': 8, 'pointer': 'slots', 'size': 8}]}]
    state = [list(item) for item in lists]
    fresh = [0]

    def new_storage():
        fresh[0] += 1
        name = f'new{fresh[0]}'
        buffers[name] = {'size': 0x100, 'bytes': '4b' * 0x100}
        return name

    capacity = pool_cap & MASK30
    if capacity < wanted:
        grown = max(s32(capacity * 2), wanted)
        stubs.append({'address': RESERVE, 'argc': 4, 'writes': [
            {'arg': 1, 'offset': 0, 'pointer': 'lists2', 'size': 8},
            {'arg': 1, 'offset': 12, 'bytes': u32(grown), 'size': 4}]})
    old_count = len(state)
    for index in range(old_count - 1, wanted - 1, -1):
        if s32(state[index][1]) >= 0:
            stubs.append({'address': FREE, 'argc': 3})
    state = state[:wanted] + [[0, UNOWNED] for _ in range(max(0, wanted - old_count))]
    if wanted > 0:
        share = share_of(second, wanted)
        for index in range(wanted):
            length, cap_word = state[index]
            cap = cap_word & MASK30
            if cap < share:
                cap = max(cap * 2, share)
                storage = new_storage()
                stubs.append({'address': RESERVE, 'argc': 4, 'writes': [
                    {'arg': 1, 'offset': 0, 'pointer': storage, 'size': 8},
                    {'arg': 1, 'offset': 12, 'bytes': u32(cap), 'size': 4}]})
            if length == cap:
                cap += 4
                storage = new_storage()
                stubs.append({'address': GROW, 'argc': 3, 'writes': [
                    {'arg': 1, 'offset': 0, 'pointer': storage, 'size': 8},
                    {'arg': 1, 'offset': 12, 'bytes': u32(cap), 'size': 4}]})
            state[index] = [length + 1, cap]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:pool', 'rsi': '0xfeedfacecafebeef', 'rdx': hex(second),
                     'rcx': hex(owner), 'r8': 'buf:desc'},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('empty_description', 0, pool_cap=0, lists=()),
    case('empty_description_with_lists', 0, lists=[(1, 4), (2, UNOWNED | 3)]),
    case('new_lists_no_growth', 2, second=0x10, pool_cap=8),
    case('new_lists_array_doubles', 3, pool_cap=0x40000003 | UNOWNED, second=0x9),
    case('new_lists_array_clamped', 5, pool_cap=1),
    case('new_lists_array_doubles_enough', 5, pool_cap=3),
    case('shrink_owned_and_unowned', 1, lists=[(1, 8), (2, 4), (0, UNOWNED | 4), (3, 0)], second=0x2),
    case('shrink_all', 0, lists=[(0, 2), (1, UNOWNED)]),
    case('same_count_fit', 2, lists=[(1, 8), (0, 8)], second=0x4),
    case('same_count_one_grows', 2, lists=[(1, 2), (0, 8)], second=0x8),
    case('same_count_full_list', 2, lists=[(4, 4), (3, 8)], second=0x2),
    case('negative_share', 2, second=0x20000000, lists=[(0, 0)]),
    case('zero_share_new_list', 3, second=0x0, pool_cap=0x10),
    case('high_cap_bits_ignored', 2, lists=[(1, 0xc0000004), (0, 0x80000002)], second=0x1, pool_cap=0xc0000002),
    case('mixed_grow_existing_and_new', 3, lists=[(2, 2)], second=0xc, pool_cap=0x10),
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
