#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic holders for the gated bit read (0x01e59210): no gating block, a block whose flag is clear, and a
set flag with payload bytes whose bit 1 is clear or set (zero, one, high bit, all ones).

usage: gated_read_bit_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x01e59210'
HOLDER_SIZE = 0x10
OWNER_SIZE = 0x3b8
SETTINGS_SIZE = 0x38
PAYLOAD_SIZE = 0x18
BLOCK_SIZE = 0x388
BLOCK_FLAG_OFFSET = 0x384
PAYLOAD_BITS_OFFSET = 0x10


def zeros(size):
    """A buffer of zero bytes, as hex."""
    return '00' * size


def case(cid, block=True, flag=0x01, payload_bits=0x00):
    """A holder whose owner's settings reach a block (or none) with the enable flag set to flag, and a payload
    whose flag byte is payload_bits."""
    buffers = {'holder': {'size': HOLDER_SIZE, 'bytes': zeros(HOLDER_SIZE)},
               'owner': {'size': OWNER_SIZE, 'bytes': zeros(OWNER_SIZE)},
               'settings': {'size': SETTINGS_SIZE, 'bytes': zeros(SETTINGS_SIZE)},
               'payload': {'size': PAYLOAD_SIZE, 'bytes': zeros(PAYLOAD_SIZE)}}
    memory = [
        {'addr': 'buf:holder+8', 'pointer': 'owner'},
        {'addr': 'buf:owner+944', 'pointer': 'settings'},
        {'addr': 'buf:settings+8', 'pointer': 'payload'},
        {'addr': f'buf:payload+{PAYLOAD_BITS_OFFSET}', 'bytes': f'{payload_bits:02x}'},
    ]
    if block:
        buffers['block'] = {'size': BLOCK_SIZE, 'bytes': zeros(BLOCK_SIZE)}
        memory.append({'addr': 'buf:settings+48', 'pointer': 'block'})
        memory.append({'addr': f'buf:block+{BLOCK_FLAG_OFFSET}', 'bytes': f'{flag:02x}'})
    else:
        memory.append({'addr': 'buf:settings+48', 'bytes': zeros(8)})
    return {
        'schema': 1,
        'address': ADDRESS,
        'id': cid,
        'returns': 'i8',
        'args': {'rdi': 'buf:holder'},
        'buffers': buffers,
        'memory': memory,
        'imports': [],
        'stubs': [],
    }


CASES = [
    case('block_missing', block=False, payload_bits=0xff),
    case('block_flag_clear', flag=0x00, payload_bits=0x02),
    case('block_flag_set_bit1_clear', flag=0x01, payload_bits=0x00),
    case('block_flag_set_bit0_only', flag=0x01, payload_bits=0x01),
    case('block_flag_set_bit1_only', flag=0x01, payload_bits=0x02),
    case('block_flag_set_bit1_high_bit', flag=0x80, payload_bits=0x80),
    case('block_flag_set_all_bits', flag=0xff, payload_bits=0xff),
    case('block_flag_set_bit1_clear_others_set', flag=0x01, payload_bits=0xfd),
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
