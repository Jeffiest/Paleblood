#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic lookups for misc_get_published_object_once (0x026fc770), for tools/verify.py run.

usage: get_published_object_once_cases.py OUT_DIR

The function reads and writes fixed globals: the published pointer (0x05ac3fb0) and its object (0x05ac3fb8, whose
vtable pointer is set), the published guard (0x05ac3fd8), the first object (0x05aa5720, with its flag byte at +0x10),
its guard (0x05aa5740) and its done byte (0x05aa573f). The first object's vtable is the image's writable table at
0x056b6230; its slot 0x18 and slot 0x28 are set in the image to stubbed entries, since the vtable is only known
at run time. The guard calls, the probes and both virtual routines are stubs, in call order.
Covers a published object on entry, a fresh first setup with both probe outcomes, a failed first guard, an already
done first object, a failed published guard, and a publish made by the slot 0x18 routine.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x026fc770'
PUBLISHED_SLOT = 0x05ac3fb0
PUBLISHED_OBJECT = 0x05ac3fb8
PUBLISHED_GUARD = 0x05ac3fd8
FIRST_OBJECT = 0x05aa5720
FIRST_DONE = 0x05aa573f
FIRST_GUARD = 0x05aa5740
VTABLE_SLOT_18 = 0x056b6248     # the first object's vtable is 0x056b6230: slot 0x18 is 0x18 bytes past it
VTABLE_SLOT_28 = 0x056b6258     # slot 0x28, likewise
LAZY_VTABLE = 0x056b6230        # the first object's vtable pointer: a done object still holds it
VTABLE_POINT = 0x10             # the address point inside a vtable buffer, where the object's pointer goes
VTABLE_SIZE = 0x40              # the buffer holds slots 0x18 and 0x28 past its address point
ACQUIRE = '0x02fbe538'
RELEASE = '0x02fbe558'
PROBE_FIRST = '0x0247ee80'
PROBE_SUB = '0x02483fe0'
ROUTINE_18 = '0x00400020'       # a real game entry, stubbed as the slot 0x18 routine
ROUTINE_28 = '0x004000a0'       # a real game entry, stubbed as the slot 0x28 routine
PUBLISH_FROM_FIRST = PUBLISHED_SLOT - FIRST_OBJECT
OBJECT_SIZE = 0x40
MASK64 = (1 << 64) - 1


def u64(value):
    """Eight little-endian bytes of a value, as hex."""
    return (value & MASK64).to_bytes(8, 'little').hex()


def case(cid, published=False, first_guard=0, first_done=0, acquire1=1, probe=1, sub=1,
         published_guard=0, acquire2=1, publish_by_routine=False):
    """One lookup; the state bytes are set before the call and the stubs answer in call order."""
    buffers = {'published': {'size': OBJECT_SIZE, 'bytes': 'cc' * OBJECT_SIZE},
               'lazy_vt': {'size': VTABLE_SIZE}}
    memory = [{'addr': hex(FIRST_OBJECT), 'pointer': f'lazy_vt+{VTABLE_POINT:#x}'},
              {'addr': hex(FIRST_OBJECT + 0x8), 'bytes': 'ee' * 0x10},
              {'addr': 'buf:lazy_vt+0x28', 'guest': ROUTINE_18},
              {'addr': 'buf:lazy_vt+0x38', 'guest': ROUTINE_28},
              {'addr': hex(PUBLISHED_OBJECT), 'bytes': 'ee' * OBJECT_SIZE},
              {'addr': hex(FIRST_DONE), 'bytes': f'{first_done:02x}'},
              {'addr': hex(FIRST_GUARD), 'bytes': f'{first_guard:02x}'},
              {'addr': hex(PUBLISHED_GUARD), 'bytes': f'{published_guard:02x}'},
              {'addr': hex(VTABLE_SLOT_18), 'guest': ROUTINE_18},
              {'addr': hex(VTABLE_SLOT_28), 'guest': ROUTINE_28}]
    if published:
        memory.append({'addr': hex(PUBLISHED_SLOT), 'pointer': 'published'})
    else:
        memory.append({'addr': hex(PUBLISHED_SLOT), 'bytes': u64(0)})
    stubs = []
    if not published:
        if not first_guard:
            stubs.append({'address': ACQUIRE, 'argc': 1, 'ret': hex(acquire1 & 0xffffffff)})
            if acquire1:
                stubs.append({'address': RELEASE, 'argc': 1})
        if not first_done:
            stubs.append({'address': PROBE_FIRST, 'argc': 1, 'ret': hex(probe)})
            if not probe:
                stubs.append({'address': PROBE_SUB, 'argc': 1, 'ret': hex(sub)})
        routine_18 = {'address': ROUTINE_18, 'argc': 2}
        if publish_by_routine:
            routine_18['writes'] = [{'arg': 0, 'offset': PUBLISH_FROM_FIRST, 'pointer': 'published'}]
        stubs.append(routine_18)
        if not publish_by_routine:
            if not published_guard:
                stubs.append({'address': ACQUIRE, 'argc': 1, 'ret': hex(acquire2 & 0xffffffff)})
                if acquire2:
                    stubs.append({'address': RELEASE, 'argc': 1})
        stubs.append({'address': ROUTINE_28, 'argc': 1})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': {},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('published_on_entry', published=True),
    case('fresh_guards_probe_accepts', first_guard=1, probe=1, published_guard=1),
    case('probe_rejects_sub_accepts_sets_flag', acquire1=1, probe=0, sub=0, published_guard=0, acquire2=1),
    case('probe_rejects_sub_rejects_keeps_flag', first_guard=1, probe=0, sub=1, published_guard=1),
    case('first_done_skips_probe', first_guard=1, first_done=1, published_guard=0, acquire2=0),
    case('first_guard_acquire_fails', acquire1=0, first_done=1, published_guard=1),
    case('published_guard_acquire_fails', first_guard=1, first_done=1, published_guard=0, acquire2=0),
    case('routine_publishes_object', first_guard=1, first_done=1, publish_by_routine=True),
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
