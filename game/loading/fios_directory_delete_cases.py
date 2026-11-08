#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic inputs for fios_directory_delete (0x0084d5a0), for tools/verify.py run.

usage: fios_directory_delete_cases.py OUT_DIR

The directory object is 0x38 bytes: vtable, size tag, two tagged pointer slots, the Fios directory
handle and a heap block. The thread's allocator comes from thread-local storage, laid out as in the
other loading fios cases, with its sized-free slot at a stubbed spare address. The two tagged slot
releases and the Fios close are stubbed in call order; the stubs script the stores the originals
make (a released slot is cleared only when its value is above 1). Covers every combination of the
directory handle and block, slot values on each side of the release rule, size tags, and a close
that reports failure (ignored).
"""
import json
import struct
import sys
from pathlib import Path

ADDRESS = '0x0084d5a0'
DH_CLOSE = '0x02fbece8'
HEAP_FREE = '0x00829a90'
SLOT_RELEASE = '0x00836840'
ALLOC_FREE = '0x00500a00'  # spare address the allocator's sized-free slot points at; stubbed
ALLOC = '0x00500900'       # spare address for the allocate slot; unused here, kept for the layout
TLS_SLOT = -0x730
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1
OBJECT_SIZE = 0x38
BLOCK_SIZE = 0x20


def le(value, width):
    return (value & ((1 << (8 * width)) - 1)).to_bytes(width, 'little').hex()


def thread_layout():
    below = -TLS_SLOT
    buffers = {'tls': {'size': below + 8}, 'holder': {'size': 0x60}, 'talloc': {'size': 0x10},
               'talloc_vt': {'size': 0x80}}
    memory = [{'addr': '0x057e40f8', 'bytes': struct.pack('<q', TLS_SLOT).hex()},
              {'addr': f'buf:tls+{below}', 'pointer': f'tls+{below}'},
              {'addr': 'buf:tls+0', 'pointer': 'holder'},
              {'addr': 'buf:holder+88', 'pointer': 'talloc'},
              {'addr': 'buf:talloc+0', 'pointer': 'talloc_vt'},
              {'addr': 'buf:talloc_vt+16', 'guest': ALLOC},
              {'addr': 'buf:talloc_vt+24', 'guest': ALLOC_FREE}]
    return buffers, memory, f'buf:tls+{below}'


def case(cid, directory=0, close_ret=0, block=False, slot20=0, slot18=0, tag=0xffff0001):
    buffers, memory, gs = thread_layout()
    dir_bytes = ('ee' * 8                         # vtable, overwritten
                 + le(tag, 4) + '33' * 4          # tag, then bytes 0x0c..0x0f
                 + '44' * 8                       # 0x10..0x17, never touched
                 + le(slot18, 8) + le(slot20, 8)  # tagged slots at 0x18 and 0x20
                 + le(directory, 4) + '55' * 4    # directory handle at 0x28, padding 0x2c
                 + '00' * 8)                      # heap block at 0x30
    buffers['dir'] = {'size': OBJECT_SIZE, 'bytes': dir_bytes}
    buffers['block'] = {'size': BLOCK_SIZE, 'bytes': 'ab' * BLOCK_SIZE}
    if block:
        memory.append({'addr': 'buf:dir+48', 'pointer': 'block'})
    stubs = []
    if directory != 0:
        stubs.append({'address': DH_CLOSE, 'argc': 2, 'ret': hex(close_ret & MASK64)})
    if block:
        stubs.append({'address': HEAP_FREE, 'argc': 2})
    for slot in (slot20, slot18):
        stub = {'address': SLOT_RELEASE, 'argc': 1, 'argmem': [{'arg': 0, 'size': 8}]}
        if slot > 1:
            stub['writes'] = [{'arg': 0, 'bytes': '00' * 8}]
        stubs.append(stub)
    stubs.append({'address': ALLOC_FREE, 'argc': 3})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'gs': gs,
            'args': {'rdi': 'buf:dir'}, 'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('typical', directory=7, block=True, slot20=0x1000, slot18=0x2001),
    case('nothing_set'),
    case('directory_only', directory=5),
    case('block_only', block=True),
    case('directory_minus_one', directory=0xffffffff),
    case('directory_int_min', directory=0x80000000),
    case('directory_max', directory=0x7fffffff),
    case('close_failure_ignored', directory=3, close_ret=0xffffffff),
    case('close_upper_result_ignored', directory=3, close_ret=0xffffffff00000000),
    case('slot_value_one_kept', slot18=1, slot20=1),
    case('slot_value_two_cleared', slot18=2, slot20=2),
    case('slot_odd_above_one', slot18=3, slot20=0x1001),
    case('slot_max', slot18=0xffffffffffffffff, slot20=0xfffffffffffffffe),
    case('slot_zero_and_block', block=True, slot18=0, slot20=0),
    case('tag_default_size', tag=0xffff0001),
    case('tag_zero_size', tag=0x00000001),
    case('tag_size_0x20', tag=0x00200001),
    case('tag_size_0xfffe', tag=0xfffe0001),
    case('tag_low_half_ignored', tag=0x00200000 | 0xffff),
    case('all_fields', directory=9, block=True, slot18=0x44, slot20=0x55, tag=0x00380001, close_ret=0),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print(f'usage: {Path(__file__).name} OUT_DIR', file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        with (output / (fixture['id'] + '.json')).open('w') as stream:
            stream.write(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} synthetic cases written to {output}')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
