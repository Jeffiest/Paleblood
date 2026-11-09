#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for bb_misc_register_type_descriptor (0x00bdd2e0).

usage: register_type_descriptor_cases.py OUT_DIR

The function has no input: it registers a fixed descriptor and fills it. The cases differ in the
descriptor's prior contents, so that a field the replacement leaves unwritten shows up in the
comparison. The registration call is stubbed with its fourteen arguments (six registers, then eight
stack words, of which the dword slots compare their low half only), and the five empty-member
initialisers are stubbed with the empty template's argument.
"""
import json
import os
import sys

ADDRESS = '0x00bdd2e0'
REGISTER = '0x0081e9b0'
EMPTY_MEMBER = '0x00836830'
DESCRIPTOR = '0x05844c90'
GUARD = '0x057e3be0'
DESCRIPTOR_BYTES = 0x30
# Register and stack slots of the registration call: the full qwords, then the dwords (low half).
REGISTER_FULL = [0, 1, 2, 3, 4, 5, 6, 8, 10, 11]
REGISTER_DWORD = [7, 9, 12, 13]


def case(cid, prior):
    """prior: the bytes the descriptor holds before the call."""
    stubs = [{'address': REGISTER, 'argc': 14, 'argi': REGISTER_FULL, 'argu32': REGISTER_DWORD}]
    stubs += [{'address': EMPTY_MEMBER, 'argc': 2}] * 5
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
