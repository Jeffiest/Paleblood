#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic label sends (0x022544b0): a source that is not pending, forced and unforced formats, readiness answers
whose low byte alone decides, a forced flag whose high half is ignored, names formatted inline or on the heap (the
heap text is freed through the allocator it was formatted with), and an allocator whose valid bit is clear (the fatal
error is stubbed and the send carries on). The thread's heap record is reached through the thread-local offset global.

usage: send_object_label_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x022544b0'
ALLOCATOR_INFO = '0x00400300'      # a real game function entry, stubbed as the allocator's info slot
FREE = '0x004000a0'                # a real game function entry, stubbed as the allocator's free slot
READY = '0x00400020'               # a real game function entry, stubbed as the source's readiness slot
ACCEPT = '0x004000f0'              # a real game function entry, stubbed as the receiver's accept slot
FORMAT = '0x02b62d00'
FATAL = '0x024b55b0'
TLS_BELOW = 0x730                  # the heap slot sits this far below the thread pointer
TLS_SLOT = -TLS_BELOW              # value of the thread-local offset global at 0x057e4568
SOURCE_SIZE = 0x70
PENDING_OFFSET = 0x68
ALLOCATOR_VTABLE_SIZE = 0x80
INFO_SLOT = 0x20
FREE_SLOT = 0x70
ACCEPT_SLOT = 0x80
READY_SLOT = 0x20
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1
INLINE_TEXT = '6162630000000000'  # "abc" with its terminator, inline
HEAP_CAPACITY = '2000000000000000'  # 0x20: the name is on the heap
SHORT_SIZE = '0300000000000000'
HEAP_SIZE = '1000000000000000'
INLINE_CAPACITY = '0700000000000000'


def case(cid, pending=1, forced=1, ready=0x101, flags=0x20, heap=False, forced_value=None):
    """One send. The readiness stub answers with 'ready' (only its low byte matters to the caller). The format stub
    writes the name inline, or on the heap with a 0x20-byte block. The allocator's info stub writes 'flags'. A
    forced value above 32 bits is passed whole, so only its low half is the flag."""
    forced_arg = forced if forced_value is None else forced_value
    source = bytearray(b'\xee' * SOURCE_SIZE)
    source[PENDING_OFFSET] = pending
    buffers = {'tls': {'size': TLS_BELOW + 8},
               'heap': {'size': 0x30},
               'alloc_vt': {'size': ALLOCATOR_VTABLE_SIZE},
               'source': {'size': SOURCE_SIZE, 'bytes': source.hex()},
               'source_vt': {'size': 0x28},
               'receiver': {'size': 8},
               'receiver_vt': {'size': ACCEPT_SLOT + 8},
               'heap_text': {'size': 0x20, 'bytes': '61' * 0x20}}
    memory = [{'addr': '0x057e4568', 'bytes': struct.pack('<q', TLS_SLOT).hex()},
              {'addr': f'buf:tls+{TLS_BELOW:#x}', 'pointer': f'tls+{TLS_BELOW:#x}'},
              {'addr': 'buf:tls+0x0', 'pointer': 'heap'},
              {'addr': 'buf:heap+0x28', 'pointer': 'alloc_vt'},
              {'addr': f'buf:alloc_vt+{INFO_SLOT:#x}', 'guest': ALLOCATOR_INFO},
              {'addr': f'buf:alloc_vt+{FREE_SLOT:#x}', 'guest': FREE},
              {'addr': 'buf:source+0x0', 'pointer': 'source_vt'},
              {'addr': f'buf:source_vt+{READY_SLOT:#x}', 'guest': READY},
              {'addr': 'buf:receiver+0x0', 'pointer': 'receiver_vt'},
              {'addr': f'buf:receiver_vt+{ACCEPT_SLOT:#x}', 'guest': ACCEPT}]
    if heap:
        format_writes = [{'arg': 0, 'offset': 0x8, 'pointer': 'heap_text'},
                         {'arg': 0, 'offset': 0x18, 'bytes': HEAP_SIZE},
                         {'arg': 0, 'offset': 0x20, 'bytes': HEAP_CAPACITY}]
    else:
        format_writes = [{'arg': 0, 'offset': 0x8, 'bytes': INLINE_TEXT},
                         {'arg': 0, 'offset': 0x18, 'bytes': SHORT_SIZE},
                         {'arg': 0, 'offset': 0x20, 'bytes': INLINE_CAPACITY}]
    stubs = []
    if pending:
        stubs.append({'address': ALLOCATOR_INFO, 'argc': 3,
                      'writes': [{'arg': 0, 'offset': 0, 'bytes': f'{flags & 0xff:02x}'}]})
        if (flags & 0x20) == 0:
            stubs.append({'address': FATAL, 'argc': 3})
        if not (forced_arg & MASK32):
            stubs.append({'address': READY, 'argc': 1, 'ret': hex(ready & MASK64)})
        stubs.append({'address': FORMAT, 'argc': 2, 'writes': format_writes})
        stubs.append({'address': ACCEPT, 'argc': 2})
        if heap:
            stubs.append({'address': FREE, 'argc': 2})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:source', 'rsi': 'buf:receiver', 'rdx': hex(forced_arg & MASK64)},
            'gs': f'buf:tls+{TLS_BELOW:#x}',
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('not_pending', pending=0),
    case('forced_inline', forced=1),
    case('unforced_ready_inline', forced_value=0, ready=0x101),
    case('unforced_waiting_inline', forced_value=0, ready=0x100),
    case('ready_answer_low_byte_only', forced_value=0, ready=0xffffffffffffff00),
    case('forced_high_half_ignored', forced_value=0x100000000, ready=0x100),
    case('forced_high_half_with_low_set', forced_value=0xdeadbeef00000001, ready=0x100),
    case('heap_name_forced', heap=True, forced_value=1),
    case('heap_name_ready', heap=True, forced_value=0, ready=0x101),
    case('heap_name_waiting', heap=True, forced_value=0, ready=0x0),
    case('allocator_invalid_carries_on', flags=0x00, forced_value=1),
    case('allocator_invalid_heap_name', flags=0xdf, heap=True, forced_value=1),
    case('allocator_valid_with_other_bits', flags=0xff, forced_value=1),
]

# The thread heap slot is read again after thread_heap_init, which a stub cannot fill in; a null slot then faults
# at the load through it, so the fallthrough of that null test only ends in a fault.
UNREACHABLE = {'0x022544f9': ('fallthrough', 'thread heap slot null after thread_heap_init: the load through it faults')}


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
    sys.exit(main())
