#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic slot pools for bb_misc_slot_pool_measure (0x00b685f0).

usage: slot_pool_measure_cases.py OUT_DIR

A pool holds entries; each entry names a descriptor of a shared owner. Children (measure and
visit through one vtable) and extras (value through one vtable) are scripted per virtual slot.
Covers no entries, empty and record-only descriptors, a largest measure that is unsigned, sums
that wrap, null extras, the largest entry sum moving in both directions, and the changed and
unchanged outcomes at several scales.
"""
import json
import os
import struct
import sys

ADDRESS = '0x00b685f0'
VISIT = '0x00400120'
MEASURE = '0x00400140'
VALUE = '0x00400160'
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1


def i32(v):
    return struct.pack('<i', v).hex()


def u32(v):
    return struct.pack('<I', v & MASK32).hex()


def scenario(cid, entries, descriptors, children, scale=1):
    """entries: (descriptor index, extras list of values or None) per pool entry.
    descriptors: (child indices, record extra indices) per descriptor.
    children: (measure, visit) per owner child."""
    buffers = {
        'pool': {'size': 0x40, 'bytes': '00' * 0x40},
        'owner': {'size': 0x60, 'bytes': '00' * 0x60},
        'entries': {'size': max(8 * len(entries), 8), 'bytes': '00' * max(8 * len(entries), 8)},
        'children': {'size': max(8 * len(children), 8), 'bytes': '00' * max(8 * len(children), 8)},
        'descs': {'size': max(8 * len(descriptors), 8), 'bytes': '00' * max(8 * len(descriptors), 8)},
        'vt': {'size': 0x80, 'bytes': '00' * 0x80},
        'xvt': {'size': 0x40, 'bytes': '00' * 0x40},
        'changed': {'size': 1, 'bytes': 'ee'},
        'total': {'size': 4, 'bytes': 'dddddddd'},
    }
    memory = [
        {'addr': 'buf:pool+0x10', 'pointer': 'entries'},
        {'addr': 'buf:pool+0x18', 'bytes': i32(len(entries))},
        {'addr': 'buf:owner+0x48', 'pointer': 'children'},
        {'addr': 'buf:owner+0x58', 'pointer': 'descs'},
        {'addr': 'buf:vt+0x50', 'guest': VISIT},
        {'addr': 'buf:vt+0x60', 'guest': MEASURE},
        {'addr': 'buf:xvt+0x28', 'guest': VALUE},
    ]
    for j, _ in enumerate(children):
        buffers[f'child{j}'] = {'size': 8, 'bytes': '00' * 8}
        memory += [{'addr': f'buf:children+{8 * j:#x}', 'pointer': f'child{j}'},
                   {'addr': f'buf:child{j}', 'pointer': 'vt'}]
    for k, (child_indices, records) in enumerate(descriptors):
        buffers[f'desc{k}'] = {'size': 0x40, 'bytes': '00' * 0x40}
        buffers[f'idx{k}'] = {'size': max(4 * len(child_indices), 4), 'bytes': ''.join(i32(v) for v in child_indices) or '00' * 4}
        buffers[f'recs{k}'] = {'size': max(16 * len(records), 16),
                               'bytes': ''.join(i32(v) + '00' * 12 for v in records) or '00' * 16}
        memory += [{'addr': f'buf:descs+{8 * k:#x}', 'pointer': f'desc{k}'},
                   {'addr': f'buf:desc{k}+0x18', 'pointer': f'idx{k}'},
                   {'addr': f'buf:desc{k}+0x20', 'bytes': i32(len(child_indices))},
                   {'addr': f'buf:desc{k}+0x28', 'pointer': f'recs{k}'},
                   {'addr': f'buf:desc{k}+0x30', 'bytes': i32(len(records))}]
    for i, (desc_index, extras) in enumerate(entries):
        buffers[f'entry{i}'] = {'size': 0x40, 'bytes': '00' * 0x40}
        buffers[f'extras{i}'] = {'size': max(8 * len(extras), 8), 'bytes': '00' * max(8 * len(extras), 8)}
        memory += [{'addr': f'buf:entries+{8 * i:#x}', 'pointer': f'entry{i}'},
                   {'addr': f'buf:entry{i}+0x10', 'pointer': 'owner'},
                   {'addr': f'buf:entry{i}+0x18', 'bytes': i32(desc_index)},
                   {'addr': f'buf:entry{i}+0x30', 'pointer': f'extras{i}'}]
        for j, value in enumerate(extras):
            if value is None:
                continue
            buffers[f'xobj{i}_{j}'] = {'size': 8, 'bytes': '00' * 8}
            memory += [{'addr': f'buf:extras{i}+{8 * j:#x}', 'pointer': f'xobj{i}_{j}'},
                       {'addr': f'buf:xobj{i}_{j}', 'pointer': 'xvt'}]
    # Stubs in the order the original makes its calls.
    stubs = []
    for i, (desc_index, extras) in enumerate(entries):
        child_indices, records = descriptors[desc_index]
        for child in child_indices:
            measure, visit = children[child]
            stubs.append({'address': MEASURE, 'argc': 2, 'ret': hex(measure & MASK32)})
            stubs.append({'address': VISIT, 'argc': 3, 'ret': hex(visit & MASK32)})
        for extra_index in records:
            if extras[extra_index] is not None:
                stubs.append({'address': VALUE, 'argc': 1, 'ret': hex(extras[extra_index] & MASK32)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:pool', 'rsi': hex(scale & MASK32), 'rdx': 'buf:changed', 'rcx': 'buf:total'},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    scenario('no_entries', [], [], []),
    scenario('empty_descriptor', [(0, [])], [((), ())], []),
    scenario('children_sum_with_best_scale_zero', [(0, [])], [((0, 1), ())], [(3, 5), (9, -2)], scale=0),
    scenario('children_sum_unchanged_at_scale_two', [(0, [])], [((0, 1), ())], [(3, 5), (9, -2)], scale=2),
    scenario('children_sum_equal_to_scale_one', [(0, [])], [((0, 1), ())], [(3, 5), (9, -2)], scale=1),
    scenario('extras_visited_null_skipped', [(0, [7, None])], [((), (0, 1))], [], scale=0),
    scenario('record_only_negative_scale', [(0, [3])], [((), (0,))], [], scale=-1),
    scenario('all_extras_null', [(0, [None])], [((), (0,))], [], scale=1),
    scenario('largest_first_entry', [(0, []), (0, [])], [((0,), ())], [(0, 10)], scale=1),
    scenario('largest_second_entry', [(0, []), (0, [])], [((0,), ())], [(0, 4)], scale=1),
    scenario('two_descriptors_two_entries', [(0, []), (1, [5])], [((0,), ()), ((1,), (0,))],
                                          [(2, 6), (4, 1)], scale=3),
    scenario('unsigned_largest_measure', [(0, [])], [((0, 1), ())], [(0xffffffff, 1), (1, 2)], scale=1),
    scenario('visits_wrap_total', [(0, []), (0, [])], [((0,), ())], [(0x7fffffff, 0x7fffffff)], scale=0),
    scenario('unsigned_entry_sums', [(0, []), (0, [])], [((0,), ())], [(0, -1)], scale=2),
    scenario('scale_wraps_product', [(0, [])], [((0,), ())], [(0, 0x40000000)], scale=0x7fffffff),
    scenario('negative_scale_changed', [(0, [])], [((0,), ())], [(0, 5)], scale=-1),
    scenario('multiple_records_and_children', [(0, [2, 4])], [((0, 1), (0, 1))],
                                             [(7, 3), (1, 0)], scale=1),
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
