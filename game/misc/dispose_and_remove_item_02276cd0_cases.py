#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_dispose_and_remove_item_02276cd0 (0x02276cd0), for tools/verify.py run.

usage: dispose_and_remove_item_02276cd0_cases.py OUT_DIR

Same routine as misc_dispose_and_remove_item (0x0225b670): the item's dispose slot (+0x08) is a scripted stub;
the manager comes from the thread's cache (a block at the thread pointer plus the offset stored at 0x057e44a8,
its manager at +0x10, zeroed once taken) or from the lookup 0x0247b720; the manager's remove slot (+0x70) is a
stub whose result is the function's result. Covers a cached manager, a manager from the lookup, and the remove
results zero and all ones. A null item (the dispose call already dereferenced it) and a null lookup (the fatal
report, then a load through null) cannot reach the remove call and are declared unreachable.
"""
import json
import os
import struct
import sys

ADDRESS = '0x02276cd0'
DISPOSE = '0x00400020'
REMOVE = '0x004009f0'
FIND = '0x0247b720'
THREAD_OFFSET_SLOT = '0x057e44a8'
TLS_BELOW = 0x20

UNREACHABLE = {
    '0x02276ce3': ('taken', 'null item: the dispose call at 0x02276cdd already dereferenced it'),
    '0x02276d14': ('fallthrough', 'fatal error 0x024b55b0 then a load through the null manager at 0x02276d33'),
}


def case(cid, cached, remove_ret):
    b = {'item': {'size': 16}, 'ivt': {'size': 0x10}, 'manager': {'size': 16},
         'mvt': {'size': 0x78}, 'tls': {'size': 0x30}}
    m = [{'addr': 'buf:item', 'pointer': 'ivt'},
         {'addr': 'buf:ivt+8', 'guest': DISPOSE},
         {'addr': 'buf:manager', 'pointer': 'mvt'},
         {'addr': 'buf:mvt+112', 'guest': REMOVE},
         {'addr': f'buf:tls+{TLS_BELOW:#x}', 'pointer': f'tls+{TLS_BELOW:#x}'},
         {'addr': THREAD_OFFSET_SLOT, 'bytes': struct.pack('<q', -TLS_BELOW).hex()}]
    stubs = [{'address': DISPOSE, 'argc': 1},
             {'address': REMOVE, 'argc': 2, 'ret': hex(remove_ret)}]
    if cached:
        m.append({'addr': 'buf:tls+16', 'pointer': 'manager'})
    else:
        m.append({'addr': 'buf:tls+16', 'bytes': '00' * 8})
        stubs.insert(1, {'address': FIND, 'argc': 1, 'ret': 'buf:manager'})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:item'}, 'buffers': b, 'memory': m,
            'gs': f'buf:tls+{TLS_BELOW}', 'stubs': stubs, 'imports': []}


CASES = [
    case('cached_manager', True, 0x1234),
    case('cached_manager_zero_result', True, 0),
    case('lookup_manager', False, 0x5678),
    case('lookup_manager_all_ones', False, 0xffffffffffffffff),
]


def main():
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
