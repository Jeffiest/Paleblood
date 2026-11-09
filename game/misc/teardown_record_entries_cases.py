#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic record teardowns for misc_teardown_record_entries (0x0040bfd0), for tools/verify.py run.

usage: teardown_record_entries_cases.py OUT_DIR

The record holds a table (its block) whose first word is an entry array: a count word and entries
of 0x28 bytes (key at +0, second tagged reference at +0x10, first at +0x18). The scratch service's
release slot and the base teardown (0x0045a480) are scripted. Covers a missing table, a table without
an array, empty and live keys (including zero, minus one and minus three), references above, at and
below one, tag bits on the references, the count limiting the entries, and the release order.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x0040bfd0'
RELEASE = '0x00400060'
BASE_TEARDOWN = '0x0045a480'
BASE_VTABLE = '0x553f7d0'
SERVICE_GLOBAL = '0x057e7320'
RECORD_BYTES = 0x20
HEADER = 0x10
ENTRY = 0x28
EMPTY = -2
MASK64 = (1 << 64) - 1


def u64(value):
    """Eight little-endian bytes."""
    return struct.pack('<Q', value & MASK64).hex()


def live(key, first=(1, 0), second=(1, 0)):
    """A live entry: its key and the (count, tag) of each reference, first then second."""
    return {'key': key, 'first': first, 'second': second}


def empty():
    """An entry holding the empty key and no references."""
    return {'key': EMPTY, 'first': None, 'second': None}


def case(cid, entries=(), last=0, table=True, array=True):
    """One teardown. The releases are listed in the order the original makes them."""
    entries = list(entries)
    while len(entries) < last + 1:
        entries.append(empty())
    size = HEADER + ENTRY * len(entries) + HEADER
    arr = bytearray(size)
    struct.pack_into('<Q', arr, 8, last)
    memory = [{'addr': SERVICE_GLOBAL, 'pointer': 'service'},
              {'addr': 'buf:service', 'pointer': 'service_vt'},
              {'addr': 'buf:service_vt+0x68', 'guest': RELEASE}]
    buffers = {
        'record': {'size': RECORD_BYTES},
        'service': {'size': 8},
        'service_vt': {'size': 0x70},
    }
    releases = []
    for index, entry in enumerate(entries):
        base = HEADER + ENTRY * index
        struct.pack_into('<Q', arr, base, entry['key'] & MASK64)
        if entry['key'] == EMPTY and entry['first'] is None:
            continue
        for slot, offset in (('first', 0x18), ('second', 0x10)):
            count, tag = entry[slot]
            name = f'obj{index}_{slot}'
            obj = bytearray(0x10)
            struct.pack_into('<I', obj, 8, count)
            buffers[name] = {'size': 0x10, 'bytes': bytes(obj).hex()}
            memory.append({'addr': f'buf:array+{hex(base + offset)}', 'pointer': f'{name}+{tag}'})
        for slot in ('first', 'second'):
            if index <= last and entry['key'] != EMPTY:
                if entry[slot][0] == 1:
                    releases.append(f'obj{index}_{slot}')
    if table:
        memory.append({'addr': 'buf:record+0x10', 'pointer': 'table'})
        buffers['table'] = {'size': 8}
        if array:
            buffers['array'] = {'size': size, 'bytes': bytes(arr).hex()}
            memory.append({'addr': 'buf:table', 'pointer': 'array'})
            releases.append('array')
        releases.append('table')
    # One scripted release per object the original hands back, in call order; the arguments of each
    # call are compared with the original's own calls.
    stubs = [{'address': RELEASE, 'argc': 2, 'argi': [0, 1], 'ret': 0} for _ in releases]
    stubs.append({'address': BASE_TEARDOWN, 'argc': 1, 'argi': [0], 'ret': BASE_VTABLE})
    return {
        'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
        'args': {'rdi': 'buf:record', 'rsi': '0x7777777777777777', 'rdx': '0x5a5a5a5a5a5a5a5a'},
        'buffers': buffers, 'memory': memory, 'imports': [],
        'stubs': stubs,
    }


CASES = [
    case('no_table', table=False),
    case('table_without_array', array=False),
    case('single_empty_entry', entries=[empty()], last=0),
    case('single_live_last_references', entries=[live(5, (1, 0), (1, 0))], last=0),
    case('live_references_above_one_kept', entries=[live(5, (2, 0), (3, 0))], last=0),
    case('mixed_one_last_reference', entries=[live(5, (1, 0), (2, 0))], last=0),
    case('mixed_other_order', entries=[live(5, (2, 0), (1, 0))], last=0),
    case('tags_masked_for_release', entries=[live(5, (1, 3), (1, 1))], last=0),
    case('second_entry_empty_skipped', entries=[live(5, (1, 0), (1, 0)), empty()], last=1),
    case('empty_then_live', entries=[empty(), live(9, (1, 0), (1, 0))], last=1),
    case('count_limits_entries', entries=[live(7, (1, 0), (1, 0)), live(9, (1, 0), (1, 0))], last=0),
    case('zero_key_is_live', entries=[live(0, (1, 0), (1, 0))], last=0),
    case('minus_one_key_is_live', entries=[live(-1, (1, 0), (1, 0))], last=0),
    case('minus_three_key_is_live', entries=[live(-3, (1, 0), (1, 0))], last=0),
    case('high_bit_key_is_live', entries=[live(1 << 63, (1, 0), (1, 0))], last=0),
    case('two_live_entries_all_last', entries=[live(5, (1, 0), (1, 0)), live(6, (1, 0), (1, 0))],
         last=1),
    case('two_live_entries_mixed', entries=[live(5, (1, 0), (2, 0)), live(6, (3, 0), (1, 0))],
         last=1),
]


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
