#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic item list pairs (0x02255320): empty lists, each list passing or failing at its first, middle or last
item, a failure in the first list that does not stop the second list's walk, the thresholds five and two (a rank of
exactly the threshold fails), and garbage above the rank's low 32 bits. Each visited item's rank slot is stubbed in
call order; the result is a bool in AL, always defined.

usage: both_item_lists_rank_above_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02255320'
RANK = '0x00400170'          # a real game function entry, stubbed as each item's rank slot
ITEM_VT_RANK_SLOT = 0x58
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1
FIRST_THRESHOLD = 5
SECOND_THRESHOLD = 2


def case(cid, first=(), second=(), high_bits=0):
    """A pair of lists. Each list's items are visited in order until one ranks at or below its threshold, and the
    rank stub returns the rank in EAX with the upper half of RAX set to 'high_bits'."""
    buffers = {'holder': {'size': 0x48},
               'first': {'size': max(1, len(first)) * 8},
               'second': {'size': max(1, len(second)) * 8},
               'item_vt': {'size': ITEM_VT_RANK_SLOT + 8}}
    memory = [{'addr': f'buf:item_vt+{ITEM_VT_RANK_SLOT:#x}', 'guest': RANK}]
    stubs = []
    for name, ranks, threshold in (('first', first, FIRST_THRESHOLD), ('second', second, SECOND_THRESHOLD)):
        for index, rank in enumerate(ranks):
            item = f'{name}_item_{index}'
            buffers[item] = {'size': 0x100}
            memory.append({'addr': f'buf:{item}+0x0', 'pointer': 'item_vt'})
            memory.append({'addr': f'buf:{name}+{index * 8:#x}', 'pointer': item})
            stubs.append({'address': RANK, 'argc': 1,
                          'ret': hex(((high_bits & MASK32) << 32) | (rank & MASK32))})
            if rank <= threshold:
                break
        end = f'{name}+{len(ranks) * 8:#x}' if ranks else name
        begin_offset, end_offset = (0x10, 0x18) if name == 'first' else (0x38, 0x40)
        memory.append({'addr': f'buf:holder+{begin_offset:#x}', 'pointer': name})
        memory.append({'addr': f'buf:holder+{end_offset:#x}', 'pointer': end})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i8',
            'args': {'rdi': 'buf:holder'}, 'buffers': buffers, 'memory': memory, 'imports': [],
            'stubs': stubs}


CASES = [
    case('both_empty'),
    case('first_empty_second_passes', second=[3, 9]),
    case('second_empty_first_passes', first=[6, 7]),
    case('both_pass', first=[6, 9, 100], second=[3, 3, 4]),
    case('first_fails_last', first=[9, 9, 5], second=[3]),
    case('first_fails_middle', first=[9, 1, 9], second=[3]),
    case('first_fails_does_not_stop_second', first=[5], second=[2]),
    case('second_fails_first', second=[9, 2, 9]),
    case('second_fails_last', second=[9, 9, 2]),
    case('first_threshold_exact_fails', first=[6, 5]),
    case('second_threshold_exact_passes', second=[3, 3]),
    case('second_threshold_just_below', second=[3, 1]),
    case('rank_upper_half_ignored', first=[6], second=[3], high_bits=0xabcdef01),
    case('negative_rank_fails', first=[-1, 9]),
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
