#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic forwards of one value from an owner to its child (address 0x02b3a510).

usage: forward_value_to_child_cases.py OUT_DIR

The owner stores the value at +0x138 and, when its child at +0x90 is present, the child's virtual
table slot at +0x60 receives the value; that slot is a stub whose result is returned. Covers no
child, a child with a zero, positive, negative and all-ones result, and values with the sign bit
and the upper word set.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02b3a510'
HANDLER = '0x00400060'
OWNER_BYTES = 0x168
VTABLE_BYTES = 0x68
CHILD_BYTES = 8
MASK64 = (1 << 64) - 1


def case(cid, value, child=True, handled=0x1234):
    """One forward. The handler is stubbed only on the path that has a child."""
    memory = []
    buffers = {'owner': {'size': OWNER_BYTES, 'bytes': '7e' * OWNER_BYTES}}
    stubs = []
    if child:
        buffers['child'] = {'size': CHILD_BYTES, 'bytes': '00' * CHILD_BYTES}
        buffers['vtable'] = {'size': VTABLE_BYTES, 'bytes': '00' * VTABLE_BYTES}
        memory += [
            {'addr': 'buf:owner+0x90', 'pointer': 'child'},
            {'addr': 'buf:child', 'pointer': 'vtable'},
            {'addr': 'buf:vtable+0x60', 'guest': HANDLER},
        ]
        stubs.append({'address': HANDLER, 'argc': 2, 'argi': [0, 1],
                      'ret': hex(handled & MASK64)})
    else:
        memory.append({'addr': 'buf:owner+0x90', 'bytes': '00' * 8})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:owner', 'rsi': hex(value & MASK64)},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('no_child_returns_zero', 0x55, child=False),
    case('no_child_zero_value', 0, child=False),
    case('child_result_positive', 0x55, handled=0x1234),
    case('child_result_zero', 0x55, handled=0),
    case('child_result_all_ones', 0x55, handled=MASK64),
    case('child_result_negative', 0x55, handled=0x8000000000000001),
    case('value_sign_bit', 1 << 63, handled=0x77),
    case('value_all_bits', MASK64, handled=0x88),
    case('value_upper_word', 0xfeedface00000001, handled=0x99),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print(f'usage: {Path(__file__).name} OUT_DIR', file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        (output / (fixture['id'] + '.json')).write_text(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} synthetic cases written to {output}')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
