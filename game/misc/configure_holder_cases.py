#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_configure_holder (0x0040fd40), for tools/verify.py run.

usage: configure_holder_cases.py OUT_DIR

The scratch service (the global at 0x057e7320) allocates the source block (0x28), the detail block
(0x58) and the record (0x18). The holder's vtable slot 0x18 is the configure call: it is given the
detail id, the record id and the final id in that order. The mode bit of the flags is passed to the
two block builders. A null detail block ends the configuration before the final call, and the
result is then the one the detail builder leaves in RAX (declared as void).

The null record is not reached: the record's first store faults before the release test, so the
release test's taken outcome is declared unreachable.
"""
import json
import os
import struct
import sys

ADDRESS = '0x0040fd40'
ALLOC_CALLEE, CONFIGURE = '0x00400230', '0x00400300'
INIT_FIRST, INIT_SOURCE, INIT_DETAIL = '0x00410290', '0x0042e660', '0x00411030'
RELEASE = '0x0045a4c0'
SERVICE_GLOBAL = '0x057e7320'
MODE_BIT = 0x10000000
FINAL_RESULT = 0x0badc0de12345678

UNREACHABLE = {
    '0x0040fe32': ('taken',
                   'a null record faults at its first store before this release test, so the test never sees null'),
}


def u32(v):
    return struct.pack('<I', v & 0xffffffff).hex()


def u64(v):
    return struct.pack('<Q', v & ((1 << 64) - 1)).hex()


def case(cid, flags, detail=True, final=FINAL_RESULT):
    b = {'holder': {'size': 0x30}, 'holder_vt': {'size': 0x30}, 'service': {'size': 8},
         'service_vt': {'size': 0x58}, 'args': {'size': 0x20}, 'source_blk': {'size': 0x28},
         'detail_blk': {'size': 0x58}, 'record_blk': {'size': 0x18}}
    m = [{'addr': 'buf:holder', 'pointer': 'holder_vt'}, {'addr': 'buf:holder_vt+24', 'guest': CONFIGURE},
         {'addr': 'buf:service_vt+80', 'guest': ALLOC_CALLEE}, {'addr': 'buf:service', 'pointer': 'service_vt'},
         {'addr': SERVICE_GLOBAL, 'pointer': 'service'},
         {'addr': 'buf:args', 'bytes': u32(flags) + '00' * 4 + u64(0x1111222233334444) + u64(final)}]
    stubs = [{'address': INIT_FIRST, 'argc': 1, 'argi': [0]},
             {'address': ALLOC_CALLEE, 'argc': 3, 'argi': [0, 1, 2], 'ret': 'buf:source_blk'},
             {'address': INIT_SOURCE, 'argc': 2, 'argi': [0, 1]},
             {'address': ALLOC_CALLEE, 'argc': 3, 'argi': [0, 1, 2], 'ret': 'buf:detail_blk' if detail else 0},
             {'address': INIT_DETAIL, 'argc': 3, 'argi': [0, 1, 2]}]
    if detail:
        stubs += [{'address': CONFIGURE, 'argc': 3, 'argi': [0, 1, 2], 'ret': 0},
                  {'address': ALLOC_CALLEE, 'argc': 3, 'argi': [0, 1, 2], 'ret': 'buf:record_blk'},
                  {'address': CONFIGURE, 'argc': 3, 'argi': [0, 1, 2], 'ret': 0},
                  {'address': RELEASE, 'argc': 1, 'argi': [0]},
                  {'address': CONFIGURE, 'argc': 3, 'argi': [0, 1, 2], 'ret': hex(final)}]
    result = {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64' if detail else 'void',
              'args': {'rdi': 'buf:holder', 'rsi': 'buf:args'}, 'buffers': b, 'memory': m, 'stubs': stubs,
              'imports': []}
    return result


CASES = [
    case('detail_built_mode_clear', flags=0x00000003),
    case('detail_built_mode_set', flags=MODE_BIT | 0x5, final=0),
    case('detail_missing_leaves_rax', flags=0x00000001, detail=False),
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
