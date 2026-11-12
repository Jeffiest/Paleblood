#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_construct_config_reader (0x0225c4f0), for tools/verify.py run.

usage: construct_config_reader_cases.py OUT_DIR

The reader is built from a source opened through the global at 0x05940420, a cursor started on the
source's start, and an entry the cursor yields three times (the member's view, the value at +0x60,
and the entry the walk ends on). The entry's fill routine writes an 8-byte flags record; without bit
0x20 the engine's fatal report is called (stub 0x024b55b0, which returns). The stack records for the
source and the cursor (0x18 bytes each) are written whole by their constructor stubs. Covers a usable
entry and an unusable one, the cursor's flag byte at both values, and flag bytes with other bits set.
"""
import json
import os
import sys

ADDRESS = '0x0225c4f0'
OPEN_SOURCE = '0x01386480'
START_CURSOR = '0x01386810'
BUILD_MEMBER = '0x013875c0'
CLOSE_CURSOR = '0x01386840'
CLOSE_SOURCE = '0x013864d0'
SOURCE_OPEN = '0x00400300'
CURSOR_ENTRY = '0x004000a0'
CURSOR_FLAG = '0x00400020'
ENTRY_FILL = '0x004009f0'
FATAL = '0x024b55b0'
MARKER = 'a5' * 0xe0


def case(cid, entry_flags, cursor_flag):
    b = {'reader': {'size': 0xe0, 'bytes': MARKER},
         'global_obj': {'size': 8},
         'source_vt': {'size': 0x18}, 'start_obj': {'size': 16},
         'cursor_vt': {'size': 0x20},
         'value_y': {'size': 16}, 'entry_vt': {'size': 0x28}, 'entry_obj': {'size': 8}}
    m = [{'addr': '0x05940420', 'pointer': 'global_obj'},
         {'addr': 'buf:global_obj', 'bytes': '00' * 8},
         {'addr': 'buf:source_vt+16', 'guest': SOURCE_OPEN},
         {'addr': 'buf:cursor_vt+16', 'guest': CURSOR_ENTRY},
         {'addr': 'buf:cursor_vt+24', 'guest': CURSOR_FLAG},
         {'addr': 'buf:entry_vt+32', 'guest': ENTRY_FILL},
         {'addr': 'buf:entry_obj', 'pointer': 'entry_vt'}]
    stubs = [
        {'address': OPEN_SOURCE, 'argc': 3,
         'writes': [{'arg': 0, 'offset': 0, 'pointer': 'source_vt'},
                    {'arg': 0, 'offset': 8, 'bytes': '00' * 16}]},
        {'address': SOURCE_OPEN, 'argc': 1, 'ret': 'buf:start_obj'},
        {'address': START_CURSOR, 'argc': 3,
         'writes': [{'arg': 0, 'offset': 0, 'pointer': 'cursor_vt'},
                    {'arg': 0, 'offset': 8, 'bytes': '00' * 16}]},
        {'address': CURSOR_ENTRY, 'argc': 1, 'ret': 'buf:value_y'},
        {'address': CURSOR_ENTRY, 'argc': 1, 'ret': 0x1234},
        {'address': CURSOR_ENTRY, 'argc': 1, 'ret': 'buf:entry_obj'},
        {'address': BUILD_MEMBER, 'argc': 2, 'argmem': [{'arg': 1, 'size': 16}]},
        {'address': CURSOR_FLAG, 'argc': 1, 'ret': hex(cursor_flag)},
        {'address': ENTRY_FILL, 'argc': 3,
         'writes': [{'arg': 0, 'offset': 0, 'bytes': '%02x' % entry_flags + '00' * 7}]},
    ]
    if (entry_flags & 0x20) == 0:
        stubs.append({'address': FATAL, 'argc': 3})
    stubs += [{'address': CLOSE_CURSOR, 'argc': 1}, {'address': CLOSE_SOURCE, 'argc': 1}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:reader'}, 'buffers': b, 'memory': m, 'stubs': stubs, 'imports': []}


CASES = [
    case('usable_entry', 0x20, 0x01),
    case('usable_entry_other_bits', 0xff, 0x00),
    case('unusable_entry', 0x00, 0x01),
    case('unusable_entry_other_bits', 0xdf, 0xab),
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
