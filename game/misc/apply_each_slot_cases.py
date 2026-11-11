#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_apply_each_slot (0x00cb1040), for tools/verify.py run.

usage: apply_each_slot_cases.py OUT_DIR

A table whose count sits at +0x18: zero and negative counts (no slot visited), one slot, and two or
three slots, with the value read for each slot varied (zero, all ones, a sign bit). The value reader
(0x00cb0b10) and the store (0x00cb0560) are stubs, each consumed once per slot in order.
The function returns nothing.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x00cb1040'
READ_SLOT = '0x00cb0b10'     # the slot value reader: stubbed (a real game entry)
STORE_SLOT = '0x00cb0560'    # the slot store: stubbed (a real game entry)
COUNT_SLOT = 0x18
SOURCE_SIZE = 16


def case(cid, count, values=()):
    """count: the table's slot count; values: the value the reader returns for each slot, in order."""
    stubs = [{'address': READ_SLOT, 'argc': 3, 'argi': [0, 1, 2], 'ret': value} for value in values]
    stubs += [{'address': STORE_SLOT, 'argc': 3, 'argi': [0, 1, 2]} for _ in values]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:table', 'rsi': 'buf:source'},
            'buffers': {'table': {'size': 0x20, 'bytes': 'a5' * COUNT_SLOT + struct.pack('<i', count).hex() + 'a5' * 4},
                        'source': {'size': SOURCE_SIZE, 'bytes': '3c' * SOURCE_SIZE}},
            'memory': [], 'imports': [], 'stubs': stubs}


CASES = [
    case('count_zero', 0),
    case('count_negative', -3),
    case('one_slot', 1, values=[0x12345678]),
    case('two_slots_zero_and_ones', 2, values=[0, 0xffffffff]),
    case('three_slots_sign_bit', 3, values=[0x80000000, 1, 0x7fffffff]),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        (output / (fixture['id'] + '.json')).write_text(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} cases written to {output}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
