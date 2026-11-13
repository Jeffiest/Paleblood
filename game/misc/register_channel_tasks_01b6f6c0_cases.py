#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_register_channel_tasks_01b6f6c0 (0x01b6f6c0), for tools/verify.py run.

usage: register_channel_tasks_01b6f6c0_cases.py OUT_DIR

The function finds a root node from a source, offers thirty-five numbered tasks to its first list, then (when the
second list exists) takes the thread's allocator through the thread-local heap slot, checks it through its info
slot, and offers eighty-nine tasks to the second list, each named by a formatted name that is built in the
function's frame. Every case that gets that far scripts all of the slots: a task allocation that fails passes a
null task on, and a formatted name that sits on the heap passes its heap text to the task constructor and is
freed at the end when the last name is on the heap.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01b6f6c0'
FIND_ROOT = '0x0140a1f0'
FIND_LIST = '0x0140a410'
FACTORY = '0x0140ce80'
CONSTRUCT_NUMBERED = '0x014015d0'
CONSTRUCT_NAMED = '0x01401c90'
THREAD_HEAP_INIT = '0x0247d250'
FORMAT = '0x02b62d00'
FATAL = '0x024b55b0'
ALLOCATE = '0x00400020'        # slot 0x58 of the factory; stubbed real entry
OFFER = '0x004000f0'           # slot 0x78 of a list; stubbed real entry
ALLOCATOR_INFO = '0x00400300'  # slot 0x20 of the thread allocator
FREE = '0x004000a0'            # slot 0x70 of the thread allocator
TABLE = 0x0572b590
NUMBERED_COUNT = 0x23
NAMED_COUNT = 0x59
TLS_BELOW = 0x730
TLS_SLOT = -TLS_BELOW
INLINE_TEXT = '6162630000000000'
HEAP_SIZE = '1000000000000000'
HEAP_CAPACITY = '2000000000000000'
SHORT_SIZE = '0300000000000000'
INLINE_CAPACITY = '0700000000000000'
MASK64 = (1 << 64) - 1


