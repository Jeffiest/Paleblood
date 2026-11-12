#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_destroy_name_pair_013b94b0 (0x013b94b0), for tools/verify.py run.

usage: destroy_name_pair_cases.py OUT_DIR

The second name is released first (its heap buffer, if its capacity is 8 or more, goes to the allocator's free
slot 0x70, a stub), then it is emptied; the first name is released next, without being emptied. The object then
goes to the library release routine (stub 0x02fbe588), whose result is returned. The capacity boundary (7 inline,
8 heap) is covered for both names, with a large capacity and the top bit as well.
"""
import json
import os
import struct
import sys

ADDRESS = '0x013b94b0'
FREE = '0x004000a0'        # a real game function entry, stubbed as the allocator's free slot
RELEASE = '0x02fbe588'     # the library release routine the destructor tail-calls
OBJECT_BYTES = 0x88


def u64(v):
    return struct.pack('<Q', v & (2 ** 64 - 1)).hex()


def case(cid, first_cap, second_cap, release_ret):
    b = {'object': {'size': OBJECT_BYTES, 'bytes': 'ee' * OBJECT_BYTES},
         'alloc': {'size': 8}, 'alloc_vt': {'size': 0x78},
         'heap_first': {'size': 0x40, 'bytes': '55' * 0x40},
         'heap_second': {'size': 0x40, 'bytes': '66' * 0x40}}
    m = [{'addr': 'buf:alloc', 'pointer': 'alloc_vt'},
         {'addr': 'buf:alloc_vt+112', 'guest': FREE},
         {'addr': 'buf:object+0x38', 'pointer': 'alloc'},
         {'addr': 'buf:object+0x70', 'pointer': 'alloc'},
         {'addr': 'buf:object+0x28', 'bytes': u64(3)},
         {'addr': 'buf:object+0x30', 'bytes': u64(first_cap)},
         {'addr': 'buf:object+0x60', 'bytes': u64(5)},
         {'addr': 'buf:object+0x68', 'bytes': u64(second_cap)}]
    stubs = []
    if first_cap >= 8:
        m.append({'addr': 'buf:object+0x18', 'pointer': 'heap_first'})
    if second_cap >= 8:
        m.append({'addr': 'buf:object+0x50', 'pointer': 'heap_second'})
    # The second name is released first, then the first; each heap buffer is one free call.
    if second_cap >= 8:
        stubs.append({'address': FREE, 'argc': 2, 'argi': [0, 1]})
    if first_cap >= 8:
        stubs.append({'address': FREE, 'argc': 2, 'argi': [0, 1]})
    stubs.append({'address': RELEASE, 'argc': 1, 'argi': [0], 'ret': hex(release_ret)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:object'}, 'buffers': b, 'memory': m, 'stubs': stubs, 'imports': []}


CASES = [
    case('both_inline', first_cap=7, second_cap=7, release_ret=0),
    case('second_heap_first_inline', first_cap=7, second_cap=8, release_ret=0x1234),
    case('first_heap_second_inline', first_cap=8, second_cap=7, release_ret=0x5555),
    case('both_heap_boundary', first_cap=8, second_cap=8, release_ret=0),
    case('both_heap_large', first_cap=0x10, second_cap=0x20, release_ret=0xffffffffffffffff),
    case('heap_capacity_top_bit', first_cap=1 << 63, second_cap=7, release_ret=0x7fffffffdeadbeef),
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
