#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic fixtures for init_item_table at 0x0139aed0, for tools/verify.py run.

usage: init_item_table_cases.py OUT_DIR

The allocator's allocate slot (0x58) is a scripted stub taking size and alignment, called four
times in order: item list, flag array, second item list, second flag array. Each may return a
fresh buffer or null. The fill step at 0x0139af70 is stubbed as the tail call. Counts cover zero,
one, a typical size, the sign bit and all ones, which the original sizes as signed values.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x0139aed0'
FILL = '0x0139af70'
ALLOCATE = '0x00400500'
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1
GARBAGE = {'rdx': '0x4', 'rcx': '0x0', 'r8': '0x8080808080808080', 'r9': '0x7f'}


def i32(value):
    """Encode a signed 32-bit value."""
    return struct.pack('<i', value).hex()


def case(cid, count=5, first_value=7, returns=('buf:items', 'buf:flags', 'buf:second_items', 'buf:second_flags')):
    """One initialization: the allocator, the table and four allocation results in call order."""
    buffers = {'table': {'size': 0x48, 'bytes': 'd3' * 0x48},
               'allocator': {'size': 8}, 'allocator_vt': {'size': 0x70},
               'items': {'size': 0x100}, 'flags': {'size': 0x100},
               'second_items': {'size': 0x100}, 'second_flags': {'size': 0x100}}
    memory = [{'addr': 'buf:allocator', 'pointer': 'allocator_vt'},
              {'addr': 'buf:allocator_vt+0x58', 'guest': ALLOCATE}]
    stubs = [{'address': ALLOCATE, 'argc': 3, 'argi': [0, 1, 2], 'ret': value} for value in returns]
    stubs.append({'address': FILL, 'argc': 1, 'argi': [0]})
    args = {'rdi': 'buf:table', 'rsi': 'buf:allocator', 'rdx': hex(count & MASK32),
            'rcx': hex(first_value & MASK32), 'r8': GARBAGE['r8'], 'r9': GARBAGE['r9']}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': args,
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


NULL = '0x0'
CASES = [
    case('typical_count'),
    case('count_zero', count=0),
    case('count_one', count=1, first_value=0),
    case('negative_count_sizes_wrap', count=-1),
    case('count_sign_bit', count=-0x80000000),
    case('count_all_ones_is_minus_one', count=MASK32),
    case('first_list_null', returns=(NULL, 'buf:flags', 'buf:second_items', 'buf:second_flags')),
    case('first_flags_null', returns=('buf:items', NULL, 'buf:second_items', 'buf:second_flags')),
    case('second_list_null', returns=('buf:items', 'buf:flags', NULL, 'buf:second_flags')),
    case('second_flags_null', returns=('buf:items', 'buf:flags', 'buf:second_items', NULL)),
    case('all_null', returns=(NULL, NULL, NULL, NULL), first_value=-3),
]


def main():
    """Write deterministic fixtures to the requested directory."""
    if len(sys.argv) != 2:
        print(f'usage: {Path(__file__).name} OUT_DIR', file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        (output / (fixture['id'] + '.json')).write_text(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} synthetic cases written to {output}')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
