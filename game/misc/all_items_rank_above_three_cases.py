#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic item lists (0x02255560): empty, all ranks above three, a rank at three, negative and high-bit ranks
(only the low 32 bits of the returned word are the rank), and the walk stopping at the first item that fails, first
or last. Each item's rank slot is stubbed in call order; the result is a bool in AL.

usage: all_items_rank_above_three_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02255560'
RANK = '0x00400170'          # a real game function entry, stubbed as each item's rank slot
ITEM_VT_RANK_SLOT = 0x58
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1


def case(cid, ranks=(), high_bits=0):
    """One list of items, each with its own object and a shared vtable. The rank stub returns the rank in EAX with
    the upper half of RAX set to 'high_bits', which the routine must ignore."""
    buffers = {'list': {'size': max(1, len(ranks)) * 8},
               'holder': {'size': 0x20},
               'item_vt': {'size': ITEM_VT_RANK_SLOT + 8}}
    memory = [{'addr': f'buf:item_vt+{ITEM_VT_RANK_SLOT:#x}', 'guest': RANK}]
    stubs = []
    for index, rank in enumerate(ranks):
        buffers[f'item_{index}'] = {'size': 0x100}
        memory.append({'addr': f'buf:item_{index}+0x0', 'pointer': 'item_vt'})
        memory.append({'addr': f'buf:list+{index * 8:#x}', 'pointer': f'item_{index}'})
        stubs.append({'address': RANK, 'argc': 1,
                      'ret': hex(((high_bits & MASK32) << 32) | (rank & MASK32))})
    end = f'list+{len(ranks) * 8:#x}' if ranks else 'list'
    memory.append({'addr': 'buf:holder+0x10', 'pointer': 'list'})
    memory.append({'addr': 'buf:holder+0x18', 'pointer': end})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i8',
            'args': {'rdi': 'buf:holder'}, 'buffers': buffers, 'memory': memory, 'imports': [],
            'stubs': stubs}


CASES = [
    case('empty_list'),
    case('one_above_three', ranks=[4]),
    case('one_at_three_fails', ranks=[3]),
    case('one_negative_fails', ranks=[-1]),
    case('all_above_three', ranks=[4, 5, 100]),
    case('first_fails_stops_walk', ranks=[2, 9, 9]),
    case('last_fails', ranks=[9, 9, 3]),
    case('middle_fails', ranks=[9, 0, 9]),
    case('high_bit_rank_negative_fails', ranks=[1 << 31]),
    case('rank_upper_half_ignored', ranks=[5, 6], high_bits=0x12345678),
    case('rank_upper_half_ignored_on_fail', ranks=[3], high_bits=0xffffffff),
    case('max_positive_rank', ranks=[(1 << 31) - 1]),
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
    sys.exit(main())
