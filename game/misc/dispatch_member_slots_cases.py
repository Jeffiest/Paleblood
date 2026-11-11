#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic slot dispatches for bb_misc_dispatch_member_slots (0x018921b0).

usage: dispatch_member_slots_cases.py OUT_DIR

The object's slot table holds member-function slots (function word, adjustment word). Each visited slot is a
scripted stub at a real game entry that writes the callee's effects through its object argument: the index and
the pending flag. The step is a float in XMM0. Covers an empty slot, an index the callee makes negative, a single
visit, a visit that continues to a second slot and ends, a virtual slot with an adjustment, and the visit limit.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x018921b0'
SLOT_A = '0x00400020'        # a real game entry: sets the index and the pending flag
SLOT_B = '0x004000a0'        # a real game entry: clears the pending flag
VIRTUAL = '0x00400300'       # a real game entry the vtable slot points at
VISIT_LIMIT = 0x80
OBJECT_SIZE = 0x30
STEP_XMM0 = '0000803f'       # 1.0 as a float


def u32(value):
    """Four little-endian bytes of a 32-bit value as hex."""
    return struct.pack('<I', value & 0xffffffff).hex()


def i32(value):
    """Four little-endian bytes of a signed 32-bit value as hex."""
    return struct.pack('<i', value).hex()


def u64(value):
    """Eight little-endian bytes of a 64-bit value as hex."""
    return struct.pack('<Q', value & ((1 << 64) - 1)).hex()


def writes_index_pending(index, pending):
    """Callee effects through the object argument: the index at 0x0c and the pending flag at 0x18."""
    return [{'arg': 0, 'offset': 0x0c, 'bytes': i32(index)},
            {'arg': 0, 'offset': 0x18, 'bytes': format(pending & 0xff, '02x')}]


def case(cid, slots, index=0, slot_stubs=None, virtual=None):
    """slots: list of (function word, adjustment) pairs; slot_stubs: the stub sequence in call order, each a
    (address, writes) pair. index is the object's starting index; virtual is the object offset holding the vtable pointer, or None."""
    buffers = {'object': {'size': OBJECT_SIZE, 'bytes': 'c3' * OBJECT_SIZE},
               'table': {'size': 16 * max(1, len(slots))},
               'status': {'size': 0x10, 'bytes': '00' * 0x10},
               'vt': {'size': 0x40}}
    memory = [{'addr': 'buf:object+12', 'bytes': i32(index)},
              {'addr': 'buf:object+24', 'bytes': '00'},
              {'addr': 'buf:object+32', 'pointer': 'table'},
              {'addr': 'buf:object+41', 'bytes': 'ff'}]
    for position, (function, adjustment) in enumerate(slots):
        if isinstance(function, str):
            function = int(function, 16)
        base = 16 * position
        if function and not function & 1:
            memory.append({'addr': f'buf:table+{base}', 'guest': hex(function)})
        else:
            memory.append({'addr': f'buf:table+{base}', 'bytes': u64(function)})
        memory.append({'addr': f'buf:table+{base + 8}', 'bytes': u64(adjustment)})
    if virtual is not None:
        memory.append({'addr': 'buf:vt+32', 'guest': VIRTUAL})
        memory.append({'addr': f'buf:object+{virtual}', 'pointer': 'vt'})
    stubs = []
    for address, writes in (slot_stubs or []):
        stub = {'address': address, 'argc': 2, 'argi': [0, 1], 'argf32': [0]}
        if writes:
            stub['writes'] = writes
        stubs.append(stub)
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:object', 'rsi': 'buf:status', 'xmm0': STEP_XMM0},
            'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('empty_first_slot_fails', slots=[(0, 0)], index=0, slot_stubs=[]),
    case('index_negative_after_call_fails', slots=[(SLOT_A, 0)], index=0,
         slot_stubs=[(SLOT_A, [{'arg': 0, 'offset': 0x0c, 'bytes': i32(-1)}])]),
    case('single_visit_no_pending', slots=[(SLOT_B, 0)], index=0,
         slot_stubs=[(SLOT_B, writes_index_pending(0, 0))]),
    case('two_visits_then_stop', slots=[(SLOT_A, 0), (SLOT_B, 0)], index=0,
         slot_stubs=[(SLOT_A, writes_index_pending(1, 1)), (SLOT_B, writes_index_pending(1, 0))]),
    case('visit_limit_reached', slots=[(SLOT_A, 0)], index=0,
         slot_stubs=[(SLOT_A, writes_index_pending(0, 1))] * VISIT_LIMIT),
    case('virtual_slot_with_adjustment', slots=[(0x20 + 1, 0x0)], index=0,
         slot_stubs=[(VIRTUAL, None)], virtual=0),
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
