#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_init_named_vtable_object_013b5080 (0x013b5080), for tools/verify.py run.

usage: init_named_vtable_object_cases.py OUT_DIR

The base set-up routine (0x013914a0) is a stub taking the object and three further arguments. The name
routine (0x01392a80) is a stub too: the original jumps to it, so its result is what the original returns; the stub
returns the class vtable address, which the original keeps in RAX. The object starts with the cleared word
set to all ones, so the write to offset 0x90 is seen; the other arguments pass through unchanged.
"""
import json
import os
import sys

ADDRESS = '0x013b5080'
BASE = '0x013914a0'
NAME = '0x01392a80'
VTABLE_ADDRESS = 0x056f3780
OBJECT_BYTES = 0x100
CLEARED_OFFSET = 0x90


def case(cid, second=0x11, third=0x22, fourth=0x33):
    preset = '00' * CLEARED_OFFSET + 'ffff' + '00' * (OBJECT_BYTES - CLEARED_OFFSET - 2)
    b = {'object': {'size': OBJECT_BYTES, 'bytes': preset}}
    stubs = [{'address': BASE, 'argc': 4, 'argi': [0, 1, 2, 3]},
             {'address': NAME, 'argc': 2, 'argi': [0, 1], 'ret': f'guest:{VTABLE_ADDRESS:#x}'}]
    args = {'rdi': 'buf:object', 'rsi': second, 'rdx': third, 'rcx': fourth}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': args,
            'buffers': b, 'memory': [], 'stubs': stubs, 'imports': []}


CASES = [
    case('plain_arguments'),
    case('zero_arguments', second=0, third=0, fourth=0),
    case('high_bit_arguments', second=0x8000000000000001, third=0xfedcba9876543210, fourth=0xffffffffffffffff),
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
