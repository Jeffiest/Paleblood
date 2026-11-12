#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_forward_indexed_slot_call (0x013ba520), for tools/verify.py run.

usage: forward_indexed_slot_call_cases.py OUT_DIR

The routine has no branch. The pair holds the second slot array pointer at +0x18; each slot is 0x4b0
bytes. The slot routine stub receives the slot, the 32-bit argument (ESI, taken from EDX) and the 64-bit
argument (RDX, taken from RCX), and returns a distinct value per case. Covers index zero, a middle index,
and a 32-bit argument with its upper half set in the caller's register.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x013ba520'
SLOT_ROUTINE = '0x01447280'
SLOT_SIZE = 0x4b0
SLOTS = 3


def case(cid, index, first, second, ret):
    """One call with the index, the two arguments and the value the slot routine returns."""
    total = SLOT_SIZE * SLOTS
    buffers = {'pair': {'size': 0x30, 'bytes': '00' * 0x30},
               'slots': {'size': total, 'bytes': '5a' * total}}
    memory = [{'addr': 'buf:pair+24', 'pointer': 'slots'}]
    stubs = [{'address': SLOT_ROUTINE, 'argc': 3, 'argi': [0, 1, 2], 'ret': ret}]
    args = {'rdi': 'buf:pair', 'rsi': hex(index), 'rdx': hex(first), 'rcx': hex(second)}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': args,
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('index_zero', 0, 0x11223344, 0x0102030405060708, 0x7001),
    case('index_middle', 1, 0x55667788, 0x8877665544332211, 0x7002),
    case('index_last', 2, 0xfffffffe, 0x00000000ffffffff, 0x7003),
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
