#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic record initializations for misc_init_defaulted_record_6d20 (0x026f6d20), for tools/verify.py run.

usage: init_defaulted_record_6d20_cases.py OUT_DIR

The record is 0x50 bytes: its virtual table pointer at +0x00, the indices at +0x18 and +0x1c, the counts at +0x20 and
+0x24, a value at +0x28 and +0x2c and +0x30, a word at +0x34, a float scale at +0x38, cleared words at +0x3c, +0x44
and +0x4c. The original calls the base initializer (a stub here) with a zero second argument, sets the virtual table
and the fields, and returns the virtual table address it left in RAX. Covers a record whose fields all hold other
values, and one whose fields already hold the defaults.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x026f6d20'
BASE_INIT = '0x0124be40'      # the base initializer; stubbed (a real game entry at its own address)
RECORD_SIZE = 0x50
MASK64 = (1 << 64) - 1


def case(cid, fill):
    """One initialization of a record filled with the given byte, given as two hex digits."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:record'},
            'buffers': {'record': {'size': RECORD_SIZE, 'bytes': (bytes.fromhex(fill) * RECORD_SIZE).hex()}},
            'memory': [],
            'imports': [],
            'stubs': [{'address': BASE_INIT, 'argc': 2}]}


CASES = [
    case('fields_hold_other_values', 'a5'),
    case('fields_already_zero', '00'),
]


def main():
    """Write deterministic synthetic initializations to the requested directory."""
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
