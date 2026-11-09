#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic slot pools for bb_misc_slot_pool_reassign (0x00b687b0).

usage: slot_pool_reassign_cases.py OUT_DIR

The child computation (0x00b685f0) is scripted to report changed or unchanged and a 32-bit total.
Covers both arrays needing growth or not, growth by doubling and by count, fills from the old
count, count zero and negative, wrapping totals, and the unchanged path with no, one and two
children whose results are passed on.
"""
import json
import os
import struct
import sys

ADDRESS = '0x00b687b0'
COMPUTE = '0x00b685f0'
RESERVE = '0x00819040'
FILL = '0x02fbe688'
CHILD = '0x00b5afd0'
GUARD = '0x057e3be0'
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1
VALUES_BYTES = 0x200
USED_BYTES = 0x40


def i32(v):
    return struct.pack('<i', v).hex()


def u32(v):
    return struct.pack('<I', v & MASK32).hex()


def case(cid, count=3, changed=1, total=5, base=0x1122334455667788, cap=8, slot_count=0,
         used_cap=8, used_size=0, children=(), child_results=(), values_pattern=0xc7):
    """One call against a pool whose arrays hold cap and used_cap slots, with the given sizes.

    Stubs follow the call order: the computation, then for a changed pool a reserve when the value
    array is short, a fill past slot_count, and the same for the used flags; for an unchanged pool
    one child visit per child, each returning the scripted result."""
    stubs = [{'address': COMPUTE, 'argc': 4,
              'writes': [{'arg': 2, 'bytes': f'{changed & 0xff:02x}'}, {'arg': 3, 'bytes': u32(total)}]}]
    if changed:
        if cap < count:
            stubs.append({'address': RESERVE, 'argc': 4, 'writes': [
                {'arg': 1, 'offset': 0, 'pointer': 'grown_values'}]})
        if count > slot_count:
            stubs.append({'address': FILL, 'argc': 3, 'ret': '0x0'})
        if used_cap < count:
            stubs.append({'address': RESERVE, 'argc': 4, 'writes': [
                {'arg': 1, 'offset': 0, 'pointer': 'grown_used'}]})
        if count > used_size:
            stubs.append({'address': FILL, 'argc': 3, 'ret': '0x0'})
    else:
        for result in child_results:
            stubs.append({'address': CHILD, 'argc': 3, 'ret': hex(result & MASK64)})
    memory = [
        {'addr': 'buf:pool+0x50', 'pointer': 'values'},
        {'addr': 'buf:pool+0x60', 'pointer': 'used'},
        {'addr': 'buf:pool+0x10', 'pointer': 'children'},
        {'addr': 'buf:pool+0x58', 'bytes': i32(slot_count)},
        {'addr': 'buf:pool+0x5c', 'bytes': u32(cap)},
        {'addr': 'buf:pool+0x68', 'bytes': i32(used_size)},
        {'addr': 'buf:pool+0x6c', 'bytes': u32(used_cap)},
        {'addr': 'buf:pool+0x18', 'bytes': i32(len(children))},
        {'addr': GUARD, 'pointer': 'guard'},
    ]
    for index in range(len(children)):
        memory.append({'addr': f'buf:children+{index * 8:#x}', 'pointer': f'child{index}'})
    buffers = {
        'pool': {'size': 0x80, 'bytes': '00' * 0x80},
        'values': {'size': VALUES_BYTES, 'bytes': f'{values_pattern:02x}' * VALUES_BYTES},
        'grown_values': {'size': VALUES_BYTES, 'bytes': '00' * VALUES_BYTES},
        'used': {'size': USED_BYTES, 'bytes': 'a5' * USED_BYTES},
        'grown_used': {'size': USED_BYTES, 'bytes': '00' * USED_BYTES},
        'children': {'size': max(8 * len(children), 8), 'bytes': '00' * max(8 * len(children), 8)},
        'guard': {'size': 8, 'bytes': 'c3' * 8},
    }
    for index in range(len(children)):
        buffers[f'child{index}'] = {'size': 0x10, 'bytes': '00' * 0x10}
    return {
        'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
        'args': {'rdi': 'buf:pool', 'rsi': hex(base & MASK64), 'rdx': hex(count & MASK32)},
        'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs,
    }


CASES = [
    case('grow_both_arrays_from_empty', count=3, cap=0, used_cap=0, slot_count=0, used_size=0),
    case('fill_past_old_count', count=4, cap=8, slot_count=1, used_cap=8, used_size=2),
    case('shrink_no_growth_no_fill', count=2, cap=4, slot_count=2, used_cap=4, used_size=2),
    case('capacity_doubles', count=3, cap=2, slot_count=0, used_cap=2, used_size=0),
    case('capacity_doubling_still_short', count=5, cap=1, slot_count=0, used_cap=1, used_size=0),
    case('total_wraps_in_32_bits', count=3, total=0xffffffff, base=0),
    case('single_slot_zero_total', count=1, total=0, base=0xffffffffffffffff),
    case('count_zero_changed', count=0, cap=0, used_cap=0, slot_count=0, used_size=0),
    case('count_negative_changed', count=-1, cap=0, used_cap=0, slot_count=0, used_size=0),
    case('count_zero_clears_old_slots', count=0, slot_count=3, used_size=3, cap=8, used_cap=8),
    case('unchanged_no_children', changed=0, children=(), child_results=()),
    case('unchanged_one_child', changed=0, children=(0x10,), child_results=(0x1234,)),
    case('unchanged_two_children_chain', changed=0, children=(0x10, 0x20),
         child_results=(0xabc, 0xfffffffff)),
    case('unchanged_clears_slot_count', changed=0, slot_count=5, children=(0x30,),
         child_results=(0x77,)),
    case('changed_with_high_base_bits', count=2, base=0x8000000000000000, total=3),
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
