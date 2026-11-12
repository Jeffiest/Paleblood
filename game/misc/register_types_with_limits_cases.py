#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for bb_misc_register_types_with_limits (0x00e971e0).

usage: register_types_with_limits_cases.py OUT_DIR

The function takes no input. Its three registration calls are stubbed with their fourteen arguments
(six registers, then eight stack words; the dword stack slots compare their low half only) and the
record initialiser writes the vtable word the third descriptor copies. The three limit blocks (0x60
bytes) and the three static descriptors (0x30 bytes each) start with different contents, so a field left
unwritten shows up.
"""
import json
import os
import sys

ADDRESS = '0x00e971e0'
REGISTER = '0x0081e9b0'
RECORD_INIT = '0x00ea9400'
GUARD = '0x057e3be0'
LIMITS = '0x0585bd50'
LIMIT_BYTES = 0x60
DESCRIPTORS = ['0x0585bc20', '0x0585bca0', '0x0585bd20']
DESCRIPTOR_BYTES = 0x30
RECORD_BYTES = 0xc8
REGISTER_FULL = [0, 1, 2, 3, 4, 5, 6, 8, 10, 11]
REGISTER_DWORD = [7, 9, 12, 13]


def case(cid, filler, vtable):
    """filler: the byte every limit and descriptor byte holds before the call; vtable: the record's first word."""
    record = bytes.fromhex(vtable) + bytes([0x77]) * (RECORD_BYTES - 8)
    register = {'address': REGISTER, 'argc': 14, 'argi': REGISTER_FULL, 'argu32': REGISTER_DWORD}
    stubs = [register, dict(register), dict(register),
             {'address': RECORD_INIT, 'argc': 2, 'writes': [{'arg': 0, 'offset': 0, 'bytes': record.hex()}]}]
    # The record initialiser runs after the third registration, as in the original.
    memory = [{'addr': GUARD, 'pointer': 'guard'},
              {'addr': LIMITS, 'bytes': bytes([filler]).hex() * LIMIT_BYTES}]
    memory += [{'addr': address, 'bytes': bytes([filler]).hex() * DESCRIPTOR_BYTES} for address in DESCRIPTORS]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': {},
            'buffers': {'guard': {'size': 8, 'bytes': 'c3' * 8}},
            'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('zeroed_blocks', 0x00, '1122334455667788'),
    case('stale_blocks', 0xa5, '0102030405060708'),
    case('null_record_vtable', 0xff, '00' * 8),
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
