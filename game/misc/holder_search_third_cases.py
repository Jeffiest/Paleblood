#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic holders for misc_holder_search_third (0x026ef840): keys at zero, all ones and with high
bits, and the search's results: zero (nothing found), an ordinary pointer and all ones.

usage: holder_search_third_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x026ef840'
SEARCH = '0x026ea2e0'
MASK64 = (1 << 64) - 1
BODY_OFFSET = 0x12d0
TABLE_OFFSET = 0x28


def case(cid, key, result):
    """One search: the table is the body plus its offset, and the search receives the key in its second
    and third arguments; its result is returned as it is."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:holder', 'rsi': hex(key & MASK64)},
            'buffers': {'holder': {'size': BODY_OFFSET + 8}, 'body': {'size': 0x40}},
            'memory': [{'addr': 'buf:holder+%d' % BODY_OFFSET, 'pointer': 'body'}],
            'stubs': [{'address': SEARCH, 'argc': 3, 'argi': [0, 2], 'ret': hex(result & MASK64)}],
            'imports': []}


CASES = [
    case('key_zero_not_found', 0, 0),
    case('key_ordinary_found', 0x1234, 0x7000),
    case('key_all_ones', MASK64, MASK64),
    case('key_high_bit', 0x8000000000000001, 0x55),
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
