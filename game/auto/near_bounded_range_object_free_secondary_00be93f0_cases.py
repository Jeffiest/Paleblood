#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic deletions through the secondary base of an object (a template: near_cases.py puts the
offsets in place of the slot names and the addresses of the function in place of the ones below).

usage: near_cases.py FUNCTION_NAME OUT_DIR

The argument is the secondary base inside the object. The function steps back to the object, releases
it (stubbed, its call comes first), then frees the object through the thread allocator's sized free slot
at 0x18 with the block size from the object's count word: its high half, or the default size when that
half is the marker 0xffff. The thread's allocator holder is reached from the thread-local offset at
0x057e40f8, as in the other loading and misc cases. The object reaches past the secondary base and is
filled with other bytes, so a count word read from another place shows up.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x00be93f0'
RELEASE = '0x00be9450'
SIZED_FREE = '0x00400020'    # the allocator's sized free slot; stubbed (a real game entry)
TLS_SLOT = -0x730            # value of the thread-local offset global at 0x057e40f8
SECONDARY_OFFSET = NEAR_SLOT_0
COUNT_OFFSET = SECONDARY_OFFSET - NEAR_SLOT_6
OBJECT_SIZE = SECONDARY_OFFSET + 0x40
SIZED_FREE_SLOT = 0x18
ALLOCATOR_HOLDER_SLOT = 0x58
ALLOCATOR_VTABLE_SIZE = 0x80
COUNT_BYTES = 4
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1


def case(cid, count_word=0x10001, fill='ee', result=0):
    """One deletion through the secondary base: the object is released, then freed with its size."""
    below = -TLS_SLOT
    buffers = {'tls': {'size': below + 8}, 'holder': {'size': 0x60}, 'talloc': {'size': 0x10},
               'talloc_vt': {'size': ALLOCATOR_VTABLE_SIZE},
               'obj': {'size': OBJECT_SIZE,
                       'bytes': fill * COUNT_OFFSET + struct.pack('<I', count_word & MASK32).hex()
                       + fill * (OBJECT_SIZE - COUNT_OFFSET - COUNT_BYTES)}}
    memory = [{'addr': '0x057e40f8', 'bytes': struct.pack('<q', TLS_SLOT).hex()},
              {'addr': f'buf:tls+{below}', 'pointer': f'tls+{below}'},
              {'addr': 'buf:tls+0', 'pointer': 'holder'},
              {'addr': f'buf:holder+{ALLOCATOR_HOLDER_SLOT:#x}', 'pointer': 'talloc'},
              {'addr': 'buf:talloc+0', 'pointer': 'talloc_vt'},
              {'addr': f'buf:talloc_vt+{SIZED_FREE_SLOT:#x}', 'guest': SIZED_FREE}]
    stubs = [{'address': RELEASE, 'argc': 1},
             {'address': SIZED_FREE, 'argc': 3, 'ret': hex(result & MASK64)}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'gs': f'buf:tls+{below}',
            'args': {'rdi': f'buf:obj+{SECONDARY_OFFSET:#x}'}, 'buffers': buffers, 'memory': memory,
            'imports': [], 'stubs': stubs}


CASES = [
    case('default_marker_size', count_word=0xffff0001, result=0),
    case('zero_size', count_word=0x00000001, result=1),
    case('small_size_low_half_ignored', count_word=0x00c00007, result=2),
    case('high_bit_size', count_word=0x80000003, result=1 << 63),
    case('size_just_below_marker', count_word=0xfffe0001, result=0x0123456789abcdef),
    case('all_ones_result', count_word=0xffff0000, fill='5a', result=MASK64),
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
    print(f'{len(CASES)} cases written to {output}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
