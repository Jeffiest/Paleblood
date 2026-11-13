#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic record sets for misc_remove_record_pointer_02265b30 (0x02265b30), for tools/verify.py run.

usage: remove_record_pointer_cases.py OUT_DIR

The singleton global (0x0593b120) holds a holder whose record set is at +0xca8; the set's begin and end
pointers select record pointers in a buffer. The library byte move (0x02fbe658) is a stub that receives the
destination, source and byte count and returns a value that the routine hands back. Covers an empty set (no
change, the singleton is the result), a value that is absent (no change), a match first, middle and last, a
repeated value (the first match goes), a single record, and a zero value. A null singleton is reported as a
fatal error and then loaded through, which faults on both sides, so that outcome is declared unreachable.
"""
import json
import os
import struct
import sys

ADDRESS = '0x02265b30'
GATE_GLOBAL = '0x0593b120'
MOVE_BYTES = '0x02fbe658'
HOLDER_SIZE = 0xcb0
RECORDS_SIZE = 0x80
STORE_SLOTS = 4
MOVE_RESULT = 0x5566
MASK64 = (1 << 64) - 1

# The JNZ after the singleton's null test: its fallthrough is the null case, which faults after the report.
UNREACHABLE = {'0x02265b47': ('fallthrough', 'fatal error 0x024b55b0 then a load through null at 0x02265b6d')}


def case(cid, values, value):
    """One removal from a record set holding the given pointer values."""
    count = len(values)
    contents = b''.join(struct.pack('<Q', v & MASK64) for v in values)
    contents += b'\xcc' * (STORE_SLOTS * 8 - len(contents))
    buffers = {'holder': {'size': HOLDER_SIZE}, 'records': {'size': RECORDS_SIZE},
               'store': {'size': STORE_SLOTS * 8, 'bytes': contents.hex()}}
    memory = [{'addr': 'buf:records+0x58', 'pointer': 'store'},
              {'addr': 'buf:records+0x60', 'pointer': f'store+{hex(count * 8)}'},
              {'addr': 'buf:holder+0xca8', 'pointer': 'records'},
              {'addr': GATE_GLOBAL, 'pointer': 'holder'}]
    stubs = []
    if value in values:
        stubs.append({'address': MOVE_BYTES, 'argc': 3, 'argi': [0, 1, 2], 'ret': hex(MOVE_RESULT)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': hex(value & MASK64)}, 'buffers': buffers, 'memory': memory, 'imports': [],
            'stubs': stubs}


CASES = [
    case('empty_set', [], 0x12),
    case('value_absent', [0x11, 0x22, 0x33], 0x99),
    case('match_first_of_three', [0x11, 0x22, 0x33], 0x11),
    case('match_middle_of_three', [0x11, 0x22, 0x33], 0x22),
    case('match_last_of_three', [0x11, 0x22, 0x33], 0x33),
    case('match_only_record', [0x44], 0x44),
    case('repeated_value_first_removed', [0x55, 0x66, 0x55], 0x55),
    case('zero_value_matches_zero_record', [0x00, 0x77, 0x88], 0x00),
    case('sign_bit_value_absent', [0x1, 0x2], 1 << 63),
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
