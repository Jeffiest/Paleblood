#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic dual held member objects for bb_misc_dual_held_pair_report (0x00be6f80).

usage: dual_held_pair_report_cases.py OUT_DIR

Kind one reports the held item at 0x38 first and the one at 0x20 second; kind zero the reverse; any
other kind reports nothing and leaves both result words alone. Each report is a stub of 0x00c0b940 with
the five argument slots compared, and returns a 32-bit word that is stored into the result. The seventh
argument (the second result pointer) is on the stack. Held items may be null, which the report still
receives as the pointer value.
"""
import json
import os
import struct
import sys

ADDRESS = '0x00be6f80'
REPORT = '0x00c0b940'
OBJECT_BYTES = 0x58
ITEM_BYTES = 0x10
RESULT_BYTES = 0x8
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1


def case(cid, kind, first_item=True, second_item=True, reports=None, fourth=0x1234567890abcdef,
         fifth=0x7, second=0x2222333344445555, third=0x6666777788889999):
    """kind: the kind word; the held items at 0x20 and 0x38 are present or null; reports are the stub
    results in call order (one per report made)."""
    memory = [{'addr': 'buf:object+0x20', 'pointer': 'item_20'} if first_item
              else {'addr': 'buf:object+0x20', 'bytes': '00' * 8},
              {'addr': 'buf:object+0x38', 'pointer': 'item_38'} if second_item
              else {'addr': 'buf:object+0x38', 'bytes': '00' * 8}]
    stubs = [{'address': REPORT, 'argc': 5, 'argi': [0, 1, 2, 3, 4], 'ret': hex(result & MASK32)}
             for result in (reports or [])]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:object', 'rsi': hex(second & MASK64), 'rdx': hex(third & MASK64),
                     'rcx': hex(fourth & MASK64), 'r8': hex(fifth & MASK32), 'r9': 'buf:first'},
            'stack': ['buf:second'],
            'buffers': {'object': {'size': OBJECT_BYTES,
                                   'bytes': 'a5' * 0x18 + struct.pack('<I', kind & MASK32).hex()
                                   + 'a5' * (OBJECT_BYTES - 0x1c)},
                        'item_20': {'size': ITEM_BYTES, 'bytes': '00' * ITEM_BYTES},
                        'item_38': {'size': ITEM_BYTES, 'bytes': '00' * ITEM_BYTES},
                        'first': {'size': RESULT_BYTES, 'bytes': 'c3' * RESULT_BYTES},
                        'second': {'size': RESULT_BYTES, 'bytes': 'c3' * RESULT_BYTES}},
            'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('kind_one_both_held', kind=0x1, reports=[0x11223344, 0x55667788]),
    case('kind_one_second_absent', kind=0x1, first_item=False, reports=[0xffffffff, 0x0]),
    case('kind_one_first_absent', kind=0x1, second_item=False, reports=[0x0, 0x80000000]),
    case('kind_zero_both_held', kind=0x0, reports=[0x99aabbcc, 0x12345678]),
    case('kind_zero_first_absent', kind=0x0, first_item=False, reports=[0x1, 0x2]),
    case('kind_zero_second_absent', kind=0x0, second_item=False, reports=[0xdeadbeef, 0xfeedface]),
    case('other_kind_reports_nothing', kind=0x2),
    case('high_bit_kind_reports_nothing', kind=0x80000000),
    case('all_ones_kind_reports_nothing', kind=MASK32),
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
