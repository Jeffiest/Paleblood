#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_register_listener_tasks_01b55140 (0x01b55140), for tools/verify.py run.

usage: register_listener_tasks_01b55140_cases.py OUT_DIR

The function runs a fixed loop of seventy-five slots, so every case that gets past the lookups scripts all of
them. Each slot allocates a task through the manager allocator (a virtual call through slot 0x58), offers it
to the list (slot 0x68), and then either attaches two more tasks or, when the list refuses, destroys the task
(through its vtable at 0x056f1f80, a data slot filled by the case) and removes it from its owner (slot 0x70).
The manager is read through a global before each allocation; a missing manager is reported, and a case empties
the global through a write of an earlier stub (the list, the task and the context live in image scratch for
that) and the report stub puts it back. Slots are described by dictionaries that override the default slot.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01b55140'
MANAGER_GLOBAL = 0x058b3570
FILE_TEXT = 0x04d3b369
TASK_VTABLE_SLOT = 0x056f1f80
SCRATCH = 0x05acec00
LIST = SCRATCH
TASK = SCRATCH + 0x100
CONTEXT = SCRATCH + 0x200
OWNER = SCRATCH + 0x300
ALLOCATE = '0x00400020'      # slot 0x58 of the manager allocator; stubbed real entry
OFFER = '0x004000a0'         # slot 0x68 of the list
REMOVE = '0x00400300'        # slot 0x70 of the task owner
DESTROY = '0x00400400'       # slot 0 of the first task vtable (a data slot filled by the case)
FIND_CONTEXT = '0x013a2a00'
START = '0x013aeaf0'
END = '0x013aebc0'
FIND_LIST = '0x0139cd80'
CONSTRUCT = '0x0139b5d0'
ATTACH = '0x0139b740'
FIND_OWNER = '0x0247b720'
FATAL = '0x024b55b0'
SLOT_COUNT = 0x4b
MASK64 = (1 << 64) - 1


def u64(value):
    """Eight little-endian bytes of a value, as hex."""
    return struct.pack('<Q', value & MASK64).hex()


class Script:
    """The stub list of one case, with the stub that can still empty the manager global."""

    def __init__(self):
        self.stubs = []
        self.nullable = None

    def add(self, address, argc, ret=None, base=None):
        """Append a stub; base is the guest address its first argument points at, when that is image scratch."""
        stub = {'address': address, 'argc': argc}
        if ret is not None:
            stub['ret'] = ret
        self.stubs.append(stub)
        if base is not None:
            self.nullable = (stub, base)
        return stub

    def read_manager(self, missing):
        """The manager read before an allocation: a missing one is emptied by an earlier stub and put back."""
        if missing:
            stub, base = self.nullable
            stub.setdefault('writes', []).append({'arg': 0, 'offset': MANAGER_GLOBAL - base, 'bytes': u64(0)})
            self.add(FATAL, 4).update({'writes': [{'arg': 0, 'offset': MANAGER_GLOBAL - FILE_TEXT,
                                                   'pointer': 'manager'}]})
        self.nullable = None


def slot_stubs(script, slot):
    """Append the stubs of one slot of the loop."""
    first = slot.get('first', True)
    script.read_manager(slot.get('miss') == 'a')
    script.add(ALLOCATE, 3, ret=f'guest:{TASK:#x}' if first else '0x0')
    if first:
        script.add(CONSTRUCT, 1, base=TASK)
    script.add(OFFER, 3, ret=hex(slot.get('offer', 1)), base=LIST)
    if slot.get('offer', 1):
        script.read_manager(slot.get('miss') == 'b')
        script.add(ALLOCATE, 3, ret='buf:task2' if slot.get('second', True) else '0x0')
        script.add(ATTACH, 3, base=TASK if first else None)
        script.read_manager(slot.get('miss') == 'c')
        script.add(ALLOCATE, 3, ret='buf:task3' if slot.get('third', True) else '0x0')
        script.add(ATTACH, 3, base=TASK if first else None)
    elif first:
        script.add(FIND_OWNER, 1, ret=f'guest:{OWNER:#x}')
        script.add(DESTROY, 1, base=TASK)
        script.add(REMOVE, 2, base=OWNER)


def case(cid, slots=(), manager=True, key=5, context=True, listed=True):
    """One call; slots lists the overrides of the first slots, the rest are plain successes."""
    buffers = {'manager': {'size': 0x10}, 'alloc_obj': {'size': 0x10}, 'alloc_vt': {'size': 0x60},
               'list_vt': {'size': 0x70}, 'owner_vt': {'size': 0x78},
               'task2': {'size': 0x30, 'bytes': 'aa' * 0x30}, 'task3': {'size': 0x30, 'bytes': 'bb' * 0x30},
               'target': {'size': 0x10}}
    memory = [{'addr': 'buf:manager+8', 'pointer': 'alloc_obj'},
              {'addr': 'buf:alloc_obj', 'pointer': 'alloc_vt'},
              {'addr': 'buf:alloc_vt+0x58', 'guest': ALLOCATE},
              {'addr': hex(LIST), 'pointer': 'list_vt'},
              {'addr': 'buf:list_vt+0x68', 'guest': OFFER},
              {'addr': hex(OWNER), 'pointer': 'owner_vt'},
              {'addr': 'buf:owner_vt+0x70', 'guest': REMOVE},
              {'addr': hex(TASK), 'bytes': 'ee' * 0x30},
              {'addr': hex(TASK_VTABLE_SLOT), 'guest': DESTROY},
              {'addr': hex(MANAGER_GLOBAL), 'pointer': 'manager'} if manager
              else {'addr': hex(MANAGER_GLOBAL), 'bytes': u64(0)}]
    script = Script()
    if manager and key:
        script.add(FIND_CONTEXT, 2, ret=f'guest:{CONTEXT:#x}' if context else '0x0')
        if context:
            script.add(START, 2)
            script.add(FIND_LIST, 4, ret=f'guest:{LIST:#x}' if listed else '0x0', base=CONTEXT)
            script.add(END, 1)
            if listed:
                plan = list(slots) + [{}] * (SLOT_COUNT - len(slots))
                for slot in plan:
                    slot_stubs(script, slot)
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:target', 'rsi': hex(key)},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': script.stubs}


CASES = [
    case('no_manager', manager=False),
    case('no_key', key=0),
    case('no_context', context=False),
    case('no_list', listed=False),
    case('all_slots_succeed'),
    case('allocation_failures_and_refusals', slots=[
        {'first': False, 'offer': 0}, {'first': False, 'offer': 1}, {'offer': 0},
        {'second': False}, {'third': False}, {'second': False, 'third': False}]),
    case('manager_missing_at_each_allocation', slots=[
        {'miss': 'a'}, {'miss': 'b'}, {'miss': 'c'}, {}, {'miss': 'a', 'offer': 0}, {'miss': 'a'}]),
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
