#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic fixtures for mark_bounded_matches at 0x01399080, for tools/verify.py run.

usage: mark_bounded_matches_cases.py OUT_DIR

The source's query at guest 0x00400400 writes two (count, bound) pairs into its bounds argument.
Counts cover zero, all ones, one and the sign bit; bounds are minus infinity, plus infinity and
NaN, so the threshold comparison is decided whatever the image's threshold value is. Trees
contain the two keys, one of them, or none, and the end node must keep its flag clear unless
the original clears it. Nil leaves end every search. A missing source skips everything.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01399080'
QUERY = '0x00400400'
STACK_GUARD = '0x057e3be0'
NODE_SIZE = 0x28
LEFT, ROOT_LINK, RIGHT, IS_NIL, KEY, PENDING = 0x00, 0x08, 0x10, 0x19, 0x1c, 0x20
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1
INF_NEG = float('-inf')
INF_POS = float('inf')
NAN = float('nan')
GARBAGE = {'rdi': 'buf:holder', 'rsi': '0x1111111111111111', 'rdx': '0xffffffffffffffff',
           'rcx': '0x0', 'r8': '0x8080808080808080', 'r9': '0x7f'}


def u32(value):
    """Encode a 32-bit value."""
    return struct.pack('<I', value & MASK32).hex()


def f32(value):
    """Encode a float as its four bytes."""
    return struct.pack('<f', value).hex()


def node_bytes(key=0, nil=False):
    """A node: nil marker, signed key and a clear pending flag; the links are filled by pointers."""
    raw = bytearray(bytes([0xee]) * NODE_SIZE)
    for offset in (LEFT, RIGHT, ROOT_LINK):
        raw[offset:offset + 8] = bytes(8)
    raw[IS_NIL] = 1 if nil else 0
    raw[KEY:KEY + 4] = struct.pack('<i', key)
    raw[PENDING] = 0
    return raw.hex()


def build(shape):
    """Turn a nested (key, left, right) shape into node buffers and pointer writes; None is a nil leaf."""
    buffers = {'nil': {'size': NODE_SIZE, 'bytes': node_bytes(nil=True)}}
    memory = []
    counter = [0]

    def name_of(node):
        if node is None:
            return 'nil'
        key, left, right = node
        counter[0] += 1
        name = f'n{counter[0]}'
        buffers[name] = {'size': NODE_SIZE, 'bytes': node_bytes(key)}
        memory.append({'addr': f'buf:{name}+0x{LEFT:x}', 'pointer': name_of(left)})
        memory.append({'addr': f'buf:{name}+0x{RIGHT:x}', 'pointer': name_of(right)})
        return name

    root = name_of(shape)
    buffers['end'] = {'size': NODE_SIZE, 'bytes': node_bytes()}
    memory.append({'addr': f'buf:end+0x{ROOT_LINK:x}', 'pointer': root})
    return buffers, memory


def case(cid, shape, source=True, counts=(1, 0), values=(INF_NEG, INF_NEG), registers=None):
    """One call: the source's two bounds, the tree and the stack guard word."""
    buffers, memory = build(shape)
    buffers['holder'] = {'size': 0x20, 'bytes': 'd4' * 0x20}
    buffers['guard'] = {'size': 8, 'bytes': '0123456789abcdef'}
    buffers['source'] = {'size': 8}
    buffers['source_vt'] = {'size': 0xb0}
    memory += [{'addr': 'buf:holder+0x18', 'pointer': 'end'},
               {'addr': f'buf:source_vt+0xa8', 'guest': QUERY},
               {'addr': 'buf:source', 'pointer': 'source_vt'},
               {'addr': STACK_GUARD, 'pointer': 'guard'}]
    memory.append({'addr': 'buf:holder+0x8', 'pointer': 'source'} if source
                  else {'addr': 'buf:holder+0x8', 'bytes': u32(0) * 2})
    writes = [{'arg': 1, 'offset': 0, 'bytes': u32(counts[0]), 'size': 4},
              {'arg': 1, 'offset': 4, 'bytes': f32(values[0]), 'size': 4},
              {'arg': 1, 'offset': 0xc, 'bytes': u32(counts[1]), 'size': 4},
              {'arg': 1, 'offset': 0x10, 'bytes': f32(values[1]), 'size': 4}]
    stubs = [{'address': QUERY, 'argc': 3, 'argi': [0, 2], 'writes': writes}] if source else []
    args = dict(GARBAGE if registers is None else registers)
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': args,
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


BOTH_KEYS = (1002, (1001, None, None), (1007, None, None))
ONLY_HIGHER = (1002, (1000, None, None), None)
EMPTY = None
SMALL_KEYS = (1000, None, (1001, None, None))
LOWER_ONLY = (1000, None, None)
ABOVE_HIGH = (1007, None, None)

CASES = [
    case('source_missing_skips_all', BOTH_KEYS, source=False),
    case('first_low_key_when_threshold_above', BOTH_KEYS, counts=(1, 0), values=(INF_NEG, 0.0)),
    case('first_high_key_when_threshold_below', BOTH_KEYS, counts=(1, 0), values=(INF_POS, 0.0)),
    case('first_nan_takes_high_key', BOTH_KEYS, counts=(1, 0), values=(NAN, 0.0)),
    case('first_count_zero_skipped', BOTH_KEYS, counts=(0, 1), values=(INF_NEG, INF_NEG)),
    case('first_count_all_ones_skipped', BOTH_KEYS, counts=(MASK32, 1), values=(INF_NEG, INF_NEG)),
    case('first_count_sign_bit_runs', BOTH_KEYS, counts=(0x7fffffff, 0), values=(INF_NEG, 0.0)),
    case('second_only_low_key', BOTH_KEYS, counts=(0, 1), values=(0.0, INF_NEG)),
    case('second_only_high_key', BOTH_KEYS, counts=(0, 1), values=(0.0, INF_POS)),
    case('second_count_zero_skipped', BOTH_KEYS, counts=(1, 0), values=(INF_NEG, INF_POS)),
    case('second_count_all_ones_skipped', BOTH_KEYS, counts=(1, MASK32), values=(INF_NEG, INF_POS)),
    case('both_bounds_run_both_keys', BOTH_KEYS, counts=(1, 1), values=(INF_NEG, INF_POS)),
    case('missing_key_clears_nothing', ONLY_HIGHER, counts=(1, 1), values=(INF_NEG, INF_NEG)),
    case('missing_high_key', ONLY_HIGHER, counts=(1, 1), values=(INF_POS, INF_POS)),
    case('empty_tree_runs', EMPTY, counts=(1, 1), values=(INF_NEG, INF_POS)),
    case('high_key_without_candidate', SMALL_KEYS, counts=(1, 0), values=(INF_POS, 0.0)),
    case('low_key_without_candidate', LOWER_ONLY, counts=(0, 1), values=(0.0, INF_NEG)),
    case('high_key_candidate_above_bound', ABOVE_HIGH, counts=(0, 1), values=(0.0, INF_POS)),
    case('first_high_key_candidate_above', ABOVE_HIGH, counts=(1, 0), values=(INF_POS, 0.0)),
    case('zero_registers', BOTH_KEYS, counts=(1, 0), values=(INF_NEG, 0.0),
         registers={**{k: '0x0' for k in GARBAGE}, 'rdi': 'buf:holder'}),
]


def main():
    """Write deterministic fixtures to the requested directory."""
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
