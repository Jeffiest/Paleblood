#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_find_or_create_match (0x0040f2f0), for tools/verify.py run.

usage: find_or_create_match_cases.py OUT_DIR

The request's vtable answers its key (slot 0x10) and whether it is settled (slot 0xa0). Each group
has a table with a row list (ready flag, count, rows) and an owner chain to a candidate list. A
candidate's vtable answers its readiness (slot 0x98) and key (slot 0x10). The compare (0x0045e440),
the row retain and release (0x0042e5c0, 0x0042e5d0), the row-list fill (0x0042fe80), the object
allocation (slot 0x50 of the allocator) and its initialisation (0x00504f90) are scripted stubs in
the order the original calls them.

The cases cover: no groups, settled or not, keyed or not; an empty group before a matching one; a
candidate that is not ready, mismatched flags (with upper bits), a compare that differs, a widened
flag mask, a match with a retained row and a released output, a match with an empty row, a row list
that is not ready and an index past the count (both fill the output), and an output already set.
The release on the allocation path is never reached (the output was just found empty), so its
outcome is declared unreachable.
"""
import json
import os
import struct
import sys

ADDRESS = '0x0040f2f0'
CAND_READY, CAND_KEY = '0x004000f0', '0x00400170'
REQ_KEY, REQ_SETTLED = '0x004001c0', '0x004001f0'
ALLOC, COMPARE = '0x00400230', '0x0045e440'
RETAIN, RELEASE, FILL, INIT = '0x0042e5c0', '0x0042e5d0', '0x0042fe80', '0x00504f90'

MASK64 = (1 << 64) - 1
NODE_BYTES, CAND_FLAGS_OFFSET, ROW_BYTES = 0x20, 0x18, 0x10
OBJECT_SIZE = 0x40
FILLED_WORD = 0x7777

UNREACHABLE = {
    '0x0040f43e': ('fallthrough',
                   'the output was just found empty before the allocation, so the release of it never runs'),
}

# Node kinds: the candidate's readiness, flags and whether its compare says it matches.
NODE_KINDS = {
    'ready0': {'ready': 0},
    'flagmis': {'ready': 1, 'flags': 0xabcd0002, 'compared': False},
    'cmpmis': {'ready': 1, 'flags': 0x1, 'compared': True, 'match': False},
    'match': {'ready': 1, 'flags': 0x1, 'compared': True, 'match': True},
    'widematch': {'ready': 1, 'flags': 0x301, 'compared': True, 'match': True},
}


def u32(v):
    return struct.pack('<I', v & 0xffffffff).hex()


def u64(v):
    return struct.pack('<Q', v & MASK64).hex()


def grp(nodes, rows=(), ready=True, count=None):
    """nodes: (kind, row index) pairs; rows: (object present, word) pairs."""
    return {'nodes': list(nodes), 'rows': list(rows), 'ready': ready,
            'count': len(rows) if count is None else count}


def case(cid, groups, settled=1, req_key=0x1122334455667788, req_flags=0xf0000001, out_old=False):
    b = {'alloc': {'size': 8}, 'alloc_vt': {'size': 0x58}, 'req': {'size': 0x20},
         'req_vt': {'size': 0xb0}, 'cand_vt': {'size': 0xa0}, 'out': {'size': 0x10},
         'old_obj': {'size': 0x10}, 'new_obj': {'size': OBJECT_SIZE}, 'fill_obj': {'size': 0x10},
         'gset': {'size': 0x90}, 'garr': {'size': 8 * max(1, len(groups))}}
    m = [{'addr': 'buf:alloc', 'pointer': 'alloc_vt'}, {'addr': 'buf:alloc_vt+80', 'guest': ALLOC},
         {'addr': 'buf:req', 'pointer': 'req_vt'}, {'addr': 'buf:req_vt+16', 'guest': REQ_KEY},
         {'addr': 'buf:req_vt+160', 'guest': REQ_SETTLED}, {'addr': 'buf:req+24', 'bytes': u32(req_flags)},
         {'addr': 'buf:cand_vt+16', 'guest': CAND_KEY}, {'addr': 'buf:cand_vt+152', 'guest': CAND_READY},
         {'addr': 'buf:gset+128', 'pointer': 'garr'}, {'addr': 'buf:gset+136', 'bytes': u64(len(groups))}]
    if out_old:
        m += [{'addr': 'buf:out', 'pointer': 'old_obj'}, {'addr': 'buf:old_obj', 'bytes': '00' * 16}]
    else:
        m.append({'addr': 'buf:out', 'bytes': '00' * 8})
    m.append({'addr': 'buf:out+8', 'bytes': u64(0x5a5a)})

    stubs = []
    node_serial = 0
    matched = False
    for g, grp_spec in enumerate(groups):
        rows = grp_spec['rows']
        count = grp_spec['count']
        b[f'group{g}'] = {'size': 0x50}
        b[f'table{g}'] = {'size': 0x60}
        b[f'owner{g}'] = {'size': 0x48}
        b[f'objc{g}'] = {'size': 0x128}
        b[f'rows{g}'] = {'size': ROW_BYTES * max(1, len(rows))}
        m += [{'addr': f'buf:garr+{8 * g}', 'pointer': f'group{g}'},
              {'addr': f'buf:group{g}+72', 'pointer': f'table{g}'},
              {'addr': f'buf:table{g}+24', 'pointer': f'owner{g}'},
              {'addr': f'buf:owner{g}+64', 'pointer': f'objc{g}'},
              {'addr': f'buf:table{g}+56', 'bytes': u32(count)},
              {'addr': f'buf:table{g}+64', 'pointer': f'rows{g}'},
              {'addr': f'buf:table{g}+80', 'bytes': '01' if grp_spec['ready'] else '00'}]
        for r, (present, word) in enumerate(rows):
            base = f'buf:rows{g}+{ROW_BYTES * r}'
            if present:
                b[f'rowobj{g}_{r}'] = {'size': 0x10}
                m.append({'addr': base, 'pointer': f'rowobj{g}_{r}'})
            else:
                m.append({'addr': base, 'bytes': '00' * 8})
            m.append({'addr': f'buf:rows{g}+{ROW_BYTES * r + 8}', 'bytes': u64(word)})
        # The candidate list: one node per entry, the first one referenced by the owner object.
        names = [f'g{g}n{i}' for i in range(len(grp_spec['nodes']))]
        m.append({'addr': f'buf:objc{g}+288', 'pointer': names[0]} if names else
                 {'addr': f'buf:objc{g}+288', 'bytes': '00' * 8})
        for i, (kind, index) in enumerate(grp_spec['nodes']):
            node, cand = names[i], f'g{g}c{i}'
            nxt = names[i + 1] if i + 1 < len(names) else None
            b[node] = {'size': NODE_BYTES}
            b[cand] = {'size': NODE_BYTES}
            m += [{'addr': f'buf:{node}+8', 'pointer': cand},
                  {'addr': f'buf:{node}+16', 'bytes': u32(index)},
                  {'addr': f'buf:{cand}', 'pointer': 'cand_vt'},
                  {'addr': f'buf:{cand}+{CAND_FLAGS_OFFSET}', 'bytes': u32(NODE_KINDS[kind].get('flags', 0))}]
            m.append({'addr': f'buf:{node}+24', 'pointer': nxt} if nxt else
                     {'addr': f'buf:{node}+24', 'bytes': '00' * 8})
        # The stubs in the order of the original's calls for each node of this group.
        for i, (kind, index) in enumerate(grp_spec['nodes']):
            spec = NODE_KINDS[kind]
            node_serial += 1
            candidate_key = 0x1000 + node_serial
            stubs.append({'address': CAND_READY, 'argc': 1, 'argi': [0], 'ret': spec['ready']})
            if not spec['ready']:
                continue
            stubs.append({'address': CAND_KEY, 'argc': 1, 'argi': [0], 'ret': hex(candidate_key)})
            if not spec['compared']:
                continue
            stubs.append({'address': REQ_KEY, 'argc': 1, 'argi': [0], 'ret': hex(req_key & MASK64)})
            stubs.append({'address': COMPARE, 'argc': 2, 'argi': [0, 1],
                          'ret': 0 if spec['match'] else 1})
            if not spec['match']:
                continue
            matched = True
            rows_ready = grp_spec['ready'] and count > index
            if rows_ready:
                if index < len(rows) and rows[index][0]:
                    stubs.append({'address': RETAIN, 'argc': 1, 'argi': [0]})
                if out_old:
                    stubs.append({'address': RELEASE, 'argc': 1, 'argi': [0]})
            else:
                stubs.append({'address': FILL, 'argc': 3, 'argi': [0, 1, 2],
                              'writes': [{'arg': 1, 'offset': 0, 'pointer': 'fill_obj', 'size': 8},
                                         {'arg': 1, 'offset': 8, 'bytes': u64(FILLED_WORD), 'size': 8}]})
            break
        if matched:
            break

    if not matched:
        stubs.append({'address': REQ_SETTLED, 'argc': 1, 'argi': [0], 'ret': settled})
        if settled == 0:
            stubs.append({'address': REQ_KEY, 'argc': 1, 'argi': [0], 'ret': hex(req_key & MASK64)})
        if not out_old:
            stubs.append({'address': ALLOC, 'argc': 3, 'argi': [0, 1, 2], 'ret': 'buf:new_obj'})
            stubs.append({'address': INIT, 'argc': 3, 'argi': [0, 1, 2]})

    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i8',
            'args': {'rdi': '0x0', 'rsi': 'buf:req', 'rdx': 'buf:out', 'rcx': 'buf:gset', 'r8': 'buf:alloc'},
            'buffers': b, 'memory': m, 'stubs': stubs, 'imports': [], 'UNREACHABLE': UNREACHABLE}


CASES = [
    case('no_groups_settled_empty_out', []),
    case('no_groups_unsettled_keyed', [], settled=0, req_key=0x55),
    case('no_groups_unsettled_unkeyed', [], settled=0, req_key=0),
    case('empty_out_kept_without_groups', [], out_old=True),
    case('empty_group_then_row_retained', [grp([]), grp([('match', 0)], rows=[(True, 0x11)])]),
    case('mismatches_then_row_replaces_old', [grp([('ready0', 0), ('flagmis', 0), ('cmpmis', 0), ('match', 1)],
                                                  rows=[(False, 0), (True, 0x22)])], out_old=True),
    case('widened_match_empty_row', [grp([('widematch', 0)], rows=[(False, 0x33)])], req_flags=0xf0000301),
    case('match_row_list_not_ready_fills', [grp([('match', 2)], rows=[(True, 0x44), (True, 0x45), (True, 0x46)],
                                                 ready=False)]),
    case('match_index_past_count_fills', [grp([('match', 3)], rows=[(True, 0x1), (True, 0x2)], count=2)]),
    case('match_index_equal_count_fills', [grp([('match', 1)], rows=[(True, 0x1), (True, 0x2)], count=1)]),
    case('match_empty_row_releases_old', [grp([('match', 0)], rows=[(False, 0x55)])], out_old=True),
    case('unmatched_then_unsettled_keyed', [grp([('flagmis', 0)]), grp([('cmpmis', 0)])], settled=0, req_key=0x7),
    case('only_unready_candidate', [grp([('ready0', 0)])]),
]


def main():
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    os.makedirs(sys.argv[1], exist_ok=True)
    for c in CASES:
        c.pop('UNREACHABLE', None)
        with open(os.path.join(sys.argv[1], f"{c['id']}.json"), 'w') as f:
            json.dump(c, f, indent=1)
    print(f'{len(CASES)} cases written to {sys.argv[1]}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
