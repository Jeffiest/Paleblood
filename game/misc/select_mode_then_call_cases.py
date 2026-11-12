#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_select_mode_then_call_013b5100 (0x013b5100), for tools/verify.py run.

usage: select_mode_then_call_cases.py OUT_DIR

The check (0x01392cf0) and the shared routine (0x01391c60) are stubs taking the object, a second argument and four
more argument registers. The check's low byte decides whether the shared routine runs; the mode it runs in is 2
for an active object, otherwise 1 or 3 by the alternate byte. Covers both check results with each flag and
alternate byte, a check result whose low byte is zero with the upper bits set, and a shared-routine result with
its upper bits set (the caller reads the low byte).
"""
import json
import os
import struct
import sys

ADDRESS = '0x013b5100'
CHECK = '0x01392cf0'
SHARED = '0x01391c60'
OBJECT_BYTES = 0x100
ACTIVE_OFFSET = 0x90


def u8(v):
    return struct.pack('<B', v & 0xff).hex()


def case(cid, active=0, alternate=0, check=0, shared=0x5a, third=0x3, fourth=0x4, fifth=0x5, sixth=0x6):
    preset = '00' * ACTIVE_OFFSET + u8(active) + u8(alternate) + '00' * (OBJECT_BYTES - ACTIVE_OFFSET - 2)
    stubs = [{'address': CHECK, 'argc': 6, 'argi': [0, 1, 2, 3, 4, 5], 'ret': check}]
    if (check & 0xff) == 0:
        stubs.append({'address': SHARED, 'argc': 2, 'argi': [0, 1], 'ret': shared})
    args = {'rdi': 'buf:object', 'rsi': 0x9, 'rdx': third, 'rcx': fourth, 'r8': fifth, 'r9': sixth}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i8', 'args': args,
            'buffers': {'object': {'size': OBJECT_BYTES, 'bytes': preset}}, 'memory': [],
            'stubs': stubs, 'imports': []}


CASES = [
    case('inactive_alternate_zero_check_zero', active=0, alternate=0, check=0),
    case('inactive_alternate_zero_check_set', active=0, alternate=0, check=0x1),
    case('inactive_alternate_set_check_zero', active=0, alternate=1, check=0),
    case('inactive_alternate_set_check_set', active=0, alternate=1, check=0x1),
    case('active_check_zero', active=1, alternate=0, check=0),
    case('active_check_set', active=1, alternate=0, check=0x1),
    case('active_check_low_zero_high_set', active=1, alternate=1, check=0x100, shared=0x1234),
    case('inactive_check_low_ff', active=0, alternate=0, check=0x3ff, shared=0xff),
    case('arguments_high_bits', active=1, alternate=0, check=0, shared=0xfedcba9876543210,
         third=0xffffffffffffffff, fourth=0x8000000000000000, fifth=0x123456789abcdef0, sixth=0xffffffff),
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
