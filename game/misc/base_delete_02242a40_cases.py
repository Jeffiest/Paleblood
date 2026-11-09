#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic base-object deletions for misc_base_delete_02242a40 (0x02242a40), for tools/verify.py run.

usage: base_delete_02242a40_cases.py OUT_DIR

The object is 0x28 bytes; its vtable word is stored first, then the object is freed through the thread
allocator's sized free slot at 0x18 (a stub that returns a chosen result, the original's tail jump).
The thread's allocator holder is reached from the thread-local offset at 0x057e40f8, as in the other
loading and misc cases. Covers garbage, zero and all-ones starting bytes, and results of zero, one,
all ones and high bits. A null object stores its vtable word through the null pointer first, which
faults before the null test, so that outcome is declared unreachable.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02242a40'
SIZED_FREE = '0x00400020'    # the allocator's sized free slot; stubbed (a real game entry)
TLS_SLOT = -0x730            # value of the thread-local offset global at 0x057e40f8
OBJECT_SIZE = 0x28
SIZED_FREE_SLOT = 0x18
ALLOCATOR_HOLDER_SLOT = 0x58
ALLOCATOR_VTABLE_SIZE = 0x80

UNREACHABLE = {
    '0x02242a55': ('taken',
                   'the vtable store through the null object at 0x02242a4f faults before the null test'),
}



def case(cid, fill="ee", result=0):
    """One deletion: the object is stored, then freed with the sized free's result."""
    below = -TLS_SLOT
    buffers = {'tls': {'size': below + 8}, 'holder': {'size': 0x60}, 'talloc': {'size': 0x10},
               'talloc_vt': {'size': ALLOCATOR_VTABLE_SIZE},
               'obj': {'size': OBJECT_SIZE, 'bytes': fill * OBJECT_SIZE}}
    memory = [{'addr': '0x057e40f8', 'bytes': struct.pack('<q', TLS_SLOT).hex()},
              {'addr': f'buf:tls+{below}', 'pointer': f'tls+{below}'},
              {'addr': 'buf:tls+0', 'pointer': 'holder'},
              {'addr': f'buf:holder+{ALLOCATOR_HOLDER_SLOT:#x}', 'pointer': 'talloc'},
              {'addr': 'buf:talloc+0', 'pointer': 'talloc_vt'},
              {'addr': f'buf:talloc_vt+{SIZED_FREE_SLOT:#x}', 'guest': SIZED_FREE}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'gs': f'buf:tls+{below}',
            'args': {'rdi': 'buf:obj'}, 'buffers': buffers, 'memory': memory, 'imports': [],
            'stubs': [{'address': SIZED_FREE, 'argc': 3, 'ret': hex(result & ((1 << 64) - 1))}],
            'UNREACHABLE': UNREACHABLE}


CASES = [
    case('garbage_bytes_result_zero'),
    case('zero_bytes', fill='00', result=1),
    case('all_ones_bytes', fill='ff', result=((1 << 64) - 1)),
    case('result_high_bit', result=1 << 63),
    case('result_fixed_word', result=0x0123456789abcdef),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        fixture.pop('UNREACHABLE', None)
        (output / (fixture['id'] + '.json')).write_text(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} cases written to {output}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
