#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic step gate record sets for misc_set_records_flag_02265bc0 (0x02265bc0), for tools/verify.py run.

usage: set_records_flag_cases.py OUT_DIR

The singleton global (0x0593b120) holds a holder whose record set is at +0xca8; the record set's flag byte is
at +0x7c. Covers a clear flag byte, one that already has the flag, and bytes with the other bits set. The
result is the record set's address. A null singleton is reported as a fatal error and then loaded through,
which faults on both sides, so that outcome is declared unreachable.
"""
import json
import os
import struct
import sys

ADDRESS = '0x02265bc0'
GATE_GLOBAL = '0x0593b120'
FATAL = '0x024b55b0'
HOLDER_SIZE = 0xcb0
RECORDS_SIZE = 0x80
FLAGS_OFFSET = 0x7c

# The JNZ after the singleton's null test: its fallthrough is the null case, which faults after the report.
UNREACHABLE = {'0x02265bd3': ('fallthrough', 'fatal error 0x024b55b0 then a load through null at 0x02265bf9')}


def case(cid, flags):
    buffers = {'holder': {'size': HOLDER_SIZE}, 'records': {'size': RECORDS_SIZE, 'bytes': 'a5' * RECORDS_SIZE}}
    memory = [{'addr': f'buf:records+{FLAGS_OFFSET:#x}', 'bytes': struct.pack('<B', flags).hex()},
              {'addr': 'buf:holder+0xca8', 'pointer': 'records'},
              {'addr': GATE_GLOBAL, 'pointer': 'holder'}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {}, 'buffers': buffers, 'memory': memory, 'imports': [],
            'stubs': []}


CASES = [
    case('flag_clear', 0x00),
    case('flag_already_set', 0x01),
    case('other_bits_set', 0xfe),
    case('all_bits_set', 0xff),
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
