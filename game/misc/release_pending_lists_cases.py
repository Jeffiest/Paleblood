#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic releases for bb_misc_release_pending_lists (0x00415120): no lists, an entry whose
references survive or drop to its last one, entries with no, one or two elements, callbacks whose
object is present or null, and items whose object is present or null. Tagged references carry their
tag bits. The scratch service's release (slot 0x68) and the item release (0x0045a4c0) are scripted
stubs, the callback's slot 0x18 a third; each is listed in the order the original calls it.

usage: release_pending_lists_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x00415120'
ITEM_RELEASE = '0x0045a4c0'
SLOT_FUNCTION = '0x00400020'        # a real game entry the callback object's slot 0x18 points at
SCRATCH_RELEASE = '0x00400300'      # a real game entry the scratch service's slot 0x68 points at
SCRATCH_GLOBAL = '0x057e7320'
REF_SIZE = 0x10
ENTRY_SIZE = 0x30
ELEMENT_SIZE = 0x10
ITEM_SIZE = 0x20
CALLBACK_SIZE = 0x20
LISTS_SIZE = 0x40
CHAIN_NODE_SIZE = 0x38
TAG = 1


def tagged(name):
    """A pointer to a buffer with its low tag bit set: the buffer's address plus one."""
    return f'{name}+{TAG}'


class Builder:
    """Collects the buffers, memory writes and stubs of one case, in the order the original calls."""

    def __init__(self):
        self.buffers = {'lists': {'size': LISTS_SIZE, 'bytes': '00' * LISTS_SIZE},
                        'scratch': {'size': 8},
                        'scratch_vt': {'size': 0x78}}
        self.memory = [{'addr': SCRATCH_GLOBAL, 'pointer': 'scratch'},
                       {'addr': 'buf:scratch', 'pointer': 'scratch_vt'},
                       {'addr': 'buf:scratch_vt+104', 'guest': SCRATCH_RELEASE}]
        self.stubs = []

    def ref(self, name, count):
        """A reference-counted object whose count is the given value."""
        self.buffers[name] = {'size': REF_SIZE, 'bytes': ('00' * 8 + struct.pack('<i', count).hex()).ljust(
            REF_SIZE * 2, '0')}

    def scratch_call(self):
        """One call of the scratch service's release."""
        self.stubs.append({'address': SCRATCH_RELEASE, 'argc': 2})

    def entry(self, index, ref_count, elements):
        """An entry with its own reference and its elements, each a reference with a count."""
        name = f'entry{index}'
        self.ref(f'{name}_ref', ref_count)
        for j, count in enumerate(elements):
            self.ref(f'{name}_el{j}', count)
        self.buffers[f'{name}_elems'] = {'size': max(1, len(elements)) * ELEMENT_SIZE}
        self.buffers[name] = {'size': ENTRY_SIZE}
        self.memory.append({'addr': f'buf:{name}+0', 'pointer': f'{name}_elems'})
        self.memory.append({'addr': f'buf:{name}+8', 'bytes': struct.pack('<Q', len(elements)).hex()})
        self.memory.append({'addr': f'buf:{name}+24', 'pointer': tagged(f'{name}_ref')})
        for j in range(len(elements)):
            self.memory.append({'addr': f'buf:{name}_elems+{j * ELEMENT_SIZE}',
                                'pointer': tagged(f'{name}_el{j}')})
        # Calls in the original's order: the entry's own reference, the elements from last to first,
        # then the element array.
        if ref_count == 1:
            self.scratch_call()
        for j in reversed(range(len(elements))):
            if elements[j] == 1:
                self.scratch_call()
        self.scratch_call()
        return name

    def callback(self, index, argument, object_present):
        """A callback whose object (with a slot 0x18) is present or null."""
        name = f'cb{index}'
        self.buffers[name] = {'size': CALLBACK_SIZE}
        self.memory.append({'addr': f'buf:{name}+8', 'bytes': struct.pack('<Q', argument).hex()})
        if object_present:
            self.buffers[f'{name}_obj'] = {'size': 8}
            self.buffers[f'{name}_vt'] = {'size': 0x20}
            self.memory.append({'addr': f'buf:{name}+0', 'pointer': f'{name}_obj'})
            self.memory.append({'addr': f'buf:{name}_obj', 'pointer': f'{name}_vt'})
            self.memory.append({'addr': f'buf:{name}_vt+24', 'guest': SLOT_FUNCTION})
            self.stubs.append({'address': SLOT_FUNCTION, 'argc': 2})
        else:
            self.memory.append({'addr': f'buf:{name}+0', 'bytes': '00' * 8})
        return name

    def item(self, index, object_present):
        """An item whose object is present or null."""
        name = f'item{index}'
        self.buffers[name] = {'size': ITEM_SIZE}
        if object_present:
            self.buffers[f'{name}_obj'] = {'size': 8}
            self.memory.append({'addr': f'buf:{name}+8', 'pointer': f'{name}_obj'})
            self.stubs.append({'address': ITEM_RELEASE, 'argc': 1})
        else:
            self.memory.append({'addr': f'buf:{name}+8', 'bytes': '00' * 8})
        return name


