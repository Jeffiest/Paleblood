#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic records and registries for misc_register_record_named (0x018dffb0).

usage: register_record_named_cases.py OUT_DIR

The registry global at 0x058b3570 is a pointer. When it is set, the registration routine fills the
scratch handle, the registry receives a one-entry array holding the record and the flag 1, and the
scratch handle is destroyed. When it is clear, nothing is called. The stack guard pointer at
0x057e3be0 is given a stable buffer so the original's canary check passes on every path. The routine
returns nothing.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x018dffb0'
REGISTER_NAME = '0x013aeaf0'
REGISTRY_ADD = '0x013a33a0'
SCRATCH_DESTROY = '0x013aebc0'
REGISTRY_GLOBAL = '0x058b3570'
STACK_GUARD_GLOBAL = '0x057e3be0'
GUARD_WORD = 0x0123456789abcdef
MASK64 = (1 << 64) - 1


def word(value):
    """Encode a complete eight-byte value."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, registry=True):
    """One call on a record with the registry global set or cleared."""
    buffers = {'rec': {'size': 0x18, 'bytes': 'cd' * 0x18},
               'guard': {'size': 16, 'bytes': word(GUARD_WORD) + word(0)}}
    memory = [{'addr': STACK_GUARD_GLOBAL, 'pointer': 'guard'}]
    stubs = []
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
    case('registry_set'),
    case('registry_clear', registry=False),
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
