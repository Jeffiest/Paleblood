#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic owners for the release of a held block (a template: near_cases.py puts the held
pointer's offset in place of the slot name and the addresses of the function in place of the ones
below).

usage: near_cases.py FUNCTION_NAME OUT_DIR

Covers an owner with no block and an owner with one. The owner reaches past the held pointer and
is filled with other bytes, so a read or a write at another place shows up.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x01e47df0'
RELEASE = '0x01c00d20'
HELD_FIELD = NEAR_SLOT_0
OWNER_BYTES = HELD_FIELD + 0x20
BLOCK_BYTES = 0x20


def case(cid, held=False, fill='a5'):
    """An owner whose held pointer is set or null; the release routine is a stub, called once only when set."""
    buffers = {'owner': {'size': OWNER_BYTES, 'bytes': fill * OWNER_BYTES}}
    memory = [{'addr': f'buf:owner+{HELD_FIELD:#x}', 'pointer': 'block'} if held
              else {'addr': f'buf:owner+{HELD_FIELD:#x}', 'bytes': '00' * 8}]
    if held:
        buffers['block'] = {'size': BLOCK_BYTES, 'bytes': '5e' * BLOCK_BYTES}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:owner'}, 'buffers': buffers, 'memory': memory,
            'imports': [], 'stubs': [{'address': RELEASE, 'argc': 1}]}


CASES = [
    case('no_block_held'),
    case('no_block_held_other_bytes', fill='3c'),
    case('block_held_is_released', held=True),
    case('block_held_other_bytes', held=True, fill='3c'),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
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
