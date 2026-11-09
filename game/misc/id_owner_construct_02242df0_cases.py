#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic id-owner constructions for misc_id_owner_construct_02242df0 (0x02242df0), for tools/verify.py run.

usage: id_owner_construct_02242df0_cases.py OUT_DIR

The owner is 0x30 bytes: the vtable, then the id vector (its unknown word, begin, end, capacity end
and heap). The id heap's info callback fills the allocator info; its first byte carries the valid
flag 0x20. An invalid heap is reported through the fatal error, which returns, and the construction
goes on. The reserve call is stubbed and sets the vector's storage pointers.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02242df0'
ID_HEAP = '0x05940450'
INFO = '0x00400020'
FATAL = '0x024b55b0'
RESERVE = '0x02bc1ca0'
SIZE = 0x30
STORAGE = 0x80


def case(cid, flags=0x20, fill='ee', reserve_writes=True):
    """One construction of an owner whose bytes all start as fill, on a heap reporting flags."""
    info = {'address': INFO, 'argc': 3,
            'writes': [{'arg': 0, 'bytes': f'{flags:02x}' + '7e' * 7}]}
    stubs = [info]
    if not flags & 0x20:
        stubs.append({'address': FATAL, 'argc': 3})
    reserve = {'address': RESERVE, 'argc': 2}
    if reserve_writes:
        reserve['writes'] = [{'arg': 0, 'offset': 0x08, 'pointer': 'storage'},
                             {'arg': 0, 'offset': 0x10, 'pointer': f'storage+0x{STORAGE // 4:x}'},
                             {'arg': 0, 'offset': 0x18, 'pointer': f'storage+0x{STORAGE:x}'}]
    stubs.append(reserve)
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:owner'},
            'buffers': {'owner': {'size': SIZE, 'bytes': fill * SIZE},
                        'heap': {'size': 0x10, 'bytes': '00' * 0x10},
                        'heap_vt': {'size': 0x30, 'bytes': '00' * 0x30},
                        'storage': {'size': STORAGE, 'bytes': '00' * STORAGE}},
            'memory': [{'addr': ID_HEAP, 'pointer': 'heap'},
                       {'addr': 'buf:heap+0', 'pointer': 'heap_vt'},
                       {'addr': 'buf:heap_vt+0x20', 'guest': INFO}],
            'imports': [], 'stubs': stubs}


CASES = [
    case('valid_heap_garbage_owner'),
    case('valid_heap_zero_owner', fill='00'),
    case('valid_heap_all_ones_owner', fill='ff'),
    case('valid_heap_other_flag_bits', flags=0xff),
    case('valid_heap_reserve_leaves_vector', reserve_writes=False),
    case('invalid_heap_zero_flags', flags=0x00),
    case('invalid_heap_flag_just_below', flags=0xdf, fill='c3'),
    case('invalid_heap_low_flags', flags=0x1f, fill='00'),
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
