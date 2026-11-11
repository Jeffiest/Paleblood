#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic forwards for misc_forward_child_slot_28_6ca0 (0x026f6ca0), for tools/verify.py run.

usage: forward_child_slot_28_6ca0_cases.py OUT_DIR

The reference's child is at +0x08. The original loads the child's vtable, clears RSI and tail-jumps to the routine
in the child's slot at +0x28, so the routine gets the child and a zero second argument and its result is returned.
The routine is a stub at a real game entry. Covers zero, an ordinary and a high-half result.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x026f6ca0'
SLOT = 0x28
ROUTINE = '0x00400020'        # the child's routine; stubbed (a real game entry)
VTABLE_SIZE = 0x48
MASK64 = (1 << 64) - 1


def case(cid, result):
    """One forward; the routine returns the given result."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:ref'},
            'buffers': {'ref': {'size': 0x10}, 'child': {'size': 0x10}, 'child_vt': {'size': VTABLE_SIZE}},
            'memory': [{'addr': 'buf:ref+0x8', 'pointer': 'child'},
                       {'addr': 'buf:child+0', 'pointer': 'child_vt'},
                       {'addr': f'buf:child_vt+{SLOT:#x}', 'guest': ROUTINE}],
            'imports': [],
            'stubs': [{'address': ROUTINE, 'argc': 2, 'ret': hex(result & MASK64)}]}


CASES = [
    case('returns_zero', 0),
    case('returns_ordinary', 0x1234),
    case('returns_high_half', 0x8000000000000000),
]


def main():
    """Write deterministic synthetic forwards to the requested directory."""
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
