#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_set_inner_setting (0x018be080), for tools/verify.py run.

usage: set_inner_setting_cases.py OUT_DIR

The holder's inner block (+0x08) receives the source's 32-bit value at +0x0c in its word at +0xec, and its
enabled byte at +0xf0 is set to one. RAX is left holding the inner block's address.
"""
import json
import os
import struct
import sys

ADDRESS = '0x018be080'
VALUES = [0, 1, 0x7fffffff, 0x80000000, 0xffffffff]


def case(cid, value):
    """value: the source's 32-bit value."""
    b = {'holder': {'size': 0x10}, 'source': {'size': 0x10}, 'inner': {'size': 0xf8, 'bytes': 'ee' * 0xf8}}
    m = [{'addr': 'buf:holder+8', 'pointer': 'inner'},
         {'addr': 'buf:source+12', 'bytes': struct.pack('<I', value).hex()}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:holder', 'rsi': 'buf:source'}, 'buffers': b, 'memory': m,
            'stubs': [], 'imports': []}


CASES = [case(f'value_{value:08x}', value) for value in VALUES]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
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
