#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_run_slot_routines_on_pair (0x013ba420), for tools/verify.py run.

usage: run_slot_routines_on_pair_cases.py OUT_DIR

The pair holds two slot-array pointers at +0x10 and +0x18 and their counts at +0x28 and +0x2c; each slot
is 0x4b0 bytes. For every slot the routine calls the two void routines and then the one that returns a
value; the value stubs return distinct numbers so the last one is compared. Covers each array empty or
holding one or two slots. When both arrays are empty the routine leaves RAX alone, so those cases compare
no return register.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x013ba420'
ROUTINE_A = '0x01447090'
ROUTINE_B = '0x01447010'
ROUTINE_C = '0x01446f50'
SLOT_SIZE = 0x4b0
MAX_SLOTS = 2


def u32(value):
    """Encode a four-byte value."""
    return struct.pack('<I', value & 0xffffffff).hex()


def case(cid, first=0, second=0):
    """One call on a pair with the two counts given; the slots are visited second array first."""
    total = SLOT_SIZE * MAX_SLOTS
    buffers = {'pair': {'size': 0x30, 'bytes': '00' * 0x30},
               'first': {'size': total, 'bytes': '5a' * total},
               'second': {'size': total, 'bytes': '6b' * total}}
    memory = [{'addr': 'buf:pair+16', 'pointer': 'first'},
              {'addr': 'buf:pair+24', 'pointer': 'second'},
              {'addr': 'buf:pair+40', 'bytes': u32(first)},
              {'addr': 'buf:pair+44', 'bytes': u32(second)}]
    stubs = []
    value = 0x200
    for _ in range(second + first):
        stubs.append({'address': ROUTINE_A, 'argc': 1, 'argi': [0]})
        stubs.append({'address': ROUTINE_B, 'argc': 1, 'argi': [0]})
        stubs.append({'address': ROUTINE_C, 'argc': 1, 'argi': [0], 'ret': value})
        value += 1
    returns = 'void' if first + second == 0 else 'i64'
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': returns, 'args': {'rdi': 'buf:pair'},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('both_empty'),
    case('first_one', first=1),
    case('first_two', first=2),
    case('second_one', second=1),
    case('second_two', second=2),
    case('both_two', first=2, second=2),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print(f'usage: {Path(__file__).name} OUT_DIR', file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        (output / (fixture['id'] + '.json')).write_text(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} synthetic cases written to {output}')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
