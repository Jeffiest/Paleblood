#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic locked growths for bb_misc_grow_element_storage_locked (0x02705790), for tools/verify.py run.

usage: grow_element_storage_locked_cases.py OUT_DIR

The list's storage is 16-byte elements. The function sets the thread flag (gs:[0x8]), tries the lock (a stub, the
slot at gs:[0x10]), and grows the list when its capacity is short: the allocator's allocate slot (0x58, a stub)
returns a block or refuses, and its free slot (0x70, a stub) releases the old storage. A refused block reaches the
throw helper (0x02fbe978, which never returns, with the flag set). A count whose byte size overflows reaches the
length error helper (0x02706bc0, which never returns). The thread pointer is gs:[0]; the flag and lock offsets are
read through the words at 0x057e4318 and 0x057e4320.
The fatal report's path needs the flag clear at the allocation, which the function never does: that outcome is
declared unreachable in the source's cases file (see UNREACHABLE below).
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02705790'
LOCK = '0x02fbe8f8'                 # returns nonzero when the lock is held elsewhere
THROW = '0x02fbe978'                # the throw helper: never returns
LENGTH_ERROR = '0x02706bc0'         # the length error helper: never returns
ALLOCATE = '0x00400020'             # a real game entry the allocator's allocate slot points at
FREE = '0x004000a0'                 # a real game entry the allocator's free slot points at
FLAG_OFFSET_SLOT = 0x057e4318
LOCK_OFFSET_SLOT = 0x057e4320
FLAG_OFFSET = 0x8
LOCK_OFFSET = 0x10
TLS_BELOW = 0x20                    # the thread pointer; the flag is at +0x28 and the lock at +0x30
TLS_SIZE = 0x40
ELEMENT = 0x10
MASK64 = (1 << 64) - 1
# The branch at 0x0270582d tests the flag after a refused block: it is set on entry, so the fatal path is
# never taken; the source's cases declare that outcome unreachable.
UNREACHABLE = {'0x0270582d': ('fallthrough', 'thread flag set on entry and nothing clears it before the allocation: the fatal report is never reached'), '0x02705863': ('taken', 'a null block is only copied into on the fatal report path, which the flag makes unreachable')}


def u64(value):
    """Eight little-endian bytes of a value, as hex."""
    return struct.pack('<Q', value & MASK64).hex()


def elements_hex(pairs):
    """Little-endian hex of 16-byte elements, each a pair of 64-bit words."""
    return ''.join(u64(first) + u64(second) for first, second in pairs)


def case(cid, count, lock=0, begin=None, end=None, capacity=None, block_refused=False, flag_before=0):
    """One growth of the list to count elements; begin, end and capacity are element counts or None for empty."""
    stored = [] if begin is None else [(0xa000 + index, 0xb000 + index) for index in range(end - begin)]
    old_hex = elements_hex(stored)
    buffers = {'tls': {'size': TLS_SIZE},
               'list': {'size': 0x28},
               'old': {'size': 0x40, 'bytes': old_hex + 'cc' * (0x40 - len(old_hex) // 2)},
               'block': {'size': 0x80, 'bytes': 'dd' * 0x80},
               'allocator': {'size': 0x20},
               'vtable': {'size': 0x80}}
    memory = [{'addr': f'buf:tls+{TLS_BELOW:#x}', 'pointer': f'tls+{TLS_BELOW:#x}'},
              {'addr': f'buf:tls+{TLS_BELOW + FLAG_OFFSET:#x}', 'bytes': f'{flag_before:08x}'},
              {'addr': hex(FLAG_OFFSET_SLOT), 'bytes': u64(FLAG_OFFSET)},
              {'addr': hex(LOCK_OFFSET_SLOT), 'bytes': u64(LOCK_OFFSET)},
              {'addr': 'buf:list+0x20', 'pointer': 'allocator'},
              {'addr': 'buf:allocator+0x0', 'pointer': 'vtable'},
              {'addr': 'buf:vtable+0x58', 'guest': ALLOCATE},
              {'addr': 'buf:vtable+0x70', 'guest': FREE}]
    if begin is None:
        memory += [{'addr': 'buf:list+0x8', 'bytes': u64(0)},
                   {'addr': 'buf:list+0x10', 'bytes': u64(0)},
                   {'addr': 'buf:list+0x18', 'bytes': u64(0 if capacity is None else capacity * ELEMENT)}]
    else:
        memory += [{'addr': 'buf:list+0x8', 'pointer': 'old'},
                   {'addr': 'buf:list+0x10', 'pointer': f'old+{(end - begin) * ELEMENT:#x}'},
                   {'addr': 'buf:list+0x18', 'pointer': f'old+{capacity * ELEMENT:#x}'}]
    stubs = [{'address': LOCK, 'argc': 1, 'ret': hex(lock & 0xffffffff)}]
    if lock == 0:
        capacity_count = 0 if capacity is None else capacity
        if capacity_count < count and (count >> 60) == 0:
            allocate_ret = 'buf:block' if not block_refused else '0x0'
            stubs.append({'address': ALLOCATE, 'argc': 3, 'ret': allocate_ret})
            if not block_refused and begin is not None:
                stubs.append({'address': FREE, 'argc': 2})
            elif block_refused:
                stubs.append({'address': THROW, 'argc': 2, 'noreturn': True})
        elif count >> 60:
            stubs.append({'address': LENGTH_ERROR, 'argc': 0, 'noreturn': True})
    args = {'rdi': 'buf:list', 'rsi': hex(count & MASK64)}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': args,
            'buffers': buffers, 'memory': memory, 'gs': f'buf:tls+{TLS_BELOW:#x}', 'imports': [], 'stubs': stubs}


CASES = [
    case('lock_held_elsewhere', count=3, lock=1, capacity=0),
    case('capacity_already_enough', count=2, capacity=2, begin=0, end=1),
    case('zero_count_nothing_to_do', count=0, capacity=None),
    case('grow_empty_list', count=3, capacity=None),
    case('grow_moves_stored_elements', count=4, begin=0, end=2, capacity=2),
    case('allocation_refused_throws', count=2, capacity=None, block_refused=True),
    case('count_overflows_length_error', count=1 << 60, capacity=None),
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
