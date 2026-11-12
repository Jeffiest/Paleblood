#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_assign_registry_value_to_slots (0x013ba240), for tools/verify.py run.

usage: assign_registry_value_to_slots_cases.py OUT_DIR

The list holds a slot pointer at +0x10 and a count at +0x28; each slot is 0x4b0 bytes. The registry
global at 0x058b3570 is a pointer. The name lookup stub reports whether the name is already present,
the key lookup stub returns a value or null, and the slot routine stub is called once per slot.
Covers no registry, the name present, the key lookup empty, a value with zero, one and two slots.
The routine returns nothing.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x013ba240'
NAME_LOOKUP = '0x013a2a00'
KEY_LOOKUP = '0x013a0920'
SLOT_FILL = '0x01447490'
REGISTRY_GLOBAL = '0x058b3570'
MASK64 = (1 << 64) - 1
SLOT_SIZE = 0x4b0
SLOT_COUNT = 2


def u32(value):
    """Encode a four-byte value."""
    return struct.pack('<I', value & 0xffffffff).hex()


def word(value):
    """Encode a complete eight-byte value."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, registry=True, found=False, value=True, count=SLOT_COUNT):
    """One call on a list with the registry global set or cleared and the lookups scripted."""
    buffers = {'list': {'size': 0x30, 'bytes': '00' * 0x30},
               'slots': {'size': SLOT_SIZE * SLOT_COUNT, 'bytes': '5a' * (SLOT_SIZE * SLOT_COUNT)},
               'value': {'size': 0x10, 'bytes': '6b' * 0x10}}
    memory = [{'addr': 'buf:list+16', 'pointer': 'slots'},
              {'addr': 'buf:list+40', 'bytes': u32(count)}]
    stubs = []
    if registry:
        buffers['reg'] = {'size': 0x10, 'bytes': '4a' * 0x10}
        memory.append({'addr': REGISTRY_GLOBAL, 'pointer': 'reg'})
        stubs.append({'address': NAME_LOOKUP, 'argc': 2, 'argi': [0, 1], 'ret': 1 if found else 0})
        if not found:
            stubs.append({'address': KEY_LOOKUP, 'argc': 4, 'argi': [0, 1, 2, 3],
                          'ret': 'buf:value' if value else 0})
            if value:
                stubs += [{'address': SLOT_FILL, 'argc': 2, 'argi': [0, 1]} for _ in range(count)]
    else:
        memory.append({'addr': REGISTRY_GLOBAL, 'bytes': word(0)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': {'rdi': 'buf:list'},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('registry_clear', registry=False),
    case('name_found', found=True),
    case('key_not_found', value=False),
    case('value_no_slots', count=0),
    case('value_one_slot', count=1),
    case('value_two_slots'),
]

UNREACHABLE = {
    '0x013ba27b': ('fallthrough', 'registry re-test after the name lookup: the global was non-null on entry and only the lookup could clear it, which no case can do'),
}


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
