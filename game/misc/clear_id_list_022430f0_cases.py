#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic id lists for misc_clear_id_list_022430f0 (0x022430f0), for tools/verify.py run.

usage: clear_id_list_022430f0_cases.py OUT_DIR

The list holds its first id at +0x10 and its end at +0x18; the 32-bit ids sit in a buffer. A non-empty
list hands each id to the id handler (a stub) with the world's context, which is reached from the physics
manager global at 0x0593d700 through its holder (+0x28) and world (+0x8, context at +0x5d0). The list's
end is then set to its first id. An empty list must not read the manager, so its case has no manager.
Covers an empty list, one id, several ids including zero, and all-ones and high-bit ids.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x022430f0'
MANAGER_GLOBAL = '0x0593d700'
HANDLE = '0x00f24b30'        # the id handler, called directly; stubbed
CONTEXT_OFFSET = 0x5d0
MASK32 = (1 << 32) - 1


def case(cid, ids=()):
    """One call on a list of the given ids; the handler is stubbed once per id, in order."""
    count = len(ids)
    data = b''.join((value & MASK32).to_bytes(4, 'little') for value in ids)
    buffers = {'list': {'size': 0x20}, 'ids': {'size': max(len(data), 4), 'bytes': data.hex()}}
    memory = [{'addr': 'buf:list+16', 'pointer': 'ids'},
              {'addr': 'buf:list+24', 'pointer': f'ids+{4 * count}'}]
    if count:
        buffers.update({'mgr': {'size': 0x30}, 'holder': {'size': 0x10}, 'world': {'size': 0x600},
                        'ctx': {'size': 0x10}})
        memory += [{'addr': MANAGER_GLOBAL, 'pointer': 'mgr'},
                   {'addr': 'buf:mgr+40', 'pointer': 'holder'},
                   {'addr': 'buf:holder+8', 'pointer': 'world'},
                   {'addr': f'buf:world+{CONTEXT_OFFSET:#x}', 'pointer': 'ctx'}]
    stubs = [{'address': HANDLE, 'argc': 2} for _ in range(count)]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:list'}, 'buffers': buffers, 'memory': memory, 'imports': [],
            'stubs': stubs}


CASES = [
    case('empty_list'),
    case('one_id', ids=[0x7]),
    case('three_ids_with_zero', ids=[0x1, 0xdeadbeef, 0]),
    case('two_all_ones_ids', ids=[0xffffffff, 0xffffffff]),
    case('two_high_bit_ids', ids=[0x80000000, 0x12345678]),
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
