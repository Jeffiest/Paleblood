#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic owners for misc_held_block_has_value (0x01e47f50): no held block, a block without a
child, and a child whose value is zero, one bit, all bits set or only in the upper half."""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01e47f50'
MASK64 = (1 << 64) - 1


def u64(value):
    """Eight bytes of a 64-bit value, little endian."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, block=True, child=True, value=0):
    """An owner whose held block (at +0x10) points at a block, whose child (at +0x20) carries value."""
    buffers = {'owner': {'size': 0x18, 'bytes': 'aa' * 0x18}}
    memory = []
    if block:
        buffers['block'] = {'size': 0x28, 'bytes': 'bb' * 0x28}
        memory.append({'addr': 'buf:owner+16', 'pointer': 'block'})
        if child:
            buffers['child'] = {'size': 0x18, 'bytes': 'cc' * 0x18}
            memory.append({'addr': 'buf:block+32', 'pointer': 'child'})
            memory.append({'addr': 'buf:child+16', 'bytes': u64(value)})
        else:
            memory.append({'addr': 'buf:block+32', 'bytes': '00' * 8})
    else:
        memory.append({'addr': 'buf:owner+16', 'bytes': '00' * 8})
    return {
        'schema': 1,
        'address': ADDRESS,
        'id': cid,
        'returns': 'i8',
        'args': {'rdi': 'buf:owner'},
        'buffers': buffers,
        'memory': memory,
        'imports': [],
        'stubs': [],
    }


CASES = [
    case('no_held_block', block=False),
    case('block_without_child', child=False),
    case('child_value_zero', value=0),
    case('child_value_one', value=1),
    case('child_value_high_half_only', value=0x8000000000000000),
    case('child_value_all_bits', value=MASK64),
    case('child_value_low_byte_only', value=0x80),
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
