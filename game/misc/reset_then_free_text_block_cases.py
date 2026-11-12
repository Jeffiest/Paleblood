#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_reset_then_free_text_block (0x0225b540), for tools/verify.py run.

usage: reset_then_free_text_block_cases.py OUT_DIR

The block goes to the reset routine (stub 0x0225b560, whose result the original ignores), then to the
library release routine (stub 0x02fbe588) with the same block; the release's result is returned.
Covers a reset returning zero and nonzero values, and release results of zero, a pointer-sized value
and all ones.
"""
import json
import os
import sys

ADDRESS = '0x0225b540'
RESET = '0x0225b560'
RELEASE = '0x02fbe588'
MARKER = 'c3' * 8


def case(cid, reset_ret, release_ret):
    b = {'record': {'size': 0x230}}
    m = [{'addr': 'buf:record+8', 'bytes': MARKER}]
    stubs = [{'address': RESET, 'argc': 1, 'ret': hex(reset_ret)},
             {'address': RELEASE, 'argc': 1, 'ret': hex(release_ret)}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:record'}, 'buffers': b, 'memory': m, 'stubs': stubs, 'imports': []}


CASES = [
    case('reset_zero_release_zero', 0, 0),
    case('reset_value_ignored', 0x5555, 0x1234),
    case('release_pointer_value', 0, 0x7fffffffdeadbeef),
    case('release_all_ones', 0x9, 0xffffffffffffffff),
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
