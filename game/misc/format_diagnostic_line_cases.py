#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_format_diagnostic_line (0x018a9d20), for tools/verify.py run.

usage: format_diagnostic_line_cases.py OUT_DIR

Kind-two events only: the label is formatted by 0x01890a20 into a local name (inline or on the heap, freed
through its allocator's slot 0x70 when on the heap), then 0x02b62d00 formats the line into the event's name
with six register arguments and seven stack slots. Covers the other event kinds, both table ranges, the
default kind name, both flag choices and inline or heap texts.
"""
import json
import os
import struct
import sys

ADDRESS = '0x018a9d20'
LABEL = '0x01890a20'
LOGGER = '0x02b62d00'
ALLOCATOR_FREE = '0x00400020'   # guest entry of the allocator's slot 0x70
MASK64 = (1 << 64) - 1


def i32(v):
    """Little-endian hex of a 32-bit signed value."""
    return struct.pack('<i', v).hex()


def u64(v):
    """Little-endian hex of a 64-bit value."""
    return struct.pack('<Q', v & MASK64).hex()


def case(cid, event_kind=2, kind=4, index=3, first=True, second=True, src_heap=False, label_heap=False):
    """One call. event_kind: the event's kind (only 2 produces a line); kind: the source kind; index: the
    indexed name; first and second: the two flags; src_heap: the source text sits on the heap;
    label_heap: the label's text sits on the heap."""
    b = {'source': {'size': 0xc0}, 'event': {'size': 0x10}, 'name': {'size': 0x38}}
    m = [{'addr': 'buf:source+8', 'bytes': i32(kind)},
         {'addr': 'buf:source+12', 'bytes': i32(0x1234)},
         {'addr': 'buf:source+24', 'bytes': i32(0x55)},
         {'addr': 'buf:source+28', 'bytes': i32(-7)},
         {'addr': 'buf:source+32', 'bytes': struct.pack('<I', 0xabcdef).hex()},
         {'addr': 'buf:source+176', 'bytes': i32(index)},
         {'addr': 'buf:source+180', 'bytes': struct.pack('<f', 1.5).hex()},
         {'addr': 'buf:source+186', 'bytes': ('01' if first else '00') + ('01' if second else '00')},
         {'addr': 'buf:event', 'bytes': i32(event_kind)},
         {'addr': 'buf:event+8', 'pointer': 'name'}]
    if src_heap:
        b['source_heap'] = {'size': 0x20}
        m.append({'addr': 'buf:source+112', 'pointer': 'source_heap'})
        m.append({'addr': 'buf:source+120', 'bytes': u64(5)})
        m.append({'addr': 'buf:source+136', 'bytes': u64(0x20)})
    else:
        m.append({'addr': 'buf:source+112', 'bytes': '6869' + '00' * 6})
        m.append({'addr': 'buf:source+120', 'bytes': u64(2)})
        m.append({'addr': 'buf:source+136', 'bytes': u64(7)})
    stubs = []
    if event_kind == 2:
        b['alloc'] = {'size': 8}
        b['alloc_vt'] = {'size': 0x78}
        m.append({'addr': 'buf:alloc', 'pointer': 'alloc_vt'})
        m.append({'addr': 'buf:alloc_vt+112', 'guest': ALLOCATOR_FREE})
        writes = [{'arg': 0, 'offset': 0x18, 'bytes': u64(2 if not label_heap else 0x10)},
                  {'arg': 0, 'offset': 0x20, 'bytes': u64(7 if not label_heap else 0x10)},
                  {'arg': 0, 'offset': 0x28, 'pointer': 'alloc'}]
        if label_heap:
            b['label_heap'] = {'size': 0x20}
            writes.append({'arg': 0, 'offset': 8, 'pointer': 'label_heap'})
        else:
            writes.append({'arg': 0, 'offset': 8, 'bytes': '6162' + '00' * 6})
        stubs.append({'address': LABEL, 'argc': 2, 'argi': [1], 'writes': writes})
        stubs.append({'address': LOGGER, 'argc': 13, 'argi': [0, 1, 2, 3, 4, 5, 8, 11],
                      'argu32': [6, 9, 10, 12]})
        if label_heap:
            stubs.append({'address': ALLOCATOR_FREE, 'argc': 2, 'argi': [0, 1]})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:source', 'rsi': 'buf:event'}, 'buffers': b, 'memory': m,
            'stubs': stubs, 'imports': []}


CASES = [
    case('other_event_kind', event_kind=3),
    case('kind_in_table_inline', kind=4, index=3),
    case('kind_last_in_table_heap_source', kind=0x34, index=0, first=True, second=False, src_heap=True),
    case('kind_past_table_default_name', kind=0x35, index=5, first=False, second=True),
    case('kind_negative_default_name', kind=-1, index=9, first=False, second=False),
    case('label_on_heap_freed', kind=2, index=1, label_heap=True),
    case('label_and_source_heap', kind=0, index=2, src_heap=True, label_heap=True, first=False, second=False),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    os.makedirs(sys.argv[1], exist_ok=True)
    for c in CASES:
        with open(os.path.join(sys.argv[1], f"{c['id']}.json"), 'w') as f:
            json.dump(c, f, indent=1)
    print(f'{len(CASES)} cases written to {sys.argv[1]}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
