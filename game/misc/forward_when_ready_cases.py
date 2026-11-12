#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_forward_when_ready (0x018a9bd0), for tools/verify.py run.

usage: forward_when_ready_cases.py OUT_DIR

The readiness test (0x010a1400) takes the slot at object+0x40 and returns in RAX. When the low byte
of that result is clear the function returns the whole RAX; otherwise it tail-calls 0x01086b20 with
the same slot and returns that result.
"""
import json
import os
import sys

ADDRESS = '0x018a9bd0'
READINESS = '0x010a1400'
FORWARD = '0x01086b20'
MASK64 = (1 << 64) - 1


def case(cid, readiness, forwarded=None):
    """One call: the readiness stub returns readiness; the forward stub, when reached, returns forwarded."""
    stubs = [{'address': READINESS, 'argc': 1, 'argi': [0], 'ret': hex(readiness & MASK64)}]
    if forwarded is not None:
        stubs.append({'address': FORWARD, 'argc': 1, 'argi': [0], 'ret': hex(forwarded & MASK64)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:object'}, 'buffers': {'object': {'size': 0x48}}, 'memory': [],
            'stubs': stubs, 'imports': []}


CASES = [
    case('not_ready_zero', 0),
    case('not_ready_upper_bits', 0x0000000100000100),
    case('not_ready_all_high_bits', 0xffffffffffffff00),
    case('ready_one_forward_value', 1, 0x2a),
    case('ready_high_low_byte_set', 0x80000000000000ff, 0),
    case('ready_word_forward_high_word', 0x0102, 0x8000000100000002),
    case('ready_all_ones', MASK64, MASK64),
    case('ready_forward_zero', 0x100 | 1, 0),
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
