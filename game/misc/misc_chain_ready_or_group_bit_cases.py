#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic owners, child chains and ready answers for bb_misc_chain_ready_or_group_bit (0x01e577d0).

usage: misc_chain_ready_or_group_bit_cases.py OUT_DIR

Each case lays out the owner, its child with a holder and a head, a chain of nodes with tags, and
the registry, bypass and final globals. The stubs the original makes (the ready query twice at
most, and the missing-registry report) are planned from the same rules the original follows, so
every call the original makes is scripted in order.
"""
import json
import os
import struct
import sys

ADDRESS = '0x01e577d0'
READY = '0x004000a0'
REPORT = '0x024b55b0'
REGISTRY = '0x0593e880'
FINAL = '0x0593e888'
BYPASS = '0x0593e890'
KIND_FIRST = 0x8f
KIND_SECOND = 0xeb
NODE_FLAGS_SKIP = 0x800c0003
MASK64 = (1 << 64) - 1


def put(buf, offset, value, width):
    """Write an unsigned little-endian value of the given width into a bytearray."""
    buf[offset:offset + width] = (value & ((1 << (8 * width)) - 1)).to_bytes(width, 'little')


def plan(flags, registry, bypass, ready1, final, chain, mode, head_mask, ready2):
    """The stub calls the original makes, in order, for these inputs."""
    stubs = []

    def report():
        stubs.append({'address': REPORT, 'argc': 4})

    if flags & 0x4:
        return stubs
    if not registry:
        report()
    if bypass:
        return stubs
    stubs.append({'address': READY, 'argc': 1, 'ret': hex(ready1 & MASK64)})
    if ready1 & 0xff:
        if not registry:
            report()
        if final:
            return stubs
    if flags & 0x1:
        return stubs
    if mode & 0x38:
        for node_flags, kind in chain:
            if (node_flags & NODE_FLAGS_SKIP) == 0 and kind is not None and kind == KIND_FIRST:
                return stubs
    stubs.append({'address': READY, 'argc': 1, 'ret': hex(ready2 & MASK64)})
    if (ready2 & 0xff) and (head_mask & 0x1c0):
        for node_flags, kind in chain:
            if (node_flags & NODE_FLAGS_SKIP) == 0 and kind is not None and kind == KIND_SECOND:
                return stubs
    return stubs


def case(cid, flags=0x00, registry=True, bypass=0, ready1=0x00, final=0,
         chain=(), mode=0x00, head_mask=0x0000, ready2=0x00, group_bits=0x00):
    """One call over the given owner, child, chain and globals."""
    chain = list(chain)
    owner = bytearray(0x208)
    put(owner, 0x200, flags, 1)
    child = bytearray(0x1d0)
    head = bytearray(0x30)
    put(head, 0x20, head_mask, 2)
    put(head, 0x23, mode, 1)
    holder = bytearray(0x40)
    group = bytearray(0x48)
    put(group, 0x44, group_bits, 1)
    buffers = {'owner': {'size': 0x208, 'bytes': owner.hex()},
               'child': {'size': 0x1d0, 'bytes': child.hex()},
               'vt': {'size': 0x1c0},
               'head': {'size': 0x30, 'bytes': head.hex()},
               'holder': {'size': 0x40, 'bytes': holder.hex()},
               'group': {'size': 0x48, 'bytes': group.hex()},
               'registry': {'size': 0x10}}
    memory = [{'addr': 'buf:owner+8', 'pointer': 'child'},
              {'addr': 'buf:child', 'pointer': 'vt'},
              {'addr': 'buf:vt+440', 'guest': READY},
              {'addr': 'buf:child+88', 'pointer': 'holder'},
              {'addr': 'buf:holder+56', 'pointer': 'group'},
              {'addr': 'buf:child+456', 'pointer': 'head'},
              {'addr': FINAL, 'bytes': f'{final:02x}'},
              {'addr': BYPASS, 'bytes': f'{bypass:02x}'}]
    if registry:
        memory.append({'addr': REGISTRY, 'pointer': 'registry'})
    else:
        memory.append({'addr': REGISTRY, 'bytes': '00' * 8})
    if chain:
        memory.append({'addr': 'buf:head+8', 'pointer': 'n0'})
    for i, (node_flags, kind) in enumerate(chain):
        node = bytearray(0x60)
        put(node, 0x1c, node_flags, 4)
        buffers[f'n{i}'] = {'size': 0x60, 'bytes': node.hex()}
        tag = bytearray(0x160)
        if kind is not None:
            put(tag, 0x156, kind, 2)
            buffers[f't{i}'] = {'size': 0x160, 'bytes': tag.hex()}
            memory.append({'addr': f'buf:n{i}+72', 'pointer': f't{i}'})
        if i + 1 < len(chain):
            memory.append({'addr': f'buf:n{i}+88', 'pointer': f'n{i + 1}'})
    stubs = plan(flags, registry, bypass, ready1, final, chain, mode, head_mask, ready2)
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i8',
            'args': {'rdi': 'buf:owner'}, 'buffers': buffers, 'memory': memory,
            'imports': [], 'stubs': stubs}


# The walks' node flags are 0 (counted) or 1 (skipped by the mask); tags are kinds or None.
CASES = [
    case('bypass_flag_answers_true', flags=0x04, registry=False, ready1=0x100),
    case('bypass_flag_registry_present', flags=0x04),
    case('registry_missing_latch_set', registry=False, bypass=1),
    case('latch_set_answers_true', bypass=1, ready1=0x01),
    case('ready_false_group_bit_zero', ready1=0x00, ready2=0x00, group_bits=0x00),
    case('ready_false_group_bit_set', ready1=0x00, ready2=0x00, group_bits=0x02),
    case('ready_true_final_latch_answers', ready1=0x01, final=1, group_bits=0x00),
    case('ready_true_registry_missing_final_clear', registry=False, ready1=0x01, final=0,
         ready2=0x00, group_bits=0x02),
    case('ready_true_registry_missing_final_set', registry=False, ready1=0x01, final=1),
    case('ready_true_final_clear_group_clear', ready1=0x01, final=0, ready2=0x00, group_bits=0x00),
    case('ready_low_byte_zero_upper_bits', ready1=0x100, ready2=0x00, group_bits=0x02),
    case('skip_flag_answers_true', flags=0x01, ready1=0x00),
    case('skip_flag_registry_missing_ready_true', flags=0x01, registry=False, ready1=0x01, final=0),
    case('walk_first_match_answers_true', mode=0x08, chain=[(0x00, KIND_FIRST)], ready1=0x00),
    case('walk_skipped_node_not_matched', mode=0x08, chain=[(0x01, KIND_FIRST)], ready1=0x00,
         ready2=0x00),
    case('walk_null_tag_not_matched', mode=0x08, chain=[(0x00, None)], ready1=0x00, ready2=0x00),
    case('walk_other_kind_not_matched', mode=0x08, chain=[(0x00, 0x10)], ready1=0x00, ready2=0x00),
    case('walk_empty_chain_not_matched', mode=0x08, chain=[], ready1=0x00, ready2=0x00),
    case('walk_mode_bits_clear_not_walked', mode=0x00, chain=[(0x00, KIND_FIRST)], ready1=0x00,
         ready2=0x00, group_bits=0x02),
    case('walk_multi_node_match_second', mode=0x10,
         chain=[(0x01, KIND_FIRST), (0x00, None), (0x00, KIND_FIRST)], ready1=0x00),
    case('second_walk_skipped_then_group', ready1=0x00, ready2=0x01, head_mask=0x0000,
         chain=[(0x00, KIND_SECOND)], group_bits=0x02),
    case('second_walk_flagged_node_skipped', ready1=0x00, ready2=0x01, head_mask=0x0040,
         chain=[(0x01, KIND_SECOND)], group_bits=0x00),
    case('second_walk_null_tag_skipped', ready1=0x00, ready2=0x01, head_mask=0x0100,
         chain=[(0x00, None)], group_bits=0x00),
    case('second_walk_other_kind_skipped', ready1=0x00, ready2=0x01, head_mask=0x0100,
         chain=[(0x00, KIND_FIRST)], group_bits=0x00),
    case('second_walk_match_answers_true', ready1=0x00, ready2=0x01, head_mask=0x0080,
         chain=[(0x00, KIND_SECOND)], group_bits=0x00),
    case('second_walk_ready_false_skipped', ready1=0x00, ready2=0x00, head_mask=0x0080,
         chain=[(0x00, KIND_SECOND)], group_bits=0x00),
    case('second_walk_multi_node_match_last', ready1=0x00, ready2=0x01, head_mask=0x01c0,
         chain=[(0x01, KIND_SECOND), (0x00, None), (0x00, KIND_SECOND)], group_bits=0x00),
    case('second_walk_mask_bits_outside_ignored', ready1=0x00, ready2=0x01, head_mask=0x0200,
         chain=[(0x00, KIND_SECOND)], group_bits=0x02),
    case('group_bit_clear_upper_bits', ready1=0x00, ready2=0x00, group_bits=0xfd),
]


def main():
    """Write one JSON case per scenario into the output directory."""
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
