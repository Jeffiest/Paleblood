#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_unregister_range_then_finish (0x018b47c0), for tools/verify.py run.

usage: unregister_range_then_finish_cases.py OUT_DIR

An object with a non-zero registration word (+0xe0) gives its range key and value (+0xc8, +0xd0) and a
temporary holder to the range index (global 0x05940288) through 0x02298650; the holder's release slot
(0x20 of its vtable at 0x05724bd0, with the moved-on flag clear) runs, then the finish helper 0x018bf0e0.
A missing index is reported through the engine's singleton check, which returns, and the index is read again.
An unregistered object does nothing.
"""
import json
import os
import struct
import sys

ADDRESS = '0x018b47c0'
INDEX_GLOBAL = '0x05940288'
HOLDER_VTABLE = '0x05724bd0'
UNREGISTER = '0x02298650'
RELEASE_ENTRY = '0x004000a0'   # guest entry the holder vtable's release slot points at
FINISH = '0x018bf0e0'
FATAL = '0x024b55b0'
REGISTRATION_OFFSET = 0xe0


def case(cid, registered=True, index_present=True):
    """registered: the object's registration word; index_present: the range index global holds an index."""
    b = {'object': {'size': 0xe8}, 'index': {'size': 0x10}}
    m = [{'addr': f'buf:object+{REGISTRATION_OFFSET}',
          'bytes': struct.pack('<Q', 1 if registered else 0).hex()}]
    m.append({'addr': INDEX_GLOBAL, 'pointer': 'index'} if index_present else
             {'addr': INDEX_GLOBAL, 'bytes': '00' * 8})
    m.append({'addr': '0x05724bf0', 'guest': RELEASE_ENTRY})
    stubs = []
    if not registered:
        return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
                'args': {'rdi': 'buf:object'}, 'buffers': b, 'memory': m,
                'stubs': stubs, 'imports': []}
    if not index_present:
        stubs.append({'address': FATAL, 'argc': 4, 'argi': [0, 1, 2, 3]})
    stubs.append({'address': UNREGISTER, 'argc': 4, 'argi': [0, 1, 2]})
    stubs.append({'address': RELEASE_ENTRY, 'argc': 2, 'argi': [1]})
    stubs.append({'address': FINISH, 'argc': 1, 'argi': [0], 'ret': 0})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:object'}, 'buffers': b, 'memory': m, 'stubs': stubs, 'imports': []}


# The holder slot is set to the temporary holder just before the index call, and the index is given the
# holder's address, not the slot's, so the slot is never null when it is read back: no input reaches this outcome.
UNREACHABLE = {'0x018b4853': ('taken', 'the holder slot still holds the temporary holder after the index call, so it is never null')}


CASES = [
    case('unregistered_nothing_done', registered=False),
    case('registered_index_present'),
    case('registered_index_missing_reported', index_present=False),
]


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
