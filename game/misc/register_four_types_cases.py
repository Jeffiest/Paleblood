#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for bb_misc_register_four_types (0x00cb6f00).

usage: register_four_types_cases.py OUT_DIR

The function takes no input. Its four registration calls are stubbed with their fourteen arguments
(six registers, then eight stack words; the dword stack slots compare their low half only), and the two
record initialisers write the vtable word the first two descriptors copy. The four static descriptors
(0x30 bytes each) start zeroed or filled with 0xa5, so a field left unwritten shows up.
"""
import json
import os
import sys

ADDRESS = '0x00cb6f00'
REGISTER = '0x0081e9b0'
LARGE_RECORD_INIT = '0x00ce7690'
SMALL_RECORD_INIT = '0x00ce76d0'
GUARD = '0x057e3be0'
DESCRIPTORS = ['0x0584a6c8', '0x0584a748', '0x0584a7c8', '0x0584a848']
DESCRIPTOR_BYTES = 0x30
LARGE_RECORD_BYTES = 0xd0
REGISTER_FULL = [0, 1, 2, 3, 4, 5, 6, 8, 10, 11]
REGISTER_DWORD = [7, 9, 12, 13]


def case(cid, prior, first_vtable, second_vtable):
    """prior: the bytes each descriptor holds before the call; the vtables the two initialisers store."""
    large = bytes.fromhex(first_vtable) + bytes([0x77]) * (LARGE_RECORD_BYTES - 8)
    stubs = [
        {'address': REGISTER, 'argc': 14, 'argi': REGISTER_FULL, 'argu32': REGISTER_DWORD},
        {'address': LARGE_RECORD_INIT, 'argc': 2,
         'writes': [{'arg': 0, 'offset': 0, 'bytes': large.hex()}]},
        {'address': REGISTER, 'argc': 14, 'argi': REGISTER_FULL, 'argu32': REGISTER_DWORD},
        {'address': SMALL_RECORD_INIT, 'argc': 2,
         'writes': [{'arg': 0, 'offset': 0, 'bytes': second_vtable}]},
        {'address': REGISTER, 'argc': 14, 'argi': REGISTER_FULL, 'argu32': REGISTER_DWORD},
        {'address': REGISTER, 'argc': 14, 'argi': REGISTER_FULL, 'argu32': REGISTER_DWORD},
    ]
    memory = [{'addr': GUARD, 'pointer': 'guard'}]
    memory += [{'addr': address, 'bytes': prior.hex()} for address in DESCRIPTORS]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': {},
            'buffers': {'guard': {'size': 8, 'bytes': 'c3' * 8}},
            'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('zeroed_descriptors', bytes(DESCRIPTOR_BYTES), '1122334455667788', '99aabbccddeeff00'),
    case('stale_descriptors', bytes([0xa5]) * DESCRIPTOR_BYTES, '0102030405060708', '1011121314151617'),
    case('null_vtables_from_initialisers', bytes([0xff]) * DESCRIPTOR_BYTES, '00' * 8, '00' * 8),
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
