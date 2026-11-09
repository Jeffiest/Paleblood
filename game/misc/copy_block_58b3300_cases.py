#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic fixtures for copy_block at 0x0139ae90, for tools/verify.py run.

usage: copy_block_58b3300_cases.py OUT_DIR

The source block at 0x04cb8b40 and the target block at 0x058b3300 are 48 bytes each. The target
has guard bytes on both sides that must survive, and the register arguments must be ignored.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x0139ae90'
SOURCE = 0x04cb8b40
TARGET = 0x058b3300
BLOCK = 48
BEFORE = 0x058b3230
AFTER = 0x058b3270
GARBAGE = {'rdi': '0x5a5a5a5a5a5a5a5a', 'rsi': '0x1111111111111111', 'rdx': '0xffffffffffffffff',
           'rcx': '0x0', 'r8': '0x8080808080808080', 'r9': '0x7f'}


def ramp(seed):
    """A block whose bytes differ from their neighbours, so a wrong offset or width is visible."""
    return bytes(((i * 37 + seed) & 0xff) for i in range(BLOCK)).hex()


def case(cid, target='e5' * BLOCK, registers=None):
    """One copy of the image's own source block over old target bytes, with guard bytes beside it."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': dict(GARBAGE if registers is None else registers),
            'buffers': {}, 'imports': [], 'stubs': [],
            'memory': [{'addr': hex(TARGET), 'bytes': target},
                       {'addr': hex(BEFORE), 'bytes': 'a1' * 8},
                       {'addr': hex(AFTER), 'bytes': 'b2' * 8}]}


CASES = [
    case('old_target_bytes'),
    case('zero_target', target='00' * BLOCK),
    case('all_ones_target', target='ff' * BLOCK),
    case('target_already_equal', target=ramp(0x42)),
    case('target_sign_pattern', target='7f80' * (BLOCK // 2)),
    case('zero_registers', registers={k: '0x0' for k in GARBAGE}),
    case('ramp_target', target=ramp(0x99)),
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
