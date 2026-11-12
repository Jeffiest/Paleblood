#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic forwarding pair objects for bb_misc_destroy_member_then_forward (0x00cd43d0).

usage: misc_destroy_member_then_forward_cases.py OUT_DIR

The routine has no branches: it releases the member at 0x268 and then returns the next stage's result for
the object. The object's marker bytes are compared, and the next stage returns two different values.
"""
import json
import os
import sys

ADDRESS = '0x00cd43d0'
RELEASE = '0x00836840'
NEXT_STAGE = '0x00cd4000'
OBJECT_SIZE = 0x278


def case(cid, next_result):
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:object'},
            'buffers': {'object': {'size': OBJECT_SIZE, 'bytes': 'a5' * OBJECT_SIZE}},
            'memory': [], 'imports': [],
            'stubs': [{'address': RELEASE, 'argc': 1},
                      {'address': NEXT_STAGE, 'argc': 1, 'ret': next_result}]}


UNREACHABLE = {}

CASES = [
    case('forwards_next_stage_result', next_result=0x1122334455667788),
    case('forwards_zero_result', next_result=0),
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
