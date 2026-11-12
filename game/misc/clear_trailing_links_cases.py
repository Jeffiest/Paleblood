#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic fixtures for misc_clear_trailing_links (0x00ce7800), for tools/verify.py run.

usage: clear_trailing_links_cases.py OUT_DIR

The block is given several old contents, so the four link words must be zeroed and every byte of
the leading part must keep its old value. The original never writes RAX and is reached through
pointers, so the function is void.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x00ce7800'
BLOCK_BYTES = 0x98


def case(cid, old_byte):
    """One call on a block whose every byte starts as old_byte."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:block'},
            'buffers': {'block': {'size': BLOCK_BYTES, 'bytes': old_byte * BLOCK_BYTES}},
            'memory': [], 'imports': [], 'stubs': []}


CASES = [
    case('zeroed_block', '00'),
    case('stale_block', 'a5'),
    case('all_ones_block', 'ff'),
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
