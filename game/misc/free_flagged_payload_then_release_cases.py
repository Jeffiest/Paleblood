#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic objects for misc_free_flagged_payload_then_release (0x01888ee0).

usage: free_flagged_payload_then_release_cases.py OUT_DIR

The object's first word is set to the release vtable at 0x05722670. A nonzero flag byte at +0x09 with a
payload at +0x20 frees the payload through the shared allocator at 0x05940408, whose free slot at +0x70 is
a stub. The library release at 0x02fbe588 then receives the object and its result is returned. Covers flag
clear and set, a null and a set payload, flag bits other than the lowest, and release results of zero and
high bits.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01888ee0'
SHARED = '0x05940408'
RELEASE_TABLE = '0x05722670'
RELEASE = '0x02fbe588'
FREE = '0x00400020'
MASK64 = (1 << 64) - 1


def word(value):
    """Encode a complete eight-byte value."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, flag=0, payload=True, result=0x1234):
    """One call. The free stub runs only when the flag is nonzero and the payload is set."""
    buffers = {
        'obj': {'size': 0x30, 'bytes': 'dd' * 0x30},
        'payload': {'size': 0x10, 'bytes': 'ee' * 0x10},
        'alloc': {'size': 0x10},
        'alloc_vt': {'size': 0x80},
    }
    memory = [
        {'addr': f'buf:obj+0x09', 'bytes': f'{flag & 0xff:02x}'},
        {'addr': SHARED, 'pointer': 'alloc'},
        {'addr': 'buf:alloc', 'pointer': 'alloc_vt'},
        {'addr': 'buf:alloc_vt+0x70', 'guest': FREE},
    ]
    if payload:
        memory.append({'addr': 'buf:obj+0x20', 'pointer': 'payload'})
    else:
        memory.append({'addr': 'buf:obj+0x20', 'bytes': word(0)})
    stubs = []
    if flag != 0 and payload:
        stubs.append({'address': FREE, 'argc': 2, 'argi': [0, 1]})
    stubs.append({'address': RELEASE, 'argc': 1, 'argi': [0], 'ret': hex(result & MASK64)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:obj'}, 'buffers': buffers, 'memory': memory,
            'imports': [], 'stubs': stubs}


CASES = [
    case('flag_clear_payload_kept', flag=0, payload=True),
    case('flag_clear_no_payload', flag=0, payload=False),
    case('flag_set_no_payload_no_free', flag=1, payload=False),
    case('flag_set_payload_freed', flag=1, payload=True),
    case('flag_high_bit_payload_freed', flag=0x80, payload=True, result=0x8000000000000001),
    case('flag_other_bits_payload_freed', flag=0xfe, payload=True, result=0),
    case('flag_all_bits_no_payload', flag=0xff, payload=False, result=MASK64),
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
