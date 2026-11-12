#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_clear_pointer_slot (0x0225b7d0), for tools/verify.py run.

usage: clear_pointer_slot_cases.py OUT_DIR

The slot is a pointer-sized word in a buffer; a marker word follows it so an overwrite past
the slot shows. The original never writes RAX, so every case sets 'returns': 'void'.
"""
import json
import os
import sys

ADDRESS = '0x0225b7d0'
MARKER = 'a1a2a3a4a5a6a7a8'


def case(cid, before):
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:slot'},
            'buffers': {'slot': {'size': 16}},
            'memory': [{'addr': 'buf:slot', 'bytes': before}, {'addr': 'buf:slot+8', 'bytes': MARKER}],
            'stubs': [], 'imports': []}


CASES = [
    case('already_null', '00' * 8),
    case('holds_pointer', '1032547698badcfe'),
    case('all_ones', 'ff' * 8),
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
