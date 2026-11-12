#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_attach_record_when_accepted (0x018a9c60), for tools/verify.py run.

usage: attach_record_when_accepted_cases.py OUT_DIR

The owner holds its record at +0xc0. A held record is destroyed (0x01401720) and the slot cleared.
With an acceptor, the factory (0x0140ce80) allocates a record through its vtable slot 0x58; when that
gives a block the constructor (0x01402080) runs and the record is built. The acceptor's accept slot
(vtable +0x78) decides by AL whether the owner keeps the record or holds null.
The function returns nothing: its callers reload RAX.
"""
import json
import os
import sys

ADDRESS = '0x018a9c60'
DESTROY = '0x01401720'
CONSTRUCT = '0x01402080'
FACTORY = '0x0140ce80'
ALLOCATE = '0x00400020'   # guest entry of the factory's allocation slot
ACCEPT = '0x004000a0'     # guest entry of the acceptor's accept slot
OWNER_SLOT = 0xc0
MASK64 = (1 << 64) - 1


def case(cid, held, has_acceptor, alloc_ok, accepted=0):
    """held: the owner starts with a record; has_acceptor: the second argument is set;
    alloc_ok: the factory gives a block; accepted: the accept stub's RAX."""
    b = {'owner': {'size': 0xc8}, 'record': {'size': 0x70}, 'old': {'size': 0x70}}
    m = [{'addr': f'buf:owner+{OWNER_SLOT}', 'pointer': 'old'} if held
         else {'addr': f'buf:owner+{OWNER_SLOT}', 'bytes': '00' * 8}]
    stubs = []
    if held:
        stubs.append({'address': DESTROY, 'argc': 1, 'argi': [0]})
    if has_acceptor:
        b['acceptor'] = {'size': 8}
        b['acceptor_vt'] = {'size': 0x80}
        b['factory'] = {'size': 8}
        b['factory_vt'] = {'size': 0x60}
        m += [{'addr': 'buf:acceptor', 'pointer': 'acceptor_vt'},
              {'addr': 'buf:acceptor_vt+120', 'guest': ACCEPT},
              {'addr': 'buf:factory', 'pointer': 'factory_vt'},
              {'addr': 'buf:factory_vt+88', 'guest': ALLOCATE}]
        stubs.append({'address': FACTORY, 'argc': 0, 'ret': 'buf:factory'})
        stubs.append({'address': ALLOCATE, 'argc': 3, 'argi': [0, 1, 2],
                      'ret': 'buf:record' if alloc_ok else 0})
        if alloc_ok:
            stubs.append({'address': CONSTRUCT, 'argc': 1, 'argi': [0]})
        stubs.append({'address': ACCEPT, 'argc': 3, 'argi': [0, 1, 2], 'ret': hex(accepted & MASK64)})
    args = {'rdi': 'buf:owner', 'rsi': 'buf:acceptor' if has_acceptor else '0x0'}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': args, 'buffers': b, 'memory': m, 'stubs': stubs, 'imports': []}


CASES = [
    case('no_acceptor_no_record', held=False, has_acceptor=False, alloc_ok=False),
    case('no_acceptor_held_record', held=True, has_acceptor=False, alloc_ok=False),
    case('alloc_fails_refused', held=False, has_acceptor=True, alloc_ok=False, accepted=0),
    case('alloc_fails_accept_true', held=False, has_acceptor=True, alloc_ok=False, accepted=1),
    case('new_record_accepted', held=False, has_acceptor=True, alloc_ok=True, accepted=1),
    case('new_record_refused', held=False, has_acceptor=True, alloc_ok=True, accepted=0),
    case('accept_low_byte_clear', held=False, has_acceptor=True, alloc_ok=True, accepted=0x100),
    case('accept_high_bits_low_set', held=False, has_acceptor=True, alloc_ok=True, accepted=0x0000000300000001),
    case('held_replaced_accepted', held=True, has_acceptor=True, alloc_ok=True, accepted=1),
    case('held_replaced_refused', held=True, has_acceptor=True, alloc_ok=True, accepted=0),
    case('held_alloc_fails', held=True, has_acceptor=True, alloc_ok=False, accepted=1),
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
