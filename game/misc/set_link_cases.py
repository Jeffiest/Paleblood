#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic slots for bb_misc_set_link (0x02b3e170): zero, all-ones and ordinary links stored over
slots whose value word must come through unchanged.

usage: set_link_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02b3e170'
MASK64 = (1 << 64) - 1


def u64(v):
    return struct.pack('<Q', v & MASK64).hex()


def case(cid, link, value=0x1122334455667788):
    """The link word takes the argument; the value word is left as it was."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:slot', 'rsi': hex(link & MASK64)},
            'buffers': {'slot': {'size': 0x10, 'bytes': u64(value) + u64(0xdeadbeef00000001)}},
            'memory': [], 'stubs': [], 'imports': []}


CASES = [
    case('link_zero', 0),
    case('link_ordinary', 0x7000),
    case('link_all_ones', MASK64),
    case('link_high_bit_value_zero', 0x8000000000000000, value=0),
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
