#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_child_pointer_present (0x00c24760), for tools/verify.py run.

usage: child_pointer_present_cases.py OUT_DIR

An owner whose +0xb0 holder points at a child slot at +0x10: a null child, and child values that
are non-null only in their low byte, only in their high word, or all ones.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x00c24760'
MASK64 = (1 << 64) - 1


def case(cid, child=None, returns='i8'):
    """child: the 64-bit value stored in the holder's +0x10 slot, or None for a null child."""
    b = {'owner': {'size': 0xb8}, 'holder': {'size': 0x18}}
    memory = [{'addr': 'buf:owner+176', 'pointer': 'holder'}]
    if child is None:
        memory.append({'addr': 'buf:holder+16', 'bytes': '00' * 8})
    else:
        memory.append({'addr': 'buf:holder+16', 'bytes': (child & MASK64).to_bytes(8, 'little').hex()})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': returns,
            'args': {'rdi': 'buf:owner'}, 'buffers': b, 'memory': memory,
            'imports': [], 'stubs': []}


CASES = [
    case('child_null', child=None),
    case('child_one', child=1),
    case('child_low_byte_only', child=0x80),
    case('child_high_word_only', child=1 << 32),
    case('child_high_bit_only', child=1 << 63),
    case('child_all_ones', child=MASK64),
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
