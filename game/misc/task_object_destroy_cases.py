#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic task objects for bb_misc_task_object_destroy (0x02b3f430): objects that hold nothing, a
node at +0x68, a handler at +0x118, a node at +0x30, a shared object, and a waiter in the waiting
state whose counter is one, positive, zero and negative. A non-positive counter is reported as a
fatal error and the teardown goes on.

usage: task_object_destroy_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02b3f430'
ALLOCATOR_OF = '0x0247b720'
HANDLER_RECORD = '0x02b41230'
HANDLER_RECORD_END = '0x02b41260'
SUB_RELEASE = '0x02b46380'
COUNTER = '0x0247ec00'
FATAL = '0x024b55b0'
MEMBER_RELEASE = '0x02b3d3f0'
TEARDOWN_BASE = '0x02b9a420'
NODE_SLOT_00 = '0x004000a0'
ALLOC_FREE = '0x004000c0'
HANDLER_SLOT_18 = '0x00400020'
SHARED_RELEASE = '0x00400300'
WAITER_SLOT_00 = '0x00400040'
GUARD_GLOBAL = '0x057e3be0'
SELF_BYTES = 0x140
WAITING_STATE = 3
RECORD_BYTES = 0x18
MASK32 = (1 << 32) - 1
PTR_NODE_68 = 0x68
PTR_NODE_30 = 0x30
PTR_HANDLER = 0x118
PTR_SHARED = 0xd0
FLAG_SHARED = 0xb8
STATE = 0xa8


def u32(value):
    """Four bytes of a 32-bit value, little endian."""
    return struct.pack('<I', value & MASK32).hex()


def case(cid, node=False, node30=False, handler=False, shared=False, state=0, waiter_result=None):
    """One teardown. Each held reference is a pointer to a small object whose first word is its
    vtable; the stubs follow the order of the calls the teardown makes."""
    raw = bytearray(b'\xee' * SELF_BYTES)
    for offset in (PTR_NODE_68, PTR_NODE_30, PTR_HANDLER, PTR_SHARED, FLAG_SHARED):
        raw[offset:offset + 8] = bytes(8)
    raw[STATE:STATE + 4] = bytes.fromhex(u32(state))
    buffers = {
        'self': {'size': SELF_BYTES, 'bytes': raw.hex()},
        'guard': {'size': 8, 'bytes': '00' * 8},
        'alloc': {'size': 8, 'bytes': '00' * 8},
        'alloc_vt': {'size': 0x78, 'bytes': '00' * 0x78},
        'node_vt': {'size': 8, 'bytes': '00' * 8},
        'node': {'size': 0x10, 'bytes': '00' * 0x10},
        'handler': {'size': 8, 'bytes': '00' * 8},
        'handler_vt': {'size': 0x20, 'bytes': '00' * 0x20},
        'shared': {'size': 8, 'bytes': '00' * 8},
        'shared_vt': {'size': 0x78, 'bytes': '00' * 0x78},
        'waiter': {'size': 0x10, 'bytes': '00' * 0x10},
        'waiter_vt': {'size': 8, 'bytes': '00' * 8},
    }
    memory = [
        {'addr': GUARD_GLOBAL, 'pointer': 'guard'},
        {'addr': 'buf:alloc', 'pointer': 'alloc_vt'},
        {'addr': 'buf:alloc_vt+112', 'guest': ALLOC_FREE},
        {'addr': 'buf:node', 'pointer': 'node_vt'},
        {'addr': 'buf:node_vt', 'guest': NODE_SLOT_00},
        {'addr': 'buf:handler', 'pointer': 'handler_vt'},
        {'addr': 'buf:handler_vt+24', 'guest': HANDLER_SLOT_18},
        {'addr': 'buf:shared', 'pointer': 'shared_vt'},
        {'addr': 'buf:shared_vt+112', 'guest': SHARED_RELEASE},
        {'addr': 'buf:waiter', 'pointer': 'waiter_vt'},
        {'addr': 'buf:waiter_vt', 'guest': WAITER_SLOT_00},
    ]
    if node:
        memory.append({'addr': f'buf:self+{PTR_NODE_68:#x}', 'pointer': 'node'})
    if node30:
        memory.append({'addr': f'buf:self+{PTR_NODE_30:#x}', 'pointer': 'node'})
    if handler:
        memory.append({'addr': f'buf:self+{PTR_HANDLER:#x}', 'pointer': 'handler'})
    if shared:
        memory.append({'addr': f'buf:self+{FLAG_SHARED:#x}', 'bytes': '01' + '00' * 7})
        memory.append({'addr': f'buf:self+{PTR_SHARED:#x}', 'pointer': 'shared'})
    if state == WAITING_STATE:
        memory.append({'addr': f'buf:self+{0xa0:#x}', 'pointer': 'waiter'})

    stubs = []

    def release(address_stub_list):
        """A node or member release: the allocator is looked up, its first slot is called, and the
        allocator frees the node."""
        address_stub_list.append({'address': ALLOCATOR_OF, 'argc': 1, 'ret': 'buf:alloc'})
        address_stub_list.append({'address': NODE_SLOT_00, 'argc': 1})
        address_stub_list.append({'address': ALLOC_FREE, 'argc': 2})

    if node:
        release(stubs)
    if handler:
        stubs.append({'address': HANDLER_RECORD, 'argc': 2,
                      'writes': [{'arg': 0, 'offset': 0, 'bytes': '11' * RECORD_BYTES}]})
        stubs.append({'address': HANDLER_SLOT_18, 'argc': 2})
        stubs.append({'address': HANDLER_RECORD_END, 'argc': 1})
    if node30:
        release(stubs)
    stubs.append({'address': SUB_RELEASE, 'argc': 1})
    if shared:
        stubs.append({'address': SHARED_RELEASE, 'argc': 1})
    if state == WAITING_STATE:
        stubs.append({'address': COUNTER, 'argc': 1, 'ret': hex(waiter_result & MASK32)})
        if waiter_result == 1:
            stubs.append({'address': WAITER_SLOT_00, 'argc': 1})
        elif waiter_result <= 0:
            stubs.append({'address': FATAL, 'argc': 3})
    stubs.append({'address': MEMBER_RELEASE, 'argc': 1})
    stubs.append({'address': MEMBER_RELEASE, 'argc': 1})
    stubs.append({'address': TEARDOWN_BASE, 'argc': 1})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:self'}, 'buffers': buffers, 'memory': memory,
            'stubs': stubs, 'imports': []}


CASES = [
    case('holds_nothing'),
    case('holds_node_at_68', node=True),
    case('holds_node_at_30', node30=True),
    case('holds_handler_at_118', handler=True),
    case('holds_shared_object', shared=True),
    case('waiter_counter_one_releases', state=WAITING_STATE, waiter_result=1),
    case('waiter_counter_five_kept', state=WAITING_STATE, waiter_result=5),
    case('waiter_counter_zero_reports', state=WAITING_STATE, waiter_result=0),
    case('waiter_counter_negative_reports', state=WAITING_STATE, waiter_result=-1),
    case('state_two_ignores_waiter', state=2),
    case('holds_everything', node=True, node30=True, handler=True, shared=True,
         state=WAITING_STATE, waiter_result=1),
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
