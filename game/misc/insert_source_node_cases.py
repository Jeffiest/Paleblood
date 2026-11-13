#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_insert_source_node (0x013bc2f0), for tools/verify.py run.

usage: insert_source_node_cases.py OUT_DIR

The owner holds the held node at +0x20. The allocation stub returns a 0xb0-byte node or refuses; the held
node carries a vtable whose slot 0 (release) is a real game entry, and the object the lookup stub returns
carries a vtable whose slot 0x70 (visit) is another. The insertion stub returns a value whose low byte
decides the branch. The held node is released and the visit result returned only when the insertion reports
failure. Covers a refused allocation, a successful insertion, and a failed insertion that visits and
releases. The branch where the held node is already cleared after a failed insertion cannot be reached: the
insertion routine never writes the owner's held slot, so that outcome is declared unreachable.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x013bc2f0'
FIRST_CALL = '0x02d9f4e0'
ALLOCATE = '0x0247c4e0'
FILL = '0x013be980'
INSERT = '0x013bc380'
LOOKUP = '0x0247b720'
RELEASE = '0x004000a0'        # a real game entry the held node's release slot points at
VISIT = '0x00400300'          # a real game entry the lookup object's visit slot points at
NODE_SIZE = 0xb0
MASK64 = (1 << 64) - 1


def word(value):
    """Encode a complete eight-byte value."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, refuse=False, insert_result=None):
    """refuse: the allocation returns null; insert_result: what the insertion stub returns (its low byte decides)."""
    buffers = {'owner': {'size': 0x28, 'bytes': '00' * 0x28},
               'source': {'size': 0x10, 'bytes': '1f' * 0x10},
               'node': {'size': NODE_SIZE, 'bytes': '5c' * NODE_SIZE},
               'held_vt': {'size': 0x78, 'bytes': '00' * 0x78},
               'other': {'size': 0x10, 'bytes': '00' * 0x10},
               'other_vt': {'size': 0x78, 'bytes': '00' * 0x78}}
    memory = [{'addr': 'buf:node+0', 'pointer': 'held_vt'},
              {'addr': 'buf:held_vt+0', 'guest': RELEASE},
              {'addr': 'buf:other+0', 'pointer': 'other_vt'},
              {'addr': 'buf:other_vt+112', 'guest': VISIT}]
    stubs = [{'address': FIRST_CALL, 'argc': 2, 'argi': [0, 1]}]
    if refuse:
        stubs.append({'address': ALLOCATE, 'argc': 3, 'argi': [0, 1, 2], 'ret': 0})
    else:
        stubs.append({'address': ALLOCATE, 'argc': 3, 'argi': [0, 1, 2], 'ret': 'buf:node'})
        stubs.append({'address': FILL, 'argc': 2, 'argi': [0, 1]})
        stubs.append({'address': INSERT, 'argc': 2, 'argi': [0, 1], 'ret': insert_result})
        if insert_result is not None and (insert_result & 0xff) == 0:
            stubs.append({'address': LOOKUP, 'argc': 1, 'argi': [0], 'ret': 'buf:other'})
            stubs.append({'address': RELEASE, 'argc': 1, 'argi': [0]})
            stubs.append({'address': VISIT, 'argc': 2, 'argi': [0, 1], 'ret': 0x9001})
    args = {'rdi': 'buf:owner', 'rsi': 'buf:source'}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': args,
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('allocation_refused', refuse=True),
    case('insert_succeeds', insert_result=1),
    case('insert_fails_visits_and_releases', insert_result=0x100),
]

UNREACHABLE = {
    '0x013bc344': ('taken', 'the held slot is already clear after a failed insertion: the insertion routine never writes the owner at +0x20, which only this routine sets'),
}


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
