#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_holder_value_if_accepted (0x00419a20), for tools/verify.py run.

usage: holder_value_if_accepted_cases.py OUT_DIR

The holder's second lock is taken (0x02fbe598). A non-zero value at +0x20 goes to the check (0x0042e620); when the
check returns a nonzero byte, the value is the result, otherwise zero. The lock is released by the last call
(0x02fbe5a8), and the result is the function's result.
"""
import json
import os
import struct
import sys

ADDRESS = '0x00419a20'
LOCK, UNLOCK = '0x02fbe598', '0x02fbe5a8'
CHECK = '0x0042e620'
HOLDER_SIZE = 0xc0
VALUE_OFFSET = 0x20
MASK64 = (1 << 64) - 1


def u64(v):
    return struct.pack('<Q', v & MASK64).hex()


def case(cid, value, accepted=None):
    stubs = [{'address': LOCK, 'argc': 1, 'argi': [0]}]
    if value != 0:
        stubs.append({'address': CHECK, 'argc': 1, 'argi': [0], 'ret': hex(accepted)})
    stubs.append({'address': UNLOCK, 'argc': 1, 'argi': [0], 'ret': 0})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:holder'},
            'buffers': {'holder': {'size': HOLDER_SIZE, 'bytes': 'c3' * HOLDER_SIZE}},
            'memory': [{'addr': 'buf:holder+%d' % VALUE_OFFSET, 'bytes': u64(value)}],
            'stubs': stubs, 'imports': []}


CASES = [
    case('empty_value_is_zero', value=0),
    case('accepted_value_is_returned', value=0x1234, accepted=1),
    case('rejected_value_is_zero', value=0x1234, accepted=0),
    case('accepted_high_bits_value', value=0xfedcba9876543210, accepted=0x80),
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
