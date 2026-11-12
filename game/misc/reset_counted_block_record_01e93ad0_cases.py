#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic counted block records for misc_reset_counted_block_record_01e93ad0 (0x01e93ad0).

usage: reset_counted_block_record_01e93ad0_cases.py OUT_DIR

The record is 0x80 bytes with the counted word block at +0x20. The block reset at 0x01e91880 is a stub that receives
the caller's RSI, RDX, RCX, R8 and R9 unchanged. The registry global at 0x058b3570 is either null or a pointer; when
it is set, the registration routine fills the scratch handle, the registry receives a one-entry array holding the
record and the flag 1, and the scratch handle is destroyed. The function returns nothing: the original leaves the
stack-guard word in RAX, so the cases do not compare RAX. Covers a null and a set registry and the caller's
registers passed through.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01e93ad0'
BLOCK_RESET = '0x01e91880'
REGISTER_NAME = '0x013aeaf0'
REGISTRY_ADD = '0x013a33a0'
SCRATCH_DESTROY = '0x013aebc0'
REGISTRY_GLOBAL = '0x058b3570'
MASK64 = (1 << 64) - 1


def word(value):
    """Encode a complete eight-byte value."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, registry=True, caller=(0x11, 0x22, 0x33, 0x44, 0x55)):
    """One call with the registry global set or cleared and the caller's registers."""
    rsi, rdx, rcx, r8, r9 = (value & MASK64 for value in caller)
    buffers = {'rec': {'size': 0x80, 'bytes': 'cd' * 0x80}}
    memory = [{'addr': REGISTRY_GLOBAL, 'bytes': word(0)}]
    stubs = [{'address': BLOCK_RESET, 'argc': 6}]
    if registry:
        buffers['reg'] = {'size': 0x10, 'bytes': '4a' * 0x10}
        memory = [{'addr': REGISTRY_GLOBAL, 'pointer': 'reg'}]
        stubs += [{'address': REGISTER_NAME, 'argc': 2, 'argi': [1]},
                  {'address': REGISTRY_ADD, 'argc': 4, 'argi': [0, 2, 3], 'argmem': [{'arg': 1, 'size': 8}]},
                  {'address': SCRATCH_DESTROY, 'argc': 1, 'argi': []}]
    args = {'rdi': 'buf:rec', 'rsi': hex(rsi), 'rdx': hex(rdx), 'rcx': hex(rcx), 'r8': hex(r8), 'r9': hex(r9)}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': args,
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('registry_set'),
    case('registry_clear', registry=False),
    case('registry_set_caller_zero', caller=(0, 0, 0, 0, 0)),
    case('registry_clear_caller_zero', registry=False, caller=(0, 0, 0, 0, 0)),
    case('registry_set_caller_all_ones', caller=(MASK64,) * 5),
    case('registry_clear_caller_all_ones', registry=False, caller=(MASK64,) * 5),
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
