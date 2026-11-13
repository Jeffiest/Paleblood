#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_register_text_member_objects (0x013bb500), for tools/verify.py run.

usage: register_text_member_objects_cases.py OUT_DIR

The context holds the holder at +0x18, the two flags at +0x1d80 and +0x1d81 and the record at +0x1d90.
The registry global at 0x058b3570 is a pointer. The name lookup stub reports whether the name is already
present, and the member lookup stub returns a value or null. When a value is found the routine calls the
member flag routines, the holder routine, the scratch registration and object lookup, the object routine,
and then the slot routine once with index minus one and once for each of the thirty-two indices. The
routine returns nothing. Covers no registry, the name present, no member value, and the full path.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x013bb500'
NAME_LOOKUP = '0x013a2a00'
MEMBER_LOOKUP = '0x013a0920'
FLAG_SET = '0x0139df40'
HOLDER_SET = '0x01412a60'
SCRATCH_REGISTER = '0x013aeaf0'
SCRATCH_DESTROY = '0x013aebc0'
OBJECT_LOOKUP = '0x0139cd80'
OBJECT_SETUP = '0x02d9d1a0'
OBJECT_FINISH = '0x0139d6b0'
SLOT_SETUP = '0x02d9d290'
REGISTRY_GLOBAL = '0x058b3570'
CONTEXT_SIZE = 0x1da0
SLOT_LOOP = 0x20
MASK64 = (1 << 64) - 1


def word(value):
    """Encode a complete eight-byte value."""
    return struct.pack('<Q', value & MASK64).hex()


def slot_setup_stub():
    """One call of the slot routine: object, context and callback in registers, the index on the stack."""
    return {'address': SLOT_SETUP, 'argc': 7, 'argi': [0, 1, 2, 3, 4, 5], 'argu32': [6]}


def case(cid, registry=True, found=False, value=True, full=True):
    """One call on a context with the registry set or cleared, the name present or not, the member value found or not."""
    buffers = {'ctx': {'size': CONTEXT_SIZE, 'bytes': '00' * CONTEXT_SIZE},
               'holder': {'size': 0x20, 'bytes': '00' * 0x20},
               'obj': {'size': 0x40, 'bytes': '00' * 0x40},
               'value': {'size': 0x20, 'bytes': '00' * 0x20}}
    memory = [{'addr': 'buf:ctx+24', 'pointer': 'holder'}]
    stubs = []
    if registry:
        buffers['reg'] = {'size': 0x10, 'bytes': '4a' * 0x10}
        memory.append({'addr': REGISTRY_GLOBAL, 'pointer': 'reg'})
        stubs.append({'address': NAME_LOOKUP, 'argc': 2, 'argi': [0, 1], 'ret': 1 if found else 0})
        if not found:
            stubs.append({'address': MEMBER_LOOKUP, 'argc': 4, 'argi': [0, 1, 2, 3],
                          'ret': 'buf:value' if value else 0})
            if value and full:
                stubs += [{'address': FLAG_SET, 'argc': 4, 'argi': [0, 1, 2, 3]},
                          {'address': FLAG_SET, 'argc': 4, 'argi': [0, 1, 2, 3]},
                          {'address': HOLDER_SET, 'argc': 2, 'argi': [0, 1]},
                          {'address': SCRATCH_REGISTER, 'argc': 2, 'argi': [1]},
                          {'address': OBJECT_LOOKUP, 'argc': 4, 'argi': [0, 1, 2],
                           'argmem': [{'arg': 3, 'size': 8}], 'ret': 'buf:obj'},
                          {'address': SCRATCH_DESTROY, 'argc': 1, 'argi': []},
                          {'address': OBJECT_SETUP, 'argc': 6, 'argi': [0, 1, 2, 3, 4, 5]},
                          {'address': OBJECT_FINISH, 'argc': 2, 'argi': [0, 1]}]
                stubs.append(slot_setup_stub())
                stubs += [slot_setup_stub() for _ in range(SLOT_LOOP)]
    else:
        memory.append({'addr': REGISTRY_GLOBAL, 'bytes': word(0)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': {'rdi': 'buf:ctx'},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('registry_clear', registry=False),
    case('name_present', found=True),
    case('no_member_value', value=False),
    case('member_value_full_path'),
]

UNREACHABLE = {
    '0x013bb555': ('fallthrough', 'registry re-test after the name lookup: the registry was non-null on entry and only the lookup could clear it, which no case can do'),
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
