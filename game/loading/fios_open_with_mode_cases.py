#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic inputs for fios_open_with_mode (0x00857cd0), for tools/verify.py run.

usage: fios_open_with_mode_cases.py OUT_DIR

The open takes a path and a 16-bit mode (the upper bits of the register are ignored). The
thread's allocator comes from thread-local storage: the case lays out the thread pointer, the
holder, the allocator and its vtable, whose allocate slot is a stubbed spare address. Covers
every single mode bit and mixed values, the upper register bits, every failure shape the kernel
can return (low 32 bits decide, so an upper word of zero is a success), the handle values, and
a success that never writes the handle.
"""
import json
import struct
import sys
from pathlib import Path

ADDRESS = '0x00857cd0'
FH_OPEN = '0x02fbee78'
ALLOC = '0x00500900'  # spare address the allocator's vtable points at; the case stubs it
TLS_SLOT = -0x730     # thread-local offset of the holder pointer, relative to the thread pointer
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1
OPTIONS_SIZE = 0x18
OBJECT_SIZE = 0x18
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


def case(cid, mode=0x13, rdx_high=0, result=0, handle=0x12345678, write_handle=True, path=PATH):
    """result is what the kernel's open returns; the handle is what it writes on success."""
    buffers, memory, gs = thread_layout()
    buffers['path'] = {'size': len(path), 'bytes': path.hex()}
    buffers['object'] = {'size': OBJECT_SIZE, 'bytes': 'cd' * OBJECT_SIZE}
    stub = {'address': FH_OPEN, 'argc': 4, 'ret': hex(result & MASK64),
            'argmem': [{'arg': 2, 'size': len(path)}, {'arg': 3, 'size': OPTIONS_SIZE}]}
    if result & MASK32 == 0 and write_handle:
        stub['writes'] = [{'arg': 1, 'bytes': le32(handle)}]
    stubs = [stub]
    imports = []
    if result & MASK32 == 0:
        stubs.append({'address': ALLOC, 'argc': 2, 'ret': 'buf:object'})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'gs': gs,
            'args': {'rdi': 'buf:path', 'rsi': '0x5a5a5a5a', 'rdx': hex(rdx_high | (mode & 0xffff))},
            'buffers': buffers, 'memory': memory, 'imports': imports, 'stubs': stubs}


CASES = []
for bit in range(16):
    CASES.append(case(f'mode_bit_{bit:02d}', mode=1 << bit))
CASES += [
    case('mode_none', mode=0),
    case('mode_all', mode=0xffff),
    case('mode_read_write_create_truncate', mode=0x00d3),
    case('mode_create_exclusive_and_truncate', mode=0x0088),
    case('mode_unused_bits_kept', mode=0x0024),
    case('mode_mixed', mode=0xa5c3),
    case('upper_register_bits_ignored', mode=0x13, rdx_high=0xdead000000000000),
    case('bit_16_of_register_ignored', mode=0x13, rdx_high=0x10000),
    case('failure_minus_one', mode=0x13, result=0xffffffff),
    case('failure_one', mode=0x13, result=1),
    case('failure_errno_style', mode=0x13, result=0x7ffefffe),
    case('failure_int_min', mode=0x13, result=0x80000000),
    case('failure_upper_word_set', mode=0x13, result=0x0000000100000001),
    case('success_upper_word_set_low_zero', mode=0x13, result=0xffffffff00000000),
    case('success_upper_word_set_low_zero_b', mode=0x13, result=0x0000000100000000),
    case('handle_zero', mode=0x13, handle=0),
    case('handle_max', mode=0x13, handle=0x7fffffff),
    case('handle_minus_one', mode=0x13, handle=0xffffffff),
    case('handle_int_min', mode=0x13, handle=0x80000000),
    case('success_without_handle_write', mode=0x13, write_handle=False),
    case('empty_path', mode=0x13, path=b'\0'),
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
