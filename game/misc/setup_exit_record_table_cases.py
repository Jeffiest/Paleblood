#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_setup_exit_record_table (0x02716680), for tools/verify.py run.

usage: setup_exit_record_table_cases.py OUT_DIR

Takes no arguments. Six words are copied from the read-only constants at 0x04d244f0 into the table at
0x05ac41c0. The shared object at 0x05940670 is made by 0x02fa2b10 when the global is still null. Its flag
query (vtable +0x20, a stub here) writes an 8-byte flag word; when the bit 0x20 is clear the fatal report
0x024b55b0 is called and the setup goes on. The exit record at 0x05ac41f0 is cleared, pointed at the
shared object, and registered with 0x02fbe548 together with the release function at 0x02716770 and the
module handle at 0x0553b490. The registration's result is not read.
"""
import json
import os
import sys

ADDRESS = '0x02716680'
SHARED_GLOBAL = '0x05940670'
FLAG_QUERY = '0x00400020'
CREATE_SHARED = '0x02fa2b10'
FATAL = '0x024b55b0'
REGISTER_EXIT = '0x02fbe548'
RELEASE = '0x02716770'
EXIT_RECORD = 0x05ac41f0
EXIT_RECORD_SIZE = 0x28
SHARED_SIZE = 8
VTABLE_SIZE = 0x28


def u64(value):
    return (value & ((1 << 64) - 1)).to_bytes(8, 'little').hex()


def case(cid, flags, shared_present=True, register_result=0):
    """One setup; the flag query writes flags (8 bytes) into its out-record."""
    buffers = {'shared': {'size': SHARED_SIZE}, 'shared_vt': {'size': VTABLE_SIZE}}
    memory = [
        {'addr': f'buf:shared_vt+{0x20}', 'guest': FLAG_QUERY},
        {'addr': 'buf:shared', 'pointer': 'shared_vt'},
    ]
    stubs = []
    if shared_present:
        memory.append({'addr': SHARED_GLOBAL, 'pointer': 'shared'})
    else:
        memory.append({'addr': SHARED_GLOBAL, 'bytes': u64(0)})
        stubs.append({'address': CREATE_SHARED, 'argc': 0, 'ret': 'buf:shared'})
    stubs.append({'address': FLAG_QUERY, 'argc': 3, 'writes': [{'arg': 0, 'offset': 0, 'bytes': u64(flags)}]})
    if (flags & 0x20) == 0:
        stubs.append({'address': FATAL, 'argc': 3})
    stubs.append({'address': REGISTER_EXIT, 'argc': 3, 'ret': hex(register_result)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {}, 'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('flag_bit_set_shared_present', flags=0x20),
    case('flag_bit_set_creates_shared', flags=0x20, shared_present=False),
    case('flag_bit_clear_reports_fatal', flags=0x0),
    case('other_bits_only_reports_fatal', flags=0x40),
    case('all_bits_set', flags=0xffffffffffffffff),
    case('registration_returns_value', flags=0x20, register_result=0x7),
    case('creates_and_reports', flags=0x1f, shared_present=False, register_result=0xffffffff),
]


def main():
    """Write one JSON case per flag shape to the requested directory."""
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    os.makedirs(sys.argv[1], exist_ok=True)
    for fixture in CASES:
        with open(os.path.join(sys.argv[1], fixture['id'] + '.json'), 'w') as stream:
            json.dump(fixture, stream, indent=1)
    print(f'{len(CASES)} cases written to {sys.argv[1]}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
