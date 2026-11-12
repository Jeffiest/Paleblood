#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_init_text_pair_record_params_013a4e30 (0x013a4e30), for tools/verify.py run.

usage: init_text_pair_record_params_cases.py OUT_DIR

The same name calls as init_text_pair_record: the allocator is a fake object whose info slot (0x20) gives its
valid flag, the fatal report (0x024b55b0) runs when the heap is not valid and then returns, the length
(0x02fbf228) is taken only for a non-empty first text, and the assignment (0x02a2a720) runs once per name. The
caller passes the three metric pairs in r8, r9 and the first stack slot, and the two 16-byte blocks in xmm0 and
xmm1. Covers a null, empty and non-empty first text, an invalid heap on the first and on the second check, and
the caller's flag bit with its upper bits set, with the stored flags byte set either way.
"""
import json
import os
import struct
import sys

ADDRESS = '0x013a4e30'
ALLOC_INFO = '0x00400020'
LENGTH = '0x02fbf228'
ASSIGN = '0x02a2a720'
FATAL = '0x024b55b0'
RECORD_BYTES = 0xc0
FLAGS_OFFSET = 0x78
BLOCK_A = '00112233445566778899aabbccddeeff'
BLOCK_B = 'f0e0d0c0b0a090807060504030201000'
METRIC_A = 0x1122334455667788
METRIC_B = 0x8000000000000001
METRIC_C = 0xfedcba9876543210


def u8(v):
    return struct.pack('<B', v & 0xff).hex()


def case(cid, first='one', flag=1, info_first=0x20, info_second=0x20, preset=0x00):
    """first: 'one' (one character), 'empty' (a zero character buffer), or None (a null pointer).

    info_first and info_second: the flags byte the info slot writes for the first and the second name.
    preset: the flags byte already in the record.
    """
    record = '00' * FLAGS_OFFSET + u8(preset) + '00' * (RECORD_BYTES - FLAGS_OFFSET - 1)
    b = {'record': {'size': RECORD_BYTES, 'bytes': record},
         'alloc': {'size': 8}, 'alloc_vt': {'size': 0x78},
         'one': {'size': 0x10, 'bytes': '4100'}, 'empty': {'size': 0x10}}
    m = [{'addr': 'buf:alloc', 'pointer': 'alloc_vt'},
         {'addr': 'buf:alloc_vt+32', 'guest': ALLOC_INFO}]
    stubs = []
    # First name: the info slot, the fatal report if the heap is not valid, the length of a non-empty text,
    # then the assignment.
    stubs.append({'address': ALLOC_INFO, 'argc': 3, 'argi': [0, 1, 2],
                  'writes': [{'arg': 0, 'offset': 0, 'bytes': u8(info_first)}]})
    if not info_first & 0x20:
        stubs.append({'address': FATAL, 'argc': 3, 'argi': [0, 1, 2]})
    if first == 'one':
        stubs.append({'address': LENGTH, 'argc': 1, 'argi': [0], 'ret': 1})
    stubs.append({'address': ASSIGN, 'argc': 3, 'argi': [0, 1, 2]})
    # Second name: the info slot, the fatal report if needed, then the assignment of the empty text.
    stubs.append({'address': ALLOC_INFO, 'argc': 3, 'argi': [0, 1, 2],
                  'writes': [{'arg': 0, 'offset': 0, 'bytes': u8(info_second)}]})
    if not info_second & 0x20:
        stubs.append({'address': FATAL, 'argc': 3, 'argi': [0, 1, 2]})
    stubs.append({'address': ASSIGN, 'argc': 3, 'argi': [0, 1, 2]})
    args = {'rdi': 'buf:record', 'rsi': 'buf:alloc',
            'rdx': 0 if first is None else f'buf:{first}', 'rcx': flag,
            'r8': METRIC_A, 'r9': METRIC_B, 'xmm0': BLOCK_A, 'xmm1': BLOCK_B}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': args,
            'buffers': b, 'memory': m, 'stubs': stubs, 'stack': [METRIC_C], 'imports': []}


CASES = [
    case('first_null_flag_set', first=None, flag=1),
    case('first_null_flag_clear', first=None, flag=0, preset=0xff),
    case('first_text_flag_set', first='one', flag=1),
    case('first_text_flag_clear_preset_set', first='one', flag=0x00000000, preset=0xff),
    case('first_empty_text', first='empty', flag=1),
    case('flag_upper_bits_even', first='one', flag=0xfffffffe, preset=0x01),
    case('flag_upper_bits_odd', first='one', flag=0xfffffff1, preset=0xfe),
    case('first_heap_invalid', first='one', flag=1, info_first=0x00, info_second=0x00),
    case('second_heap_invalid', first='one', flag=1, info_first=0x20, info_second=0x00),
    case('first_heap_invalid_empty', first='empty', flag=0, info_first=0x00, info_second=0x20),
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
