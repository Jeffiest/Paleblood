#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_emit_through_lookup (0x0040fbd0), for tools/verify.py run.

usage: emit_through_lookup_cases.py OUT_DIR

The lookup table's find slot (0x20) gives an emitter for id 0x0c or nothing. The emitter's emit
slot (0x20) returns a word; the release (0x0045a4c0) takes the emitter back. With no emitter the
failure is reported (0x02788b20) when the sink is present, and zero is returned.
"""
import json
import os
import struct
import sys

ADDRESS = '0x0040fbd0'
FIND, EMIT = '0x004000f0', '0x00400170'
RELEASE, REPORT = '0x0045a4c0', '0x02788b20'

MASK64 = (1 << 64) - 1


def u64(v):
    return struct.pack('<Q', v & MASK64).hex()


def case(cid, emitter=True, sink=True, emitted=0x0123456789abcdef, value=0x1122334455667788):
    b = {'table': {'size': 8}, 'table_vt': {'size': 0x28}, 'emitter': {'size': 8},
         'emit_vt': {'size': 0x28}, 'sink': {'size': 0x10}}
    m = [{'addr': 'buf:table', 'pointer': 'table_vt'}, {'addr': 'buf:table_vt+32', 'guest': FIND},
         {'addr': 'buf:emit_vt+32', 'guest': EMIT}, {'addr': 'buf:emitter', 'pointer': 'emit_vt'}]
    stubs = []
    if emitter:
        stubs.append({'address': FIND, 'argc': 2, 'argi': [0, 1], 'ret': 'buf:emitter'})
        stubs.append({'address': EMIT, 'argc': 5, 'argi': [0, 1, 2, 3, 4], 'ret': hex(emitted & MASK64)})
        stubs.append({'address': RELEASE, 'argc': 1, 'argi': [0]})
    else:
        stubs.append({'address': FIND, 'argc': 2, 'argi': [0, 1], 'ret': 0})
        if sink:
            stubs.append({'address': REPORT, 'argc': 3, 'argi': [0, 1, 2]})
    m.append({'addr': 'buf:sink', 'bytes': u64(0)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:table', 'rsi': hex(value), 'rdx': 'buf:sink' if sink else '0x0'},
            'buffers': b, 'memory': m, 'stubs': stubs, 'imports': []}


CASES = [
    case('emitter_present_with_sink', emitter=True, sink=True),
    case('emitter_present_without_sink', emitter=True, sink=False, emitted=0),
    case('no_emitter_with_sink_reports', emitter=False, sink=True),
    case('no_emitter_without_sink', emitter=False, sink=False),
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
