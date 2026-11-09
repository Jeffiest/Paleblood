#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_configure_from_retained_pair (0x0040fe70), for tools/verify.py run.

usage: configure_from_retained_pair_cases.py OUT_DIR

The holder takes the game's holder vtable, each slot's object is retained when present (0x0045a4b0),
the configuration (0x0040fd40) is scripted, then the second object and the first are released
(0x0045a4c0) when present. The four cases cover each slot present or empty.
"""
import json
import os
import sys

ADDRESS = '0x0040fe70'
RETAIN, RELEASE = '0x0045a4b0', '0x0045a4c0'
CONFIGURE = '0x0040fd40'


def case(cid, first, second):
    b = {'holder': {'size': 0x30}, 'first_slot': {'size': 8}, 'second_slot': {'size': 8},
         'first_obj': {'size': 0x10}, 'second_obj': {'size': 0x10}}
    m = [{'addr': 'buf:first_slot', 'pointer': 'first_obj'} if first else
         {'addr': 'buf:first_slot', 'bytes': '00' * 8},
         {'addr': 'buf:second_slot', 'pointer': 'second_obj'} if second else
         {'addr': 'buf:second_slot', 'bytes': '00' * 8}]
    stubs = []
    if first:
        stubs.append({'address': RETAIN, 'argc': 1, 'argi': [0]})
    if second:
        stubs.append({'address': RETAIN, 'argc': 1, 'argi': [0]})
    stubs.append({'address': CONFIGURE, 'argc': 2, 'argi': [0, 1], 'ret': 0})
    if second:
        stubs.append({'address': RELEASE, 'argc': 1, 'argi': [0]})
    if first:
        stubs.append({'address': RELEASE, 'argc': 1, 'argi': [0]})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:holder', 'rsi': 'buf:first_slot', 'rdx': 'buf:second_slot'},
            'buffers': b, 'memory': m, 'stubs': stubs, 'imports': []}


CASES = [
    case('both_slots_present', first=True, second=True),
    case('only_first_present', first=True, second=False),
    case('only_second_present', first=False, second=True),
    case('both_slots_empty', first=False, second=False),
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
