#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_assign_reference (0x0225b870), for tools/verify.py run.

usage: assign_reference_cases.py OUT_DIR

A slot (dst) takes the object a source slot holds. The same object on both sides changes nothing;
otherwise the old object is released (destroyed on its last reference, through stub 0x00400020;
a count not above zero goes to the fatal report, stub 0x024b55b0) and the slot is cleared, then the
new object is stored and retained when it is not null. The result is the slot's address, RAX.
Covers the same object, an empty old slot, an empty new slot, both empty, old counts above one,
the last reference, a zero count and a negative count.
"""
import json
import os
import struct
import sys

ADDRESS = '0x0225b870'
DESTROY = '0x00400020'
FATAL = '0x024b55b0'
MARKER = 'c3' * 4


def obj(name, count, b, m):
    """A counted object buffer named name: vtable at +0 (destroy in slot 0), count at +8."""
    b[name] = {'size': 16}
    b[name + '_vt'] = {'size': 8}
    m += [{'addr': f'buf:{name}', 'pointer': name + '_vt'},
          {'addr': f'buf:{name}_vt', 'guest': DESTROY},
          {'addr': f'buf:{name}+8', 'bytes': struct.pack('<i', count).hex()},
          {'addr': f'buf:{name}+12', 'bytes': MARKER}]


def case(cid, old, new, same=False):
    """old and new: the count of the object each slot holds, or None for an empty slot.
    same: the source holds the old object (no change)."""
    b = {'slot': {'size': 8}, 'source': {'size': 8}}
    m = []
    stubs = []
    if old is None:
        m.append({'addr': 'buf:slot', 'bytes': '00' * 8})
    else:
        obj('old', old, b, m)
        m.append({'addr': 'buf:slot', 'pointer': 'old'})
    if same:
        m.append({'addr': 'buf:source', 'pointer': 'old'})
    elif new is None:
        m.append({'addr': 'buf:source', 'bytes': '00' * 8})
    else:
        obj('new', new, b, m)
        m.append({'addr': 'buf:source', 'pointer': 'new'})
    if old is not None and not same:
        if old == 1:
            stubs.append({'address': DESTROY, 'argc': 1})
        elif old <= 0:
            stubs.append({'address': FATAL, 'argc': 3, 'ret': '0x0'})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:slot', 'rsi': 'buf:source'}, 'buffers': b, 'memory': m,
            'stubs': stubs, 'imports': []}


CASES = [
    case('same_object', 3, 3, same=True),
    case('empty_old_new_object', None, 2),
    case('old_count_above_one', 2, 4),
    case('old_empty_new_empty', None, None),
    case('old_object_new_empty', 3, None),
    case('old_last_reference', 1, 2),
    case('old_zero_count_fatal', 0, 5),
    case('old_negative_count_fatal', -2, None),
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
