#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_forward_with_zero_flag (0x0225b810), for tools/verify.py run.

usage: forward_with_zero_flag_cases.py OUT_DIR

The original clears EDX and tail-jumps to 0x0225b8e0 with the two arguments, so the stub of that
routine must see a zero flag and hand back the result unchanged. Covers a null source, a real
source, and the result values zero, a pointer-sized value and all ones.
"""
import json
import os
import sys

ADDRESS = '0x0225b810'
ROUTINE = '0x0225b8e0'


def case(cid, source, result):
    b = {'slot': {'size': 16}, 'source': {'size': 16}}
    m = [{'addr': 'buf:slot+8', 'bytes': 'a1a2a3a4a5a6a7a8'}]
    stub = {'address': ROUTINE, 'argc': 3, 'ret': hex(result)}
    args = {'rdi': 'buf:slot', 'rsi': 'buf:source' if source else 0}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': args, 'buffers': b, 'memory': m, 'stubs': [stub], 'imports': []}


CASES = [
    case('null_source_zero', False, 0),
    case('null_source_value', False, 0x1234),
    case('source_zero', True, 0),
    case('source_pointer_value', True, 0x7fffffffdeadbeef),
    case('source_all_ones', True, 0xffffffffffffffff),
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
