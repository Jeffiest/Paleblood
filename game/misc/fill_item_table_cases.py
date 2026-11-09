#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic item tables for fill_item_table at 0x0139af70, for tools/verify.py run.

usage: fill_item_table_cases.py OUT_DIR

The four clearing calls to the library routine at 0x02fbe688 are scripted stubs in call order:
first flags, first items, second flags, second items. Covers first values below, at and above
the counts, negative first values, zero counts, and counts whose sizes wrap when signed.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x0139af70'
ZERO_BYTES = '0x02fbe688'
TABLE_BYTES = 0x48
MASK32 = (1 << 32) - 1


def i32(value):
    """Encode a signed 32-bit value."""
    return struct.pack('<i', value).hex()


def case(cid, first=0, count=4, second_count=3):
    """One fill: the table's first value and counts, with the four clears scripted in call order."""
    buffers = {'table': {'size': TABLE_BYTES, 'bytes': 'd3' * TABLE_BYTES},
               'items': {'size': 0x100, 'bytes': 'c5' * 0x100},
               'flags': {'size': 0x100, 'bytes': 'c5' * 0x100},
               'second_items': {'size': 0x100, 'bytes': 'c5' * 0x100},
               'second_flags': {'size': 0x100, 'bytes': 'c5' * 0x100}}
    memory = [{'addr': 'buf:table+0x0', 'bytes': i32(first)},
              {'addr': 'buf:table+0x10', 'pointer': 'items'},
              {'addr': 'buf:table+0x18', 'pointer': 'flags'},
              {'addr': 'buf:table+0x20', 'bytes': i32(count)},
              {'addr': 'buf:table+0x30', 'pointer': 'second_items'},
              {'addr': 'buf:table+0x38', 'pointer': 'second_flags'},
              {'addr': 'buf:table+0x40', 'bytes': i32(second_count)}]
    clears = [{'address': ZERO_BYTES, 'argc': 3, 'argi': [0, 1, 2]} for _ in range(4)]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:table', 'rsi': '0x1111111111111111', 'rdx': '0xffffffffffffffff',
                     'rcx': '0x0', 'r8': '0x8080808080808080', 'r9': '0x7f'},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': clears}


CASES = [
    case('first_below_both_counts'),
    case('first_at_counts', first=4, count=4, second_count=4),
    case('first_above_counts', first=7, count=5, second_count=2),
    case('negative_first_value', first=-2, count=3, second_count=2),
    case('zero_counts', first=0, count=0, second_count=0),
    case('second_count_below_first', first=2, count=5, second_count=1),
    case('capacity_from_high_first', first=0x1ff, count=0x200, second_count=0),
    case('large_first_value', first=0x7ffffff0, count=0, second_count=0),
    case('negative_counts_wrap', first=1, count=-1, second_count=-1),
    case('count_sign_bit', first=0, count=-0x80000000, second_count=0),
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
