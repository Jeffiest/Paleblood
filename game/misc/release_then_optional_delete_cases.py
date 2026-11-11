#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic releases for bb_misc_release_then_optional_delete (0x0188e190).

usage: release_then_optional_delete_cases.py OUT_DIR

The object's first word is a vtable whose slot 0x28 is a scripted release stub (0x00400020). The flag
is an int argument: only its low byte decides whether the object is freed (stub 0x02fbe588), and its
upper register bits are set in some cases and must be ignored. Covers release only, release then free,
zero and nonzero low bytes with ignored bits above, and results that are passed back unchanged.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x0188e190'
RELEASE = '0x00400020'      # a real game entry the vtable's release slot points at
FREE = '0x02fbe588'
MASK64 = (1 << 64) - 1


def case(cid, flag, released, freed=None):
    """One call. freed is the free stub's result when the low byte of flag is set (None when no free is expected)."""
    stubs = [{'address': RELEASE, 'argc': 1, 'argi': [0], 'ret': released}]
    if freed is not None:
        stubs.append({'address': FREE, 'argc': 1, 'argi': [0], 'ret': freed})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:object', 'rsi': hex(flag & MASK64)},
            'buffers': {'object': {'size': 8}, 'vt': {'size': 0x30}},
            'memory': [{'addr': 'buf:object', 'pointer': 'vt'},
                       {'addr': 'buf:vt+40', 'guest': RELEASE}],
            'stubs': stubs, 'imports': []}


CASES = [
    case('release_only_zero_flag', flag=0x0, released=0x1122334455667788),
    case('release_only_upper_bits_set', flag=0xdeadbe00, released=0x0a0b0c0d),
    case('release_only_result_zero', flag=0x100, released=0),
    case('release_then_free', flag=0x1, released=0x1122334455667788, freed=0x55),
    case('release_then_free_high_bits_ignored', flag=0xffffffffffffff01, released=0x2, freed=0),
    case('release_then_free_ff', flag=0xff, released=0xffffffffffffffff, freed=0x7),
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
