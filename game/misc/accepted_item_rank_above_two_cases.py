#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic scans (0x02255230): the owner not in its ready state (nothing runs), a missing scan source (the fatal
error is stubbed and the scan goes on), an empty list, and items the accept routine refuses or takes: a taken item
ranks above two or not, a taken null item asks no rank, and the first taken item ends the walk. The scan record is
initialised and finished around the walk; each call is stubbed in call order.

usage: accepted_item_rank_above_two_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02255230'
OWNER_GLOBAL = '0x0593d6d0'
SOURCE_GLOBAL = '0x05940290'
BEGIN = '0x0108fb30'
FINISH = '0x010a1570'
ACCEPTS = '0x010a1c70'
FATAL = '0x024b55b0'
RANK = '0x00400170'          # a real game function entry, stubbed as each item's rank slot
ITEM_SIZE = 0x100
ITEM_VT_RANK_SLOT = 0x58
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1


def case(cid, state=3, source=True, items=()):
    """One scan. Each item is (answer, rank, null): the accept routine's raw answer, the item's rank, and whether the
    item pointer is null. The walk stops at the first answer with a nonzero low byte, which the rank is asked of."""
    buffers = {'owner': {'size': 0x88}, 'source': {'size': 0x130},
               'lst': {'size': 0x20}, 'list': {'size': max(1, len(items)) * 8},
               'item_vt': {'size': ITEM_VT_RANK_SLOT + 8}}
    memory = [{'addr': OWNER_GLOBAL, 'pointer': 'owner'},
              {'addr': f'buf:owner+0x84', 'bytes': (state & MASK32).to_bytes(4, 'little').hex()},
              {'addr': f'buf:item_vt+{ITEM_VT_RANK_SLOT:#x}', 'guest': RANK},
              {'addr': 'buf:lst+0x10', 'pointer': 'list'}]
    if source:
        memory.append({'addr': SOURCE_GLOBAL, 'pointer': 'source'})
    else:
        memory.append({'addr': SOURCE_GLOBAL, 'bytes': '00' * 8})
    end = f'list+{len(items) * 8:#x}' if items else 'list'
    memory.append({'addr': 'buf:lst+0x18', 'pointer': end})
    stubs = []
    if source is False:
        stubs.append({'address': FATAL, 'argc': 4})
    if state == 3:
        stubs.append({'address': BEGIN, 'argc': 1})
        for index, (answer, rank, null) in enumerate(items):
            if null:
                memory.append({'addr': f'buf:list+{index * 8:#x}', 'bytes': '00' * 8})
            else:
                buffers[f'item_{index}'] = {'size': ITEM_SIZE}
                memory.append({'addr': f'buf:item_{index}+0x0', 'pointer': 'item_vt'})
                memory.append({'addr': f'buf:list+{index * 8:#x}', 'pointer': f'item_{index}'})
            stubs.append({'address': ACCEPTS, 'argc': 2, 'ret': hex(answer & MASK64)})
            if answer & 0xff:
                stubs.append({'address': FINISH, 'argc': 1})
                if not null:
                    stubs.append({'address': RANK, 'argc': 1, 'ret': hex(((rank & MASK32) | 0xcd00000000) & MASK64)})
                break
        else:
            stubs.append({'address': FINISH, 'argc': 1})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i8',
            'args': {'rdi': 'buf:lst'}, 'buffers': buffers, 'memory': memory, 'imports': [],
            'stubs': stubs}


CASES = [
    case('owner_not_ready', state=2, items=[(1, 3, False)]),
    case('source_missing_empty_fatal', source=False),
    case('ready_empty', ),
    case('accepted_rank_three', items=[(1, 3, False)]),
    case('accepted_rank_exact_two', items=[(1, 2, False)]),
    case('accepted_rank_negative', items=[(1, -4, False)]),
    case('accepted_null_no_rank', items=[(1, 0, True)]),
    case('refused_all', items=[(0, 9, False), (0x100, 9, False)]),
    case('second_accepted_rank_five', items=[(0, 9, False), (1, 5, False)]),
    case('first_accepted_stops_walk', items=[(1, 1, False), (1, 9, False)]),
    case('source_missing_then_accepted', source=False, items=[(1, 3, False)]),
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
