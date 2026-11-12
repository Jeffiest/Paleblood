#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic keyed records for misc_store_lookup_scales (0x018e09c0), for tools/verify.py run.

usage: store_lookup_scales_cases.py OUT_DIR

The record's twelve 8-byte entries start at +0x18: a key dword, then a result dword. Each key is passed
to the lookup 0x023210e0 in order, and the lookup writes an IndexLookupResult whose entry at +0x8 is a
found object (null when none). A found object's signed word at +0x18 is the scale: the stored result is
three times the scale, or minus one when the scale is minus one. A result is written only for a found
entry; the others keep their bytes. Covers none found, all found, the unset scale in each place, the
extremes of the 16-bit scale, and an unfound entry between found ones.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x018e09c0'
LOOKUP = '0x023210e0'
ENTRY_COUNT = 12
RECORD_SIZE = 0x78
MATCH_SIZE = 0x1a


def u32(value):
    """Encode a 32-bit value."""
    return struct.pack('<I', value & 0xffffffff).hex()


def case(cid, scales):
    """scales: per entry, the scale word of the found object, or None when the lookup finds nothing."""
    keys = [0x100 + k * 0x11 for k in range(ENTRY_COUNT)]
    raw = bytearray(b'\xcc' * RECORD_SIZE)
    for k, key in enumerate(keys):
        raw[0x18 + k * 8:0x18 + k * 8 + 4] = struct.pack('<I', key)
    buffers = {'rec': {'size': RECORD_SIZE, 'bytes': raw.hex()}}
    stubs = []
    for k, scale in enumerate(scales):
        write = {'arg': 0, 'offset': 8, 'size': 8}
        if scale is None:
            write['bytes'] = '00' * 8
        else:
            buffers[f'match{k}'] = {'size': MATCH_SIZE,
                                    'bytes': '00' * 0x18 + struct.pack('<h', scale).hex() + '00' * 0}
            write['pointer'] = f'match{k}'
        stubs.append({'address': LOOKUP, 'argc': 2, 'argi': [1], 'writes': [write]})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': {'rdi': 'buf:rec'},
            'buffers': buffers, 'memory': [], 'imports': [], 'stubs': stubs}


CASES = [
    case('none_found', [None] * ENTRY_COUNT),
    case('all_found_positive', [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]),
    case('all_found_zero', [0] * ENTRY_COUNT),
    case('unset_scale_everywhere', [-1] * ENTRY_COUNT),
    case('unset_scale_first_and_last', [-1, 4] + [5] * 9 + [-1]),
    case('unfound_between_found', [7, None, -2, None, 9, 0, None, -1, 3, None, 1, 2]),
    case('scale_extremes', [0x7fff, -0x8000, -2, 0x7ffe, -0x7fff, 0, 1, -1, 0x4000, -0x4000, 0x2, -0x2]),
    case('scale_minus_one_neighbours', [-2, -1, 0, 1, -1, -2, -1, 0, 1, -1, -1, 2]),
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
