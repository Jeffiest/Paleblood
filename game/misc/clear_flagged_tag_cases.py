#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic flag clears for misc_clear_flagged_tag (0x026f39d0), for tools/verify.py run.

usage: clear_flagged_tag_cases.py OUT_DIR

The object is 0x10 bytes: its vtable word at +0x00 and its flag word at +0x08. The routine has no calls
and no branches: it writes the base vtable and clears bit 30 of the flag word, keeping the other bits.
The cases cover the tag bit set and clear, the top bit alone, all ones, zero and an ordinary value.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x026f39d0'
FLAG_OFFSET = 0x08
MASK32 = (1 << 32) - 1


def case(cid, flags):
    """One call on an object whose vtable word is set and whose flag word holds the given value."""
    flag_bytes = struct.pack('<I', flags & MASK32).hex()
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:object'},
            'buffers': {'object': {'size': 0x10, 'bytes': 'ee' * FLAG_OFFSET + flag_bytes}},
            'memory': [], 'imports': [], 'stubs': []}


CASES = [
    case('tag_set', 0x40000000),
    case('tag_clear', 0x00000000),
    case('all_ones', 0xffffffff),
    case('top_bit_only', 0x80000000),
    case('mixed_bits', 0x12345678),
    case('tag_and_top_bit', 0xc0000000),
]


def main():
    """Write deterministic synthetic calls to the requested directory."""
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
