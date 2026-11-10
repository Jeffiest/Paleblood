#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic owners for a function that adds bits to a flag byte (a template: near_cases.py puts the
byte's offset and the bits in place of the slot names and the function's address in place of the one
below).

usage: near_cases.py FUNCTION_NAME OUT_DIR

Covers a flag byte that is clear, has exactly the bits already, has every other bit, and is fully
set. The owner reaches past the flag byte and is filled with other bytes, which must not change.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x01e50a30'
FLAGS_FIELD = NEAR_SLOT_0
BITS = NEAR_SLOT_1
OWNER_BYTES = FLAGS_FIELD + 0x20
BYTE_MASK = 0xff


def case(cid, flags, fill='a5'):
    """An owner with its flag byte preset and the rest of its bytes marked."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:owner'},
            'buffers': {'owner': {'size': OWNER_BYTES, 'bytes': fill * OWNER_BYTES}},
            'memory': [{'addr': f'buf:owner+{FLAGS_FIELD:#x}', 'bytes': f'{flags & BYTE_MASK:02x}'}],
            'imports': [], 'stubs': []}


CASES = [
    case('flags_clear', 0),
    case('flags_clear_zero_owner', 0, fill='00'),
    case('bits_already_set', BITS),
    case('other_bits_only', ~BITS),
    case('all_bits_set', BYTE_MASK),
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
