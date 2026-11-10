#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_init_stream_guards_58b9d5c (0x015d6610), for tools/verify.py run.

usage: init_stream_guards_58b9d5c_cases.py OUT_DIR

The function makes four library calls in a fixed order: construct the narrow stream guard, register
its destroy function, construct the wide stream guard, register its destroy function. The library
functions are stubbed, so each case checks the order of the calls and the arguments of each. The cases
differ in what the registrations and constructors return (which must be ignored), in the old bytes of
the two guards (which the function itself must not touch) and in the argument registers (the function
takes no arguments).
"""
import json
import os
import sys

ADDRESS = '0x015d6610'
CONSTRUCT_GUARD = '0x02fbf348'
CONSTRUCT_WIDE_GUARD = '0x02fbf358'
REGISTER_AT_EXIT = '0x02fbe548'
GUARDS = 0x058b9d5c
GUARD_BYTES = 4
GARBAGE = {'rdi': '0x5a5a5a5a5a5a5a5a', 'rsi': '0x1111111111111111', 'rdx': '0xffffffffffffffff',
           'rcx': '0x0', 'r8': '0x8080808080808080', 'r9': '0x7f'}


def case(cid, constructed=0, registered=0, wide_constructed=0, wide_registered=None,
         old='00' * GUARD_BYTES, registers=None):
    """One call; the four library calls, in the order they must be made, return the given values."""
    if wide_registered is None:
        wide_registered = registered
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': dict(GARBAGE if registers is None else registers), 'buffers': {}, 'imports': [],
            'memory': [{'addr': hex(GUARDS), 'bytes': old}],
            'stubs': [{'address': CONSTRUCT_GUARD, 'argc': 1, 'ret': hex(constructed)},
                      {'address': REGISTER_AT_EXIT, 'argc': 3, 'ret': hex(registered)},
                      {'address': CONSTRUCT_WIDE_GUARD, 'argc': 1, 'ret': hex(wide_constructed)},
                      {'address': REGISTER_AT_EXIT, 'argc': 3, 'ret': hex(wide_registered)}]}


CASES = [
    case('all_return_zero'),
    case('registration_fails', registered=0xffffffffffffffff),
    case('registration_returns_one', registered=1),
    case('constructors_return_values', constructed=0x1234, wide_constructed=0x5678),
    case('all_return_different_values', constructed=0x7001, registered=0x7002, wide_constructed=0x7003,
         wide_registered=0x7004),
    case('only_first_registration_fails', registered=0xffffffffffffffff, wide_registered=0),
    case('only_second_registration_fails', registered=0, wide_registered=0xffffffffffffffff),
    case('old_guard_bytes', old='a1b2c3d4'),
    case('guards_all_ones', old='ff' * GUARD_BYTES, registered=0x80000000),
    case('zero_registers', registers={k: '0x0' for k in GARBAGE}),
]


def main():
    """Write one JSON case per call shape to the requested directory."""
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
