#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for bb_misc_register_field_type (0x00cd1730).

usage: misc_register_field_type_cases.py OUT_DIR

The function has no input: it fills a static field record and registers its type, then returns what the
registration returned. The record starts with zeroed and with stale bytes, so an unwritten field shows up.
The registration call is stubbed with its fourteen arguments (six registers, then eight stack words, of
which the dword slots compare their low half only) and with a return value.
"""
import json
import os
import sys

ADDRESS = '0x00cd1730'
REGISTER = '0x0081e9b0'
RECORD = '0x0584b310'
RECORD_BYTES = 0x28
# Register and stack slots of the registration call: the full qwords, then the dwords (low half).
REGISTER_FULL = [0, 1, 2, 3, 4, 5, 6, 8, 10, 11]
REGISTER_DWORD = [7, 9, 12, 13]


def case(cid, prior, registered):
    """prior: the bytes of the record before the call; registered: what the registration returns."""
    stubs = [{'address': REGISTER, 'argc': 14, 'argi': REGISTER_FULL, 'argu32': REGISTER_DWORD,
              'ret': registered}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': {},
            'buffers': {},
            'memory': [{'addr': RECORD, 'bytes': prior.hex()}],
            'imports': [], 'stubs': stubs}


CASES = [
    case('zeroed_record_registered', bytes(RECORD_BYTES), registered=0x42),
    case('stale_record_registered_zero', bytes([0xa5]) * RECORD_BYTES, registered=0),
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
