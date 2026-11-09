#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic chains for the leaf flag read (0x01e50c20): no link from the owner, a link without a leaf,
and a leaf whose flag byte is zero, set, has its high bit set, or is all ones. The owner's find call is
scripted once for the existence test and once for the leaf, in that order."""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01e50c20'
FIND_SLOT = '0x00400400'
SLOT_VTABLE_OFFSET = 0x168
LEAF_FLAG_OFFSET = 0x140
MASK64 = (1 << 64) - 1


def u64(value):
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, link=True, leaf=True, flag=0x00):
    """A holder whose owner's find call returns the link (or null); the link points at the leaf (or null)."""
    buffers = {'holder': {'size': 16, 'bytes': '00' * 16},
               'owner': {'size': 8, 'bytes': '00' * 8},
               'owner_vt': {'size': SLOT_VTABLE_OFFSET + 8, 'bytes': '00' * (SLOT_VTABLE_OFFSET + 8)},
               'slot': {'size': 16, 'bytes': '00' * 16}}
    memory = [
        {'addr': 'buf:holder+8', 'pointer': 'owner'},
        {'addr': 'buf:owner', 'pointer': 'owner_vt'},
        {'addr': f'buf:owner_vt+{SLOT_VTABLE_OFFSET}', 'guest': FIND_SLOT},
    ]
    if leaf:
        buffers['leaf'] = {'size': LEAF_FLAG_OFFSET + 8, 'bytes': '00' * (LEAF_FLAG_OFFSET + 8)}
        memory.append({'addr': f'buf:leaf+{LEAF_FLAG_OFFSET}', 'bytes': f'{flag:02x}'})
        memory.append({'addr': 'buf:slot+8', 'pointer': 'leaf'})
    else:
        memory.append({'addr': 'buf:slot+8', 'bytes': '00' * 8})
    if link:
        first = {'address': FIND_SLOT, 'argc': 1, 'ret': 'buf:slot'}
        stubs = [first, dict(first)]
    else:
        stubs = [{'address': FIND_SLOT, 'argc': 1, 'ret': 0}]
    return {
        'schema': 1,
        'address': ADDRESS,
        'id': cid,
        'returns': 'i32',
        'args': {'rdi': 'buf:holder'},
        'buffers': buffers,
        'memory': memory,
        'imports': [],
        'stubs': stubs,
    }


CASES = [
    case('owner_has_no_link', link=False),
    case('link_without_leaf', leaf=False),
    case('leaf_flag_zero', flag=0x00),
    case('leaf_flag_set', flag=0x5a),
    case('leaf_flag_high_bit', flag=0x80),
    case('leaf_flag_all_bits', flag=0xff),
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
    raise SystemExit(main())
