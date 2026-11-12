#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_release_pending_field_013ba170 (0x013ba170), for tools/verify.py run.

usage: release_pending_field_cases.py OUT_DIR

The release routine (stub 0x01389320) runs only when the release context in the executable's data (0x058b2e30)
is set and the holder's pending handle (offset 0x20) is nonzero; the handle is then cleared. Covers the context
set or null, and the handle zero, ordinary and with the top bit set. The original leaves RAX alone, so no return
value is compared.
"""
import json
import os
import struct
import sys

ADDRESS = '0x013ba170'
RELEASE = '0x01389320'
CONTEXT_GLOBAL = '0x058b2e30'
PENDING_OFFSET = 0x20
HOLDER_BYTES = 0x28


def u64(v):
    return struct.pack('<Q', v & (2 ** 64 - 1)).hex()


def case(cid, context=True, pending=0x1234):
    b = {'holder': {'size': HOLDER_BYTES, 'bytes': 'ee' * HOLDER_BYTES},
         'context': {'size': 0x20, 'bytes': '77' * 0x20}}
    m = [{'addr': f'buf:holder+{PENDING_OFFSET:#x}', 'bytes': u64(pending)}]
    if context:
        m.append({'addr': CONTEXT_GLOBAL, 'pointer': 'context'})
    else:
        m.append({'addr': CONTEXT_GLOBAL, 'bytes': u64(0)})
    stubs = []
    if context and pending != 0:
        stubs.append({'address': RELEASE, 'argc': 2, 'argi': [0, 1]})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:holder'}, 'buffers': b, 'memory': m, 'stubs': stubs, 'imports': []}


CASES = [
    case('context_set_pending', context=True, pending=0x1234),
    case('context_set_pending_zero', context=True, pending=0),
    case('context_null_pending_set', context=False, pending=0x1234),
    case('context_null_pending_zero', context=False, pending=0),
    case('pending_top_bit', context=True, pending=0x8000000000000001),
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
