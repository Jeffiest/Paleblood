#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic fixtures for misc_init_cleared_link_record (0x00ce7690), for tools/verify.py run.

usage: init_cleared_link_record_cases.py OUT_DIR

The record is given two old contents, so the table word and the four link words must be written
and every byte between them must be left alone. The original leaves RAX holding the table address;
no caller reads it, so the function is void.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x00ce7690'
RECORD_BYTES = 0xd0


def case(cid, old_byte):
    """One call on a record whose every byte starts as old_byte."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:record'},
            'buffers': {'record': {'size': RECORD_BYTES, 'bytes': old_byte * RECORD_BYTES}},
            'memory': [], 'imports': [], 'stubs': []}


CASES = [
    case('zeroed_record', '00'),
    case('stale_record', 'a5'),
    case('all_ones_record', 'ff'),
]


def main():
    """Write deterministic fixtures to the requested directory."""
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
