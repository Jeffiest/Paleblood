#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic once-only setups for misc_setup_static_objects_019a83e0 (0x019a83e0), for tools/verify.py run.

usage: setup_static_objects_019a83e0_cases.py OUT_DIR

The function reads and writes its static state through fixed globals: the first object (0x05aa5720) with its
flag byte at +0x10 and the first-done byte at 0x05aa573f, its guard byte at 0x05aa5740; the second object
(0x059582e8), its published pointer (0x059582e0) and its guard (0x05958340); and the target slot (0x05940668),
which holds the manager's sub-object at +0x458 when it is set. The guard calls, the probes, the manager
lookup, the target's allocator info (a virtual call through slot 0x20, which writes eight bytes) and the fatal
report are stubs, in call order. A probe that publishes the second object is written through the probe's
argument. Covers an already published entry, guarded and unguarded first setups, both probe outcomes, an
already-done first object, a failed guard, a manager lookup, a valid and an invalid target heap, and the
publish check after the first object. The tail call on the published object is a stub whose result is returned; the constant block at 0x05958240 is
filled from read-only data on every path.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x019a83e0'
FIRST_OBJECT = 0x05aa5720
FIRST_DONE = 0x05aa573f
FIRST_GUARD = 0x05aa5740
SECOND_GUARD = 0x05958340
SECOND_OBJECT = 0x059582e8
PUBLISHED = 0x059582e0
TARGET_SLOT = 0x05940668
ACQUIRE = '0x02fbe538'
RELEASE = '0x02fbe558'
PROBE_FIRST = '0x0247ee80'
PROBE_SUB = '0x02483fe0'
MANAGER = '0x0247bbf0'
INFO = '0x00400020'             # the target's allocator info slot (vtable +0x20); stubbed real entry
FATAL = '0x024b55b0'
FINISH = '0x024b7b10'
BLOCK = 0x05958240
BLOCK_SIZE = 0x48
TARGET_OFFSET = 0x458
MANAGER_SIZE = 0x500
MASK64 = (1 << 64) - 1
PUBLISH_OFFSET = PUBLISHED - FIRST_OBJECT


def u64(value):
    """Eight little-endian bytes of a value, as hex."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, published=False, first_guard=0, first_done=0, acquire1=1, probe=1, sub=1,
         second_guard=0, acquire2=1, target_set=False, flags=0x20, publish_by_probe=False):
    """One call; the state bytes are set before the call and the stubs answer in call order."""
    buffers = {'published': {'size': 0x50}, 'manager': {'size': MANAGER_SIZE, 'bytes': 'ee' * MANAGER_SIZE},
               'target_vt': {'size': 0x28}}
    memory = [{'addr': hex(BLOCK), 'bytes': 'cc' * BLOCK_SIZE},
              {'addr': hex(FIRST_OBJECT), 'bytes': 'ee' * 0x18},
              {'addr': hex(SECOND_OBJECT), 'bytes': 'ee' * 0x50},
              {'addr': hex(FIRST_DONE), 'bytes': f'{first_done:02x}'},
              {'addr': hex(FIRST_GUARD), 'bytes': f'{first_guard:02x}'},
              {'addr': hex(SECOND_GUARD), 'bytes': f'{second_guard:02x}'},
              {'addr': 'buf:manager+0x458', 'pointer': 'target_vt'},
              {'addr': 'buf:target_vt+0x20', 'guest': INFO}]
    if published:
        memory.append({'addr': hex(PUBLISHED), 'pointer': 'published'})
    else:
        memory.append({'addr': hex(PUBLISHED), 'bytes': u64(0)})
    if target_set:
        memory.append({'addr': hex(TARGET_SLOT), 'pointer': f'manager+0x{TARGET_OFFSET:x}'})
    else:
        memory.append({'addr': hex(TARGET_SLOT), 'bytes': u64(0)})
    stubs = []
    if not published:
        if not first_guard:
            stubs.append({'address': ACQUIRE, 'argc': 1, 'ret': hex(acquire1 & 0xffffffff)})
            if acquire1:
                stubs.append({'address': RELEASE, 'argc': 1})
        if not first_done:
            probe_stub = {'address': PROBE_FIRST, 'argc': 1, 'ret': hex(probe)}
            if publish_by_probe:
                probe_stub['writes'] = [{'arg': 0, 'offset': PUBLISH_OFFSET, 'pointer': 'published'}]
            stubs.append(probe_stub)
            if not probe:
                stubs.append({'address': PROBE_SUB, 'argc': 1, 'ret': hex(sub)})
    if not (published or (publish_by_probe)):
        if not second_guard:
            stubs.append({'address': ACQUIRE, 'argc': 1, 'ret': hex(acquire2 & 0xffffffff)})
            if acquire2:
                stubs.append({'address': RELEASE, 'argc': 1})
        if not target_set:
            stubs.append({'address': MANAGER, 'argc': 0, 'ret': 'buf:manager'})
        info_writes = [{'arg': 0, 'bytes': f'{flags:02x}' + '7e' * 7}]
        stubs.append({'address': INFO, 'argc': 3, 'writes': info_writes})
        if not flags & 0x20:
            stubs.append({'address': FATAL, 'argc': 3})
    stubs.append({'address': FINISH, 'argc': 1, 'ret': '0x123456789abcdef0'})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': {},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('published_on_entry', published=True),
    case('fresh_guards_probe_accepts', acquire1=1, probe=1, acquire2=1, target_set=False),
    case('probe_rejects_sub_rejects_sets_flag', first_guard=1, probe=0, sub=0, second_guard=1,
         target_set=True),
    case('probe_rejects_sub_accepts', first_guard=1, probe=0, sub=1, second_guard=1, target_set=True),
    case('first_done_skips_probe', first_guard=1, first_done=1, second_guard=0, acquire2=0,
         target_set=False),
    case('first_guard_acquire_fails', first_guard=0, acquire1=0, first_done=1, second_guard=1,
         target_set=True),
    case('invalid_target_heap_fatal', first_guard=1, first_done=1, second_guard=1, target_set=True,
         flags=0x00),
    case('second_guard_acquire_fails', first_guard=1, first_done=1, second_guard=0, acquire2=0,
         target_set=True),
    case('probe_publishes_second_object', first_guard=1, probe=0, sub=0, publish_by_probe=True),
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
