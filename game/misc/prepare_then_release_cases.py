#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_prepare_then_release (0x00410ee0), for tools/verify.py run.

usage: prepare_then_release_cases.py OUT_DIR

The object is prepared by 0x00410f10, then the scratch service's release slot (0x68) takes it back
and its result is the function's result (a tail call). Both callees are scripted as stubs.
"""
import json
import os
import sys

ADDRESS = '0x00410ee0'
PREPARE = '0x00410f10'
SERVICE_RELEASE = '0x00400300'
SCRATCH_GLOBAL = '0x057e7320'


def case(cid, result):
    b = {'object': {'size': 0x20}, 'service': {'size': 8}, 'service_vt': {'size': 0x78}}
    m = [{'addr': 'buf:service', 'pointer': 'service_vt'},
         {'addr': 'buf:service_vt+104', 'guest': SERVICE_RELEASE},
         {'addr': SCRATCH_GLOBAL, 'pointer': 'service'}]
    stubs = [{'address': PREPARE, 'argc': 1, 'argi': [0]},
             {'address': SERVICE_RELEASE, 'argc': 2, 'argi': [0, 1], 'ret': hex(result)}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:object'}, 'buffers': b, 'memory': m, 'stubs': stubs, 'imports': []}


CASES = [
    case('release_result_zero', result=0),
    case('release_result_high_word', result=0x8000000100000002),
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
