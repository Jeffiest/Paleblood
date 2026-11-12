#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_process_element_range (0x027167b0), for tools/verify.py run.

usage: process_element_range_cases.py OUT_DIR

The range holds two indices, begin then end (32-bit). For each index from begin up to, not including,
end, the owner's element pointer at that index (the owner's array at +0x10) is passed to the element
function at 0x0132c730 with the owner's float weight at +0x30 in XMM0, then to 0x0132c750. An empty or
inverted range calls nothing. Both element functions are stubbed, so each case checks the order of the
calls and their arguments: one stub per call, in call order.
"""
import json
import os
import struct
import sys

ADDRESS = '0x027167b0'
SCALE = '0x0132c730'
RELEASE = '0x0132c750'
OWNER_SIZE = 0x38
RANGE_SIZE = 8
SLOTS = 4


def u32(value):
    return struct.pack('<i', value).hex() if value < 0 else (value & 0xffffffff).to_bytes(4, 'little').hex()


def f32(value):
    return struct.pack('<f', value).hex()


def case(cid, begin, end, elements=None, weight=0.5):
    """elements: the pointer for each slot of the owner's array, or None for a null slot."""
    if elements is None:
        elements = [f'e{i}' for i in range(SLOTS)]
    buffers = {'owner': {'size': OWNER_SIZE}, 'range': {'size': RANGE_SIZE},
               'slots': {'size': 8 * SLOTS}}
    memory = [
        {'addr': 'buf:owner+16', 'pointer': 'slots'},
        {'addr': 'buf:owner+48', 'bytes': f32(weight)},
        {'addr': 'buf:range', 'bytes': u32(begin) + u32(end)},
    ]
    stubs = []
    for slot in range(SLOTS):
        target = elements[slot]
        if target is None:
            memory.append({'addr': f'buf:slots+{8 * slot}', 'bytes': '00' * 8})
        else:
            buffers[target] = {'size': 8}
            memory.append({'addr': f'buf:slots+{8 * slot}', 'pointer': target})
    for index in range(begin, end):
        stubs.append({'address': SCALE, 'argc': 1, 'argf32': [0]})
        stubs.append({'address': RELEASE, 'argc': 1})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:owner', 'rsi': 'buf:range'},
            'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('empty_range', begin=2, end=2),
    case('inverted_range_calls_nothing', begin=3, end=1),
    case('one_element', begin=0, end=1),
    case('all_elements', begin=0, end=4),
    case('offset_range', begin=1, end=3),
    case('last_element_only', begin=3, end=4, weight=-1.5),
    case('null_element_is_passed_on', begin=0, end=2, elements=[None, 'e1', 'e2', 'e3']),
    case('zero_weight', begin=1, end=4, weight=0.0),
    case('large_weight', begin=0, end=2, weight=3.25),
]


def main():
    """Write one JSON case per range shape to the requested directory."""
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