def case(cid, source=True, root=True, first_list=True, second_list=True, numbered_null=(), named_null=(),
         heap_names=(), flags=0x20, heap_slot=True):
    """One call. numbered_null and named_null list the slots whose allocation fails; heap_names the slots whose
    formatted name is on the heap; flags is the thread allocator's info byte."""
    buffers = {'tls': {'size': TLS_BELOW + 8}, 'heap': {'size': 0x30}, 'alloc_vt': {'size': 0x80},
               'holder': {'size': 8, 'bytes': 'dd' * 8},
               'root': {'size': 0x10}, 'list1': {'size': 8}, 'list2': {'size': 8},
               'list_vt': {'size': 0x80}, 'factory': {'size': 8}, 'factory_vt': {'size': 0x60},
               'task48': {'size': 0x48, 'bytes': 'ee' * 0x48}, 'task70': {'size': 0x70, 'bytes': 'ee' * 0x70},
               'heap_text': {'size': 0x20, 'bytes': '61' * 0x20}}
    table = b''.join(struct.pack('<Q', 0x1111000000000000 + index * 0x10001) for index in range(NAMED_COUNT))
    memory = [{'addr': '0x057e4568', 'bytes': struct.pack('<q', TLS_SLOT).hex()},
              {'addr': f'buf:tls+{TLS_BELOW:#x}', 'pointer': f'tls+{TLS_BELOW:#x}'},
              {'addr': 'buf:tls+0x0', 'pointer': 'heap'} if heap_slot else {'addr': 'buf:tls+0x0', 'bytes': '00' * 8},
              {'addr': 'buf:heap+0x28', 'pointer': 'alloc_vt'},
              {'addr': 'buf:alloc_vt+0x20', 'guest': ALLOCATOR_INFO},
              {'addr': 'buf:alloc_vt+0x70', 'guest': FREE},
              {'addr': 'buf:list1+0x0', 'pointer': 'list_vt'},
              {'addr': 'buf:list2+0x0', 'pointer': 'list_vt'},
              {'addr': 'buf:list_vt+0x78', 'guest': OFFER},
              {'addr': 'buf:factory+0x0', 'pointer': 'factory_vt'},
              {'addr': 'buf:factory_vt+0x58', 'guest': ALLOCATE},
              {'addr': hex(TABLE), 'bytes': table.hex()}]
    stubs = []
    if source:
        stubs.append({'address': FIND_ROOT, 'argc': 2, 'ret': 'buf:root' if root else '0x0'})
    if source and root:
        stubs.append({'address': FIND_LIST, 'argc': 2, 'ret': 'buf:list1' if first_list else '0x0'})
        if first_list:
            for number in range(NUMBERED_COUNT):
                ok = number not in numbered_null
                stubs.append({'address': FACTORY, 'argc': 0, 'ret': 'buf:factory'})
                stubs.append({'address': ALLOCATE, 'argc': 3, 'ret': 'buf:task48' if ok else '0x0'})
                if ok:
                    stubs.append({'address': CONSTRUCT_NUMBERED, 'argc': 1})
                stubs.append({'address': OFFER, 'argc': 3})
        stubs.append({'address': FIND_LIST, 'argc': 2, 'ret': 'buf:list2' if second_list else '0x0'})
        if second_list and not heap_slot:
            stubs.append({'address': THREAD_HEAP_INIT, 'argc': 0})
        elif second_list:
            stubs.append({'address': ALLOCATOR_INFO, 'argc': 3,
                          'writes': [{'arg': 0, 'offset': 0, 'bytes': f'{flags & 0xff:02x}'}]})
            if not flags & 0x20:
                stubs.append({'address': FATAL, 'argc': 3})
            for number in range(NAMED_COUNT):
                ok = number not in named_null
                on_heap = number in heap_names
                if on_heap:
                    writes = [{'arg': 0, 'offset': 0x8, 'pointer': 'heap_text'},
                              {'arg': 0, 'offset': 0x18, 'bytes': HEAP_SIZE},
                              {'arg': 0, 'offset': 0x20, 'bytes': HEAP_CAPACITY}]
                else:
                    writes = [{'arg': 0, 'offset': 0x8, 'bytes': INLINE_TEXT},
                              {'arg': 0, 'offset': 0x18, 'bytes': SHORT_SIZE},
                              {'arg': 0, 'offset': 0x20, 'bytes': INLINE_CAPACITY}]
                stubs.append({'address': FORMAT, 'argc': 3, 'writes': writes})
                stubs.append({'address': FACTORY, 'argc': 0, 'ret': 'buf:factory'})
                stubs.append({'address': ALLOCATE, 'argc': 3, 'ret': 'buf:task70' if ok else '0x0'})
                if ok:
                    stubs.append({'address': CONSTRUCT_NAMED, 'argc': 2})
                stubs.append({'address': OFFER, 'argc': 3})
            if NAMED_COUNT - 1 in heap_names:
                stubs.append({'address': FREE, 'argc': 2})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:holder', 'rsi': '0x1234' if source else '0x0'},
            'gs': f'buf:tls+{TLS_BELOW:#x}',
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('no_source', source=False),
    case('no_root', root=False),
    case('no_first_list', first_list=False),
    case('no_second_list', second_list=False),
    case('all_inline'),
    case('allocation_failures', numbered_null=(0, 5, NUMBERED_COUNT - 1), named_null=(0, 3, NAMED_COUNT - 1)),
    case('heap_names_inline_last', heap_names=(1, 2, 40)),
    case('heap_name_last_freed', heap_names=(0, NAMED_COUNT - 1)),
    case('heap_name_last_freed_with_failures', named_null=(NAMED_COUNT - 1,), heap_names=(NAMED_COUNT - 1,)),
    case('allocator_invalid_carries_on', flags=0x00),
    case('allocator_other_bits_valid', flags=0xff),
]

# The thread heap slot is read again after thread_heap_init, which a stub cannot fill in; a null slot then faults at
# the load through it at 0x01b6f810, so the fallthrough of the first null test only ends in a fault.
UNREACHABLE = {'0x01b6f7f6': ('fallthrough', 'thread heap slot null: thread_heap_init cannot be scripted to fill it and the load at 0x01b6f810 faults')}


def main():
    """Write deterministic synthetic inputs to the requested directory."""
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
