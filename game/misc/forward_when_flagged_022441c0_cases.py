#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic flagged forwards for misc_forward_when_flagged_022441c0 (0x022441c0), for tools/verify.py run.

usage: forward_when_flagged_022441c0_cases.py OUT_DIR

The owner is 0x70 bytes; its member check (+0x68) is a stub whose result is the function's first decision.
With no object the check's result is returned as it stands. With an object the low byte of the result is
flipped: a flipped value other than zero returns the result (its low byte flipped, the high bits kept); a
flipped value of zero notifies the object through its vtable slot 8, finds the target and returns the target's
forwarding slot result (0x70). The object's and the target's vtables are buffers whose slots point at real
game entries that are stubbed; those stubs exist only in the cases that forward. Covers no object, flags 0,
1, 2, 0xff and high-bit results, and the notified forward.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x022441c0'
CHECK = '0x013e6ae0'            # the member check; stubbed
FIND = '0x0247b720'             # the target finder; stubbed
NOTIFY = '0x00400020'           # the object's notification slot (vtable +0x08); stubbed real entry
FORWARD = '0x004000a0'          # the target's forwarding slot (vtable +0x70); stubbed real entry
OWNER_SIZE = 0x70
MASK64 = (1 << 64) - 1


def case(cid, check=0, has_object=True, forwarded=0x5a5a):
    """One call: the member check returns check; the object is present or null."""
    stubs = [{'address': CHECK, 'argc': 1, 'ret': hex(check & MASK64)}]
    buffers = {'owner': {'size': OWNER_SIZE, 'bytes': 'ee' * OWNER_SIZE}}
    memory = []
    args = {'rdi': 'buf:owner', 'rsi': '0x0'}
    if has_object:
        args['rsi'] = 'buf:object'
        buffers['object'] = {'size': 0x10}
        buffers['object_vt'] = {'size': 0x10}
        memory.append({'addr': 'buf:object+0', 'pointer': 'object_vt'})
    forwards = has_object and (check & 0xff) == 1
    if forwards:
        buffers['target'] = {'size': 0x10}
        buffers['target_vt'] = {'size': 0x78}
        memory += [{'addr': 'buf:object_vt+0x8', 'guest': NOTIFY},
                   {'addr': 'buf:target+0', 'pointer': 'target_vt'},
                   {'addr': 'buf:target_vt+0x70', 'guest': FORWARD}]
        stubs.append({'address': FIND, 'argc': 1, 'ret': 'buf:target'})
        stubs.append({'address': NOTIFY, 'argc': 1})
        stubs.append({'address': FORWARD, 'argc': 2, 'argi': [0, 1], 'ret': hex(forwarded & MASK64)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': args,
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('no_object_check_zero', check=0, has_object=False),
    case('no_object_check_high_bits', check=0xabcdef0012345600 | 0x7f, has_object=False),
    case('flag_one_forwards', check=1),
    case('flag_one_with_high_bits_forwards', check=0xffffffff00000001),
    case('flag_zero_returns_flipped', check=0),
    case('flag_two_returns_three', check=2),
    case('flag_ff_returns_fe', check=0xff, forwarded=0),
    case('flag_high_bits_only_returns_flipped', check=1 << 63),
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
