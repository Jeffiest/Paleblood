#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic thunks and source pairs for misc_call_record_member_target (0x01887e00).

usage: call_record_member_target_cases.py OUT_DIR

The thunk holds the object at 0x08, the target at 0x10, the adjustment at 0x18 and the 32-bit argument
at 0x20. The source pair holds the first word at 0x00 and the second at 0x10. The record is built on the
stack by the constructor stub, given the vtable and the two words, passed to the target with the adjusted
object, and destroyed by the destructor stub. A target with its low bit set is a virtual slot. A null
source, a zero word or a null object returns with no call. Covers direct and virtual targets, positive
and negative adjustments, and the 32-bit argument's upper bits.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01887e00'
DIRECT = '0x00400300'
VIRTUAL = '0x004000a0'
CONSTRUCT = '0x01400810'
DESTROY = '0x013a75d0'
SLOT = 0x18
ARGUMENT = 0xfffffffe00000005
FIRST = 0x1122334455667788
SECOND = 0x8877665544332211
MASK64 = (1 << 64) - 1


def word(value):
    """Encode a complete eight-byte value."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, virtual=False, adjustment=0, object_offset=0, source_null=False, first=FIRST, second=SECOND,
         object_null=False, argument=ARGUMENT):
    """One call. The constructor, the target and the destructor are stubbed; the target sees the adjusted
    object, the record (its vtable word and its two copied words are compared) and the argument. A null source, a zero word or a null object makes no call."""
    buffers = {'thunk': {'size': 0x28, 'bytes': 'ee' * 0x28},
               'obj': {'size': 0x40, 'bytes': '55' * 0x40},
               'src': {'size': 0x18, 'bytes': 'cd' * 0x18}}
    memory = [{'addr': 'buf:thunk+24', 'bytes': word(adjustment)},
              {'addr': 'buf:thunk+32', 'bytes': word(argument)},
              {'addr': 'buf:src+0', 'bytes': word(first)},
              {'addr': 'buf:src+16', 'bytes': word(second)}]
    if object_null:
        memory.append({'addr': 'buf:thunk+8', 'bytes': word(0)})
    else:
        memory.append({'addr': 'buf:thunk+8',
                       'pointer': 'obj' if object_offset == 0 else f'obj+{object_offset}'})
    no_call = source_null or object_null or first == 0 or second == 0
    stubs = []
    if no_call:
        memory.append({'addr': 'buf:thunk+16', 'bytes': word(0)})
    else:
        if virtual:
            memory.append({'addr': 'buf:thunk+16', 'bytes': word(SLOT + 1)})
            buffers['vt'] = {'size': 0x40}
            self_offset = object_offset + adjustment
            memory += [{'addr': f'buf:obj+{self_offset}', 'pointer': 'vt'},
                       {'addr': f'buf:vt+{SLOT:#x}', 'guest': VIRTUAL}]
            target = VIRTUAL
        else:
            memory.append({'addr': 'buf:thunk+16', 'guest': DIRECT})
            target = DIRECT
        stubs = [{'address': CONSTRUCT, 'argc': 1, 'argi': [0]},
                 {'address': target, 'argc': 3, 'argi': [0, 2],
                  'argmem': [{'arg': 1, 'size': 8}, {'arg': 1, 'offset': 0x20, 'size': 0x10}]},
                 {'address': DESTROY, 'argc': 1, 'argi': [0]}]
    args = {'rdi': 'buf:thunk', 'rsi': '0x0' if source_null else 'buf:src'}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': args,
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('direct_target'),
    case('direct_target_positive_adjustment', adjustment=8),
    case('direct_target_negative_adjustment', adjustment=-8, object_offset=16),
    case('virtual_target', virtual=True),
    case('virtual_target_positive_adjustment', virtual=True, adjustment=0x10),
    case('virtual_target_negative_adjustment', virtual=True, adjustment=-0x10, object_offset=32),
    case('argument_zero', argument=0),
    case('argument_all_ones', argument=MASK64),
    case('null_source_no_call', source_null=True),
    case('first_zero_no_call', first=0),
    case('second_zero_no_call', second=0),
    case('null_object_no_call', object_null=True),
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
