#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic full-list growths for bb_misc_grow_full_element_storage (0x02705640), for tools/verify.py run.

usage: grow_full_element_storage_cases.py OUT_DIR

A list of 16-byte elements grows only when its end meets its capacity end. The new block holds about one and a
half times the capacity (at least one more); the allocate slot (0x58) is a stub that returns a block or refuses,
the free slot (0x70) releases the old storage, and the stored elements are copied across. A refused block
reaches the throw helper (0x02fbe978, never returns) when the thread flag is set, or the engine's fatal report
(0x024b55b0, returns) when it is clear, after which the old storage is still released. The thread pointer is
gs:[0]; the flag and throw offsets are read through the words at 0x057e4318 and 0x057e4320.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02705640'
ALLOCATE = '0x00400020'             # a real game entry the allocator's allocate slot points at
FREE = '0x004000a0'                 # a real game entry the allocator's free slot points at
FATAL = '0x024b55b0'
THROW = '0x02fbe978'
MESSAGE = '0x04b37d80'
FLAG_OFFSET_SLOT = 0x057e4318
THROW_OFFSET_SLOT = 0x057e4320
FLAG_OFFSET = 0x8
THROW_OFFSET = 0x10
TLS_BELOW = 0x20                    # the thread pointer; the flag is at +0x28 and the throw slot at +0x30
TLS_SIZE = 0x40
ELEMENT = 0x10
MASK64 = (1 << 64) - 1


def u64(value):
    """Eight little-endian bytes of a value, as hex."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, stored, capacity, refused=False, flag=0):
    """One growth of a list with stored elements in a block of the given capacity (both element counts)."""
    stored_bytes = ''.join(u64(0xa000 + i) + u64(0xb000 + i) for i in range(stored))
    buffers = {'tls': {'size': TLS_SIZE},
               'list': {'size': 0x28},
               'old': {'size': 0x40 + 0x10 * max(capacity, 0),
                       'bytes': stored_bytes + 'cc' * (0x40 + 0x10 * max(capacity, 0) - 0x10 * stored)},
               'block': {'size': 0x100, 'bytes': 'dd' * 0x100},
               'allocator': {'size': 0x20},
               'vtable': {'size': 0x80}}
    memory = [{'addr': f'buf:tls+{TLS_BELOW:#x}', 'pointer': f'tls+{TLS_BELOW:#x}'},
              {'addr': f'buf:tls+{TLS_BELOW + FLAG_OFFSET:#x}', 'bytes': f'{flag:08x}'},
              {'addr': hex(FLAG_OFFSET_SLOT), 'bytes': u64(FLAG_OFFSET)},
              {'addr': hex(THROW_OFFSET_SLOT), 'bytes': u64(THROW_OFFSET)},
              {'addr': 'buf:list+0x20', 'pointer': 'allocator'},
              {'addr': 'buf:allocator+0x0', 'pointer': 'vtable'},
              {'addr': 'buf:vtable+0x58', 'guest': ALLOCATE},
              {'addr': 'buf:vtable+0x70', 'guest': FREE}]
    if stored == 0 and capacity == 0:
        memory += [{'addr': 'buf:list+0x8', 'bytes': u64(0)},
                   {'addr': 'buf:list+0x10', 'bytes': u64(0)},
                   {'addr': 'buf:list+0x18', 'bytes': u64(0)}]
    else:
        memory += [{'addr': 'buf:list+0x8', 'pointer': 'old'},
                   {'addr': 'buf:list+0x10', 'pointer': f'old+{stored * ELEMENT:#x}'},
                   {'addr': 'buf:list+0x18', 'pointer': f'old+{capacity * ELEMENT:#x}'}]
    stubs = []
    if stored == capacity:
        stubs.append({'address': ALLOCATE, 'argc': 3, 'argi': [0, 1, 2], 'ret': '0x0' if refused else 'buf:block'})
    if stored == capacity and refused:
        if flag != 0:
            stubs.append({'address': THROW, 'argc': 2, 'argi': [1], 'noreturn': True})
            return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': {'rdi': 'buf:list'},
                    'buffers': buffers, 'memory': memory, 'gs': f'buf:tls+{TLS_BELOW:#x}', 'imports': [],
                    'stubs': stubs}
        stubs.append({'address': FATAL, 'argc': 3, 'argi': [0, 1, 2]})
    if stored == capacity and stored:
        stubs.append({'address': FREE, 'argc': 2, 'argi': [0, 1]})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': {'rdi': 'buf:list'},
            'buffers': buffers, 'memory': memory, 'gs': f'buf:tls+{TLS_BELOW:#x}', 'imports': [], 'stubs': stubs}


CASES = [
    case('not_full_left_alone', stored=1, capacity=2),
    case('full_empty_list_grows_to_one', stored=0, capacity=0),
    case('full_two_elements_moves_them', stored=2, capacity=2),
    case('full_three_elements_moves_them', stored=3, capacity=3),
    case('refused_with_flag_throws', stored=0, capacity=0, refused=True, flag=1),
    case('refused_flag_clear_reports_and_frees', stored=1, capacity=1, refused=True, flag=0),
]


def main():
    """Write deterministic synthetic growths to the requested directory."""
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        (output / (fixture['id'] + '.json')).write_text(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} cases written to {output}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
