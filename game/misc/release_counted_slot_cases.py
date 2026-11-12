#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_release_counted_slot (0x0225b820), for tools/verify.py run.

usage: release_counted_slot_cases.py OUT_DIR

A slot holding a counted object (vtable at +0, count at +0x8) or nothing. The release drops the count
by one and clears the slot. The original leaves RAX as: the count it read when that was above one,
the destroy routine's result when it was the last reference (stub 0x00400020), or the fatal report's
result when the count was not positive (stub 0x024b55b0, which returns). An empty slot is never
written and RAX is not written either, so those cases set 'returns': 'void'.
"""
import json
import os
import struct
import sys

ADDRESS = '0x0225b820'
DESTROY = '0x00400020'
FATAL = '0x024b55b0'
MARKER = 'c3' * 4


def case(cid, count, destroy_ret=0, fatal_ret=0):
    b = {'slot': {'size': 8}}
    m = []
    stubs = []
    if count is None:
        returns = 'void'
        m.append({'addr': 'buf:slot', 'bytes': '00' * 8})
    else:
        returns = 'i64'
        b['obj'] = {'size': 16}
        b['obj_vt'] = {'size': 8}
        m += [{'addr': 'buf:slot', 'pointer': 'obj'},
              {'addr': 'buf:obj', 'pointer': 'obj_vt'},
              {'addr': 'buf:obj_vt', 'guest': DESTROY},
              {'addr': 'buf:obj+8', 'bytes': struct.pack('<i', count).hex()},
              {'addr': 'buf:obj+12', 'bytes': MARKER}]
        if count == 1:
            stubs.append({'address': DESTROY, 'argc': 1, 'ret': hex(destroy_ret)})
        elif count <= 0:
            stubs.append({'address': FATAL, 'argc': 3, 'ret': hex(fatal_ret)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': returns,
            'args': {'rdi': 'buf:slot'}, 'buffers': b, 'memory': m, 'stubs': stubs, 'imports': []}


CASES = [
    case('empty_slot', None),
    case('count_five', 5),
    case('count_two', 2),
    case('last_reference', 1, destroy_ret=0x33),
    case('last_reference_zero_result', 1, destroy_ret=0),
    case('count_zero_fatal', 0, fatal_ret=0x44),
    case('count_negative_fatal', -3, fatal_ret=0x55),
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
