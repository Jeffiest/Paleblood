#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_forward_second_entry_013ba1f0 (0x013ba1f0), for tools/verify.py run.

usage: forward_second_entry_cases.py OUT_DIR

The function scales the index (taken as 32 bits) by the 1200-byte entry stride, adds the second array's start (the
holder's pointer at 0x18) and tail-calls the routine 0x014471e0 with that address, the low 32 bits of RDX, and the
caller's RDX, RCX, R8 and R9 unchanged. The routine is a stub; it never reads the entry, so indices far past the
array are fine. Covers index 0, small and large indices, the top bit of the 32-bit index, and register values with
the upper bits set.
"""
import json
import os
import sys

ADDRESS = '0x013ba1f0'
CALLEE = '0x014471e0'
HOLDER_BYTES = 0x20
ENTRY_BYTES = 0x1200
FIRST_OFFSET = 0x10
SECOND_OFFSET = 0x18


def case(cid, index, rdx, rcx, r8, r9, ret):
    b = {'holder': {'size': HOLDER_BYTES, 'bytes': 'ee' * HOLDER_BYTES},
         'first': {'size': ENTRY_BYTES, 'bytes': '5a' * ENTRY_BYTES},
         'second': {'size': ENTRY_BYTES, 'bytes': '6b' * ENTRY_BYTES}}
    m = [{'addr': f'buf:holder+{FIRST_OFFSET:#x}', 'pointer': 'first'},
         {'addr': f'buf:holder+{SECOND_OFFSET:#x}', 'pointer': 'second'}]
    stubs = [{'address': CALLEE, 'argc': 6, 'argi': [0, 1, 2, 3, 4, 5], 'ret': hex(ret)}]
    args = {'rdi': 'buf:holder', 'rsi': index, 'rdx': rdx, 'rcx': rcx, 'r8': r8, 'r9': r9}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': args,
            'buffers': b, 'memory': m, 'stubs': stubs, 'imports': []}


CASES = [
    case('index_zero', index=0, rdx=0x11223344, rcx=0x55, r8=0x66, r9=0x77, ret=0x1234),
    case('index_two_rdx_upper_set', index=2, rdx=0xffffffff80000001, rcx=0, r8=0x12, r9=0, ret=0),
    case('index_one_all_ones', index=1, rdx=0x7fffffff, rcx=0xdeadbeef, r8=0xffffffffffffffff, r9=1, ret=0x5555),
    case('index_top_bit', index=0x80000000, rdx=0, rcx=0, r8=0, r9=0, ret=0xffffffffffffffff),
    case('index_all_ones', index=0xffffffff, rdx=0x9, rcx=0x8, r8=0x7, r9=0x6, ret=0x7fffffffdeadbeef),
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
