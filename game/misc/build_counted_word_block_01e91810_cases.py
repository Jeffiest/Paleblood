#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic counted word blocks (0x01e91810): the block's virtual table, kind and five slots are written whatever the
block held before, the padding after the kind keeps its bytes, and the default mask is returned in RAX.

usage: build_counted_word_block_01e91810_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x01e91810'
BLOCK_SIZE = 0x60
PREFILL_GARBAGE = 'ee' * BLOCK_SIZE
PREFILL_ZERO = '00' * BLOCK_SIZE
PREFILL_ODD = 'a5' * BLOCK_SIZE


def case(cid, prefill=PREFILL_GARBAGE):
    """One build of a block that starts with the given bytes; the whole block is compared afterwards."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:block'},
            'buffers': {'block': {'size': BLOCK_SIZE, 'bytes': prefill}},
            'imports': [], 'stubs': []}


CASES = [
    case('block_from_garbage'),
    case('block_from_zero_bytes', prefill=PREFILL_ZERO),
    case('block_from_mixed_bytes', prefill=PREFILL_ODD),
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
