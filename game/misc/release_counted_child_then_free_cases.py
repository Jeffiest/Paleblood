#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic holders for misc_release_counted_child_then_free_02276ec0 (0x02276ec0), for tools/verify.py run.

usage: release_counted_child_then_free_cases.py OUT_DIR

The holder stores its vtable address point, drops the weak count of its child (at +0x30; the weak block is
released through 0x0247e780 when the count was one or less), then drops the child's strong count (the child is
destroyed through its vtable's first slot at the last reference, and reported through 0x024b55b0 at zero or
below). The holder is freed through 0x02fbe588, whose result is returned. Covers no child, both counts above one,
the weak release alone, the destroy alone, both, and a strong count of zero.
"""
import json
import os
import struct
import sys

ADDRESS = '0x02276ec0'
WEAK_RELEASE = '0x0247e780'
DESTROY = '0x00400020'
FATAL = '0x024b55b0'
FREE_BLOCK = '0x02fbe588'
MASK64 = (1 << 64) - 1
FREE_RESULT = 0x4242

# The second test of the child pointer: it was tested just before, and nothing in between clears the holder's child.
UNREACHABLE = {'0x02276f00': ('taken', 'the child pointer was tested at 0x02276eda and the weak release cannot clear it')}


def case(cid, child, weak=0, strong=0):
    buffers = {'holder': {'size': 0x10}, 'child': {'size': 0x40, 'bytes': 'ab' * 0x40}, 'child_vt': {'size': 0x10}}
    memory = []
    stubs = []
    if child:
        memory += [{'addr': 'buf:child+0x0', 'pointer': 'child_vt'},
                   {'addr': 'buf:child_vt+0x0', 'guest': DESTROY},
                   {'addr': 'buf:child+0x8', 'bytes': struct.pack('<i', strong).hex()},
                   {'addr': 'buf:child+0x30', 'bytes': struct.pack('<i', weak).hex()},
                   {'addr': 'buf:holder+0x8', 'pointer': 'child'}]
        if struct.unpack('<i', struct.pack('<i', weak))[0] <= 1:
            stubs.append({'address': WEAK_RELEASE, 'argc': 2})
        if strong == 1:
            stubs.append({'address': DESTROY, 'argc': 1})
        elif strong <= 0:
            stubs.append({'address': FATAL, 'argc': 3})
    else:
        memory.append({'addr': 'buf:holder+0x8', 'bytes': '00' * 8})
    stubs.append({'address': FREE_BLOCK, 'argc': 1, 'ret': hex(FREE_RESULT)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:holder'}, 'buffers': buffers, 'memory': memory, 'imports': [],
            'stubs': stubs}


CASES = [
    case('no_child'),
    case('both_counts_above_one', True, weak=2, strong=2),
    case('weak_last_releases_block', True, weak=1, strong=2),
    case('strong_last_destroys', True, weak=5, strong=1),
    case('both_last', True, weak=1, strong=1),
    case('strong_zero_reports', True, weak=0, strong=0),
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
