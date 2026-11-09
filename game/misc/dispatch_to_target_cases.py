#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic dispatches for misc_dispatch_to_target (0x0040d1d0).

The dispatcher reaches a holder, whose target (or none) has a vtable whose slot 0x20 is a stub, and a
context whose word at 0x18 is the second value. The helper (0x00454320), the report (0x0278ad30) and
the target slot are stubs. Covers a held target with the flag set and clear, a zero context word that
calls the helper, and no target with the report made, skipped by the flag, or skipped by a null context.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x0040d1d0'
HELPER_FN = '0x00454320'
REPORT_FN = '0x0278ad30'
SLOT_FN = '0x00400060'
REPORT_ADDRESS = '0x04b3b8d0'
SKIP_FLAG = 0x200000
DISPATCH_BYTES = 0x20
HOLDER_BYTES = 0x18
TARGET_BYTES = 8
VTABLE_BYTES = 0x28
CONTEXT_BYTES = 0x20
MASK64 = (1 << 64) - 1


def case(cid, target=True, context=True, value=5, flags=0, context_word=0x99, helper=0x42,
         handled=0x1111):
    """One dispatch. The stubs are only those the original would call on this path."""
    stubs = []
    memory = [{'addr': 'buf:dispatch+0x10', 'pointer': 'holder'}]
    if context:
        memory.append({'addr': 'buf:dispatch+0x18', 'pointer': 'context'})
        memory.append({'addr': 'buf:context+0x18', 'bytes': struct.pack('<Q', context_word & MASK64).hex()})
    else:
        memory.append({'addr': 'buf:dispatch+0x18', 'bytes': '00' * 8})
    if target:
        memory += [
            {'addr': 'buf:holder+0x10', 'pointer': 'target'},
            {'addr': 'buf:target', 'pointer': 'vtable'},
            {'addr': f'buf:vtable+0x20', 'guest': SLOT_FN},
        ]
        if not (flags & SKIP_FLAG) and context_word == 0 and context:
            stubs.append({'address': HELPER_FN, 'argc': 3, 'argi': [0, 1, 2], 'ret': hex(helper & MASK64)})
        stubs.append({'address': SLOT_FN, 'argc': 5, 'argi': [0, 1, 2, 3, 4],
                      'ret': hex(handled & MASK64)})
    else:
        memory.append({'addr': 'buf:holder+0x10', 'bytes': '00' * 8})
        if context and not (flags & SKIP_FLAG):
            stubs.append({'address': REPORT_FN, 'argc': 3, 'argi': [0, 1, 2]})
    return {
        'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
        'args': {'rdi': 'buf:dispatch', 'rsi': hex(value & MASK64), 'rdx': hex(flags)},
        'buffers': {
            'dispatch': {'size': DISPATCH_BYTES, 'bytes': 'a5' * DISPATCH_BYTES},
            'holder': {'size': HOLDER_BYTES, 'bytes': 'b6' * HOLDER_BYTES},
            'target': {'size': TARGET_BYTES, 'bytes': 'c7' * TARGET_BYTES},
            'vtable': {'size': VTABLE_BYTES, 'bytes': '00' * VTABLE_BYTES},
            'context': {'size': CONTEXT_BYTES, 'bytes': 'd8' * CONTEXT_BYTES},
        },
        'memory': memory,
        'imports': [],
        'stubs': stubs,
    }


CASES = [
    case('target_flag_set_second_zero', target=True, flags=SKIP_FLAG, value=5),
    case('target_flag_clear_context_word_used', target=True, flags=0, context_word=0x99),
    case('target_flag_clear_context_zero_calls_helper', target=True, flags=0, context_word=0,
         helper=0x42),
    case('target_flag_clear_other_bits_only', target=True, flags=0x400000, context_word=0x77),
    case('target_flag_set_with_zero_context', target=True, flags=SKIP_FLAG, context_word=0,
         value=MASK64),
    case('no_target_flag_clear_reports', target=False, flags=0, value=0x1234),
    case('no_target_flag_set_skips_report', target=False, flags=SKIP_FLAG, value=0x1234),
    case('no_target_no_context_returns_zero', target=False, context=False, flags=0),
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
