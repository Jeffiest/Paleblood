#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_clear_and_forward_source (0x0225b7f0), for tools/verify.py run.

usage: clear_and_forward_source_cases.py OUT_DIR

The slot is cleared first. A null source returns at once: the original never writes RAX on that
path, so those cases set 'returns': 'void' (the replacement returns zero there). A source makes the
original tail-jump to 0x0225b8e0 with a zero flag, and its result is the function's result. A
marker word follows the slot so an overwrite past it shows.
"""
import json
import os
import sys

ADDRESS = '0x0225b7f0'
ROUTINE = '0x0225b8e0'
MARKER = 'a1a2a3a4a5a6a7a8'


def case(cid, slot_before, source, result):
    b = {'slot': {'size': 16}, 'source': {'size': 16}}
    m = [{'addr': 'buf:slot', 'bytes': slot_before}, {'addr': 'buf:slot+8', 'bytes': MARKER}]
    stubs = []
    if source:
        stubs.append({'address': ROUTINE, 'argc': 3, 'ret': hex(result)})
        returns = 'i64'
        rsi = 'buf:source'
    else:
        returns = 'void'
        rsi = 0
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': returns,
            'args': {'rdi': 'buf:slot', 'rsi': rsi}, 'buffers': b, 'memory': m,
            'stubs': stubs, 'imports': []}


CASES = [
    case('null_source_slot_null', '00' * 8, False, 0),
    case('null_source_slot_set', '1032547698badcfe', False, 0),
    case('source_slot_set', '1032547698badcfe', True, 0x55),
    case('source_slot_null', '00' * 8, True, 0),
    case('source_result_all_ones', 'ff' * 8, True, 0xffffffffffffffff),
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
