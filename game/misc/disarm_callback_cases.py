#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic callback objects for misc_disarm_callback (0x026e82e0): armed with other flags set,
unarmed, every flag set, no flags, and an object whose vtable was another table.

usage: disarm_callback_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x026e82e0'
CALLBACK_TABLE = '0x057b93b0'
MASK32 = (1 << 32) - 1
OBJECT_SIZE = 0x30
ARMED = 0x40000000
VTABLE_OFFSET = 0x0
FLAGS_OFFSET = 0x8


def case(cid, flags):
    """One call on a callback with the given flags word. The vtable is replaced by the callback
    table's address, and only the armed bit is cleared."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:callback'},
            'buffers': {'callback': {'size': OBJECT_SIZE}, 'old_table': {'size': 0x40}},
            'memory': [{'addr': 'buf:callback+%d' % VTABLE_OFFSET, 'pointer': 'old_table'},
                       {'addr': 'buf:callback+%d' % FLAGS_OFFSET,
                        'bytes': (flags & MASK32).to_bytes(4, 'little').hex()}],
            'stubs': [], 'imports': []}


CASES = [
    case('armed_other_flags_kept', ARMED | 0x3),
    case('armed_only', ARMED),
    case('unarmed_flags_kept', 0x3),
    case('unarmed_bit_below_kept', 0x3fffffff),
    case('all_flags_set', MASK32),
    case('no_flags', 0),
    case('bit_31_only', 0x80000000),
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
