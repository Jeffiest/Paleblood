#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_copy_retained_reference (0x0225b7e0), for tools/verify.py run.

usage: copy_retained_reference_cases.py OUT_DIR

A source slot holding a reference-counted object (count at +0x8), or null; the destination slot
gets the pointer and the object's count goes up by one. Covers null, a count of 1, a count of
several and a negative count (the increment still wraps the same way). A marker word follows the
destination so an overwrite shows. RAX is the copied pointer.
"""
import json
import os
import struct
import sys

ADDRESS = '0x0225b7e0'
MARKER = 'a1a2a3a4a5a6a7a8'


def u32(v):
    return struct.pack('<i', v).hex()


def case(cid, count):
    b = {'dst': {'size': 16}, 'src': {'size': 8}}
    m = [{'addr': 'buf:dst+8', 'bytes': MARKER}]
    if count is None:
        m.append({'addr': 'buf:src', 'bytes': '00' * 8})
    else:
        b['obj'] = {'size': 16}
        m += [{'addr': 'buf:src', 'pointer': 'obj'}, {'addr': 'buf:obj+8', 'bytes': u32(count)}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:dst', 'rsi': 'buf:src'},
            'buffers': b, 'memory': m, 'stubs': [], 'imports': []}


CASES = [
    case('null_source', None),
    case('count_one', 1),
    case('count_several', 5),
    case('count_negative', -1),
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
