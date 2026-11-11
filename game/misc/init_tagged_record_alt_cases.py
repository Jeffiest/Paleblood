#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic fixtures for init_tagged_record_alt at 0x02b4a380, for tools/verify.py run.

usage: init_tagged_record_alt_cases.py OUT_DIR

The record is a 0x80-byte buffer. The original stores the vtable pointer, clears +0x08..+0x77 and
stores the tag word at +0x78, returning zero in RAX. Each case starts from a different body.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02b4a380'
SIZE = 0x80
MASK64 = (1 << 64) - 1
GARBAGE = {'rsi': 'buf:record', 'rdx': '0x1111111111111111', 'rcx': '0x2222222222222222',
           'r8': '0x8080808080808080', 'r9': '0x7f'}


def u64(value):
    """Encode a complete eight-byte value."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, tag, record='e7' * SIZE, registers=None):
    """One call with the record bytes before the call and the tag in RDI."""
    args = dict(GARBAGE if registers is None else registers)
    args['rdi'] = tag if isinstance(tag, str) else hex(tag)
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': args,
            'buffers': {'record': {'size': SIZE, 'bytes': record}},
            'imports': [], 'stubs': []}


CASES = [
    case('fresh_record_zero_tag', 0),
    case('fresh_record_tag_one', 1),
    case('tag_all_ones', MASK64),
    case('tag_high_bits', 0x123456789abcdef0),
    case('old_body_all_ones', 0xfeedface, record='ff' * SIZE),
    case('old_body_pattern', 0xabad1dea, record='c3' * SIZE),
    case('zero_registers', 0, registers={'rsi': 'buf:record', 'rdx': '0x0', 'rcx': '0x0',
                                         'r8': '0x0', 'r9': '0x0'}),
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
