#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for bb_misc_set_alternate_flag_013b5360 (013b5360), for tools/verify.py run.

usage: set_alternate_flag_cases.py OUT_DIR

The function stores one when its value argument is non-zero (tested as 32 bits) and zero otherwise into the byte at
offset 0x91 of the object. The other bytes of the object are preset and must stay as they are. Covers zero, one,
a value whose low 32 bits are zero, and a value with only the high bits set in the low byte.
"""
import json
import os
import sys

ADDRESS = '0x013b5360'
OFFSET = 0x91
OBJECT_BYTES = 0x100


def case(cid, value, preset=0xee):
    flags = '00' * OFFSET + f'{preset:02x}' + '00' * (OBJECT_BYTES - OFFSET - 1)
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:object', 'rsi': value},
            'buffers': {'object': {'size': OBJECT_BYTES, 'bytes': flags}}, 'memory': [], 'stubs': [],
            'imports': []}


CASES = [
    case('value_zero', 0),
    case('value_one', 1),
    case('low_32_bits_zero', 0x100000000),
    case('value_large', 0x80000000),
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
