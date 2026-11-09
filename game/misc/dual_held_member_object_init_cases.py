#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic dual held member objects built by bb_misc_dual_held_member_object_init (0x00be6dc0).

usage: dual_held_member_object_init_cases.py OUT_DIR

The constructor takes no held item. The object starts as garbage, so each field it sets (the count word,
the vtable, the zeroed kind and held words, the half scale, the cleared flag) and each byte it must leave
alone are visible. The three member calls are stubbed in call order: the first with the name, then two
with a null value.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x00be6dc0'
FILL_MEMBER = '0x00836640'
OBJECT_BYTES = 0x58


def case(cid, fill):
    """fill: the byte pattern the object starts with."""
    stubs = [{'address': FILL_MEMBER, 'argc': 2},
             {'address': FILL_MEMBER, 'argc': 2, 'argi': [0, 1]},
             {'address': FILL_MEMBER, 'argc': 2, 'argi': [0, 1]}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': {'rdi': 'buf:object'},
            'buffers': {'object': {'size': OBJECT_BYTES, 'bytes': fill * OBJECT_BYTES}},
            'memory': [], 'imports': [], 'stubs': stubs}


CASES = [
    case('garbage_object', 'a5'),
    case('all_ones_object', 'ff'),
]


def main():
    output = Path(sys.argv[1]) if len(sys.argv) == 2 else None
    if output is None:
        print(__doc__, file=sys.stderr)
        return 2
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        with (output / (fixture['id'] + '.json')).open('w') as stream:
            stream.write(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} cases written to {output}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
