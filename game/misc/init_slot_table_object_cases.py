#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic slot-table objects: the whole 0x278-byte block full of one filler byte, so every byte the
initialiser writes or leaves alone is compared, with marker bytes either side."""
import json
from pathlib import Path
import sys

ADDRESS = '0x009f3660'
OBJECT_SIZE = 0x278
MARGIN = 16


def case(cid, filler, esi=0):
    """One call on an object whose bytes all hold filler, inside a buffer with a margin each side."""
    content = 'c3' * MARGIN + f'{filler:02x}' * OBJECT_SIZE + '3c' * MARGIN
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': f'buf:object+{MARGIN}', 'rsi': hex(esi)},
            'buffers': {'object': {'size': OBJECT_SIZE + 2 * MARGIN, 'bytes': content}},
            'memory': [], 'imports': [], 'stubs': []}


CASES = [
    case('object_zeroed', 0x00),
    case('object_all_ones', 0xff),
    case('object_pattern', 0xa5),
    case('object_second_argument_ignored', 0x5a, esi=0xdeadbeef),
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
