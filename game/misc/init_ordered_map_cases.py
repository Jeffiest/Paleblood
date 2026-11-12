#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic ordered-map setups for bb_misc_init_ordered_map (0x0270ffe0).

usage: init_ordered_map_cases.py OUT_DIR

The owner is 0x3b50 bytes. The allocator's vtable holds its info slot (0x20, a stub that writes the flags byte
into the caller's local) and its allocate slot (0x58, a stub that returns the head block or refuses). The first
memset (0x02fbe688) zeroes the owner's first 0xf8 bytes and the second zeroes the table at +0x120. A refused head
block reaches the throw helper (0x02fbe978, the thread flag set, which never returns). The engine's fatal report
(0x024b55b0) returns: it is reached when the allocator's info lacks the valid bit, and it is the only other way
a refused block continues, which the source declares unreachable (a load through the null block follows).
The thread pointer is gs:[0]; the flag and the throw slot are read through the words at 0x057e4318 and 0x057e4320.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x0270ffe0'
ZERO = '0x02fbe688'            # memset-like: destination, value, size
FATAL = '0x024b55b0'           # the engine's fatal report: returns
THROW = '0x02fbe978'           # the throw helper: never returns
INFO_GUEST = '0x00400300'      # a real game entry the allocator's info slot points at
ALLOCATE_GUEST = '0x00400020'  # a real game entry the allocator's allocate slot points at
FLAG_OFFSET_SLOT = '0x057e4318'
THROW_OFFSET_SLOT = '0x057e4320'
OWNER_SIZE = 0x3b50
TABLE_OFFSET = 0x120
HEAD_SIZE = 0x60
LEADING_ZERO = 0xf8
TABLE_ZERO = 0x3a30
TLS_BELOW = 0x20
FLAG_OFFSET = 0x8
THROW_OFFSET = 0x10
VALID_BIT = 0x20
MASK64 = (1 << 64) - 1
# A refused head block with the thread flag clear reports and then stores through the null head: the store faults.
UNREACHABLE = {'0x0271008a': ('fallthrough', 'a refused head block with the thread flag clear reports, then stores through the null head: the store faults')}


def u64(value):
    """Eight little-endian bytes of a value, as hex."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, flags=VALID_BIT, head_ok=True, flag=0):
    """flags: the allocator info flags byte; head_ok: whether the allocator grants the head block; flag: the
    thread flag value read when it does not."""
    buffers = {'owner': {'size': OWNER_SIZE, 'bytes': 'a5' * OWNER_SIZE},
               'allocator': {'size': 8},
               'vtable': {'size': 0x80},
               'head': {'size': HEAD_SIZE, 'bytes': 'c7' * HEAD_SIZE},
               'tls': {'size': TLS_BELOW + 0x20, 'bytes': '00' * (TLS_BELOW + 0x20)}}
    memory = [{'addr': 'buf:allocator+0', 'pointer': 'vtable'},
              {'addr': 'buf:vtable+32', 'guest': INFO_GUEST},
              {'addr': 'buf:vtable+88', 'guest': ALLOCATE_GUEST},
              {'addr': f'buf:tls+{TLS_BELOW}', 'pointer': f'tls+{TLS_BELOW}'},
              {'addr': f'buf:tls+{TLS_BELOW + FLAG_OFFSET}', 'bytes': f'{flag:08x}'},
              {'addr': FLAG_OFFSET_SLOT, 'bytes': u64(FLAG_OFFSET)},
              {'addr': THROW_OFFSET_SLOT, 'bytes': u64(THROW_OFFSET)}]
    info_stub = {'address': INFO_GUEST, 'argc': 3, 'argi': [1, 2],
                 'writes': [{'arg': 0, 'offset': 0, 'bytes': f'{flags:02x}'}]}
    stubs = [{'address': ZERO, 'argc': 3, 'argi': [0, 1, 2]}, info_stub]
    if not flags & VALID_BIT:
        stubs.append({'address': FATAL, 'argc': 3, 'argi': [0, 1, 2]})
    if head_ok:
        stubs.append({'address': ALLOCATE_GUEST, 'argc': 3, 'argi': [0, 1, 2], 'ret': 'buf:head'})
    else:
        stubs.append({'address': ALLOCATE_GUEST, 'argc': 3, 'argi': [0, 1, 2], 'ret': 0})
        stubs.append({'address': THROW, 'argc': 2, 'argi': [1], 'noreturn': True})
        return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
                'args': {'rdi': 'buf:owner', 'rsi': 'buf:allocator'}, 'buffers': buffers,
                'memory': memory, 'gs': f'buf:tls+{TLS_BELOW}', 'stubs': stubs, 'imports': []}
    stubs.append({'address': ZERO, 'argc': 3, 'argi': [0, 1, 2]})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:owner', 'rsi': 'buf:allocator'}, 'buffers': buffers,
            'memory': memory, 'gs': f'buf:tls+{TLS_BELOW}', 'stubs': stubs, 'imports': []}


CASES = [
    case('valid_allocator_builds_empty_map'),
    case('valid_allocator_all_flag_bits', flags=0xff),
    case('valid_bit_with_other_bits_only', flags=0xdf),
    case('invalid_allocator_reports_then_builds', flags=0x00),
    case('refused_head_flag_set_throws', head_ok=False, flag=1),
    case('invalid_allocator_then_refused_head_throws', flags=0x00, head_ok=False, flag=1),
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
