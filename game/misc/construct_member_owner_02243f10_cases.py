#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic member-owner constructions for misc_construct_member_owner_02243f10 (0x02243f10), for tools/verify.py run.

usage: construct_member_owner_02243f10_cases.py OUT_DIR

The owner is 0x70 bytes: its vtable word and the member sub-object at +0x68. The flag heap is the global at
0x05940408; the base constructor and the member constructor are stubs. The member constructor's record is a
stack local, so its contents are compared through the stub's argument. Covers garbage, zero and all-ones owner
bytes, a null flag heap, and a base constructor that writes into the owner before the owner's vtable is stored.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02243f10'
FLAG_HEAP = '0x05940408'
BASE_CONSTRUCT = '0x013e8200'     # the base part's constructor; stubbed
MEMBER_CONSTRUCT = '0x013e67d0'   # the member's constructor, given the record; stubbed
OWNER_SIZE = 0x70
RECORD_SIZE = 0x28


def case(cid, fill='ee', heap=None, base_writes=None):
    """One construction of an owner whose bytes all start as fill; the flag heap is a buffer, or null."""
    base = {'address': BASE_CONSTRUCT, 'argc': 2, 'argi': [0], 'argmem': [{'arg': 1, 'size': 8}]}
    if base_writes:
        base['writes'] = base_writes
    member = {'address': MEMBER_CONSTRUCT, 'argc': 2, 'argi': [0],
              'argmem': [{'arg': 1, 'size': RECORD_SIZE}]}
    if heap is None:
        heap_entry = {'addr': FLAG_HEAP, 'pointer': 'flag_heap'}
    else:
        heap_entry = {'addr': FLAG_HEAP, 'bytes': heap}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:owner'},
            'buffers': {'owner': {'size': OWNER_SIZE, 'bytes': fill * OWNER_SIZE},
                        'flag_heap': {'size': 0x10, 'bytes': 'ab' * 0x10}},
            'memory': [heap_entry], 'imports': [], 'stubs': [base, member]}


CASES = [
    case('garbage_owner'),
    case('zero_owner', fill='00'),
    case('all_ones_owner', fill='ff'),
    case('null_flag_heap', heap='00' * 8),
    case('base_writes_owner_first', base_writes=[{'arg': 0, 'offset': 0, 'bytes': 'cd' * 0x10},
                                                 {'arg': 0, 'offset': 0x60, 'bytes': 'be' * 8}]),
]


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
