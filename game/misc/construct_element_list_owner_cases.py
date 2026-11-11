#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic element list owners built on the shared allocator (0x02254640): both infos valid, either or both
invalid (the fatal error is stubbed and the routine carries on), and flags with the valid bit alone, with other bits
set, or with the valid bit clear. The shared allocator global holds a fake allocator whose info slot writes the flags
byte it is given; the owner's fields are compared as written.

usage: construct_element_list_owner_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02254640'
SHARED_GLOBAL = '0x05940438'
INFO = '0x00400300'          # a real game function entry, stubbed as the allocator's info slot
FATAL = '0x024b55b0'
OWNER_SIZE = 0x58
INFO_SLOT = 0x20
ALLOCATOR_VTABLE_SIZE = 0x80


def case(cid, flags_first=0x20, flags_second=0x20, fill='ee'):
    """One construction. The info slot is called once per array with the same allocator; each call writes its flags
    byte, and a clear valid bit adds a fatal error stub right after that call."""
    buffers = {'owner': {'size': OWNER_SIZE, 'bytes': fill * OWNER_SIZE},
               'alloc': {'size': 0x10}, 'alloc_vt': {'size': ALLOCATOR_VTABLE_SIZE}}
    memory = [{'addr': SHARED_GLOBAL, 'pointer': 'alloc'},
              {'addr': 'buf:alloc+0x0', 'pointer': 'alloc_vt'},
              {'addr': f'buf:alloc_vt+{INFO_SLOT:#x}', 'guest': INFO}]
    stubs = []
    for flags in (flags_first, flags_second):
        stubs.append({'address': INFO, 'argc': 3,
                      'writes': [{'arg': 0, 'offset': 0, 'bytes': f'{flags & 0xff:02x}'}]})
        if flags & 0x20 == 0:
            stubs.append({'address': FATAL, 'argc': 3})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:owner'}, 'buffers': buffers, 'memory': memory, 'imports': [],
            'stubs': stubs}


CASES = [
    case('both_valid'),
    case('first_invalid', flags_first=0x00),
    case('second_invalid', flags_second=0x00),
    case('both_invalid', flags_first=0x00, flags_second=0x00),
    case('valid_bit_with_other_bits', flags_first=0xff, flags_second=0xdf),
    case('valid_bit_clear_others_set', flags_first=0xdf, flags_second=0x20),
    case('valid_bit_only_second_invalid', flags_first=0x20, flags_second=0x10),
    case('owner_fill_zero', fill='00', flags_first=0x20, flags_second=0x00),
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
    sys.exit(main())
