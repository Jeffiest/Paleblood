#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_dispose_then_finish (0x018b47a0), for tools/verify.py run.

usage: dispose_then_finish_cases.py OUT_DIR

The object's dispose slot (vtable +0x38) runs first; the function then tail-calls the finish helper
(0x018bf0e0) with the same object and returns its RAX unchanged.
"""
import json
import os
import sys

ADDRESS = '0x018b47a0'
DISPOSE_ENTRY = '0x00400020'   # guest entry of the object's dispose slot
FINISH = '0x018bf0e0'
MASK64 = (1 << 64) - 1


def case(cid, finished):
    """finished: the finish helper's RAX."""
    b = {'object': {'size': 0xe8}, 'object_vt': {'size': 0x40}}
    m = [{'addr': 'buf:object', 'pointer': 'object_vt'},
         {'addr': 'buf:object_vt+56', 'guest': DISPOSE_ENTRY}]
    stubs = [{'address': DISPOSE_ENTRY, 'argc': 1, 'argi': [0]},
             {'address': FINISH, 'argc': 1, 'argi': [0], 'ret': hex(finished & MASK64)}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:object'}, 'buffers': b, 'memory': m, 'stubs': stubs, 'imports': []}


CASES = [
    case('finish_zero', 0),
    case('finish_low_byte_set', 0x1ff),
    case('finish_high_word', 0x8000000100000002),
    case('finish_all_ones', MASK64),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
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
