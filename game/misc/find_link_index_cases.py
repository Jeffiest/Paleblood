#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic lookup lists for bb_misc_find_link_index (0x00be3110).

usage: find_link_index_cases.py OUT_DIR

Each case scripts the match test's results in call order. Covered: an empty list, a match first, a
match last, no match (reported), a count that is negative (the loop never runs), and a test result
whose high half is set (only the low 32 bits decide). A miss stubs the four report calls in order.
"""
import json
import os
import struct
import sys

ADDRESS = '0x00be3110'
MATCH = '0x008462b0'
INIT_BUILDER = '0x00819350'
APPEND = '0x00825170'
REPORT = '0x00819800'
DESTROY_BUILDER = '0x00819460'
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1


def u32(v):
    return struct.pack('<I', v & MASK32).hex()


def entries_bytes(count):
    """Entries with the flag bit set on each link, so the cases see the flag cleared."""
    out = b''
    for k in range(max(count, 1)):
        out += struct.pack('<Q', 0x7000 + k * 0x20 + 1) + bytes(8)
    return out.hex()


def case(cid, count, results):
    """count: the list's count; results: the match test's return values, in call order. The
    search stops at the first zero; a list with no zero result is reported as not found."""
    stubs = [{'address': MATCH, 'argc': 2, 'ret': hex(r & MASK64)} for r in results]
    found = any((r & MASK32) == 0 for r in results)
    if not found:
        stubs += [{'address': INIT_BUILDER, 'argc': 3},
                  {'address': APPEND, 'argc': 2, 'ret': 'buf:builder'},
                  {'address': APPEND, 'argc': 2},
                  {'address': REPORT, 'argc': 4},
                  {'address': DESTROY_BUILDER, 'argc': 1}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i32',
            'args': {'rdi': 'buf:table', 'rsi': 'buf:argument'},
            'buffers': {'table': {'size': 0x90, 'bytes': '00' * 0x90},
                        'second': {'size': 16 * max(count, 1), 'bytes': entries_bytes(count)},
                        'argument': {'size': 8, 'bytes': '61726700' + '00' * 4},
                        'builder': {'size': 0x18, 'bytes': '00' * 0x18}},
            'memory': [{'addr': 'buf:table+0x80', 'pointer': 'second'},
                       {'addr': 'buf:table+0x88', 'bytes': u32(count)}],
            'imports': [], 'stubs': stubs}


CASES = [
    case('empty_list', count=0, results=[]),
    case('first_entry_matches', count=3, results=[0]),
    case('last_entry_matches', count=3, results=[1, 1, 0]),
    case('no_entry_matches', count=3, results=[1, 1, 1]),
    case('single_entry_no_match', count=1, results=[1]),
    case('negative_count_never_scans', count=-1, results=[]),
    case('result_high_half_ignored', count=2, results=[0x100000000]),
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
