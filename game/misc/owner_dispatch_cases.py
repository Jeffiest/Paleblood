#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic owners for the dispatch (0x0040d1d0): a missing or present target, a context with a default
value that is zero or not, the unrestricted flag bit set or clear (and bits above it), and the scripted
dispatch, default value source and label writer."""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x0040d1d0'
DISPATCH = '0x00500600'
DEFAULT_SOURCE = '0x00454320'
WRITE_LABEL = '0x0278ad30'
LABEL = '0x04b3b8d0'
MASK64 = (1 << 64) - 1
OWNER_SIZE = 0x20
WRAPPER_SIZE = 0x18
TARGET_SIZE = 0x10
VTABLE_SIZE = 0x28
CONTEXT_SIZE = 0x20
DISPATCH_RESULT = 0x1234


def word(value):
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, target=True, context=True, default=0x55, flags=0x00, first=0x11, source_value=0x77):
    """An owner with a wrapper whose target (or none) has a dispatch slot at +0x20, and a context (or none)."""
    memory = [{'addr': 'buf:owner+0x10', 'pointer': 'wrapper'}]
    if context:
        memory.append({'addr': 'buf:owner+0x18', 'pointer': 'context'})
    else:
        memory.append({'addr': 'buf:owner+0x18', 'bytes': word(0)})
    if target:
        memory.append({'addr': 'buf:wrapper+0x10', 'pointer': 'target'})
    else:
        memory.append({'addr': 'buf:wrapper+0x10', 'bytes': word(0)})
    memory.append({'addr': 'buf:target+0x0', 'pointer': 'vtable'})
    memory.append({'addr': 'buf:vtable+0x20', 'guest': DISPATCH})
    context_bytes = '4e' * 0x10 + '4e' * 0x08 + word(default)
    return {
        'schema': 1,
        'address': ADDRESS,
        'id': cid,
        'returns': 'i64',
        'args': {'rdi': 'buf:owner', 'rsi': hex(first & MASK64), 'rdx': hex(flags & MASK64)},
        'buffers': {
            'owner': {'size': OWNER_SIZE, 'bytes': 'c3' * OWNER_SIZE},
            'wrapper': {'size': WRAPPER_SIZE, 'bytes': 'b5' * WRAPPER_SIZE},
            'target': {'size': TARGET_SIZE, 'bytes': 'a6' * TARGET_SIZE},
            'vtable': {'size': VTABLE_SIZE, 'bytes': 'f2' * VTABLE_SIZE},
            'context': {'size': CONTEXT_SIZE, 'bytes': context_bytes},
        },
        'memory': memory,
        'imports': [],
        'stubs': [
            {'address': DISPATCH, 'argc': 5, 'ret': hex(DISPATCH_RESULT)},
            {'address': DEFAULT_SOURCE, 'argc': 0, 'ret': hex(source_value)},
            {'address': WRITE_LABEL, 'argc': 3, 'ret': '0x0'},
        ],
    }


CASES = [
    case('no_target_writes_label', target=False, flags=0x00),
    case('no_target_unrestricted_no_write', target=False, flags=0x200000),
    case('no_target_no_context', target=False, context=False, flags=0x00),
    case('target_default_nonzero', default=0x55, flags=0x00),
    case('target_default_zero_uses_source', default=0, flags=0x00, source_value=0x77),
    case('target_unrestricted_skips_default', default=0x55, flags=0x200000),
    case('target_unrestricted_zero_default', default=0, flags=0x200000),
    case('target_bit21_clear_upper_bits_set', default=0x55, flags=0xffffffffffdfffff),
    case('target_zero_first_argument', first=0, default=0x55, flags=0x00),
    case('target_full_width_first', first=MASK64, default=0x8000000000000000, flags=0x00),
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
