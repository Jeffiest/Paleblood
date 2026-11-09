#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic member-owner deletions for misc_member_owner_delete_02243fc0 (0x02243fc0), for tools/verify.py run.

usage: member_owner_delete_02243fc0_cases.py OUT_DIR

The owner is 0x70 bytes: its vtable word, and the member sub-object at +0x68. The member's destruction
routine, the base part's destruction routine and the library release the original tail-jumps to are
stubs; the release's result is the function's result. Covers zero, all-ones, high-bit and ordinary
results, and garbage, zero and all-ones owner bytes.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02243fc0'
MEMBER_DESTROY = '0x013e68b0'   # the member's destruction routine; stubbed
BASE_DESTROY = '0x013e8250'     # the base part's destruction routine; stubbed
RELEASE = '0x02fbe588'          # the library release the original tail-jumps to; stubbed
OWNER_SIZE = 0x70
MASK64 = (1 << 64) - 1


def case(cid, result=0, fill='ee'):
    """One deletion of an owner whose bytes all start as fill; the release's result is returned."""
    stubs = [{'address': MEMBER_DESTROY, 'argc': 1},
             {'address': BASE_DESTROY, 'argc': 1},
             {'address': RELEASE, 'argc': 1, 'ret': hex(result & MASK64)}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:owner'}, 'buffers': {'owner': {'size': OWNER_SIZE, 'bytes': fill * OWNER_SIZE}},
            'memory': [], 'imports': [], 'stubs': stubs}


CASES = [
    case('result_zero', result=0),
    case('result_all_ones', result=MASK64, fill='ff'),
    case('result_high_bit', result=1 << 63, fill='00'),
    case('result_ordinary', result=0x2a, fill='c3'),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        (output / (fixture['id'] + '.json')).write_text(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} cases written to {output}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
