#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_tagged_name_matches (0x0040fb10), for tools/verify.py run.

usage: tagged_name_matches_cases.py OUT_DIR

The decoder (0x004604c0) writes the tagged word of the record into the caller's slot. The name
text of the record is compared with three names in turn (0x02fbe568 returns zero when equal); the
reference count (XADD at +0x8) is dropped, and the last reference releases the record through
the scratch service's slot 0x68. Covers each name matching, no name matching, and the count
before the drop being one or more.
"""
import json
import os
import struct
import sys

ADDRESS = '0x0040fb10'
DECODE, COMPARE = '0x004604c0', '0x02fbe568'
SERVICE_RELEASE = '0x00400230'
SCRATCH_GLOBAL = '0x057e7320'
NAME_ADDRESSES = ['0x04b3b92a', '0x04b3b932', '0x04b3b93a']
RECORD_TEXT = b'alpha\x00'


def u32(v):
    return struct.pack('<I', v & 0xffffffff).hex()


def u64(v):
    return struct.pack('<Q', v).hex()


def case(cid, match, references):
    """match: the 1-based name that equals the record's text, or None for no name."""
    b = {'source': {'size': 8}, 'record': {'size': 0x20}, 'scratch': {'size': 8}, 'scratch_vt': {'size': 0x78}}
    m = [{'addr': 'buf:record+8', 'bytes': u32(references)},
         {'addr': 'buf:record+12', 'bytes': RECORD_TEXT.hex()},
         {'addr': 'buf:scratch', 'pointer': 'scratch_vt'},
         {'addr': f'buf:scratch_vt+104', 'guest': SERVICE_RELEASE},
         {'addr': SCRATCH_GLOBAL, 'pointer': 'scratch'}]
    stubs = [{'address': DECODE, 'argc': 2, 'argi': [1],
              'writes': [{'arg': 0, 'offset': 0, 'pointer': 'record', 'size': 8}]}]
    compares = match if match is not None else len(NAME_ADDRESSES)
    for i in range(compares):
        stubs.append({'address': COMPARE, 'argc': 2, 'argi': [0, 1], 'ret': 0 if match == i + 1 else 1})
    if references == 1:
        stubs.append({'address': SERVICE_RELEASE, 'argc': 2, 'argi': [0, 1], 'ret': 0})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i8',
            'args': {'rdi': 'buf:source'}, 'buffers': b, 'memory': m, 'stubs': stubs, 'imports': []}


CASES = [
    case('first_name_last_reference', match=1, references=1),
    case('second_name_shared', match=2, references=2),
    case('third_name_last_reference', match=3, references=1),
    case('third_name_shared', match=3, references=3),
    case('no_name_shared', match=None, references=2),
    case('no_name_last_reference', match=None, references=1),
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
