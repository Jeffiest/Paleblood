#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for bb_misc_register_three_types (0x00cb1260).

usage: register_three_types_cases.py OUT_DIR

The function takes no input. Its three registration calls are stubbed with their fourteen arguments
(six registers, then eight stack words; the dword stack slots compare their low half only), as the
pair registration does. The three static descriptors (0x30 bytes each) start either zeroed or filled
with 0xa5, so a field left unwritten shows up. The function returns the third descriptor's address.
"""
import json
import os
import sys

ADDRESS = '0x00cb1260'
REGISTER = '0x0081e9b0'
DESCRIPTORS = ['0x05849b70', '0x05849bf0', '0x05849c70']
DESCRIPTOR_BYTES = 0x30
REGISTER_FULL = [0, 1, 2, 3, 4, 5, 6, 8, 10, 11]
REGISTER_DWORD = [7, 9, 12, 13]


def case(cid, prior):
    """prior: the bytes each descriptor holds before the call."""
    stubs = [{'address': REGISTER, 'argc': 14, 'argi': REGISTER_FULL, 'argu32': REGISTER_DWORD}
             for _ in range(3)]
    memory = [{'addr': address, 'bytes': prior.hex()} for address in DESCRIPTORS]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': {},
            'buffers': {}, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('zeroed_descriptors', bytes(DESCRIPTOR_BYTES)),
    case('stale_descriptors', bytes([0xa5]) * DESCRIPTOR_BYTES),
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
