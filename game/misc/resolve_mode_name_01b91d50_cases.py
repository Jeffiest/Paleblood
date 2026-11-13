#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_resolve_mode_name_01b91d50 (0x01b91d50), for tools/verify.py run.

usage: resolve_mode_name_01b91d50_cases.py OUT_DIR

The function starts the object's mode (0x024f1fe0, which also gets the caller's second argument), looks it up (0x024f2900 fills the source pointer at +0x50), picks a table entry from
the mode flags to build the address its source name is read from, reads that name (0x02d67040), copies it into a
second name (0x02d70b40) and into a third (0x02a38fa0), frees the heap text of the first two, and compares the
third with a fixed text whose length 0x02fbf228 gives, through 0x02fbf268 over the shorter of the two sizes. The
three names live in the function's frame: the stubs write them through their first argument. Heap texts are freed
through the allocator in slot 0x70. The matched byte at +0x70 is cleared first and set when the third name equals the text; the result is the
status of the start.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01b91d50'
START = '0x024f1fe0'
LOOKUP = '0x024f2900'
READ_NAME = '0x02d67040'
COPY_NAME = '0x02d70b40'
ASSIGN_NAME = '0x02a38fa0'
TEXT_LENGTH = '0x02fbf228'
COMPARE_TEXT = '0x02fbf268'
FREE = '0x004000a0'            # slot 0x70 of the allocator; stubbed real entry
OBJECT_SIZE = 0x78
SOURCE_FLAG_OFFSET = 0x31
TABLE_SIZE = 0x40
MASK64 = (1 << 64) - 1


def u64(value):
    """Eight little-endian bytes of a value, as hex."""
    return struct.pack('<Q', value & MASK64).hex()


def name_writes(heap, size, with_text=True, flag=None):
    """The writes that fill a name through its first argument: text or heap pointer, size, capacity, allocator."""
    writes = []
    if heap:
        writes.append({'arg': 0, 'offset': 0x8, 'pointer': 'heap_text'})
    else:
        writes.append({'arg': 0, 'offset': 0x8, 'bytes': '6100620063000000'})
    writes.append({'arg': 0, 'offset': 0x18, 'bytes': u64(size)})
    writes.append({'arg': 0, 'offset': 0x20, 'bytes': u64(0x20 if heap else 7)})
    return writes


def case(cid, status=0, flags=0x12, source=True, wide=False, matched=0, a_heap=False, b_heap=False, c_heap=False,
         size=8, text_length=8, order=0, start_status=3):
    """One call. The third name has 'size' characters, the fixed text 'text_length'; the comparison answers 'order'."""
    table = b''.join(struct.pack('<I', 0x100 * (index + 1)) for index in range(TABLE_SIZE // 4))
    obj = bytearray(b'\xee' * OBJECT_SIZE)
    obj[0x6c] = flags
    obj[0x70] = matched
    source_bytes = bytearray(b'\xcc' * 0x40)
    source_bytes[SOURCE_FLAG_OFFSET] = 0x04 if wide else 0x00
    source_bytes[SOURCE_FLAG_OFFSET + 1] = 0
    buffers = {'object': {'size': OBJECT_SIZE, 'bytes': obj.hex()},
               'offsets': {'size': TABLE_SIZE, 'bytes': table.hex()},
               'source': {'size': 0x40, 'bytes': source_bytes.hex()},
               'alloc': {'size': 8}, 'alloc_vt': {'size': 0x78},
               'heap_text': {'size': 0x40, 'bytes': '61' * 0x40}}
    memory = [{'addr': 'buf:object+0x58', 'pointer': 'offsets'},
              {'addr': 'buf:alloc', 'pointer': 'alloc_vt'},
              {'addr': 'buf:alloc_vt+0x70', 'guest': FREE}]
    stubs = [{'address': START, 'argc': 5, 'ret': hex(start_status & 0xffffffff)}]
    if start_status >= 0:
        stubs.append({'address': LOOKUP, 'argc': 3, 'ret': hex(status & 0xffffffff),
                      'writes': [{'arg': 2, 'offset': 0, 'pointer': 'source'} if source
                                 else {'arg': 2, 'offset': 0, 'bytes': u64(0)}]})
    if start_status >= 0 and status >= 0:
        a_writes = name_writes(a_heap, 2)
        a_writes.append({'arg': 0, 'offset': 0x28, 'pointer': 'alloc'})
        stubs.append({'address': READ_NAME, 'argc': 2, 'writes': a_writes})
        b_writes = name_writes(b_heap, 2)
        b_writes += [{'arg': 0, 'offset': 0x28, 'pointer': 'alloc'}, {'arg': 0, 'offset': 0x30, 'bytes': '01'}]
        stubs.append({'address': COPY_NAME, 'argc': 2, 'writes': b_writes})
        stubs.append({'address': ASSIGN_NAME, 'argc': 4, 'writes': name_writes(c_heap, size)})
        if b_heap:
            stubs.append({'address': FREE, 'argc': 2})
        if a_heap:
            stubs.append({'address': FREE, 'argc': 2})
        stubs.append({'address': TEXT_LENGTH, 'argc': 1, 'ret': hex(text_length)})
        if min(size, text_length) != 0:
            stubs.append({'address': COMPARE_TEXT, 'argc': 3, 'ret': hex(order & 0xffffffff)})
        if c_heap:
            stubs.append({'address': FREE, 'argc': 2})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i32', 'args': {'rdi': 'buf:object', 'rsi': '0x1234'},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('start_fails', start_status=-5, matched=1),
    case('start_status_zero', start_status=0),
    case('lookup_fails', status=-1, matched=1),
    case('lookup_status_zero_equal', status=0),
    case('matched_preset_cleared_when_different', matched=1, order=4),
    case('flags_none', flags=0x00),
    case('flags_enable_only_second_bit', flags=0x02),
    case('flags_enable_only_first_bit', flags=0x10),
    case('enabled_without_source', source=False),
    case('enabled_wide', wide=True),
    case('long_entry', flags=0x13),
    case('long_entry_wide', flags=0x13, wide=True),
    case('second_entry', flags=0x16),
    case('second_entry_wide', flags=0x16, wide=True),
    case('long_and_second_entry', flags=0x17),
    case('long_and_second_entry_wide', flags=0x17, wide=True),
    case('shorter_than_text', size=3),
    case('longer_than_text', size=12),
    case('same_length_different', order=5),
    case('same_length_different_negative', order=-3),
    case('shorter_and_different', size=3, order=7),
    case('empty_name_empty_text', size=0, text_length=0),
    case('empty_name_nonempty_text', size=0),
    case('nonempty_name_empty_text', text_length=0),
    case('first_name_on_heap', a_heap=True),
    case('second_name_on_heap', b_heap=True),
    case('third_name_on_heap', c_heap=True),
    case('all_names_on_heap', a_heap=True, b_heap=True, c_heap=True, size=0x18, text_length=0x18),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        (output / (fixture['id'] + '.json')).write_text(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} cases written to {output}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
