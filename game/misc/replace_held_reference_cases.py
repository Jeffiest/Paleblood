#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_replace_held_reference (0x00418d90), for tools/verify.py run.

usage: replace_held_reference_cases.py OUT_DIR

When the owner (+0x1c0) holds an object it is released (0x0045a510) first, and the result of that release is
the function's result. A new object gets its 32-bit count (+0x08) raised by one and becomes the held object.
When nothing was held the original never writes RAX, so those cases compare no return value.
"""
import json
import struct
import sys
from pathlib import Path

ADDRESS = '0x00418d90'
RELEASE = '0x0045a510'
OWNER_SIZE = 0x1c8
HELD_OFFSET = 0x1c0
OBJECT_SIZE = 0x10
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1


def case(cid, held, new, release_ret=0x1234):
    """held: True when the owner holds an object; new: the new object's count, or None for no new object."""
    buffers = {'owner': {'size': OWNER_SIZE, 'bytes': 'c3' * OWNER_SIZE}}
    memory = []
    stubs = []
    if held:
        buffers['old'] = {'size': OBJECT_SIZE, 'bytes': 'e1' * OBJECT_SIZE}
        memory.append({'addr': 'buf:owner+' + str(HELD_OFFSET), 'pointer': 'old'})
        stubs.append({'address': RELEASE, 'argc': 1, 'argi': [0], 'ret': hex(release_ret & MASK64)})
    else:
        memory.append({'addr': 'buf:owner+' + str(HELD_OFFSET), 'bytes': '00' * 8})
    new_bytes = '7e' * 8 + (struct.pack('<I', new & MASK32).hex() if new is not None else '00' * 4) + '7e' * 4
    buffers['new'] = {'size': OBJECT_SIZE, 'bytes': new_bytes}
    # Without a held object the original never writes RAX, so such cases compare no return value.
    returns = 'i64' if held else 'void'
    args = {'rdi': 'buf:owner', 'rsi': 'buf:new' if new is not None else '0x0'}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': returns, 'args': args,
            'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('nothing_held_new_present', held=False, new=0x20),
    case('nothing_held_new_null', held=False, new=None),
    case('held_new_null_returns_release', held=True, new=None, release_ret=0x1234),
    case('held_new_present_count_raised', held=True, new=0x20, release_ret=0xabcdef0012345678),
    case('held_new_count_wraps', held=True, new=0xffffffff, release_ret=0x7),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print('usage: replace_held_reference_cases.py OUT_DIR', file=sys.stderr)
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
