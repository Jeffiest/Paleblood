#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic release chains for bb_misc_init_release_chain (0x00414b70): values of several widths
and a chain whose words are all set beforehand, so each cleared word must be overwritten.

usage: init_release_chain_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x00414b70'
MASK64 = (1 << 64) - 1
CHAIN_SIZE = 0x20


def case(cid, value):
    """One initialization: the chain starts full of 0xa5 bytes and the value is the argument."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:chain', 'rsi': hex(value & MASK64)},
            'buffers': {'chain': {'size': CHAIN_SIZE, 'bytes': 'a5' * CHAIN_SIZE}},
            'memory': [], 'stubs': [], 'imports': []}


CASES = [
    case('value_zero', 0),
    case('value_small', 0x1234),
    case('value_high_bit', 0x8000000000000001),
    case('value_all_ones', MASK64),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print(f'usage: {Path(__file__).name} OUT_DIR', file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        with (output / (fixture['id'] + '.json')).open('w') as stream:
            stream.write(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} synthetic cases written to {output}')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
