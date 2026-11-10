#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_delete_object_thunk (0x0041cad0), for tools/verify.py run.

usage: delete_object_thunk_cases.py OUT_DIR

The function is one jump to the library's operator delete. Each case passes an object pointer: operator
delete must be called once with that same pointer. Operator delete returns nothing, so the return
register is not compared.
"""
import json
import os
import sys

ADDRESS = '0x0041cad0'
OPERATOR_DELETE = '0x02fbe588'
MASK64 = (1 << 64) - 1


def case(cid, obj):
    """One call with the object pointer in RDI."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': {'rdi': hex(obj & MASK64)},
            'buffers': {}, 'memory': [], 'imports': [], 'stubs': [{'address': OPERATOR_DELETE, 'argc': 1, 'ret': '0x0'}]}


CASES = [
    case('object_null', 0),
    case('object_ordinary', 0x7000),
    case('object_other', 0x1238),
    case('object_all_ones', MASK64),
    case('object_high_bit', 0x8000000000000010),
    case('object_upper_half', 0x500000000),
]


def main():
    """Write one JSON case per call shape to the requested directory."""
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    os.makedirs(sys.argv[1], exist_ok=True)
    for fixture in CASES:
        with open(os.path.join(sys.argv[1], fixture['id'] + '.json'), 'w') as stream:
            json.dump(fixture, stream, indent=1)
    print(f'{len(CASES)} cases written to {sys.argv[1]}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
