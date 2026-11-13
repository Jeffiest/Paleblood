#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic entry lists for bb_misc_set_keyed_entry (0x01255c70), for tools/verify.py run.

usage: set_keyed_entry_cases.py OUT_DIR

The list (rdi) holds the first entry at +8 and one past the last at +0x10; entries are 56 bytes (the key at +0,
the counted object at +8, then 40 bytes of values). Objects have a vtable pointer and a plain count at +8; the last
holder to drop one calls its destroy slot (a stub). With an object the function replaces an entry's object or
appends a new entry through 0x02d2de00 (a stub that gets the whole built entry compared); without one it removes
the entry by moving the last entry over it. A removal of a key that is absent reaches the fatal report 0x024b55b0.
Stack arguments: the flag bytes pointer, the payload, the slot and the slot byte.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01255c70'
DESTROY = '0x00400020'
APPEND = '0x02d2de00'
FATAL = '0x024b55b0'
ENTRY = 0x38
MASK64 = (1 << 64) - 1

# The branch at 0x01255da0 sends an index that is at least the entry count to the index error; its caller has
# already excluded that (the index is below the count minus one there).
UNREACHABLE = {
    '0x01255db0': ('taken', 'the index is below the count minus one here, so it is below the count too'),
}


def u32(value):
    """Four little-endian bytes of a value, as hex."""
    return struct.pack('<I', value & 0xffffffff).hex()


def u64(value):
    """Eight little-endian bytes of a value, as hex."""
    return struct.pack('<Q', value & MASK64).hex()


def values_bytes(seed):
    """Forty bytes of entry values, as hex."""
    return bytes((seed * 31 + index * 7) & 0xff for index in range(0x28)).hex()


def case(cid, key, entries=(), refs=None, obj='new', scale=True, flags=True, slot=2, stubs=(), extra=(), nonzero_new=1):
    """One call. entries lists (key, object name or None); refs maps object names to their counts."""
    refs = refs or {}
    buffers = {'tbl': {'size': 0x20}, 'objvt': {'size': 0x10},
               'ents': {'size': 0x100, 'bytes': ''.join(u32(k) + 'ee' * 4 + '00' * 8 + values_bytes(i + k)
                                                         for i, (k, _) in enumerate(entries)) or '00'},
               'scale': {'size': 0x10, 'bytes': struct.pack('<2f', 0.375, -2.5).hex()},
               'flags': {'size': 0x10, 'bytes': '0b0c'}}
    memory = [{'addr': 'buf:objvt+0x0', 'guest': DESTROY},
              {'addr': 'buf:tbl+0x8', 'pointer': 'ents'},
              {'addr': 'buf:tbl+0x10', 'pointer': f'ents+{len(entries) * ENTRY:#x}'}]
    for name in set(n for _, n in entries if n) | set(refs) | ({'new'} if obj == 'new' else set()):
        buffers[name] = {'size': 0x10}
        memory += [{'addr': f'buf:{name}+0x0', 'pointer': 'objvt'},
                   {'addr': f'buf:{name}+0x8', 'bytes': u32(refs.get(name, 1))}]
    for index, (_, name) in enumerate(entries):
        if name:
            memory.append({'addr': f'buf:ents+{index * ENTRY + 8:#x}', 'pointer': name})
    args = {'rdi': 'buf:tbl', 'rsi': hex(key), 'rdx': f'buf:{obj}' if obj else '0x0', 'rcx': '0x11223344',
            'r8': '0x55667788', 'r9': 'buf:scale' if scale else '0x0'}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': args,
            'stack': ['buf:flags' if flags else '0x0', '0x1122334455667788', hex(slot & 0xffffffff), '0x5a'],
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': list(stubs)}


def destroy():
    """A stub entry for one destroy call."""
    return {'address': DESTROY, 'argc': 1}


def append(takes_object=False):
    """A stub entry for the append of a built entry: it compares the bytes the function wrote into it."""
    pieces = [{'arg': 1, 'offset': 0, 'size': 4}, {'arg': 1, 'offset': 8, 'size': 22},
              {'arg': 1, 'offset': 0x20, 'size': 13}, {'arg': 1, 'offset': 0x30, 'size': 5}]
    stub = {'address': APPEND, 'argc': 2, 'argi': [0, 1], 'argmem': pieces}
    if takes_object:
        # The callee moves the object out of the entry, leaving null behind.
        stub['writes'] = [{'arg': 1, 'offset': 8, 'bytes': '00' * 8}]
    return stub


def fatal():
    """A stub entry for the fatal report."""
    return {'address': FATAL, 'argc': 3}


TWO = [(5, 'a'), (9, 'b')]
THREE = [(5, 'a'), (9, 'b'), (12, 'c')]

CASES = [
    case('key_above_limit', 0x80, TWO, refs={'a': 1, 'b': 1}),
    case('key_at_limit_absent_appends', 0x7f, TWO, refs={'a': 1, 'b': 1, 'new': 2}, stubs=[append()]),
    case('same_object_nothing', 5, TWO, refs={'a': 3, 'b': 1}, obj='a'),
    case('replace_object_old_shared', 9, TWO, refs={'a': 3, 'b': 2, 'new': 4}),
    case('replace_object_old_last_holder', 5, TWO, refs={'a': 1, 'b': 1, 'new': 1}, stubs=[destroy()]),
    case('replace_object_old_null', 9, [(5, 'a'), (9, None)], refs={'a': 1, 'new': 1}),
    case('append_all_options', 3, TWO, refs={'new': 2}, stubs=[append()]),
    case('append_callee_takes_object', 3, TWO, refs={'new': 2}, stubs=[append(takes_object=True)]),
    case('append_last_holder_destroys', 3, [], refs={'new': 0}, stubs=[append(), destroy()]),
    case('append_no_options', 3, TWO, refs={'new': 5}, scale=False, flags=False, slot=-1, stubs=[append()]),
    case('append_zero_slot', 3, TWO, refs={'new': 5}, scale=False, slot=0, stubs=[append()]),
    case('remove_first_of_three', 5, THREE, refs={'a': 2, 'b': 2, 'c': 2}, obj=None),
    case('remove_first_old_last_holder', 5, TWO, refs={'a': 1, 'b': 3}, obj=None,
         stubs=[destroy()]),
    case('remove_first_last_pops_destroy', 5, TWO, refs={'a': 2, 'b': 0}, obj=None, stubs=[destroy()]),
    case('remove_with_old_null', 5, [(5, None), (9, 'b')], refs={'b': 2}, obj=None),
    case('remove_when_last_null', 5, [(5, 'a'), (9, None)], refs={'a': 2}, obj=None),
    case('remove_same_object_in_both', 5, [(5, 'a'), (9, 'a')], refs={'a': 3}, obj=None),
    case('remove_last_entry', 9, TWO, refs={'a': 2, 'b': 3}, obj=None),
    case('remove_only_entry', 5, [(5, 'a')], refs={'a': 1}, obj=None, stubs=[destroy()]),
    case('remove_absent_reports_and_pops', 6, TWO, refs={'a': 2, 'b': 2}, obj=None, stubs=[fatal()]),
    case('remove_absent_from_empty', 6, [], obj=None, stubs=[fatal()]),
]


def main():
    """Write deterministic synthetic lists to the requested directory."""
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
