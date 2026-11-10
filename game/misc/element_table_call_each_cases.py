#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic element tables for bb_misc_element_table_call_each (0x02b3ea50): an empty table, a
single element and several elements, each element visited once in order, with the other table
words left unchanged.

usage: element_table_call_each_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02b3ea50'
CALLEE = '0x02b3b330'
MASK32 = (1 << 32) - 1
MARGIN = 0x40
ELEMENT_BYTES = 0x20
ELEMENT_SLOTS = 4


def case(cid, count, calls):
    """One call: the callee is stubbed once per element, in order, and the table is left as it was."""
    raw = bytearray(b'\xa5' * 0x48)
    raw[0x20:0x24] = (count & MASK32).to_bytes(4, 'little')
    stubs = [{'address': CALLEE, 'argc': 1} for _ in range(calls)]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:table'},
            'buffers': {'table': {'size': 0x48, 'bytes': raw.hex()},
                        'elements': {'size': MARGIN + ELEMENT_BYTES * ELEMENT_SLOTS,
                                     'bytes': 'c3' * (MARGIN + ELEMENT_BYTES * ELEMENT_SLOTS)}},
            'memory': [{'addr': 'buf:table+0x18', 'pointer': 'elements+0x40'}],
            'stubs': stubs, 'imports': []}


CASES = [
    case('empty_table_no_call', 0, 0),
    case('single_element', 1, 1),
    case('two_elements', 2, 2),
    case('four_elements', 4, 4),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print(f'usage: {Path(__file__).name} OUT_DIR', file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        with (output / (fixture['id'] + '.json')).open('w') as stream:
            stream.write(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} synthetic cases written to {output}')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
