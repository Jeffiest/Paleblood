#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_keep_last_path_component (0x0040fa50), for tools/verify.py run.

usage: keep_last_path_component_cases.py OUT_DIR

The text's length (0x0045ce40) and characters (0x0045ce90) are scripted from the end back to the
start. A separator found at index i gives the substring from i + 1 (0x0045de40, which writes the new
shared text into the caller's slot), the assignment (0x0045d6a0), and the drop of the new text's
reference; the last reference releases it through the scratch service's slot 0x68.
"""
import json
import os
import struct
import sys

ADDRESS = '0x0040fa50'
LENGTH, CHARACTER = '0x0045ce40', '0x0045ce90'
SUBSTRING, ASSIGN = '0x0045de40', '0x0045d6a0'
SERVICE_RELEASE = '0x00400230'
SCRATCH_GLOBAL = '0x057e7320'
PLAIN = 0x61
SLASH, BACKSLASH = 0x2f, 0x5c


def u32(v):
    return struct.pack('<I', v & 0xffffffff).hex()


def case(cid, length, separator=None, references=1):
    """separator: (index, character) of the separator, or None when the text has none."""
    b = {'text': {'size': 0x20}, 'shared': {'size': 0x10}, 'scratch': {'size': 8},
         'scratch_vt': {'size': 0x78}}
    m = [{'addr': 'buf:shared+8', 'bytes': u32(references)},
         {'addr': 'buf:scratch', 'pointer': 'scratch_vt'},
         {'addr': 'buf:scratch_vt+104', 'guest': SERVICE_RELEASE},
         {'addr': SCRATCH_GLOBAL, 'pointer': 'scratch'}]
    stubs = [{'address': LENGTH, 'argc': 1, 'argi': [0], 'ret': length}]
    sep_index = separator[0] if separator else None
    for index in range(length - 1, -1, -1):
        ch = separator[1] if index == sep_index else PLAIN
        stubs.append({'address': CHARACTER, 'argc': 2, 'argi': [0, 1], 'ret': ch})
        if index == sep_index:
            break
    if separator is not None:
        stubs.append({'address': SUBSTRING, 'argc': 4, 'argi': [0, 1, 2, 3],
                      'writes': [{'arg': 0, 'offset': 0, 'pointer': 'shared', 'size': 8}]})
        stubs.append({'address': ASSIGN, 'argc': 2, 'argi': [0, 1]})
        if references == 1:
            stubs.append({'address': SERVICE_RELEASE, 'argc': 2, 'argi': [0, 1], 'ret': 0})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i8',
            'args': {'rdi': 'buf:text'}, 'buffers': b, 'memory': m, 'stubs': stubs, 'imports': []}


CASES = [
    case('no_separator', length=3),
    case('empty_text', length=0),
    case('slash_last_reference', length=4, separator=(1, SLASH), references=1),
    case('backslash_shared', length=4, separator=(2, BACKSLASH), references=2),
    case('separator_first_character', length=2, separator=(0, SLASH), references=3),
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
