#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic field-copy objects for bb_misc_init_field_copy (0x00cd1b90).

usage: misc_init_field_copy_cases.py OUT_DIR

The flag is zero or not, with the high bits of the register set or not (only the low 32 bits count), and
the object has a source or none. The object's marker bytes are compared, so a copy that goes wrong shows.
"""
import json
import os
import struct
import sys

ADDRESS = '0x00cd1b90'
OBJECT_SIZE = 0x38
SOURCE_SIZE = 0x38


def case(cid, flag, source=True, source_word=0x1122334455667788, source_dword=0xdeadbeef):
    source_bytes = bytearray(b'\x3c' * SOURCE_SIZE)
    source_bytes[0x10:0x18] = struct.pack('<Q', source_word)
    source_bytes[0x18:0x1c] = struct.pack('<I', source_dword)
    source_bytes[0x20:0x28] = struct.pack('<Q', source_word ^ 0xffffffffffffffff)
    source_bytes[0x28:0x2c] = struct.pack('<I', source_dword + 1)
    object_bytes = 'a5' * 0x30 + '00' * 8
    memory = []
    if source:
        memory.append({'addr': 'buf:obj+0x30', 'pointer': 'source'})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:obj', 'rsi': flag},
            'buffers': {'obj': {'size': OBJECT_SIZE, 'bytes': object_bytes},
                        'source': {'size': SOURCE_SIZE, 'bytes': bytes(source_bytes).hex()}},
            'memory': memory, 'imports': [], 'stubs': []}


UNREACHABLE = {}

CASES = [
    case('flag_zero_keeps_fields', flag=0),
    case('flag_zero_upper_bits_keeps_fields', flag=0x100000000),
    case('flag_set_without_source', flag=1, source=False),
    case('flag_set_copies_fields', flag=1),
    case('flag_high_bits_only_low_word_counts', flag=0x100000001),
]


def main():
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    os.makedirs(sys.argv[1], exist_ok=True)
    for c in CASES:
        with open(os.path.join(sys.argv[1], f"{c['id']}.json"), 'w') as f:
            json.dump(c, f, indent=1)
    print(f'{len(CASES)} cases written to {sys.argv[1]}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
