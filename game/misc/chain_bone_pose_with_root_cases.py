#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic poses for bb_misc_chain_bone_pose_with_root (0x01251950), for tools/verify.py run.

usage: chain_bone_pose_copy_roots_cases.py OUT_DIR

The root matrix (rsi) is 48 bytes, 16-byte aligned. The output pose (rdi) holds a bone count at +0x14, its matrices at +0x18 (48 bytes each, 16-byte aligned) and a
state word at +0x10. The source pose (rdx) holds the local matrices. The hierarchy (rcx) holds the bone records
(48 bytes each, the parent index as a signed 16-bit value at +0x28 and the array at +0x10). A bone becomes the
product of the parent's finished matrix, or the root matrix for a root, and its local matrix (the constant row is
read from the executable's data).
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01251950'
MATRIX = 0x30


def floats(seed, count):
    """Deterministic floats with plenty of mantissa bits, as little-endian bytes."""
    values = [((seed * 7 + index * 13) % 29 - 14) * 0.37 + 1.0 / (seed + index + 3) for index in range(count)]
    return struct.pack(f'<{count}f', *values)


def case(cid, parents, count=None):
    """One chaining pass; parents holds each bone's parent index, count overrides the pose's bone count."""
    bones = len(parents)
    shown = bones if count is None else count
    records = b''.join(b'\xee' * 0x28 + struct.pack('<h', parent) + b'\xee' * 6 for parent in parents)
    buffers = {'out': {'size': 0x30, 'bytes': 'aa' * 0x30},
               'src': {'size': 0x30, 'bytes': 'bb' * 0x30},
               'root': {'size': 0x30, 'bytes': floats(90, 12).hex()},
               'hier': {'size': 0x30, 'bytes': 'cc' * 0x30},
               'omat': {'size': max(0x30, MATRIX * bones), 'bytes': ''.join(floats(40 + i, 12).hex() for i in range(max(1, bones)))},
               'smat': {'size': max(0x30, MATRIX * bones), 'bytes': ''.join(floats(i, 12).hex() for i in range(max(1, bones)))},
               'bones': {'size': max(0x30, len(records)), 'bytes': records.hex() or 'ee' * 0x30}}
    memory = [{'addr': 'buf:out+0x14', 'bytes': struct.pack('<i', shown).hex()},
              {'addr': 'buf:out+0x18', 'pointer': 'omat'},
              {'addr': 'buf:src+0x18', 'pointer': 'smat'},
              {'addr': 'buf:hier+0x10', 'pointer': 'bones'}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:out', 'rsi': 'buf:root', 'rdx': 'buf:src', 'rcx': 'buf:hier'},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': []}


CASES = [
    case('no_bones', []),
    case('negative_count', [0], count=-3),
    case('one_root', [-1]),
    case('child_after_root', [-1, 0]),
    case('chain_of_three', [-1, 0, 1]),
    case('two_roots_and_siblings', [-1, 0, -1, 2, 0]),
    case('root_marker_minimum', [-32768, 0]),
]


def main():
    """Write deterministic synthetic poses to the requested directory."""
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        (output / (fixture['id'] + '.json')).write_text(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} cases written to {output}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
