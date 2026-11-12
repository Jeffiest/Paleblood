#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic sources for bb_misc_store_snapshot_scale (0x00cc8210).

usage: misc_store_snapshot_scale_cases.py OUT_DIR

A source without a target only stores the scale. A source with a target passes a snapshot of its words
and the new scale to the target, then passes the source on; the snapshot's bytes are compared.
"""
import json
import os
import struct
import sys

ADDRESS = '0x00cc8210'
TARGET_CALL = '0x00cd4580'
SOURCE_CALL = '0x00cc8280'
SNAPSHOT_SIZE = 0x18
SOURCE_SIZE = 0x98


def case(cid, words, scale, target=True):
    source = bytearray(b'\xc3' * SOURCE_SIZE)
    source[0x10:0x20] = struct.pack('<QQ', *words)
    if not target:
        source[0x48:0x50] = bytes(8)
    memory = []
    if target:
        memory.append({'addr': 'buf:source+0x48', 'pointer': 'target'})
    stubs = []
    if target:
        stubs.append({'address': TARGET_CALL, 'argc': 2,
                      'argmem': [{'arg': 1, 'size': SNAPSHOT_SIZE}]})
        stubs.append({'address': SOURCE_CALL, 'argc': 1})
    scale_bytes = struct.pack('<f', scale)
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:source', 'xmm0': scale_bytes.hex()},
            'buffers': {'source': {'size': SOURCE_SIZE, 'bytes': bytes(source).hex()},
                        'target': {'size': 0x10, 'bytes': '00' * 0x10}},
            'memory': memory, 'imports': [], 'stubs': stubs}


UNREACHABLE = {}

CASES = [
    case('no_target_stores_scale', words=(0x1122334455667788, 0x99aabbccddeeff00), scale=1.5,
         target=False),
    case('target_gets_snapshot', words=(0x1122334455667788, 0x99aabbccddeeff00), scale=-2.5),
    case('target_zero_words_zero_scale', words=(0, 0), scale=0.0),
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
