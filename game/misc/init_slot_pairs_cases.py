#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_init_slot_pairs_013b51a0 (0x013b51a0), for tools/verify.py run.

usage: init_slot_pairs_cases.py OUT_DIR

The slot setter (0x01391960) is a stub taking the object, six register arguments and four stack arguments; the
stack arguments are 32-bit values, compared with argu32. The original makes seven calls in order; the last one's
result is the original's result, so the last stub returns a value with its upper bits set. There are two cases:
one whose last result is zero and one whose last result has the low dword set.
"""
import json
import os
import sys

ADDRESS = '0x013b51a0'
SETTER = '0x01391960'
CALLS = 7
OBJECT_BYTES = 0x100


def case(cid, last_result):
    stubs = [{'address': SETTER, 'argc': 10, 'argi': [0, 1, 2, 3, 4, 5], 'argu32': [6, 7, 8, 9]}
             for _ in range(CALLS - 1)]
    stubs.append({'address': SETTER, 'argc': 10, 'argi': [0, 1, 2, 3, 4, 5], 'argu32': [6, 7, 8, 9],
                  'ret': last_result})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': {'rdi': 'buf:object'},
            'buffers': {'object': {'size': OBJECT_BYTES}}, 'memory': [], 'stubs': stubs, 'imports': []}


CASES = [
    case('last_result_zero', 0),
    case('last_result_upper_bits', 0x1234567890abcdef),
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
