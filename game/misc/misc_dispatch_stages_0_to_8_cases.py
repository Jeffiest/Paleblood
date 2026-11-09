#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic owners, targets and stage results for bb_misc_dispatch_stages_0_to_8 (0x01e57a20).

usage: misc_dispatch_stages_0_to_8_cases.py OUT_DIR

A non-null target runs the stage callee for stages 0 to 7 with the target, the owner and the stage
index, then returns the stage 8 callee's result. A null target returns at once, leaving the result
register alone, so those cases compare no return register.
"""
import json
import os
import sys

ADDRESS = '0x01e57a20'
STAGE = '0x01e58c30'
INTERMEDIATE = '0xffffffffffffffff'
MASK64 = (1 << 64) - 1


def case(cid, target=True, owner=0x1234, final=0x5678, intermediate=INTERMEDIATE):
    """One call: eight stages whose results are ignored, then the stage 8 result is returned."""
    stubs = []
    if target:
        for _ in range(8):
            stubs.append({'address': STAGE, 'argc': 3, 'ret': intermediate})
        stubs.append({'address': STAGE, 'argc': 3, 'ret': hex(final & MASK64)})
    args = {'rdi': hex(owner), 'rsi': 'buf:target' if target else '0x0'}
    return {'schema': 1, 'address': ADDRESS, 'id': cid,
            'returns': 'i64' if target else 'void',
            'args': args, 'buffers': {'target': {'size': 16}}, 'memory': [],
            'imports': [], 'stubs': stubs}


CASES = [
    case('null_target_returns_without_stages', target=False),
    case('null_target_owner_null', target=False, owner=0),
    case('stages_run_and_final_result_returned'),
    case('owner_zero_still_passed', owner=0),
    case('final_result_full_width', final=MASK64),
    case('final_result_zero', final=0),
    case('intermediate_results_ignored', final=0x9, intermediate='0x1'),
    case('owner_all_ones_passed', owner=MASK64, final=0x42),
]


def main():
    """Write one JSON case per scenario into the output directory."""
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
