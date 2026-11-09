#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic pool contexts for misc_refresh_cached_indices (0x01e50ad0): a first lookup that finds
an entry or none, a node list that matches its first, second or no node, masked keys at the
all-ones boundary, second lookups with and without an entry, and the provider's tag lookup with
null, negative and positive tags.

The context's null test after its first use is declared unreachable: the context is read through
before that test, so a null context would have faulted there."""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01e50ad0'
LOOKUP = '0x0231e3d0'
TAG_LOOKUP = '0x023210e0'
PROVIDER_SLOT = '0x00400040'
MASK64 = (1 << 64) - 1
MASK32 = (1 << 32) - 1

UNREACHABLE = {'0x01e50b3c': ('taken', 'null context test after the context was already read through at 0x01e50afb')}


def u32(value):
    """Four bytes of a 32-bit value, little endian."""
    return struct.pack('<I', value & MASK32).hex()


def pointer_or_null(buffers, name):
    """A pointer write to a named buffer, or to null when the name is None."""
    return {'pointer': name} if name else {'bytes': '00' * 8}


def case(cid, key=0x5, entry=None, nodes=(), second=None, tag=None, provided=0x2a):
    """A cache whose context holds `key` and a node list with `nodes` keys. `entry` is the first
    lookup's entry as (index, key64, key68), `second` the second lookup's as its index, and `tag` the
    tag byte the tag lookup finds (None for no entry)."""
    buffers = {'cache': {'size': 0x18, 'bytes': 'ee' * 0x18},
               'context': {'size': 0x3b8, 'bytes': 'dd' * 0x3b8},
               'list': {'size': 0x10, 'bytes': '00' * 0x10},
               'source': {'size': 0x68, 'bytes': '00' * 0x68},
               'provider': {'size': 0x8, 'bytes': '00' * 0x8},
               'prov_vt': {'size': 0x28, 'bytes': '00' * 0x28},
               'result_entry': {'size': 0x70, 'bytes': '00' * 0x70},
               'result_second': {'size': 0x70, 'bytes': '00' * 0x70},
               'tagged': {'size': 0x20, 'bytes': '00' * 0x20}}
    memory = [
        {'addr': 'buf:cache+8', 'pointer': 'context'},
        {'addr': 'buf:context+448', 'bytes': u32(key)},
        {'addr': 'buf:context+456', **pointer_or_null(buffers, 'list' if nodes else None)},
        {'addr': 'buf:context+944', 'pointer': 'source'},
        {'addr': 'buf:source+96', 'pointer': 'provider'},
        {'addr': 'buf:provider', 'pointer': 'prov_vt'},
        {'addr': 'buf:prov_vt+32', 'guest': PROVIDER_SLOT},
        {'addr': 'buf:result_entry+4', 'bytes': u32(entry[0]) if entry else '00' * 4},
        {'addr': 'buf:result_entry+100', 'bytes': u32(entry[1]) if entry else '00' * 4},
        {'addr': 'buf:result_entry+104', 'bytes': u32(entry[2]) if entry else '00' * 4},
        {'addr': 'buf:result_second+4', 'bytes': u32(second) if second is not None else '00' * 4},
        {'addr': 'buf:tagged+28', 'bytes': f'{(tag or 0) & 0xff:02x}'},
    ]
    if nodes:
        memory.append({'addr': 'buf:list+8', 'pointer': 'node0'})
    else:
        memory.append({'addr': 'buf:list+8', 'bytes': '00' * 8})
    for i, node_key in enumerate(nodes):
        name = f'node{i}'
        buffers[name] = {'size': 0x60, 'bytes': '00' * 0x60}
        memory.append({'addr': f'buf:{name}+64', 'bytes': u32(node_key)})
        memory.append({'addr': f'buf:{name}+88', **pointer_or_null(buffers, f'node{i + 1}'
                                                                    if i + 1 < len(nodes) else None)})

    lookup_entry = {'arg': 0, 'offset': 8, **pointer_or_null(buffers, 'result_entry' if entry else None)}
    lookup_second = {'arg': 0, 'offset': 8, **pointer_or_null(buffers, 'result_second' if second is not None else None)}
    tag_entry = {'arg': 0, 'offset': 8, **pointer_or_null(buffers, 'tagged' if tag is not None else None)}
    stubs = [
        {'address': LOOKUP, 'argc': 2, 'writes': [lookup_entry]},
        {'address': LOOKUP, 'argc': 2, 'writes': [lookup_second]},
        {'address': PROVIDER_SLOT, 'argc': 1, 'ret': hex(provided & MASK64)},
        {'address': TAG_LOOKUP, 'argc': 2, 'writes': [tag_entry]},
    ]
    return {
        'schema': 1,
        'address': ADDRESS,
        'id': cid,
        'returns': 'void',
        'args': {'rdi': 'buf:cache'},
        'buffers': buffers,
        'memory': memory,
        'imports': [],
        'stubs': stubs,
    }


CASES = [
    case('entry_none_second_none_tag_none', entry=None, second=None, tag=None),
    case('entry_found_list_empty', entry=(0x11, 0x3, 0x7), nodes=(), second=0x22, tag=0x5),
    case('node_matches_first', entry=(0x11, 0x3, 0x7), nodes=(0x7,), second=0x22, tag=0x5),
    case('node_matches_second', entry=(0x11, 0x3, 0x7), nodes=(0x3, 0x7), second=0x22, tag=0x5),
    case('no_node_matches_uses_context_key', entry=(0x11, 0x3, 0x7), nodes=(0x3, 0x4), second=0x22,
         tag=0x5),
    case('context_key_all_ones_masked', key=0x0fffffff, entry=(0x11, 0x3, 0x7), nodes=(0x3,),
         second=0x22, tag=0x5),
    case('context_key_high_bits_ignored', key=0xf0000005, entry=(0x11, 0x3, 0x7), nodes=(0x3,),
         second=0x22, tag=0x5),
    case('found_second_key_all_ones_masked', entry=(0x11, 0xffffffff, 0x7), nodes=(0x7,), second=0x22,
         tag=0x5),
    case('second_lookup_empty_keeps_none', entry=(0x11, 0x3, 0x7), nodes=(0x3,), second=None, tag=0x5),
    case('second_index_high_value', entry=(0x11, 0x3, 0x7), nodes=(0x3,), second=0x1234, tag=0x5),
    case('tag_none_is_minus_one', entry=(0x11, 0x3, 0x7), nodes=(0x3,), second=0x22, tag=None),
    case('tag_negative_sign_extended', entry=(0x11, 0x3, 0x7), nodes=(0x3,), second=0x22, tag=0x80),
    case('tag_largest_positive', entry=(0x11, 0x3, 0x7), nodes=(0x3,), second=0x22, tag=0x7f),
    case('provided_zero_selects_tag_zero', entry=(0x11, 0x3, 0x7), nodes=(0x3,), second=0x22, tag=0,
         provided=0),
    case('every_lookup_empty_but_provider', entry=None, nodes=(0x3,), second=None, tag=None,
         provided=0xffffffff),
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
