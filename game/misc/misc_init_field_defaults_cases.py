#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic field-copy objects for bb_misc_init_field_defaults (0x00cd1b00).

usage: misc_init_field_defaults_cases.py OUT_DIR

The constructor has no branches. The object starts with marker bytes everywhere, so every byte it writes
(and every byte it leaves alone) is compared; one case starts with a source pointer that must be cleared.
"""
import json
import os
import sys

ADDRESS = '0x00cd1b00'
OBJECT_SIZE = 0x90
MARKER_TAIL = 0x10


def case(cid, source_pointer=False):
    memory = []
    if source_pointer:
        memory.append({'addr': 'buf:obj+0x30', 'pointer': 'source'})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:obj'},
            'buffers': {'obj': {'size': OBJECT_SIZE + MARKER_TAIL, 'bytes': 'a5' * (OBJECT_SIZE + MARKER_TAIL)},
                        'source': {'size': 0x90, 'bytes': '3c' * 0x90}},
            'memory': memory, 'imports': [], 'stubs': []}


UNREACHABLE = {}

CASES = [
    case('defaults_over_marker_bytes'),
    case('defaults_clear_source_pointer', source_pointer=True),
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
