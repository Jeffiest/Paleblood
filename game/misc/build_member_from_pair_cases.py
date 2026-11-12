#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_build_member_from_pair (0x00419510), for tools/verify.py run.

usage: build_member_from_pair_cases.py OUT_DIR

The member is initialized by the original member builder (0x00410d90). The provided object is retained (0x0045a4b0),
its held object reports a flag byte through slot 0xa0, and the flag is bit four. Unless the pair has no target or
the flag is set, a counted handle is acquired (0x0045c6f0); the route word, or the dispatch result (0x00454320)
when the route word is zero, goes into a descriptor; the provider's word (slot 0x98) is read; the pair's target
makes a built member (slot 0x18); the old built member is released (0x0045a510); the new one is bound (slot 0x10);
a count cell comes from the scratch service (slot 0x50); and the handle's count is taken down, releasing the counted
object through the service (slot 0x68) on the last count.
"""
import json
import os
import struct
import sys

ADDRESS = '0x00419510'
INIT_MEMBER = '0x00410d90'
RETAIN = '0x0045a4b0'
HELD_REPORT = '0x004000a0'
ACQUIRE = '0x0045c6f0'
DISPATCH = '0x00454320'
PROVIDER_WORD = '0x00400020'
TARGET_MAKE = '0x00400300'
RELEASE_OLD = '0x0045a510'
BUILT_BIND = '0x00400ab0'
SERVICE_ALLOC = '0x00400b00'
SERVICE_RELEASE = '0x00400c00'
SCRATCH_GLOBAL = '0x057e7320'
MASK64 = (1 << 64) - 1

UNREACHABLE = {
    '0x00419574': ('taken',
                   'a null provided object faults at the load of its held field, so the zero test is never taken'),
    '0x0041966d': ('fallthrough',
                   'the built word was cleared just before this test, so the release of an old member never runs'),
}

SOURCE_SIZE, MEMBER_SIZE, PAIR_SIZE, ROUTE_SIZE = 0x40, 0x60, 0x50, 0x20
PROVIDER_SIZE, PROVIDED_SIZE, HELD_SIZE, COUNTED_SIZE = 0x60, 0x30, 0x10, 0x10
VT_SIZE = 0xa8


def u64(v):
    return struct.pack('<Q', v & MASK64).hex()


def filled(size, byte):
    return byte * size


def buffer(name, size, byte):
    return name, {'size': size, 'bytes': filled(size, byte)}


def case(cid, held_bits, target, route, old_built, count, dispatch_ret=0x21, provided_word=0x1234):
    """route: None for no route, else the route's word (zero makes the dispatch call)."""
    buffers = dict([
        buffer('member', MEMBER_SIZE, 'c3'), buffer('source', SOURCE_SIZE, 'a1'),
        buffer('pair', PAIR_SIZE, 'b2'), buffer('route', ROUTE_SIZE, 'd4'),
        buffer('provider', PROVIDER_SIZE, 'e5'), buffer('provider_vt', 0xa0, 'f6'),
        buffer('provided', PROVIDED_SIZE, '17'), buffer('held', HELD_SIZE, '28'),
        buffer('held_vt', VT_SIZE, '39'), buffer('target', 0x20, '4a'),
        buffer('target_vt', 0x20, '5b'), buffer('built', 0x20, '6c'),
        buffer('built_vt', 0x18, '7d'), buffer('service', 0x10, '8e'),
        buffer('service_vt', 0x70, '9f'), buffer('cell', 0x8, '00'),
        buffer('counted', COUNTED_SIZE, '00'), buffer('old_built', 0x20, '0a'),
        buffer('extra', 0x8, '0b'),
    ])
    memory = [
        {'addr': 'buf:member+48', 'pointer': 'old_built'} if old_built
        else {'addr': 'buf:member+48', 'bytes': u64(0)},
        {'addr': 'buf:source+16', 'pointer': 'pair'},
        {'addr': 'buf:pair+72', 'pointer': 'target'} if target else {'addr': 'buf:pair+72', 'bytes': u64(0)},
        {'addr': 'buf:pair+16', 'bytes': u64(0x2222)},
        {'addr': 'buf:pair+32', 'bytes': u64(0x3333)},
        {'addr': 'buf:source+24', 'pointer': 'route'} if route is not None
        else {'addr': 'buf:source+24', 'bytes': u64(0)},
        {'addr': 'buf:source+56', 'bytes': u64(0x4444)},
        {'addr': 'buf:route+24', 'bytes': u64(route or 0)},
        {'addr': 'buf:provider', 'pointer': 'provider_vt'},
        {'addr': 'buf:provider+72', 'pointer': 'provided'},
        {'addr': 'buf:provider_vt+152', 'guest': PROVIDER_WORD},
        {'addr': 'buf:provided+24', 'pointer': 'held'},
        {'addr': 'buf:held', 'pointer': 'held_vt'},
        {'addr': 'buf:held_vt+160', 'guest': HELD_REPORT},
        {'addr': 'buf:target', 'pointer': 'target_vt'},
        {'addr': 'buf:target_vt+24', 'guest': TARGET_MAKE},
        {'addr': 'buf:built', 'pointer': 'built_vt'},
        {'addr': 'buf:built_vt+16', 'guest': BUILT_BIND},
        {'addr': 'buf:service', 'pointer': 'service_vt'},
        {'addr': 'buf:service_vt+80', 'guest': SERVICE_ALLOC},
        {'addr': 'buf:service_vt+104', 'guest': SERVICE_RELEASE},
        {'addr': SCRATCH_GLOBAL, 'pointer': 'service'},
        {'addr': 'buf:counted+8', 'bytes': struct.pack('<i', count).hex()},
    ]
    stubs = [{'address': INIT_MEMBER, 'argc': 3, 'argi': [0, 1, 2]},
             {'address': RETAIN, 'argc': 1, 'argi': [0]},
             {'address': HELD_REPORT, 'argc': 1, 'argi': [0], 'ret': hex(held_bits)}]
    if target:
        stubs.append({'address': ACQUIRE, 'argc': 1, 'writes': [{'arg': 0, 'offset': 0, 'pointer': 'counted'}]})
        if route == 0:
            # RDI is what the stubbed acquire leaves (the bridge's value, not the frame pointer), so only the ret is scripted.
            stubs.append({'address': DISPATCH, 'argc': 1, 'argi': [], 'ret': hex(dispatch_ret)})
        stubs.append({'address': PROVIDER_WORD, 'argc': 1, 'argi': [0], 'ret': hex(provided_word)})
        stubs.append({'address': TARGET_MAKE, 'argc': 4, 'argi': [0, 1, 2], 'ret': 'buf:built'})
        stubs.append({'address': BUILT_BIND, 'argc': 2, 'argi': [0, 1]})
        stubs.append({'address': SERVICE_ALLOC, 'argc': 3, 'argi': [0, 1, 2], 'ret': 'buf:cell'})
        if count == 1:
            stubs.append({'address': SERVICE_RELEASE, 'argc': 2, 'argi': [0, 1], 'ret': 0})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:member', 'rsi': 'buf:source', 'rdx': 'buf:provider', 'rcx': 'buf:extra'},
            'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('no_target_zero_result', held_bits=0x00, target=False, route=None, old_built=False, count=2),
    case('flag_set_zero_result', held_bits=0x10, target=True, route=None, old_built=False, count=2),
    case('flag_bit_below_four_builds', held_bits=0x0f, target=True, route=None, old_built=False, count=2),
    case('route_absent_count_kept', held_bits=0x00, target=True, route=None, old_built=False, count=2),
    case('route_value_count_released', held_bits=0x00, target=True, route=0x55, old_built=False, count=1),
    case('route_zero_dispatch_old_released', held_bits=0x00, target=True, route=0, old_built=True, count=2,
         dispatch_ret=0x21),
    case('route_zero_dispatch_count_released', held_bits=0x20, target=True, route=0, old_built=False, count=1,
         dispatch_ret=0x44),
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
