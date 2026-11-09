#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_copy_default_blocks (0x0139bd70), for tools/verify.py run.

usage: copy_default_blocks_cases.py OUT_DIR

The three destination globals are preset to zeros, to ones, and to a pattern that differs in every byte,
so each copied byte is compared against the original's write. The sources are read from the executable.
"""
import json
import os
import sys

ADDRESS = '0x0139bd70'
DESTINATIONS = ['0x058b33c0', '0x058b33d0', '0x058b33e0']
BLOCK_BYTES = 16


def case(cid, fill):
    """One call; the destinations hold the fill bytes before the call."""
    memory = [{'addr': address, 'bytes': fill(index)} for index, address in enumerate(DESTINATIONS)]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': {}, 'buffers': {},
            'memory': memory, 'imports': [], 'stubs': []}


CASES = [
    case('destinations_zero', lambda index: '00' * BLOCK_BYTES),
    case('destinations_ones', lambda index: 'ff' * BLOCK_BYTES),
    case('destinations_distinct', lambda index: bytes(range(0x40 + index * 16, 0x50 + index * 16)).hex()),
]


def main():
    """Write one JSON case per fill pattern to the requested directory."""
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    os.makedirs(sys.argv[1], exist_ok=True)
    for fixture in CASES:
        with open(os.path.join(sys.argv[1], fixture['id'] + '.json'), 'w') as stream:
            json.dump(fixture, stream, indent=1)
    print(f'{len(CASES)} cases written to {sys.argv[1]}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
