#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic counted block records for misc_build_counted_block_record_01e938c0 (0x01e938c0).

usage: build_counted_block_record_01e938c0_cases.py OUT_DIR

The record is 0x80 bytes: its own table at +0, two words at +0x18 and +0x1c, and a counted word block at +0x20 with
five objects of 16 bytes from +0x30. The base routine at 0x01e8a3a0 is a stub that reads the 32-bit value it is given.
The registry global at 0x058b3570 is null or a pointer; when it is set, the lookup at 0x013a29e0 is a stub that
returns the entry buffer or zero, and each of the five objects is bound to the entry the lookup returned. The
function returns nothing: the original leaves the stack-guard word in RAX. Covers a null registry, a registry with an
entry found and not found, values zero and all ones, and a record filled with bytes that must be overwritten.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01e938c0'
BASE_INIT = '0x01e8a3a0'
REGISTER_NAME = '0x013aeaf0'
LOOKUP = '0x013a29e0'
SCRATCH_DESTROY = '0x013aebc0'
BIND = '0x01e91090'
REGISTRY_GLOBAL = '0x058b3570'
OBJECT_COUNT = 5
MASK64 = (1 << 64) - 1


def word(value):
    """Encode a complete eight-byte value."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, registry=True, found=True, value=0x11223344, record_fill='cd'):
    """One build with the registry set or cleared; a set registry looks up an entry (found) or none."""
    buffers = {'rec': {'size': 0x80, 'bytes': record_fill * 0x80},
               'src': {'size': 4, 'bytes': struct.pack('<I', value & 0xffffffff).hex()}}
    memory = [{'addr': REGISTRY_GLOBAL, 'bytes': word(0)}]
    stubs = [{'address': BASE_INIT, 'argc': 2, 'argmem': [{'arg': 1, 'size': 4}]}]
    if registry:
        buffers['reg'] = {'size': 0x10, 'bytes': '4a' * 0x10}
        buffers['entry'] = {'size': 0x10, 'bytes': '5b' * 0x10}
        memory = [{'addr': REGISTRY_GLOBAL, 'pointer': 'reg'}]
        ret = 'buf:entry' if found else 0
        stubs += [{'address': REGISTER_NAME, 'argc': 2, 'argi': [1]},
                  {'address': LOOKUP, 'argc': 2, 'argi': [0], 'argmem': [{'arg': 1, 'size': 8}], 'ret': ret},
                  {'address': SCRATCH_DESTROY, 'argc': 1, 'argi': []}]
        if found:
            stubs += [{'address': BIND, 'argc': 2} for _ in range(OBJECT_COUNT)]
    args = {'rdi': 'buf:rec', 'rsi': 'buf:src'}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': args,
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('registry_clear', registry=False),
    case('registry_clear_value_zero', registry=False, value=0),
    case('registry_clear_value_all_ones', registry=False, value=0xffffffff),
    case('registry_set_entry_found'),
    case('registry_set_entry_not_found', found=False),
    case('registry_set_entry_found_value_zero', value=0),
    case('registry_set_entry_found_clean_record', record_fill='00'),
    case('registry_set_entry_not_found_value_all_ones', found=False, value=0xffffffff),
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
