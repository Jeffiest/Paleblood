#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic owner releases for misc_release_owner_slots (0x0040d000), for tools/verify.py run.

usage: release_owner_slots_cases.py OUT_DIR

The owner holds twelve record slots at +0x10, a tagged reference at +0x70 whose object has a count at
+0x8, an items array at +0x80 and its count at +0x88. The item callee (0x0042e5d0), the record release
(0x0045a4c0), the scratch service's release slot and the base teardown (0x0045a480) are scripted.
Covers an empty owner, every slot, alternating slots, items with and without entries, a count below
the array length, a shared and a last tagged reference, and the release order.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x0040d000'
ITEM_CALLEE = '0x0042e5d0'
RECORD_RELEASE = '0x0045a4c0'
RELEASE = '0x00400060'
BASE_TEARDOWN = '0x0045a480'
BASE_VTABLE = '0x553f7d0'
SERVICE_GLOBAL = '0x057e7320'
OWNER_BYTES = 0x90
SLOT_COUNT = 12
MASK64 = (1 << 64) - 1
MASK32 = (1 << 32) - 1


def u64(value):
    """Eight little-endian bytes."""
    return struct.pack('<Q', value & MASK64).hex()


def u32(value):
    """Four little-endian bytes."""
    return struct.pack('<I', value & MASK32).hex()


def case(cid, slots=(), items=None, item_count=0, tagged=2):
    """One release. slots lists the record slots that are set; items is a list of booleans (set or
    null) for the items array, or None when there is no array; tagged is the count of the tagged
    object (1 releases it, more keeps it)."""
    memory = [{'addr': SERVICE_GLOBAL, 'pointer': 'service'},
              {'addr': 'buf:service', 'pointer': 'service_vt'},
              {'addr': 'buf:service_vt+0x68', 'guest': RELEASE}]
    buffers = {
        'owner': {'size': OWNER_BYTES},
        'service': {'size': 8},
        'service_vt': {'size': 0x70},
        'tag_obj': {'size': 0x10, 'bytes': '00' * 8 + u32(tagged) + '00' * 4},
    }
    memory.append({'addr': 'buf:owner+0x70', 'pointer': 'tag_obj+3'})
    memory.append({'addr': 'buf:owner+0x88', 'bytes': u64(item_count)})
    for index in slots:
        buffers[f'rec{index}'] = {'size': 8}
        memory.append({'addr': f'buf:owner+{hex(0x10 + 8 * index)}', 'pointer': f'rec{index}'})
    item_stubs = []
    if items is not None:
        buffers['items'] = {'size': 8 * max(1, len(items))}
        memory.append({'addr': 'buf:owner+0x80', 'pointer': 'items'})
        for index, present in enumerate(items):
            if present:
                buffers[f'item{index}'] = {'size': 8}
                memory.append({'addr': f'buf:items+{hex(8 * index)}', 'pointer': f'item{index}'})
        # Items are walked from the count down: each set entry is handed to the callee.
        for index in range(min(item_count, len(items)) - 1, -1, -1):
            if items[index]:
                item_stubs.append({'address': ITEM_CALLEE, 'argc': 1, 'argi': [0]})
    stubs = list(item_stubs)
    if items is not None:
        stubs.append({'address': RELEASE, 'argc': 2, 'argi': [0, 1], 'ret': 0})
    if tagged == 1:
        stubs.append({'address': RELEASE, 'argc': 2, 'argi': [0, 1], 'ret': 0})
    for index in range(SLOT_COUNT - 1, -1, -1):
        if index in slots:
            stubs.append({'address': RECORD_RELEASE, 'argc': 1, 'argi': [0]})
    stubs.append({'address': BASE_TEARDOWN, 'argc': 1, 'argi': [0], 'ret': BASE_VTABLE})
    return {
        'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
        'args': {'rdi': 'buf:owner', 'rsi': '0x3333333333333333', 'rdx': '0x4444444444444444'},
        'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs,
    }


CASES = [
    case('empty_owner', tagged=2),
    case('every_slot', slots=range(SLOT_COUNT), tagged=2),
    case('alternating_slots', slots=range(0, SLOT_COUNT, 2), tagged=2),
    case('only_last_slot', slots=[SLOT_COUNT - 1], tagged=2),
    case('only_first_slot', slots=[0], tagged=2),
    case('items_with_gap', items=[True, False, True], item_count=3, tagged=2),
    case('items_none_set', items=[False, False], item_count=2, tagged=2),
    case('items_count_zero_with_array', items=[True, True], item_count=0, tagged=2),
    case('items_count_below_length', items=[True, True, True], item_count=2, tagged=2),
    case('array_released_tag_last', items=[True], item_count=1, tagged=1),
    case('array_released_tag_shared', items=[True], item_count=1, tagged=3),
    case('no_array_tag_last', tagged=1),
    case('everything_set', slots=range(SLOT_COUNT), items=[True, False, True], item_count=3, tagged=1),
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
