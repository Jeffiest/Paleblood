#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic handles for marking a keyed handle active (0x01e50a30): flag bytes that are clear, already
active, set in other bits only, and fully set; the handle's other bytes must not change."""
import json
from pathlib import Path
import sys

ADDRESS = '0x01e50a30'
HANDLE_SIZE = 0x20


def case(cid, flags):
    """A handle buffer with its flag byte preset and the rest of its bytes marked."""
    return {
        'schema': 1,
        'address': ADDRESS,
        'id': cid,
        'returns': 'void',
        'args': {'rdi': 'buf:handle'},
        'buffers': {'handle': {'size': HANDLE_SIZE, 'bytes': 'a5' * HANDLE_SIZE}},
        'memory': [{'addr': 'buf:handle+24', 'bytes': f'{flags:02x}'}],
        'imports': [],
        'stubs': [],
    }


CASES = [
    case('flags_clear', flags=0x00),
    case('active_already_set', flags=0x01),
    case('other_bits_only', flags=0x20),
    case('other_bits_and_active', flags=0x21),
    case('all_bits_set', flags=0xff),
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
