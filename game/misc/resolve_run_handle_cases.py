#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic run tables for bb_misc_resolve_run_handle (0x00cc7e20).

usage: resolve_run_handle_cases.py OUT_DIR

Requests with and without a table, unset and absent slots, runs that end inside the segment and at its
count, run offsets just inside and just outside the run, ids in another segment, and tail offsets below,
at and above the range limit. The range lookup (0x00d0aed0) is stubbed with a range whose base and limit
are set per case.
"""
import json
import os
import struct
import sys

ADDRESS = '0x00cc7e20'
RANGE_LOOKUP = '0x00d0aed0'
MASK32 = (1 << 32) - 1
SLOT_BYTES = 16
NO_ENTRY = 0xffffffff


def u32(v):
    return struct.pack('<I', v & MASK32).hex()


def i32(v):
    return struct.pack('<i', v).hex()


def i16(v):
    return struct.pack('<h', v).hex()


def case(cid, *, table=True, request_id=0, run=-1, tail=-1, values=None, count=SLOT_BYTES,
         base=0x40, limit=8, segment=0):
    """values maps a slot index to its value; unlisted slots are -1. The table lays the same slot array
    under all four segments, so the segment bits of request_id only change the bits kept in the result."""
    slots = [-1] * SLOT_BYTES
    for index, value in (values or {}).items():
        slots[index] = value
    request_id = request_id | (segment << 22)
    memory = [{'addr': 'buf:table+0x10', 'pointer': 'segments'}] if table else []
    for index in range(4):
        memory += [{'addr': f'buf:segments+{0x20 * index + 0x10:#x}', 'pointer': 'slots'},
                   {'addr': f'buf:segments+{0x20 * index + 0x18:#x}', 'bytes': u32(count)}]
    stubs = []
    request_bytes = u32(request_id) + i16(run) + '0000' + i16(tail) + '0000'
    if table:
        resolved = _resolve(slots, count, request_id & 0x3fffff, slots[request_id & 0x3fffff],
                            run, request_id)
    else:
        resolved = request_id
    if resolved is not None and resolved != NO_ENTRY:
        stubs.append({'address': RANGE_LOOKUP, 'argc': 2, 'ret': 'buf:range',
                      'writes': [{'arg': 0, 'offset': 0, 'pointer': 'segments'},
                                 {'arg': 0, 'offset': 8, 'bytes': u32(request_id >> 22)}]})
    buffers = {'table': {'size': 0x18, 'bytes': 'a5' * 0x18},
               'segments': {'size': 0x80, 'bytes': '00' * 0x80},
               'slots': {'size': 0x40, 'bytes': ''.join(i32(v) for v in slots)},
               'cursor': {'size': 0x10, 'bytes': '00' * 0x10},
               'request': {'size': 0x10, 'bytes': request_bytes},
               'range': {'size': 0x10, 'bytes': i32(base) + '00000000' + i16(limit) + '000000000000'},
               'out': {'size': 8, 'bytes': '00' * 8}}
    args = {'rdi': 'buf:table' if table else 0, 'rsi': 'buf:cursor', 'rdx': 'buf:request',
            'rcx': 'buf:out'}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i32', 'args': args,
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


def _resolve(slots, count, local, slot, run, request_id):
    """Mirror of resolve_table_id, to know whether the range lookup is called."""
    if slot < 0:
        return request_id if (run == -1 and slot != -2) else None
    if run == -1:
        return None
    end = slot
    while end < count and slots[end] == local:
        end += 1
    moved = (run + slot) & MASK32
    if (moved if moved < 0x80000000 else moved - (1 << 32)) > end - 1:
        return None
    return moved | (request_id & 0xffc00000)


# Branches the table walk can never take: the slot is non-negative on the path that compares it with -1.
UNREACHABLE = {
    '0x00cc7e9d': ('taken', 'the slot is non-negative on this path, so it cannot equal -1'),
}

CASES = [
    case('null_table_no_entry', table=False, request_id=NO_ENTRY, tail=0),
    case('null_table_unset_tail', table=False, request_id=0x123, tail=-1),
    case('null_table_tail_in_range', table=False, request_id=0x00400123, tail=3, base=0x40, limit=8),
    case('null_table_tail_at_limit', table=False, request_id=0x123, tail=8, base=0x40, limit=8),
    case('null_table_negative_tail', table=False, request_id=0x123, tail=-2, base=0x40, limit=8),
    case('slot_minus_one_unset_run_keeps_id', request_id=5, values={5: -1}, run=-1, tail=-1),
    case('slot_minus_two_unset_run_no_entry', request_id=5, values={5: -2}, run=-1, tail=-1),
    case('slot_minus_five_unset_run_tail_in_range', request_id=5, values={5: -5}, run=-1, tail=2,
         base=0x40, limit=8),
    case('slot_minus_one_run_set_no_entry', request_id=5, values={5: -1}, run=2, tail=-1),
    case('slot_minus_two_run_set_no_entry', request_id=5, values={5: -2}, run=0, tail=-1),
    case('run_ends_inside_segment', request_id=3, values={3: 5, 5: 3, 6: 3, 7: 9}, run=1, tail=-1),
    case('run_one_past_end_no_entry', request_id=3, values={3: 5, 5: 3, 6: 3, 7: 9}, run=2, tail=-1),
    case('run_ends_at_count', request_id=3, values={3: 5, 5: 3}, count=6, run=0, tail=-1),
    case('slot_beyond_count_run_negative', request_id=3, values={3: 7}, count=6, run=-3, tail=1,
         base=0x10, limit=8),
    case('unset_lo_with_slot_no_entry', request_id=3, values={3: 5, 5: 3}, run=-1, tail=-1),
    case('run_resolves_to_minus_one', request_id=0, values={0: 2, 2: 0, 3: 5}, run=-3, tail=-1),
    case('segment_bits_kept', request_id=3, values={2: 3, 3: 2}, run=0, tail=1, base=0x10,
         limit=8, segment=2),
    case('tail_at_limit_after_run', request_id=5, values={5: -5}, run=-1, tail=8, base=0x40,
         limit=8),
]


def main():
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    os.makedirs(sys.argv[1], exist_ok=True)
    for c in CASES:
        with open(os.path.join(sys.argv[1], f"{c['id']}.json"), 'w') as f:
            json.dump(c, f, indent=1)
    print(f'{len(CASES)} cases written to {sys.argv[1]}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
