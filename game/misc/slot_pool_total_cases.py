#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic inputs for bb_misc_slot_pool_total (0x00b68770): the scripted child computation
(0x00b685f0) stores a changed flag and a 32-bit total, and the wrapper returns the total.

usage: slot_pool_total_cases.py OUT_DIR
"""
import json
import os
import struct
import sys

ADDRESS = '0x00b68770'
COMPUTE = '0x00b685f0'
GUARD = '0x057e3be0'
MASK32 = (1 << 32) - 1


def case(cid, total=0x1234, changed=1, scale=3):
    """One call: the computation stores the scripted flag and total through its output pointers."""
    return {
        'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i32',
        'args': {'rdi': 'buf:pool', 'rsi': hex(scale & MASK32)},
        'buffers': {'pool': {'size': 0x80, 'bytes': '00' * 0x80},
                    'guard': {'size': 8, 'bytes': 'c3' * 8}},
        'memory': [{'addr': GUARD, 'pointer': 'guard'}],
        'imports': [],
        'stubs': [{'address': COMPUTE, 'argc': 4,
                   'writes': [{'arg': 2, 'bytes': f'{changed & 0xff:02x}'},
                              {'arg': 3, 'bytes': struct.pack('<I', total & MASK32).hex()}]}],
    }


CASES = [
    case('total_and_changed_set'),
    case('zero_total_unchanged', total=0, changed=0, scale=0),
    case('total_all_bits', total=MASK32, changed=1, scale=1),
    case('negative_scale', total=7, changed=0, scale=-1),
    case('int_min_scale', total=0x80000000, changed=1, scale=0x80000000),
    case('total_high_bit_changed_clear', total=0x80000000, changed=0, scale=2),
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
