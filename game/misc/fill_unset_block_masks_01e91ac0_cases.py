#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic counted word blocks for the mask fill (0x01e91ac0): each of the five slots copies the source mask where the
destination's is unset and the source's is set. The result is RAX: the first slot's copied mask with its low byte
replaced by one when the first slot changed, otherwise the flag one when any slot changed, otherwise zero.

usage: fill_unset_block_masks_01e91ac0_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01e91ac0'
BLOCK_SIZE = 0x60
SLOT_OFFSET = 0x10
SLOT_STRIDE = 0x10
MASK_IN_SLOT = 0x8
SLOT_COUNT = 5
DEFAULT_MASK = 0x80000000
PREFILL = 'ee' * BLOCK_SIZE


def le32(value):
    """The four little-endian bytes of a 32-bit value, as hex."""
    return struct.pack('<I', value & 0xffffffff).hex()


def case(cid, dest_masks, source_masks):
    """Two blocks, each slot's mask given for both: the destination's masks and the source's masks, slot by slot."""
    memory = []
    for index in range(SLOT_COUNT):
        offset = SLOT_OFFSET + SLOT_STRIDE * index + MASK_IN_SLOT
        memory.append({'addr': f'buf:dest+{offset:#x}', 'bytes': le32(dest_masks[index])})
        memory.append({'addr': f'buf:source+{offset:#x}', 'bytes': le32(source_masks[index])})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:dest', 'rsi': 'buf:source'},
            'buffers': {'dest': {'size': BLOCK_SIZE, 'bytes': PREFILL},
                        'source': {'size': BLOCK_SIZE, 'bytes': PREFILL}},
            'memory': memory, 'stubs': [], 'imports': []}


D = DEFAULT_MASK
CASES = [
    case('all_unset_nothing_to_copy', [D] * 5, [D] * 5),
    case('first_slot_copied_result_is_its_mask', [D, D, D, D, D], [0x12345678, D, D, D, D]),
    case('first_slot_copied_zero_mask', [D, D, D, D, D], [0x0, D, D, D, D]),
    case('later_slot_copied_only', [D, D, D, D, D], [D, D, D, 0x00000100, D]),
    case('first_slot_set_later_copied', [0x2, D, D, D, D], [0x12345678, D, D, 0x5, D]),
    case('destination_set_source_set_no_copy', [0x2, 0x4, 0x8, 0x10, 0x20], [0x1, 0x3, 0x5, 0x7, 0x9]),
    case('source_unset_no_copy', [D, D, D, D, D], [D, D, D, D, D]),
    case('all_slots_copied', [D, D, D, D, D], [0x80000001, 0x7, 0x0, 0xffffffff, 0x12]),
    case('first_slot_source_all_ones', [D, D, D, D, D], [0xffffffff, D, D, D, D]),
    case('last_slot_only_destination_unset', [0x1, 0x2, 0x3, 0x4, D], [D, D, D, D, 0x6]),
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
