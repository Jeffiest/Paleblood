#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_construct_chain_pair (0x018ae5f0), for tools/verify.py run.

usage: construct_chain_pair_cases.py OUT_DIR

The owner gets its vtable, then two chain lists. Each list's allocator (the shared one, global 0x05940438)
is checked by its info slot (0x20): an invalid one is reported through the fatal report, which returns. Each
sentinel is a node from the allocator's allocate slot (0x58), linked to itself. A failed node allocation
throws through the thread's throw helper (no return) when the thread flag is set. The flag-clear case
(fatal report, then a store through the null node) is declared in UNREACHABLE.
"""
import json
import os
import struct
import sys

ADDRESS = '0x018ae5f0'
INFO = '0x00400300'        # guest entry of the allocator's info slot
ALLOCATE = '0x004000a0'    # guest entry of the allocator's allocate slot
FATAL = '0x024b55b0'
THROW = '0x02fbe978'
SHARED_ALLOCATOR = '0x05940438'
FLAG_OFFSET_SLOT = '0x057e4318'
THROW_OFFSET_SLOT = '0x057e4320'
TLS_BELOW = 0x20              # the thread pointer; the flag sits at +0x28 and the throw slot at +0x30
FLAG_OFFSET = 0x8
THROW_OFFSET = 0x10
NODE_SIZE = 0x18
VALID = 0x20                  # the allocator info flag that says the allocator is valid

UNREACHABLE = {
    '0x018ae69c': ('fallthrough', 'fatal error 0x024b55b0 then a store through null at 0x018ae6b7 when the first node allocation fails with the thread flag clear'),
    '0x018ae734': ('fallthrough', 'fatal error 0x024b55b0 then a store through null at 0x018ae74b when the second node allocation fails with the thread flag clear'),
}


def case(cid, info_ok=(True, True), alloc_ok=(True, True), flag=1):
    """info_ok: validity of the allocator at each of the two checks; alloc_ok: whether each node allocation
    succeeds (a failure ends the case through the throw helper, so the flag is set)."""
    buffers = {'owner': {'size': 0x58, 'bytes': 'aa' * 0x58},
               'alloc': {'size': 8}, 'alloc_vt': {'size': 0x78},
               'node1': {'size': NODE_SIZE}, 'node2': {'size': NODE_SIZE},
               'tls': {'size': TLS_BELOW + 0x20, 'bytes': '00' * (TLS_BELOW + 0x20)}}
    memory = [{'addr': f'buf:tls+{TLS_BELOW}', 'pointer': f'tls+{TLS_BELOW}'},
              {'addr': f'buf:tls+{TLS_BELOW + FLAG_OFFSET}', 'bytes': struct.pack('<I', flag).hex()},
              {'addr': FLAG_OFFSET_SLOT, 'bytes': struct.pack('<q', FLAG_OFFSET).hex()},
              {'addr': THROW_OFFSET_SLOT, 'bytes': struct.pack('<q', THROW_OFFSET).hex()},
              {'addr': SHARED_ALLOCATOR, 'pointer': 'alloc'},
              {'addr': 'buf:alloc', 'pointer': 'alloc_vt'},
              {'addr': 'buf:alloc_vt+32', 'guest': INFO},
              {'addr': 'buf:alloc_vt+88', 'guest': ALLOCATE}]
    stubs = []
    nodes = ['node1', 'node2']
    for index in range(2):
        stubs.append({'address': INFO, 'argc': 3, 'argi': [1, 2],
                      'writes': [{'arg': 0, 'offset': 0, 'bytes': format(VALID if info_ok[index] else 0, '02x')}]})
        if not info_ok[index]:
            stubs.append({'address': FATAL, 'argc': 3, 'argi': [0, 1, 2]})
        stubs.append({'address': ALLOCATE, 'argc': 3, 'argi': [0, 1, 2],
                      'ret': f'buf:{nodes[index]}' if alloc_ok[index] else 0})
        if not alloc_ok[index]:
            stubs.append({'address': THROW, 'argc': 2, 'argi': [0, 1], 'noreturn': True})
            break
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:owner'}, 'buffers': buffers, 'memory': memory,
            'gs': f'buf:tls+{TLS_BELOW}', 'stubs': stubs, 'imports': []}


CASES = [
    case('all_valid', info_ok=(True, True), alloc_ok=(True, True)),
    case('first_info_invalid_reported', info_ok=(False, True), alloc_ok=(True, True)),
    case('second_info_invalid_reported', info_ok=(True, False), alloc_ok=(True, True)),
    case('both_info_invalid_reported', info_ok=(False, False), alloc_ok=(True, True)),
    case('first_node_throws', info_ok=(True, True), alloc_ok=(False, True), flag=1),
    case('second_node_throws', info_ok=(True, True), alloc_ok=(True, False), flag=1),
    case('first_info_invalid_second_node_throws', info_ok=(False, True), alloc_ok=(True, False), flag=1),
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
