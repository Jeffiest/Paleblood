#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic index groups for misc_register_indexed_members at 0x00d39d50, for tools/verify.py run.

usage: register_indexed_members_cases.py OUT_DIR

The function takes a slot table block from the thread's allocator (the block record's releaser at 0x58,
its slot 0x10 allocates), writes its three words, stores it in the group at 0xe8 and, when the count at
0xd8 is nonzero, reserves room, registers the first member when its index is nonzero, and then registers
members one to count minus one, giving each one whose index is zero its position first. The source word
at 0xa8 is copied to 0xc0 and 0x138. The original leaves RAX holding the source word, but no caller reads
RAX, so every case compares no return value.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x00d39d50'
RESERVE = '0x028c8350'
ADD = '0x028c7b90'
ALLOCATE = '0x004000a0'
THREAD_OFFSET_SLOT = '0x057e40f8'
DESCRIPTOR = '0x058018b0'
GROUP_SIZE = 0x13c
MEMBER_SIZE = 0x70
CELL_SIZE = 0x10
TLS_BELOW = 0x20
GARBAGE = {'rsi': '0x1111111111111111', 'rdx': '0xffffffffffffffff',
           'rcx': '0x8080808080808080', 'r8': '0x0123456789abcdef', 'r9': '0x7f7f7f7f7f7f7f7f'}


def case(cid, count, indices, source=0x1234, registers=None):
    """One registration of a group whose count is count and whose members have the given slot indices."""
    members = indices if indices else [0]
    group = bytearray(b'\xa5' * GROUP_SIZE)
    struct.pack_into('<I', group, 0xa8, source & 0xffffffff)
    struct.pack_into('<i', group, 0xd8, count)
    buffers = {'group': {'size': GROUP_SIZE, 'bytes': group.hex()},
               'members': {'size': 8 * len(members), 'bytes': '00' * (8 * len(members))},
               'cell': {'size': CELL_SIZE, 'bytes': 'c7' * CELL_SIZE},
               'tls': {'size': TLS_BELOW + 8, 'bytes': '00' * (TLS_BELOW + 8)},
               'block': {'size': 0x60, 'bytes': '00' * 0x60},
               'allocator': {'size': 8, 'bytes': '00' * 8},
               'alloc_vt': {'size': 0x20, 'bytes': '00' * 0x20}}
    memory = [
        {'addr': 'buf:group+0xd0', 'pointer': 'members'},
        {'addr': 'buf:tls+0', 'pointer': 'block'},
        {'addr': 'buf:tls+0x20', 'pointer': f'tls+{TLS_BELOW}'},
        {'addr': THREAD_OFFSET_SLOT, 'bytes': struct.pack('<q', -TLS_BELOW).hex()},
        {'addr': 'buf:block+0x58', 'pointer': 'allocator'},
        {'addr': 'buf:allocator', 'pointer': 'alloc_vt'},
        {'addr': 'buf:alloc_vt+0x10', 'guest': ALLOCATE},
    ]
    for position, index in enumerate(members):
        member = bytearray(b'\xb1' * MEMBER_SIZE)
        struct.pack_into('<i', member, 0x68, index)
        buffers[f'm{position}'] = {'size': MEMBER_SIZE, 'bytes': member.hex()}
        memory.append({'addr': f'buf:members+{8 * position}', 'pointer': f'm{position}'})

    # The calls the original makes, in order: the reserve, the first member's registration when its
    # index is nonzero, then each member from position one whose index is or becomes registered.
    stubs = [{'address': ALLOCATE, 'argc': 2, 'argi': [0, 1], 'ret': 'buf:cell'}]
    adds = []
    if count != 0:
        stubs.append({'address': RESERVE, 'argc': 3, 'argi': [0, 1, 2]})
        if members[0] != 0:
            adds.append(members[0])
        for position in range(1, count):
            index = members[position] if members[position] != 0 else position
            adds.append(index)
    for index in adds:
        stubs.append({'address': ADD, 'argc': 4, 'argi': [0, 1, 2, 3]})

    args = {'rdi': 'buf:group'}
    args.update(GARBAGE if registers is None else registers)
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': args,
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs,
            'gs': f'buf:tls+{TLS_BELOW}'}


CASES = [
    case('empty_group_only_cell_made', 0, []),
    case('one_member_index_zero', 1, [0]),
    case('one_member_index_set', 1, [6]),
    case('two_members_second_unset', 2, [3, 0]),
    case('two_members_both_set', 2, [3, 2]),
    case('three_members_all_unset', 3, [0, 0, 0]),
    case('four_members_mixed', 4, [7, 0, 9, 0]),
    case('negative_count_reads_first_member', -1, [4]),
    case('negative_count_first_unset', -1, [0]),
    case('source_word_high_bit', 1, [5], source=0x80000000),
    case('zero_registers', 2, [1, 0], registers={k: '0x0' for k in GARBAGE}),
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
