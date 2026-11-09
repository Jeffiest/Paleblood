#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic fixtures for the constant block copy at 0x0139b590, for tools/verify.py run.

usage: copy_constant_to_058b3380_cases.py OUT_DIR

The source block is read from the read-only image. The destination global is given several
old contents, so every byte of the three lanes must be overwritten by the copy.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x0139b590'
DESTINATION = '0x058b3380'
GARBAGE = {'rdi': '0x5a5a5a5a5a5a5a5a', 'rsi': '0x1111111111111111', 'rdx': '0xffffffffffffffff',
           'rcx': '0x0', 'r8': '0x8080808080808080', 'r9': '0x7f'}


def case(cid, old_bytes, registers=None):
    """One call that copies the block over the given old destination contents."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': dict(GARBAGE if registers is None else registers),
            'buffers': {}, 'imports': [], 'stubs': [],
            'memory': [{'addr': DESTINATION, 'bytes': old_bytes}]}


CASES = [
    case('destination_zero', '00' * 48),
    case('destination_all_ones', 'ff' * 48),
    case('destination_pattern', 'a5' * 48),
    case('registers_zero', '5a' * 48, registers={k: '0x0' for k in GARBAGE}),
    case('registers_high_bits', '3c' * 48, registers={k: '0xffffffffffffffff' for k in GARBAGE}),
]


def main():
    """Write deterministic fixtures to the requested directory."""
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
