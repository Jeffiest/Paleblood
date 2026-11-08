#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic inputs for fios_open_default (0x0085cda0), for tools/verify.py run.

usage: fios_open_default_cases.py OUT_DIR

The open takes only a path and always passes the flags 1. The thread's allocator comes from
thread-local storage, laid out as in fios_open_with_mode_cases.py. Covers the kernel's success and
failure shapes (the low 32 bits decide), handles that are zero, positive, -1 and INT_MIN (the
valid flag follows the sign), upper register bits in the unused arguments, and the path shapes.
"""
import json
import struct
import sys
from pathlib import Path

ADDRESS = '0x0085cda0'
FH_OPEN = '0x02fbee78'
ALLOC = '0x00500900'  # spare address the allocator's vtable points at; the case stubs it
TLS_SLOT = -0x730     # thread-local offset of the holder pointer, relative to the thread pointer
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1
OPTIONS_SIZE = 0x18
OBJECT_SIZE = 0x18
OPEN_FLAGS = 1
PATH = b'/app0/dvdroot_ps4/test.bin\0'


def le32(value):
    return (value & MASK32).to_bytes(4, 'little').hex()


def thread_layout():
    below = -TLS_SLOT
    buffers = {'tls': {'size': below + 8}, 'holder': {'size': 0x60}, 'talloc': {'size': 0x10},
               'talloc_vt': {'size': 0x80}}
    memory = [{'addr': '0x057e40f8', 'bytes': struct.pack('<q', TLS_SLOT).hex()},
              {'addr': f'buf:tls+{below}', 'pointer': f'tls+{below}'},  # the thread pointer's own slot at gs:0
              {'addr': 'buf:tls+0', 'pointer': 'holder'},
              {'addr': 'buf:holder+88', 'pointer': 'talloc'},
              {'addr': 'buf:talloc+0', 'pointer': 'talloc_vt'},
              {'addr': 'buf:talloc_vt+16', 'guest': ALLOC}]
    return buffers, memory, f'buf:tls+{below}'


def case(cid, result=0, handle=0x12345678, path=PATH, unused=0x5a5a5a5a5a5a5a5a):
    """result is what the kernel's open returns; the handle is what it writes on success."""
    buffers, memory, gs = thread_layout()
    buffers['path'] = {'size': len(path), 'bytes': path.hex()}
    buffers['object'] = {'size': OBJECT_SIZE, 'bytes': 'cd' * OBJECT_SIZE}
    stub = {'address': FH_OPEN, 'argc': 4, 'ret': hex(result & MASK64),
            'argmem': [{'arg': 2, 'size': len(path)}, {'arg': 3, 'size': OPTIONS_SIZE}]}
    stubs = [stub]
    if result & MASK32 == 0:
        stub['writes'] = [{'arg': 1, 'bytes': le32(handle)}]
        stubs.append({'address': ALLOC, 'argc': 2, 'ret': 'buf:object'})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'gs': gs,
            'args': {'rdi': 'buf:path', 'rsi': hex(unused), 'rdx': hex(unused ^ MASK64)},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('typical'),
    case('handle_zero', handle=0),
    case('handle_one', handle=1),
    case('handle_max', handle=0x7fffffff),
    case('handle_minus_one', handle=0xffffffff),
    case('handle_int_min', handle=0x80000000),
    case('handle_minus_two', handle=0xfffffffe),
    case('failure_minus_one', result=0xffffffff),
    case('failure_one', result=1),
    case('failure_errno_style', result=0x7ffefffe),
    case('failure_int_min', result=0x80000000),
    case('failure_upper_word_set', result=0x0000000100000001),
    case('success_upper_word_set_low_zero', result=0xffffffff00000000),
    case('success_upper_word_set_low_zero_b', result=0x0000000100000000),
    case('unused_registers_zero', unused=0),
    case('unused_registers_all_ones', unused=MASK64),
    case('empty_path', path=b'\0'),
    case('long_path', path=b'/app0/' + b'x' * 200 + b'\0'),
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
