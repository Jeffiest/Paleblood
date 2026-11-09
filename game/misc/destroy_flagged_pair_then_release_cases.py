#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_destroy_flagged_pair_then_release (0x0139bf20), for tools/verify.py run.

usage: destroy_flagged_pair_then_release_cases.py OUT_DIR

The flag byte is zero, one, or nonzero in its high bits only; each owned pointer is null or present. A
present pointer is released through its stub only when the flag is nonzero. The owned pair destructor and
the final library call are scripted, and the final call's result is returned.
"""
import json
import os
import struct
import sys

ADDRESS = '0x0139bf20'
RELEASE = '0x0247c460'
PAIR_DESTRUCTOR = '0x0139b630'
FINAL_CALL = '0x02fbe588'
MASK64 = (1 << 64) - 1
VTABLE_BUFFER = 'pair_vt'


def u64(value):
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, flag=1, first=True, second=True, result=0x1122334455667788):
    """One destruction: the flag byte and the two pointers are set as given before the call."""
    flag_byte = struct.pack('<B', flag & 0xff).hex()
    buffers = {'self': {'size': 0x48, 'bytes': 'b6' * 0x48}, 'first': {'size': 0x10}, 'second': {'size': 0x10}}
    memory = [{'addr': 'buf:self+0x30', 'pointer': 'first'} if first else {'addr': 'buf:self+0x30', 'bytes': u64(0)},
              {'addr': 'buf:self+0x38', 'pointer': 'second'} if second else {'addr': 'buf:self+0x38', 'bytes': u64(0)},
              {'addr': 'buf:self+0x40', 'bytes': flag_byte + '00' * 7}]
    stubs = []
    if flag & 0xff:
        if first:
            stubs.append({'address': RELEASE, 'argc': 1})
        if second:
            stubs.append({'address': RELEASE, 'argc': 1})
    stubs.append({'address': PAIR_DESTRUCTOR, 'argc': 1, 'ret': '0x0'})
    stubs.append({'address': FINAL_CALL, 'argc': 1, 'ret': hex(result & MASK64)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': {'rdi': 'buf:self'},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('flag_zero_pointers_kept_cleared', flag=0),
    case('flag_one_both_present', flag=1),
    case('flag_one_first_only', flag=1, second=False),
    case('flag_one_second_only', flag=1, first=False),
    case('flag_one_both_null', flag=1, first=False, second=False),
    case('flag_zero_both_present', flag=0),
    case('flag_high_bit_only', flag=0x80),
    case('flag_0x10_is_set', flag=0x10, second=False),
    case('result_zero', result=0),
    case('result_all_ones', result=MASK64),
]


def main():
    """Write one JSON case per shape to the requested directory."""
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
