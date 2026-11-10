#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic holders for the gated clear (0x01e591c0): no gating block, a block whose flag is clear, and a block
whose flag is set or nonzero. The gating block's routine is scripted with two arguments and returns nothing; the
holder and the target start with stale values so a skipped write shows in the buffers.

usage: gated_clear_value_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x01e591c0'
ROUTINE = '0x01e19f60'
HOLDER_SIZE = 0x28
OWNER_SIZE = 0x3b8
TARGET_SIZE = 0x8
SETTINGS_SIZE = 0x38
BLOCK_SIZE = 0x388
STALE_HOLDER = 'efbeadde'
STALE_TARGET = '78563412'


def zeros(size):
    """A buffer of zero bytes, as hex."""
    return '00' * size


def case(cid, block=True, flag=0x00):
    """A holder whose owner's settings reach a block (or none) with the enable flag set to flag."""
    buffers = {'holder': {'size': HOLDER_SIZE, 'bytes': zeros(HOLDER_SIZE)},
               'owner': {'size': OWNER_SIZE, 'bytes': zeros(OWNER_SIZE)},
               'target': {'size': TARGET_SIZE, 'bytes': zeros(TARGET_SIZE)},
               'settings': {'size': SETTINGS_SIZE, 'bytes': zeros(SETTINGS_SIZE)}}
    memory = [
        {'addr': 'buf:holder+8', 'pointer': 'owner'},
        {'addr': 'buf:holder+32', 'bytes': STALE_HOLDER},
        {'addr': 'buf:owner+32', 'pointer': 'target'},
        {'addr': 'buf:owner+944', 'pointer': 'settings'},
        {'addr': 'buf:target+4', 'bytes': STALE_TARGET},
    ]
    stubs = []
    if block:
        buffers['block'] = {'size': BLOCK_SIZE, 'bytes': zeros(BLOCK_SIZE)}
        memory.append({'addr': 'buf:settings+48', 'pointer': 'block'})
        memory.append({'addr': f'buf:block+{0x384}', 'bytes': f'{flag:02x}'})
        if flag != 0:
            stubs.append({'address': ROUTINE, 'argc': 2})
    else:
        memory.append({'addr': 'buf:settings+48', 'bytes': zeros(8)})
    return {
        'schema': 1,
        'address': ADDRESS,
        'id': cid,
        'returns': 'void',
        'args': {'rdi': 'buf:holder'},
        'buffers': buffers,
        'memory': memory,
        'imports': [],
        'stubs': stubs,
    }


CASES = [
    case('block_missing', block=False),
    case('block_flag_clear', flag=0x00),
    case('block_flag_set', flag=0x01),
    case('block_flag_high_bit', flag=0x80),
    case('block_flag_all_bits', flag=0xff),
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
