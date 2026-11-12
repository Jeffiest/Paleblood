#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_run_locked_set_operation (0x004182c0), for tools/verify.py run.

usage: run_locked_set_operation_cases.py OUT_DIR

The lock (0x02fbe598) is taken, the set operation (a scripted stub) runs on the set region with the
key and the count, and the lock is released by the tail call (0x02fbe5a8), whose result the function
returns. The set operation gets the count slot as its third argument.
"""
import json
import sys
from pathlib import Path

ADDRESS = '0x004182c0'
LOCK, UNLOCK = '0x02fbe598', '0x02fbe5a8'
SET_OPERATION = '0x0278ddc0'
OBJECT_SIZE = 0x200
KEY_BYTES = '3c3d3e3f'


def case(cid, unlock_result):
    buffers = {'object': {'size': OBJECT_SIZE, 'bytes': '00' * OBJECT_SIZE},
               'key': {'size': 8, 'bytes': KEY_BYTES + '00' * 4}}
    stubs = [{'address': LOCK, 'argc': 1, 'argi': [0]},
             {'address': SET_OPERATION, 'argc': 3, 'argi': [0, 1, 2]},
             {'address': UNLOCK, 'argc': 1, 'argi': [0], 'ret': unlock_result}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i32',
            'args': {'rdi': 'buf:object', 'rsi': 'buf:key'}, 'buffers': buffers, 'memory': [],
            'stubs': stubs, 'imports': []}


CASES = [
    case('release_returns_zero', unlock_result=0),
    case('release_returns_three', unlock_result=3),
    case('release_returns_minus_two', unlock_result=0xfffffffe),
    case('release_returns_max_positive', unlock_result=0x7fffffff),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print('usage: run_locked_set_operation_cases.py OUT_DIR', file=sys.stderr)
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
