#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic index groups for misc_lookup_member_slot at 0x00d3a5e0, for tools/verify.py run.

usage: lookup_member_slot_cases.py OUT_DIR

A nonzero slot is looked up in the group's slot table at 0xe8 (the callee at 0x028c7fe0 is stubbed with
the default minus one in RDX) and its result is returned as the full 64-bit RAX. A zero slot returns zero
when the group has members and its first member has no slot index, and the 32-bit value 0xffffffff otherwise.
The result is an i64: the original leaves whatever the lookup returned in RAX.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x00d3a5e0'
FIND = '0x028c7fe0'
GROUP_SIZE = 0x13c
MEMBER_SIZE = 0x70
CELL_SIZE = 0x10
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1
GARBAGE = {'rdx': '0xffffffffffffffff', 'rcx': '0x8080808080808080', 'r8': '0x0123456789abcdef',
           'r9': '0x7f7f7f7f7f7f7f7f'}


def case(cid, slot, count, members=(), result=0, raw_rsi=None):
    """One call with the given slot in ESI (raw_rsi overrides the whole register); result is what the lookup stub returns for a nonzero slot."""
    group = bytearray(b'\xa5' * GROUP_SIZE)
    struct.pack_into('<i', group, 0xd8, count)
    buffers = {'group': {'size': GROUP_SIZE, 'bytes': group.hex()},
               'cell': {'size': CELL_SIZE, 'bytes': 'c7' * CELL_SIZE}}
    listed = list(members) if members else [0]
    buffers['members_block'] = {'size': 8 * (len(listed) + 1), 'bytes': '00' * (8 * (len(listed) + 1))}
    memory = [
        {'addr': 'buf:group+0xd0', 'pointer': 'members_block+8'},
        {'addr': 'buf:members_block', 'pointer': 'prev'},
        {'addr': 'buf:group+0xe8', 'pointer': 'cell'},
    ]
    prev = bytearray(MEMBER_SIZE)
    struct.pack_into('<Q', prev, 0x58, 0xbeef)
    struct.pack_into('<i', prev, 0x68, 9)
    buffers['prev'] = {'size': MEMBER_SIZE, 'bytes': prev.hex()}
    for position, index in enumerate(listed):
        member = bytearray(b'\xb1' * MEMBER_SIZE)
        struct.pack_into('<Q', member, 0x58, 0x100 + 0x10 * position)
        struct.pack_into('<i', member, 0x68, index)
        buffers[f'm{position}'] = {'size': MEMBER_SIZE, 'bytes': member.hex()}
        memory.append({'addr': f'buf:members_block+{8 * (position + 1)}', 'pointer': f'm{position}'})

    stubs = []
    if slot != 0:
        stubs.append({'address': FIND, 'argc': 3, 'argi': [0, 1, 2], 'ret': hex(result & MASK64)})
    args = {'rdi': 'buf:group', 'rsi': raw_rsi if raw_rsi is not None else hex(slot & MASK32)}
    args.update(GARBAGE)
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': args,
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('nonzero_slot_found', 5, 2, [3, 0], result=0x1234),
    case('nonzero_slot_missing_default', -3, 2, [3, 0], result=MASK64),
    case('nonzero_slot_result_zero', 1, 0, [], result=0),
    case('nonzero_slot_high_bits_ignored', 7, 1, [0], result=0x55, raw_rsi='0xdeadbeef00000007'),
    case('nonzero_slot_result_high_word', 9, 1, [2], result=0x0000000100000000),
    case('zero_slot_no_members', 0, 0, []),
    case('zero_slot_first_unset_returns_zero', 0, 2, [0, 4]),
    case('zero_slot_first_set_returns_32_bit_ones', 0, 2, [3, 0]),
    case('zero_slot_negative_count_first_unset', 0, -1, [0]),
    case('zero_slot_negative_count_first_set', 0, -1, [2]),
    case('zero_slot_one_member_set', 0, 1, [6]),
    case('negative_slot_found', -1, 1, [0], result=0x77),
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
