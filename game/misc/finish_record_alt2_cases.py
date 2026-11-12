#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_finish_record_alt2 (0x018be0b0), for tools/verify.py run.

usage: finish_record_alt2_cases.py OUT_DIR

The record's finish slot (vtable +0x28) runs first and its RAX is kept. With the release flag clear that
RAX is returned. With it set the block is freed (0x02fbe588, which is tail-called) and the free's RAX is
returned.
"""
import json
import os
import sys

ADDRESS = '0x018be0b0'
FINISH_ENTRY = '0x00400020'   # guest entry of the record's finish slot
FREE = '0x02fbe588'
MASK64 = (1 << 64) - 1


def case(cid, release, finished, freed=0):
    """release: the flag argument; finished: the finish slot's RAX; freed: the free's RAX when released."""
    b = {'record': {'size': 0x40}, 'record_vt': {'size': 0x40}}
    m = [{'addr': 'buf:record', 'pointer': 'record_vt'},
         {'addr': 'buf:record_vt+40', 'guest': FINISH_ENTRY}]
    stubs = [{'address': FINISH_ENTRY, 'argc': 1, 'argi': [0], 'ret': hex(finished & MASK64)}]
    if release:
        stubs.append({'address': FREE, 'argc': 1, 'argi': [0], 'ret': hex(freed & MASK64)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:record', 'rsi': '1' if release else '0'}, 'buffers': b, 'memory': m,
            'stubs': stubs, 'imports': []}


CASES = [
    case('finish_kept', release=False, finished=0),
    case('finish_kept_high_word', release=False, finished=0x8000000100000002),
    case('finish_released', release=True, finished=0x55, freed=0),
    case('finish_released_free_value', release=True, finished=0x1, freed=0xfffffffe00000001),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
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
