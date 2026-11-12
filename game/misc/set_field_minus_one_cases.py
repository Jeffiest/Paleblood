#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_set_field_minus_one (0x0225caa0), for tools/verify.py run.

usage: set_field_minus_one_cases.py OUT_DIR

The function stores 0xffffffff at offset 0x54 of its argument and nothing else. Each case has a
marker word before the field and after it so an overwrite on either side shows. The original never
writes RAX, so every case sets 'returns': 'void'.
"""
import json
import os
import sys

ADDRESS = '0x0225caa0'
FIELD = 0x54
SIZE = 0x60
MARK_AFTER = 'b1b2b3b4b5b6b7b8'


def case(cid, field):
    """One call on an object: 0x54 marker bytes, the field, then a marker word that must survive."""
    before = '5a' * FIELD
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:object'},
            'buffers': {'object': {'size': SIZE}},
            'memory': [{'addr': 'buf:object', 'bytes': before + field + MARK_AFTER}],
            'stubs': [], 'imports': []}


CASES = [
    case('field_zero', '00000000'),
    case('field_positive', '78563412'),
    case('field_already_minus_one', 'ffffffff'),
    case('field_high_bit', '00000080'),
    case('field_low_byte_only', '0f000000'),
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
