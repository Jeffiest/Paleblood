#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic probes for the probe value selection (0x01e50a90): the config flag bit 4 set or clear, and
the block word bit 6 set or clear (including neighbouring bits), with the probe's two values."""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01e50a90'
OWNER_SIZE = 0x3c0
CONFIG_SIZE = 0x820


def i32(value):
    return struct.pack('<i', value).hex()


def u16(value):
    return struct.pack('<H', value).hex()


def case(cid, flags=0x00, word=0x0000, value_first=0x12345678, value_second=-5):
    """A probe whose owner reads the config flag byte and the block word; both values are preset."""
    buffers = {
        'probe': {'size': 0x20, 'bytes': 'a5' * 0x20},
        'owner': {'size': OWNER_SIZE, 'bytes': 'a5' * OWNER_SIZE},
        'frame': {'size': 0x40, 'bytes': 'a5' * 0x40},
        'block': {'size': 0x60, 'bytes': 'a5' * 0x60},
        'settings': {'size': 0x10, 'bytes': 'a5' * 0x10},
        'config': {'size': CONFIG_SIZE, 'bytes': 'a5' * CONFIG_SIZE},
    }
    memory = [
        {'addr': 'buf:probe+8', 'pointer': 'owner'},
        {'addr': 'buf:probe+16', 'bytes': i32(value_first)},
        {'addr': 'buf:probe+20', 'bytes': i32(value_second)},
        {'addr': 'buf:owner+88', 'pointer': 'frame'},
        {'addr': 'buf:owner+944', 'pointer': 'settings'},
        {'addr': 'buf:frame+56', 'pointer': 'block'},
        {'addr': 'buf:settings+8', 'pointer': 'config'},
        {'addr': f'buf:config+{0x818}', 'bytes': f'{flags:02x}'},
        {'addr': 'buf:block+92', 'bytes': u16(word)},
    ]
    return {
        'schema': 1,
        'address': ADDRESS,
        'id': cid,
        'returns': 'i32',
        'args': {'rdi': 'buf:probe'},
        'buffers': buffers,
        'memory': memory,
        'imports': [],
        'stubs': [],
    }


CASES = [
    case('neither_bit_set', flags=0x00, word=0x0000),
    case('config_flag_only', flags=0x10, word=0x0000),
    case('block_bit_only', flags=0x00, word=0x0040),
    case('both_bits_set', flags=0x10, word=0x0040),
    case('neighbour_bits_clear', flags=0xef, word=0xffbf),
    case('all_bits_set', flags=0xff, word=0xffff),
    case('values_negative_and_zero', flags=0x10, word=0x0040, value_first=-1, value_second=0),
    case('block_bit_with_flag_clear_values', flags=0x20, word=0x0040, value_first=7, value_second=9),
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
