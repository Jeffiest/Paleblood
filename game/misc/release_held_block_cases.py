#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic owners for the held block release (0x01e47df0): no block held, a block held, and
owners whose bytes before the held pointer are set so that any stray write shows up."""
import json
from pathlib import Path
import sys

ADDRESS = '0x01e47df0'
RELEASE = '0x01c00d20'
OWNER_SIZE = 0x18
BLOCK_SIZE = 0x20
HELD_OFFSET = 0x10


def case(cid, held=False):
    """An owner whose held pointer is set or null; the release stub is called once only when set."""
    buffers = {'owner': {'size': OWNER_SIZE, 'bytes': 'a5' * OWNER_SIZE}}
    memory = [{'addr': f'buf:owner+{HELD_OFFSET:#x}', 'pointer': 'block'} if held
              else {'addr': f'buf:owner+{HELD_OFFSET:#x}', 'bytes': '00' * 8}]
    if held:
        buffers['block'] = {'size': BLOCK_SIZE, 'bytes': '5e' * BLOCK_SIZE}
    stubs = [{'address': RELEASE, 'argc': 1}] if held else []
    return {
        'schema': 1,
        'address': ADDRESS,
        'id': cid,
        'returns': 'void',
        'args': {'rdi': 'buf:owner'},
        'buffers': buffers,
        'memory': memory,
        'imports': [],
        'stubs': stubs,
    }


CASES = [
    case('no_block_held'),
    case('block_held_is_released', held=True),
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
