#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic fixtures for release_holder_child at 0x013986d0, for tools/verify.py run.

usage: release_holder_child_cases.py OUT_DIR

The holder may or may not have a child. The manager slot may hold a manager or be empty, in which
case the creator is stubbed before every manager use, as the original reloads the slot each time.
Stubs are listed in call order. The child's release and the target's notify are stubbed at fixed
guest addresses through vtables in fixture buffers. The last call's result is returned.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x013986d0'
MANAGER_SLOT = '0x05acebd8'
CHILD_RELEASE = '0x00400020'
TARGET_NOTIFY = '0x00400300'
TARGET_SLOT_OFFSET = 0x70
MASK64 = (1 << 64) - 1
GARBAGE = {'rdi': 'buf:holder', 'rsi': '0x1111111111111111', 'rdx': '0xffffffffffffffff',
           'rcx': '0x0', 'r8': '0x8080808080808080', 'r9': '0x7f'}


def u64(value):
    """Encode a complete eight-byte value."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, child=True, manager=True, value10=0x1020304050607080, value18=0x8070605040302010,
         tail=0x1234567890abcdef, registers=None):
    """One call: the optional child and manager, the two holder values and the scripted results."""
    buffers = {'holder': {'size': 0x20, 'bytes': 'e7' * 0x20},
               'manager': {'size': 0x10, 'bytes': 'c4' * 0x10}}
    memory = [{'addr': 'buf:holder+16', 'bytes': u64(value10)},
              {'addr': 'buf:holder+24', 'bytes': u64(value18)},
              {'addr': MANAGER_SLOT, **({'pointer': 'manager'} if manager else {'bytes': u64(0)})}]
    if child:
        buffers['child'] = {'size': 8}
        buffers['child_vt'] = {'size': 8}
        buffers['target'] = {'size': 16}
        buffers['target_vt'] = {'size': 0x78}
        memory += [{'addr': 'buf:holder+8', 'pointer': 'child'},
                   {'addr': 'buf:child', 'pointer': 'child_vt'},
                   {'addr': 'buf:child_vt', 'guest': CHILD_RELEASE},
                   {'addr': 'buf:target', 'pointer': 'target_vt'},
                   {'addr': f'buf:target_vt+{TARGET_SLOT_OFFSET}', 'guest': TARGET_NOTIFY}]
    else:
        memory.append({'addr': 'buf:holder+8', 'bytes': u64(0)})

    stubs = []
    if child:
        stubs += [{'address': '0x0247b720', 'argc': 1, 'ret': 'buf:target'},
                  {'address': CHILD_RELEASE, 'argc': 1},
                  {'address': TARGET_NOTIFY, 'argc': 2}]

    def manager_use():
        """Each manager use reloads the slot; an empty slot is filled by the creator's return."""
        return [] if manager else [{'address': '0x02d77030', 'argc': 0, 'ret': 'buf:manager'}]

    for address, argc, extra in [('0x0247ee90', 2, {}), ('0x02fa6460', 2, {}), ('0x0247f070', 1, {}),
                                 ('0x0247ee90', 2, {}), ('0x02fa63e0', 2, {}),
                                 ('0x0247f070', 1, {'ret': hex(tail & MASK64)})]:
        stubs += manager_use()
        stubs.append({'address': address, 'argc': argc, **extra})

    args = dict(GARBAGE if registers is None else registers)
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': args,
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('child_and_manager'),
    case('no_child', child=False),
    case('manager_missing', manager=False),
    case('no_child_manager_missing', child=False, manager=False),
    case('zero_values', value10=0, value18=0, child=False),
    case('all_ones_values', value10=MASK64, value18=MASK64),
    case('tail_returns_zero', tail=0),
    case('tail_returns_upper_word', tail=0x100000007),
    case('zero_registers_but_holder', registers={**{k: '0x0' for k in GARBAGE}, 'rdi': 'buf:holder'}),
]


def main():
    """Write deterministic fixtures to the requested directory."""
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
