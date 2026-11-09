#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic request dispatches for misc_dispatch_request (0x0040d270).

The dispatcher's route holds a handler or nothing. A handler's handle slot (0x10) and the game's
0x0040f580 are stubs that return a chosen result. Covers both paths, zero and all-ones request words,
and results of zero and all ones.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x0040d270'
HANDLE_FN = '0x00400020'
FALLBACK_FN = '0x0040f580'
DISPATCH_BYTES = 0x18
ROUTE_BYTES = 0x20
HANDLER_BYTES = 8
VTABLE_BYTES = 0x18
HANDLE_SLOT = 0x10
MASK64 = (1 << 64) - 1


def case(cid, handler=True, first=1, second=2, result=0x55):
    """One dispatch: the route either holds a handler whose handle slot is a stub, or nothing."""
    memory = [
        {'addr': 'buf:dispatch+0x10', 'pointer': 'route'},
    ]
    if handler:
        memory += [
            {'addr': 'buf:route+0x18', 'pointer': 'handler'},
            {'addr': 'buf:handler', 'pointer': 'vtable'},
            {'addr': f'buf:vtable+{HANDLE_SLOT:#x}', 'guest': HANDLE_FN},
        ]
        stubs = [{'address': HANDLE_FN, 'argc': 3, 'argi': [0, 1, 2], 'ret': hex(result & MASK64)}]
    else:
        memory.append({'addr': 'buf:route+0x18', 'bytes': '00' * 8})
        stubs = [{'address': FALLBACK_FN, 'argc': 2, 'argi': [0, 1], 'ret': hex(result & MASK64)}]
    return {
        'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
        'args': {'rdi': 'buf:dispatch', 'rsi': hex(first & MASK64), 'rdx': hex(second & MASK64)},
        'buffers': {
            'dispatch': {'size': DISPATCH_BYTES, 'bytes': 'a5' * DISPATCH_BYTES},
            'route': {'size': ROUTE_BYTES, 'bytes': 'b6' * ROUTE_BYTES},
            'handler': {'size': HANDLER_BYTES, 'bytes': 'c7' * HANDLER_BYTES},
            'vtable': {'size': VTABLE_BYTES, 'bytes': '00' * VTABLE_BYTES},
        },
        'memory': memory,
        'imports': [],
        'stubs': stubs,
    }


CASES = [
    case('handler_present_dispatches', handler=True, first=1, second=2, result=0x55),
    case('handler_present_zero_words', handler=True, first=0, second=0, result=0),
    case('handler_present_all_ones', handler=True, first=MASK64, second=MASK64, result=MASK64),
    case('no_handler_passes_words', handler=False, first=1, second=2, result=0x66),
    case('no_handler_zero_words', handler=False, first=0, second=0, result=0),
    case('no_handler_all_ones', handler=False, first=MASK64, second=0x8000000000000000,
         result=MASK64),
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
