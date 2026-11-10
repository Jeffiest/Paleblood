#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_call_receiver_with_name (0x0139bff0), for tools/verify.py run.

usage: call_receiver_with_name_cases.py OUT_DIR

The formatter's first method, the allocator's info (valid and invalid, the latter reporting the fatal
error), the name's inline text up to seven characters or a heap block from capacity eight, which the
function frees, and values read as a 32-bit word with high bits set.
"""
import json
import os
import struct
import sys

ADDRESS = '0x0139bff0'
CALL_FIRST = '0x00400020'
FORMAT = '0x004000a0'
ACCEPT = '0x00400300'
ALLOCATOR_FOR = '0x0247d7a0'
INFO = '0x004000f0'
FREE = '0x00400170'
FATAL = '0x024b55b0'
GUARD = '0x057e3be0'
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1


def u64(value):
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, flags=0x20, text=b'ab', capacity=7, heap=False, value=0x00000001, argument=0x1122334455667788,
         guard=0x0123456789abcdef):
    """One call. The formatter's first method, the allocator lookup, the info check, the name formatter, the
    receiver and, for a heap name, the free are scripted in the order the original makes them."""
    text_bytes = text + b'\x00'
    buffers = {'guard': {'size': 8, 'bytes': u64(guard)},
               'formatter': {'size': 8}, 'formatter_vt': {'size': 0x80},
               'receiver': {'size': 8}, 'receiver_vt': {'size': 0xa0},
               'allocator': {'size': 8}, 'allocator_vt': {'size': 0x78},
               'value': {'size': 4, 'bytes': struct.pack('<I', value & MASK32).hex()}}
    memory = [{'addr': GUARD, 'pointer': 'guard'},
              {'addr': 'buf:formatter', 'pointer': 'formatter_vt'},
              {'addr': 'buf:formatter_vt+64', 'guest': CALL_FIRST},
              {'addr': 'buf:formatter_vt+120', 'guest': FORMAT},
              {'addr': 'buf:receiver', 'pointer': 'receiver_vt'},
              {'addr': 'buf:receiver_vt+152', 'guest': ACCEPT},
              {'addr': 'buf:allocator', 'pointer': 'allocator_vt'},
              {'addr': 'buf:allocator_vt+32', 'guest': INFO},
              {'addr': 'buf:allocator_vt+112', 'guest': FREE}]
    stubs = [{'address': CALL_FIRST, 'argc': 4, 'argi': [0, 1, 2], 'argu32': [3], 'ret': '0x0'},
             {'address': ALLOCATOR_FOR, 'argc': 0, 'ret': 'buf:allocator'},
             {'address': INFO, 'argc': 3, 'argi': [1], 'argu32': [2],
              'writes': [{'arg': 0, 'offset': 0, 'bytes': f'{flags & 0xff:02x}'}]}]
    if (flags & 0x20) == 0:
        stubs.append({'address': FATAL, 'argc': 3, 'argi': [0, 2], 'argu32': [1]})
    format_writes = [{'arg': 1, 'offset': 0x20, 'bytes': u64(capacity)}]
    if heap:
        buffers['heap'] = {'size': 0x20, 'bytes': text_bytes.ljust(0x20, b'\x00').hex()}
        format_writes.append({'arg': 1, 'offset': 8, 'pointer': 'heap'})
    else:
        assert capacity < 8 and len(text_bytes) <= 8
        format_writes.append({'arg': 1, 'offset': 8, 'bytes': text_bytes.hex()})
    stubs.append({'address': FORMAT, 'argc': 2, 'argi': [0], 'writes': format_writes})
    stubs.append({'address': ACCEPT, 'argc': 2, 'argi': [0],
                  'argmem': [{'arg': 1, 'size': max(2, len(text_bytes))}]})
    if heap:
        stubs.append({'address': FREE, 'argc': 2})
    args = {'rdi': 'buf:formatter', 'rsi': hex(argument & MASK64), 'rdx': 'buf:receiver', 'rcx': 'buf:value'}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': args,
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('valid_inline_short'),
    case('valid_inline_seven_characters', text=b'abcdefg'),
    case('empty_name_inline', text=b''),
    case('valid_with_other_flag_bits', flags=0x3f),
    case('flags_clear_reports_fatal', flags=0x00),
    case('other_bits_only_fatal', flags=0xdf, text=b'xy'),
    case('heap_name_minimum_capacity', text=b'x' * 8, capacity=8, heap=True),
    case('heap_name_large_capacity', text=b'long name', capacity=0x100, heap=True),
    case('value_high_bit_set', value=0x80000000),
    case('value_all_ones', value=MASK32),
    case('argument_zero', argument=0),
    case('guard_zero_heap', guard=0, heap=True, text=b'x' * 9, capacity=8),
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
