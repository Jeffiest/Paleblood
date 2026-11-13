#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_release_two_slot_arrays (0x013ba3b0), for tools/verify.py run.

usage: release_two_slot_arrays_cases.py OUT_DIR

The pair holds two slot-array pointers at +0x10 and +0x18 and their counts at +0x28 and +0x2c; each slot
is 0x4b0 bytes. The slot routine stub is called once per slot, the first array before the second, and
each call returns a distinct value so the order and the returned value are both compared. Covers each
array empty or holding one or two slots. When both arrays are empty the routine leaves RAX alone, so
those cases compare no return register.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x013ba3b0'
SLOT_RELEASE = '0x01447070'
SLOT_SIZE = 0x4b0
MAX_SLOTS = 2


def u32(value):
    """Encode a four-byte value."""
    return struct.pack('<I', value & 0xffffffff).hex()


def case(cid, first=0, second=0):
    """One call on a pair with the two counts given; each release call returns its own number."""
    total = SLOT_SIZE * MAX_SLOTS
    buffers = {'pair': {'size': 0x30, 'bytes': '00' * 0x30},
               'first': {'size': total, 'bytes': '5a' * total},
               'second': {'size': total, 'bytes': '6b' * total}}
    memory = [{'addr': 'buf:pair+16', 'pointer': 'first'},
              {'addr': 'buf:pair+24', 'pointer': 'second'},
              {'addr': 'buf:pair+40', 'bytes': u32(first)},
              {'addr': 'buf:pair+44', 'bytes': u32(second)}]
    stubs = []
    value = 0x100
    for _ in range(first + second):
        stubs.append({'address': SLOT_RELEASE, 'argc': 1, 'argi': [0], 'ret': value})
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
