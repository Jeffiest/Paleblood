#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic child holders for misc_init_child_holder (0x0040b5e0): a holder with its old bytes
replaced, a child node from the allocator, the sub-object initialiser, and the tail call whose
result the function returns, with several values.

usage: init_child_holder_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x0040b5e0'
ALLOC = '0x00400c00'
SUB_INIT = '0x0045c6f0'
TAIL = '0x0045d5a0'
DISPATCH_ADDRESS = '0x057e7320'
MASK64 = (1 << 64) - 1


def case(cid, prefill='ff' * 0x18, tail_result=0, child_prefill='ee' * 0x20):
    """One call on a holder of 0x18 bytes. The dispatcher's allocator slot returns a child buffer
    prefilled with child_prefill; the tail callee returns tail_result."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:holder'},
            'buffers': {'holder': {'size': 0x20, 'bytes': prefill},
                        'child': {'size': 0x20, 'bytes': child_prefill},
                        'mgr': {'size': 0x8},
                        'mvt': {'size': 0x80}},
            'memory': [{'addr': DISPATCH_ADDRESS, 'pointer': 'mgr'},
                       {'addr': 'buf:mgr', 'pointer': 'mvt'},
                       {'addr': 'buf:mvt+80', 'guest': ALLOC}],
            'stubs': [{'address': ALLOC, 'argc': 3, 'ret': 'buf:child'},
                      {'address': SUB_INIT, 'argc': 1},
                      {'address': TAIL, 'argc': 2, 'ret': hex(tail_result & MASK64)}],
            'imports': []}


CASES = [
    case('fresh_holder_zero_tail'),
    case('fresh_holder_tail_value', tail_result=0x1234),
    case('fresh_holder_tail_all_ones', tail_result=MASK64),
    case('zero_child_prefill', prefill='00' * 0x18, child_prefill='00' * 0x20, tail_result=7),
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
