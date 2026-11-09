#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_write_indexed_field_pairs (0x0139b280), for tools/verify.py run.

usage: write_indexed_field_pairs_cases.py OUT_DIR

A null owner; allocator info with the valid bit and without it (the fatal report then carries on);
names inline up to the seven-character limit and on the heap from capacity eight, which the function
frees; and indices of several sign and width shapes.
"""
import json
import os
import struct
import sys

ADDRESS = '0x0139b280'
ALLOCATOR_INFO = '0x0247d7a0'
INFO_SLOT = '0x00400020'
FREE_SLOT = '0x004000a0'
FATAL = '0x024b55b0'
FORMAT = '0x02b62d00'
SCOPE_BEGIN = '0x013aeaf0'
SCOPE_END = '0x013aebc0'
LOOKUP = '0x0139cd80'
KEY_WRITE = '0x0139d6b0'
FIELD_WRITE = '0x02d85480'
GUARD = '0x057e3be0'
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1
RECORD = bytes((0x10 + index) & 0xff for index in range(0x30))


def u64(value):
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, flags=0x20, text=b'ab', capacity=7, index=5, owner=True, heap=False):
    """One call: the allocator reports flags, the formatter writes the name inline or as a heap pointer,
    the entry receives both groups, and a heap name is freed. The stack addresses are not compared."""
    buffers = {'guard': {'size': 8, 'bytes': u64(0x0123456789abcdef)},
               'record': {'size': 0x30, 'bytes': RECORD.hex()},
               'owner': {'size': 0x10},
               'allocator': {'size': 8},
               'allocator_vt': {'size': 0x78},
               'entry': {'size': 0x10}}
    memory = [{'addr': GUARD, 'pointer': 'guard'},
              {'addr': 'buf:allocator', 'pointer': 'allocator_vt'},
              {'addr': 'buf:allocator_vt+32', 'guest': INFO_SLOT},
              {'addr': 'buf:allocator_vt+112', 'guest': FREE_SLOT}]
    args = {'rdi': 'buf:record', 'rsi': 'buf:owner' if owner else '0x0', 'rdx': hex(index & MASK32)}
    stubs = []
    if owner:
        text_bytes = text + b'\x00'
        stubs.append({'address': ALLOCATOR_INFO, 'argc': 0, 'ret': 'buf:allocator'})
        stubs.append({'address': INFO_SLOT, 'argc': 3, 'argi': [1], 'argu32': [2],
                      'writes': [{'arg': 0, 'offset': 0, 'bytes': f'{flags & 0xff:02x}'}]})
        if (flags & 0x20) == 0:
            stubs.append({'address': FATAL, 'argc': 3, 'argi': [0, 2], 'argu32': [1]})
        format_writes = [{'arg': 0, 'offset': 0x20, 'bytes': u64(capacity)}]
        if heap:
            buffers['heap'] = {'size': 0x20, 'bytes': text_bytes.ljust(0x20, b'\x00').hex()}
            format_writes.append({'arg': 0, 'offset': 8, 'pointer': 'heap'})
        else:
            assert capacity < 8 and len(text_bytes) <= 8
            format_writes.append({'arg': 0, 'offset': 8, 'bytes': text_bytes.hex()})
        stubs.append({'address': FORMAT, 'argc': 3, 'argi': [1], 'argu32': [2], 'writes': format_writes})
        stubs.append({'address': SCOPE_BEGIN, 'argc': 2, 'argi': [1]})
        stubs.append({'address': LOOKUP, 'argc': 4, 'argi': [0], 'argmem': [{'arg': 1, 'size': max(2, len(text_bytes))}],
                      'ret': 'buf:entry'})
        stubs.append({'address': SCOPE_END, 'argc': 1, 'argi': []})
        stubs.append({'address': KEY_WRITE, 'argc': 2})
        stubs.append({'address': FIELD_WRITE, 'argc': 3, 'argmem': [{'arg': 2, 'size': 4}]})
        stubs.append({'address': FIELD_WRITE, 'argc': 3, 'argmem': [{'arg': 2, 'size': 4}]})
        stubs.append({'address': KEY_WRITE, 'argc': 2})
        stubs.append({'address': FIELD_WRITE, 'argc': 3, 'argmem': [{'arg': 2, 'size': 4}]})
        stubs.append({'address': FIELD_WRITE, 'argc': 3, 'argmem': [{'arg': 2, 'size': 4}]})
        if heap:
            stubs.append({'address': FREE_SLOT, 'argc': 2})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': args,
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('null_owner_returns', owner=False),
    case('valid_inline_short'),
    case('valid_inline_seven_characters', text=b'abcdefg', capacity=7),
    case('empty_name_inline', text=b''),
    case('valid_with_other_flag_bits', flags=0x3f),
    case('valid_bit_with_low_bit', flags=0x21),
    case('flags_clear_reports_fatal', flags=0x00),
    case('other_flag_bits_only_fatal', flags=0xdf),
    case('high_flag_bit_only_fatal', flags=0x80),
    case('heap_name_minimum_capacity', text=b'x' * 8, capacity=8, heap=True),
    case('heap_name_large_capacity', text=b'long name', capacity=0x100, heap=True),
    case('heap_name_after_fatal', flags=0x00, text=b'x' * 9, capacity=8, heap=True),
    case('index_zero', index=0),
    case('index_negative_one', index=-1),
    case('index_max_positive', index=0x7fffffff),
    case('index_high_bit_set', index=0x80000000),
]


def main():
    """Write one JSON case per call shape to the requested directory."""
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    os.makedirs(sys.argv[1], exist_ok=True)
    for fixture in CASES:
        with open(os.path.join(sys.argv[1], fixture['id'] + '.json'), 'w') as stream:
            json.dump(fixture, stream, indent=1)
    print(f'{len(CASES)} cases written to {sys.argv[1]}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
