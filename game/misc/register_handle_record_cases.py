#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic records and registries for misc_register_handle_record (0x01888480).

usage: register_handle_record_cases.py OUT_DIR

The record is 0x18 bytes with the handle at 0x10. The registry global at 0x058b3570 is a pointer; when it
is set, the registration routine fills the scratch handle, the registry receives a one-entry array holding
the record and the flag 1, and the scratch handle is destroyed. Covers a null and a set handle, and a null
and a set registry. The routine returns nothing.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01888480'
FREE = '0x01401720'
REGISTER_NAME = '0x013aeaf0'
REGISTRY_ADD = '0x013a33a0'
SCRATCH_DESTROY = '0x013aebc0'
REGISTRY_GLOBAL = '0x058b3570'
MASK64 = (1 << 64) - 1


def word(value):
    """Encode a complete eight-byte value."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, handle=True, registry=True):
    """One call on a record with the handle set or cleared; the registry global set or cleared."""
    buffers = {'rec': {'size': 0x18, 'bytes': 'cd' * 0x18}, 'h': {'size': 0x10, 'bytes': '3e' * 0x10}}
    memory = [{'addr': 'buf:rec+16', 'pointer': 'h'} if handle else {'addr': 'buf:rec+16', 'bytes': word(0)}]
    stubs = []
    if handle:
        stubs.append({'address': FREE, 'argc': 1, 'argi': [0]})
    if registry:
        buffers['reg'] = {'size': 0x10, 'bytes': '4a' * 0x10}
        memory.append({'addr': REGISTRY_GLOBAL, 'pointer': 'reg'})
        stubs += [{'address': REGISTER_NAME, 'argc': 2, 'argi': [1]},
                  {'address': REGISTRY_ADD, 'argc': 4, 'argi': [0, 2, 3], 'argmem': [{'arg': 1, 'size': 8}]},
                  {'address': SCRATCH_DESTROY, 'argc': 1, 'argi': []}]
    else:
        memory.append({'addr': REGISTRY_GLOBAL, 'bytes': word(0)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': {'rdi': 'buf:rec'},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('handle_set_registry_set'),
    case('handle_clear_registry_set', handle=False),
    case('handle_set_registry_clear', registry=False),
    case('handle_clear_registry_clear', handle=False, registry=False),
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
