#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_reset_text_block (0x0225b560), for tools/verify.py run.

usage: reset_text_block_cases.py OUT_DIR

A text block of three slots (first at +0x20, second at +0xd0, third at +0x180; each 0xb0 bytes with
the capacity at +0x18, the length at +0x10 and the flag byte at +0xa1). The original sets the vtable,
then empties the third, second and first slots in that order. A capacity of 8 or more is a heap
buffer: the check adds one, a result of 0x41 or more goes to the fatal report (stub 0x024b55b0,
which returns), and the flag's 0x02 bit is cleared. The result is the first slot's RAX value.
Covers inline slots, heap slots with and without the fatal report, and every combination of
capacities at the boundaries (7, 8, 0x40, 0x41).
"""
import json
import os
import sys

ADDRESS = '0x0225b560'
FATAL = '0x024b55b0'
FATAL_RET = 0x77
SLOTS = {'first': 0x20, 'second': 0xd0, 'third': 0x180}   # in the order the original empties them
RESET_ORDER = ['third', 'second', 'first']
MARKER = 'c3' * 8


def u64(v):
    return (v & ((1 << 64) - 1)).to_bytes(8, 'little').hex()


def case(cid, caps, flags):
    """caps and flags: dicts from slot name to the capacity and the flag byte."""
    b = {'record': {'size': 0x230}}
    m = [{'addr': 'buf:record+8', 'bytes': MARKER}, {'addr': 'buf:record', 'bytes': '5a' * 8}]
    stubs = []
    for name in RESET_ORDER:
        base = SLOTS[name]
        m += [{'addr': f'buf:record+{base + 0x10}', 'bytes': u64(0x1122)},
              {'addr': f'buf:record+{base + 0x18}', 'bytes': u64(caps[name])},
              {'addr': f'buf:record+{base + 0xa1}', 'bytes': '%02x' % flags[name]},
              {'addr': f'buf:record+{base}', 'bytes': 'b1' * 16}]
        if caps[name] >= 8 and caps[name] + 1 >= 0x41:
            stubs.append({'address': FATAL, 'argc': 3, 'ret': hex(FATAL_RET)})
    # the result is the first slot's RAX; the fatal stub's count is in the order the calls are made
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:record'}, 'buffers': b, 'memory': m, 'stubs': stubs, 'imports': []}


CASES = [
    case('all_inline', {'first': 7, 'second': 7, 'third': 7}, {'first': 0, 'second': 0, 'third': 0}),
    case('all_inline_flags_set', {'first': 3, 'second': 0, 'third': 7}, {'first': 0xff, 'second': 0x02, 'third': 0x01}),
    case('first_heap', {'first': 8, 'second': 7, 'third': 7}, {'first': 0x02, 'second': 0, 'third': 0}),
    case('second_heap_flag', {'first': 7, 'second': 9, 'third': 7}, {'first': 0, 'second': 0x03, 'third': 0}),
    case('third_heap_no_flag', {'first': 7, 'second': 7, 'third': 15}, {'first': 0, 'second': 0, 'third': 0x00}),
    case('all_heap', {'first': 8, 'second': 9, 'third': 15}, {'first': 0x02, 'second': 0x02, 'third': 0xfd}),
    case('largest_heap_below_limit', {'first': 0x3f, 'second': 7, 'third': 7}, {'first': 0x02, 'second': 0, 'third': 0}),
    case('first_at_fatal_limit', {'first': 0x40, 'second': 7, 'third': 7}, {'first': 0x02, 'second': 0, 'third': 0}),
    case('second_at_fatal_limit', {'first': 7, 'second': 0x40, 'third': 7}, {'first': 0, 'second': 0x02, 'third': 0}),
    case('third_past_fatal_limit', {'first': 7, 'second': 7, 'third': 0x41}, {'first': 0, 'second': 0, 'third': 0x02}),
    case('every_slot_fatal', {'first': 0x40, 'second': 0x40, 'third': 0x40}, {'first': 0x02, 'second': 0x02, 'third': 0x02}),
    case('fatal_on_third_and_first', {'first': 0x50, 'second': 8, 'third': 0x40}, {'first': 0x02, 'second': 0x02, 'third': 0x02}),
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
