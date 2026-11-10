#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_init_empty_list_586d918 (0x01140d90), for tools/verify.py run.

usage: init_empty_list_586d918_cases.py OUT_DIR

The function writes 28 bytes of the object at 0x0586d918, from 0x58 to 0x74: the two links of the list
anchor, the count and a 32-bit field. Every call writes the same values, so the cases differ in the old
bytes there, which must all be replaced, and each has marker bytes just before and just after the
written part that must survive. The function takes no arguments, so the argument registers hold values
that must be ignored.
"""
import json
import os
import sys

ADDRESS = '0x01140d90'
OWNER = 0x0586d918
WRITTEN = OWNER + 0x58
WRITTEN_BYTES = 28
BEFORE = WRITTEN - 8
AFTER = WRITTEN + WRITTEN_BYTES
GARBAGE = {'rdi': '0x5a5a5a5a5a5a5a5a', 'rsi': '0x1111111111111111', 'rdx': '0xffffffffffffffff',
           'rcx': '0x0', 'r8': '0x8080808080808080', 'r9': '0x7f'}


def ramp(seed):
    """Bytes that differ from their neighbours, so a wrong offset or width is visible."""
    return bytes(((i * 37 + seed) & 0xff) for i in range(WRITTEN_BYTES)).hex()


def case(cid, old='e5' * WRITTEN_BYTES, registers=None):
    """One call with old bytes in the written part and marker bytes on both sides of it."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': dict(GARBAGE if registers is None else registers),
            'buffers': {}, 'imports': [], 'stubs': [],
            'memory': [{'addr': hex(BEFORE), 'bytes': 'a1' * 8},
                       {'addr': hex(AFTER), 'bytes': 'b2' * 4},
                       {'addr': hex(WRITTEN), 'bytes': old}]}


CASES = [
    case('old_bytes'),
    case('zero_bytes', old='00' * WRITTEN_BYTES),
    case('all_ones_bytes', old='ff' * WRITTEN_BYTES),
    case('ramp_bytes', old=ramp(0x42)),
    case('other_ramp_bytes', old=ramp(0x99)),
    case('sign_pattern_bytes', old='7f80' * (WRITTEN_BYTES // 2)),
    case('zero_registers', registers={k: '0x0' for k in GARBAGE}),
    case('zero_registers_zero_bytes', old='00' * WRITTEN_BYTES, registers={k: '0x0' for k in GARBAGE}),
]


def main():
    """Write one JSON case per call shape to the requested directory."""
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
