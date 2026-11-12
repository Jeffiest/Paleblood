#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_register_vtable_type_descriptor (0x00ce7410).

usage: register_vtable_type_descriptor_cases.py OUT_DIR

The function has no input: it registers a fixed descriptor and fills it. The cases differ in the
descriptor's prior contents, so a field the replacement leaves unwritten shows up in the
comparison. The registration call is stubbed with its fourteen arguments (six registers, then eight
stack words, of which the dword slots compare their low half only), and the scratch-object
initializer with its two arguments. The stack guard is read from the image, so it is presented as
a buffer.
"""
import json
import os
import sys

ADDRESS = '0x00ce7410'
REGISTER = '0x0081e9b0'
SCRATCH_INIT = '0x0085d9e0'
DESCRIPTOR = '0x0584c680'
GUARD = '0x057e3be0'
DESCRIPTOR_BYTES = 0x30
# Register and stack slots of the registration call: the full qwords, then the dwords (low half).
REGISTER_FULL = [0, 1, 2, 3, 4, 5, 6, 8, 10, 11]
REGISTER_DWORD = [7, 9, 12, 13]


def case(cid, prior):
    """prior: the bytes the descriptor holds before the call."""
    stubs = [{'address': REGISTER, 'argc': 14, 'argi': REGISTER_FULL, 'argu32': REGISTER_DWORD},
             {'address': SCRATCH_INIT, 'argc': 2, 'argu32': [1]}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': {},
            'buffers': {'guard': {'size': 8, 'bytes': 'c3' * 8}},
            'memory': [{'addr': GUARD, 'pointer': 'guard'},
                       {'addr': DESCRIPTOR, 'bytes': prior.hex()}],
            'imports': [], 'stubs': stubs}


CASES = [
    case('zeroed_descriptor', bytes(DESCRIPTOR_BYTES)),
    case('stale_descriptor', bytes([0xa5]) * DESCRIPTOR_BYTES),
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
