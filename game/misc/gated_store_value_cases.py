#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic holders for the gated store (0x01e59190): no gating block, a block whose flag is clear, and a block
whose flag is set or nonzero, with values zero, ordinary, and all ones. The holder keeps a stale value and the
target a stale word, so a skipped write shows in the buffers.

usage: gated_store_value_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x01e59190'
MASK32 = (1 << 32) - 1
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


def case(cid, block=True, flag=0x00, value=0x1234):
    """A holder whose owner's settings reach a block (or none) with the enable flag set to flag; the store takes
    value in ESI."""
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
    if block:
        buffers['block'] = {'size': BLOCK_SIZE, 'bytes': zeros(BLOCK_SIZE)}
        memory.append({'addr': 'buf:settings+48', 'pointer': 'block'})
        memory.append({'addr': f'buf:block+{0x384}', 'bytes': f'{flag:02x}'})
    else:
        memory.append({'addr': 'buf:settings+48', 'bytes': zeros(8)})
    return {
        'schema': 1,
        'address': ADDRESS,
        'id': cid,
        'returns': 'void',
        'args': {'rdi': 'buf:holder', 'rsi': hex(value & MASK32)},
        'buffers': buffers,
        'memory': memory,
        'imports': [],
        'stubs': [],
    }


CASES = [
    case('block_missing', block=False, value=0x1234),
    case('block_flag_clear', flag=0x00, value=0x1234),
    case('block_flag_set', flag=0x01, value=0x1234),
    case('block_flag_high_bit', flag=0x80, value=0x55),
    case('block_flag_set_value_zero', flag=0x01, value=0),
    case('block_flag_set_value_all_ones', flag=0xff, value=MASK32),
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
