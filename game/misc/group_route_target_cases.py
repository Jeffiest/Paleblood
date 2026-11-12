#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic index groups for misc_group_route_target at 0x00d3a550, for tools/verify.py run.

usage: group_route_target_cases.py OUT_DIR

A group with records (count at 0xf8 above zero) returns the head word of its last record. Otherwise the
route slot at 0xc0 picks a member: a nonzero slot is looked up in the table at 0xe8 (the callee at 0x028c7fe0
is stubbed; its result is truncated to 32 bits), and a zero slot picks the first member when the group has
members and that member has slot index zero. Anything else picks index minus one, which reads the word
before the members array; the cases place a member there. The result is the picked member's value at 0x58.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x00d3a550'
FIND = '0x028c7fe0'
GROUP_SIZE = 0x13c
MEMBER_SIZE = 0x70
RECORD_SIZE = 0x28
CELL_SIZE = 0x10
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1
GARBAGE = {'rsi': '0x1111111111111111', 'rdx': '0xffffffffffffffff', 'rcx': '0x8080808080808080',
           'r8': '0x0123456789abcdef', 'r9': '0x7f7f7f7f7f7f7f7f'}


def member_bytes(index, value, tag):
    """A member with its value at 0x58 and its slot index at 0x68; tag fills the rest."""
    raw = bytearray(bytes([tag]) * MEMBER_SIZE)
    struct.pack_into('<Q', raw, 0x58, value & MASK64)
    struct.pack_into('<i', raw, 0x68, index)
    return raw.hex()


def case(cid, count, route_slot=0, members=(), records=(), lookup=None, raw_rsi=None, record_count=None):
    """One call. count is the member count, lookup the index the slot table returns for a nonzero route slot (64-bit)."""
    if record_count is None:
        record_count = len(records)
    group = bytearray(b'\xa5' * GROUP_SIZE)
    struct.pack_into('<i', group, 0xc0, route_slot)
    struct.pack_into('<i', group, 0xd8, count)
    struct.pack_into('<i', group, 0xf8, record_count)
    listed = list(members) if members else [0]
    rec = list(records) if records else [0]
    buffers = {'group': {'size': GROUP_SIZE, 'bytes': group.hex()},
               'cell': {'size': CELL_SIZE, 'bytes': 'c7' * CELL_SIZE},
               'records': {'size': RECORD_SIZE * len(rec), 'bytes': ''.join(
                   (struct.pack('<Q', head & MASK64) + bytes([0xee]) * (RECORD_SIZE - 8)).hex() for head in rec)},
               'members_block': {'size': 8 * (len(listed) + 1), 'bytes': '00' * (8 * (len(listed) + 1))},
               'prev': {'size': MEMBER_SIZE, 'bytes': member_bytes(9, 0xbeef, 0xc4)}}
    memory = [
        {'addr': 'buf:group+0xd0', 'pointer': 'members_block+8'},
        {'addr': 'buf:members_block', 'pointer': 'prev'},
        {'addr': 'buf:group+0xe8', 'pointer': 'cell'},
        {'addr': 'buf:group+0xf0', 'pointer': 'records'},
    ]
    for position, index in enumerate(listed):
        buffers[f'm{position}'] = {'size': MEMBER_SIZE, 'bytes': member_bytes(index, 0x100 + 0x10 * position, 0xb1)}
        memory.append({'addr': f'buf:members_block+{8 * (position + 1)}', 'pointer': f'm{position}'})

    stubs = []
    if record_count <= 0 and route_slot != 0:
        stubs.append({'address': FIND, 'argc': 3, 'argi': [0, 1, 2], 'ret': hex(lookup & MASK64)})
    args = {'rdi': 'buf:group'}
    args.update(GARBAGE)
    if raw_rsi is not None:
        args['rsi'] = raw_rsi
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': args,
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('last_record_head_returned', 2, route_slot=5, records=[0x11, 0x22]),
    case('single_record_head_returned', 1, records=[0x33]),
    case('record_count_negative_no_route_first_unset', 1, members=[0], record_count=-1),
    case('route_slot_finds_member_one', 0, route_slot=3, members=[2, 0], lookup=1),
    case('route_slot_finds_member_zero', 0, route_slot=3, members=[0, 4], lookup=0),
    case('route_slot_missing_reads_prev', 0, route_slot=3, members=[0, 4], lookup=MASK64),
    case('route_slot_truncated_to_32_bits', 0, route_slot=3, members=[0, 4], lookup=0x100000001),
    case('route_slot_negative_found_prev', 0, route_slot=-2, members=[0], lookup=0xffffffff),
    case('no_route_first_unset_picks_first', 2, members=[0, 5]),
    case('no_route_first_set_reads_prev', 2, members=[4, 0]),
    case('no_route_no_members_reads_prev', 0, members=[]),
    case('no_route_negative_count_first_unset', -2, members=[0]),
    case('route_slot_high_bits_in_rsi_ignored', 0, route_slot=5, members=[1], lookup=0, raw_rsi='0x00000000ffffffff'),
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
