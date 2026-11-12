#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_release_text_pair_names_013a4fc0 (0x013a4fc0), for tools/verify.py run.

usage: release_text_pair_names_cases.py OUT_DIR

Each name keeps its heap pointer, size, capacity and allocator in the record. A name whose capacity is 8 or
more is freed through its allocator's free slot (0x70), which is a stub; the second name is freed first. The
capacity boundary (7 inline, 8 heap) is covered for both names, with a larger heap capacity as well.
"""
import json
import os
import struct
import sys

ADDRESS = '0x013a4fc0'
FREE = '0x004000a0'
RECORD_BYTES = 0xc0
# Offsets of the two names in the record: the heap or inline text, the size, the capacity and the allocator.
FIRST = {'heap': 0x10, 'size': 0x20, 'capacity': 0x28, 'allocator': 0x30}
SECOND = {'heap': 0x48, 'size': 0x58, 'capacity': 0x60, 'allocator': 0x68}


def u64(v):
    return struct.pack('<Q', v & (2 ** 64 - 1)).hex()


def case(cid, first_cap, second_cap):
    b = {'record': {'size': RECORD_BYTES}, 'alloc_first': {'size': 8}, 'alloc_second': {'size': 8},
         'alloc_vt': {'size': 0x78}, 'heap_first': {'size': 0x10}, 'heap_second': {'size': 0x10}}
    m = [{'addr': 'buf:alloc_first', 'pointer': 'alloc_vt'},
         {'addr': 'buf:alloc_second', 'pointer': 'alloc_vt'},
         {'addr': 'buf:alloc_vt+112', 'guest': FREE},
         {'addr': f"buf:record+{FIRST['allocator']:#x}", 'pointer': 'alloc_first'},
         {'addr': f"buf:record+{SECOND['allocator']:#x}", 'pointer': 'alloc_second'},
         {'addr': f"buf:record+{FIRST['heap']:#x}", 'pointer': 'heap_first'},
         {'addr': f"buf:record+{SECOND['heap']:#x}", 'pointer': 'heap_second'},
         {'addr': f"buf:record+{FIRST['size']:#x}", 'bytes': u64(3)},
         {'addr': f"buf:record+{SECOND['size']:#x}", 'bytes': u64(5)},
         {'addr': f"buf:record+{FIRST['capacity']:#x}", 'bytes': u64(first_cap)},
         {'addr': f"buf:record+{SECOND['capacity']:#x}", 'bytes': u64(second_cap)}]
    stubs = []
    # The second name is released first, then the first; a heap name is one free call.
    if second_cap >= 8:
        stubs.append({'address': FREE, 'argc': 2, 'argi': [0, 1]})
    if first_cap >= 8:
        stubs.append({'address': FREE, 'argc': 2, 'argi': [0, 1]})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:record'}, 'buffers': b, 'memory': m, 'stubs': stubs, 'imports': []}


CASES = [
    case('both_inline', first_cap=7, second_cap=7),
    case('second_heap_boundary', first_cap=7, second_cap=8),
    case('first_heap_boundary', first_cap=8, second_cap=7),
    case('both_heap_boundary', first_cap=8, second_cap=8),
    case('both_heap_large', first_cap=0x10, second_cap=0x20),
    case('first_heap_second_inline', first_cap=0x20, second_cap=0x7),
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
