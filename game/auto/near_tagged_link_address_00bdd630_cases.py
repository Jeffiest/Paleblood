#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic tagged links read with their flag bit cleared (a template: near_cases.py puts the
link word's offset in place of the slot name and the function's address in place of the one below).

usage: near_cases.py FUNCTION_NAME OUT_DIR

Covers the flag bit clear or set, upper bits, all bits and zero. The owner reaches past the link
word and is filled with other bytes, so a read from another place shows up.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x00bdd630'
LINK_FIELD = NEAR_SLOT_0
OWNER_BYTES = LINK_FIELD + 0x20
MASK64 = (1 << 64) - 1
VALUES = [0x0, 0x1, 0x2, 0x1234567898badcfe, 0x1234567898badcff, 0xfffffffffffffffe, MASK64,
          0x8000000000000001]


def case(cid, value):
    """One read of a link word holding the value."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': {'rdi': 'buf:link'},
            'buffers': {'link': {'size': OWNER_BYTES, 'bytes': 'a5' * OWNER_BYTES}},
            'memory': [{'addr': f'buf:link+{LINK_FIELD:#x}', 'bytes': struct.pack('<Q', value).hex()}],
            'imports': [], 'stubs': []}


CASES = [case(f'value_{index}_{value:016x}', value) for index, value in enumerate(VALUES)]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print(f'usage: {Path(__file__).name} OUT_DIR', file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        (output / (fixture['id'] + '.json')).write_text(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} cases written to {output}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
