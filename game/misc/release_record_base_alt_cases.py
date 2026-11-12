#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_release_record_base_alt (0x018be210), for tools/verify.py run.

usage: release_record_base_alt_cases.py OUT_DIR

The base sub-object (record+0x10) is disposed (0x013882e0); when the release flag (+0x68) is set the flagged
helper (0x018bf7b0) runs on the record; a text on the heap (capacity at +0x98 of eight or more) is freed through
the allocator's slot 0x70; the text is cleared; then 0x01387620 finishes the base and its RAX is returned.
"""
import json
import os
import struct
import sys

ADDRESS = '0x018be210'
DISPOSE = '0x013882e0'
FLAGGED = '0x018bf7b0'
FINISH = '0x01387620'
FREE_ENTRY = '0x004000a0'     # guest entry of the allocator's free slot
MASK64 = (1 << 64) - 1


def case(cid, flag, heap, finished, capacity=0x20):
    """flag: the release flag; heap: the text sits on the heap; finished: the base finish's RAX."""
    b = {'record': {'size': 0xa8}, 'alloc': {'size': 8}, 'alloc_vt': {'size': 0x78}}
    m = [{'addr': 'buf:record+104', 'bytes': '01' if flag else '00'},
         {'addr': 'buf:record+160', 'pointer': 'alloc'},
         {'addr': 'buf:alloc', 'pointer': 'alloc_vt'},
         {'addr': 'buf:alloc_vt+112', 'guest': FREE_ENTRY},
         {'addr': 'buf:record+144', 'bytes': struct.pack('<Q', 5).hex()}]
    if heap:
        b['text'] = {'size': 0x20}
        m.append({'addr': 'buf:record+128', 'pointer': 'text'})
        m.append({'addr': 'buf:record+152', 'bytes': struct.pack('<Q', capacity).hex()})
    else:
        m.append({'addr': 'buf:record+128', 'bytes': '6869' + '00' * 6})
        m.append({'addr': 'buf:record+152', 'bytes': struct.pack('<Q', 7).hex()})
    stubs = [{'address': DISPOSE, 'argc': 1, 'argi': [0]}]
    if flag:
        stubs.append({'address': FLAGGED, 'argc': 1, 'argi': [0]})
    if heap:
        stubs.append({'address': FREE_ENTRY, 'argc': 2, 'argi': [0, 1]})
    stubs.append({'address': FINISH, 'argc': 1, 'argi': [0], 'ret': hex(finished & MASK64)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:record'}, 'buffers': b, 'memory': m, 'stubs': stubs, 'imports': []}


CASES = [
    case('inline_no_flag', flag=False, heap=False, finished=0x11),
    case('inline_with_flag', flag=True, heap=False, finished=0x22),
    case('heap_no_flag', flag=False, heap=True, finished=0),
    case('heap_with_flag_high_word', flag=True, heap=True, finished=0x8000000100000002),
    case('heap_capacity_eight_freed', flag=False, heap=True, finished=0x5, capacity=8),
    case('heap_capacity_seven_inline', flag=False, heap=False, finished=0x6, capacity=7),
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