def link(builder, names, offset):
    """Links the named nodes through their next word at the given offset, ends them with null, and
    returns the head pointer (a name or None)."""
    for position, name in enumerate(names):
        if position + 1 < len(names):
            builder.memory.append({'addr': f'buf:{name}+{offset}', 'pointer': names[position + 1]})
        else:
            builder.memory.append({'addr': f'buf:{name}+{offset}', 'bytes': '00' * 8})
    return names[0] if names else None


def case(cid, entries=(), callbacks=(), items=(), chain=0):
    """One release. entries are (ref_count, element counts); callbacks are (argument, object present);
    items are object present flags."""
    b = Builder()
    entry_names = [b.entry(i, ref, elements) for i, (ref, elements) in enumerate(entries)]
    callback_names = [b.callback(i, argument, present) for i, (argument, present) in enumerate(callbacks)]
    item_names = [b.item(i, present) for i, present in enumerate(items)]
    head_entry = link(b, entry_names, 40)
    head_callback = link(b, callback_names, 24)
    head_item = link(b, item_names, 24)
    lists = [{'addr': 'buf:lists+0', 'bytes': '00' * 8}]
    if chain:
        b.buffers['chain'] = {'size': CHAIN_NODE_SIZE, 'bytes': '5e' * CHAIN_NODE_SIZE}
        b.buffers['chain_next'] = {'size': CHAIN_NODE_SIZE, 'bytes': '6f' * CHAIN_NODE_SIZE}
        lists = [{'addr': 'buf:lists+0', 'pointer': 'chain'},
                 {'addr': 'buf:chain+48', 'pointer': 'chain_next'},
                 {'addr': 'buf:chain_next+48', 'bytes': '00' * 8}]
    lists.append({'addr': 'buf:lists+16', 'pointer': head_entry} if head_entry else
                 {'addr': 'buf:lists+16', 'bytes': '00' * 8})
    lists.append({'addr': 'buf:lists+32', 'pointer': head_item} if head_item else
                 {'addr': 'buf:lists+32', 'bytes': '00' * 8})
    lists.append({'addr': 'buf:lists+48', 'pointer': head_callback} if head_callback else
                 {'addr': 'buf:lists+48', 'bytes': '00' * 8})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:lists'},
            'buffers': b.buffers, 'memory': b.memory + lists, 'stubs': b.stubs, 'imports': []}


CASES = [
    case('no_lists'),
    case('entry_no_elements_ref_survives', entries=[(2, [])]),
    case('entry_last_reference_with_elements', entries=[(1, [1, 2])]),
    case('two_entries_mixed', entries=[(2, [1]), (1, [])]),
    case('callbacks_with_null_object', callbacks=[(5, True), (7, False)]),
    case('items_with_null_object', items=[True, False]),
    case('all_lists', entries=[(1, [2, 1])], callbacks=[(2, True)], items=[True, True]),
    case('old_chain_walked', chain=True),
    case('old_chain_with_entries', entries=[(2, [1])], items=[False], chain=True),
]


def main():
    """Write deterministic synthetic input for the cases above."""
    if len(sys.argv) != 2:
        print(__doc__)
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
