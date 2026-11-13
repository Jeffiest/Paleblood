#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_finish_registry_slots_and_report (0x013ba300), for tools/verify.py run.

usage: finish_registry_slots_and_report_cases.py OUT_DIR

The list holds a slot pointer at +0x10 and a count at +0x28; each slot is 0x4b0 bytes. The registry
holder global at 0x058b3570 is a pointer. The slot routine stub is called once per slot, from the last
slot to the first, and the report routine is then tail-called with the holder. Covers no holder, zero,
one and two slots. The routine returns nothing.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x013ba300'
SLOT_RELEASE = '0x014473e0'
REPORT = '0x013a3260'
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


def case(cid, holder=True, count=SLOT_COUNT):
    """One call on a list with the holder global set or cleared and the given slot count."""
    buffers = {'list': {'size': 0x30, 'bytes': '00' * 0x30},
               'slots': {'size': SLOT_SIZE * SLOT_COUNT, 'bytes': '5a' * (SLOT_SIZE * SLOT_COUNT)}}
    memory = [{'addr': 'buf:list+16', 'pointer': 'slots'},
              {'addr': 'buf:list+40', 'bytes': u32(count)}]
    stubs = []
    if holder:
        buffers['holder'] = {'size': 0x20, 'bytes': '00' * 0x20}
        memory.append({'addr': REGISTRY_GLOBAL, 'pointer': 'holder'})
        stubs += [{'address': SLOT_RELEASE, 'argc': 1, 'argi': [0]} for _ in range(count)]
        stubs.append({'address': REPORT, 'argc': 4, 'argi': [0, 1, 2, 3]})
    else:
        memory.append({'addr': REGISTRY_GLOBAL, 'bytes': word(0)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': {'rdi': 'buf:list'},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('holder_clear', holder=False),
    case('holder_set_no_slots', count=0),
    case('holder_set_one_slot', count=1),
    case('holder_set_two_slots'),
]

UNREACHABLE = {
    '0x013ba35e': ('fallthrough','holder re-test after the slot loop: the holder was non-null on entry and only a slot routine could clear it, which no case can do'),
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
