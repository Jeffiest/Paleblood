#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic pools for misc_select_idle_pool_entry (0x01e50c70): the forwarding path with the flag
byte set, the search with an empty list, no match, a match first, second and last, entries whose
references or kind differ, the kind's bit 15 ignored, and the entry's flag bit cleared with the
other bits kept."""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01e50c70'
UNREACHABLE = {'0x01e50cb3': ('taken', 'null test after the entry was already read through at 0x01e50c99, so it cannot be null here')}
FORWARD = '0x01c96990'
POOL_SIZE = 0x2b0
ENTRY_SIZE = 0x30
MASK64 = (1 << 64) - 1


def u32(value):
    """Four bytes of a 32-bit value, little endian."""
    return struct.pack('<I', value & 0xffffffff).hex()


def u16(value):
    """Two bytes of a 16-bit value, little endian."""
    return struct.pack('<H', value & 0xffff).hex()


def case(cid, entries=(), forward=False, flag_byte=None, arg_low=None, value=0x55555555,
         upper_bits=0):
    """A holder whose pool lists `entries` (references, kind, flags) in order. The flag byte picks the
    path through the low byte of rsi; `upper_bits` sets bits above it, which must not matter."""
    rsi = (1 if forward else 0) if arg_low is None else arg_low
    rsi |= upper_bits
    buffers = {'holder': {'size': 0x10, 'bytes': '00' * 0x10},
               'pool': {'size': POOL_SIZE, 'bytes': 'dd' * POOL_SIZE}}
    memory = [{'addr': 'buf:holder+8', 'pointer': 'pool'}]
    if entries:
        memory.append({'addr': 'buf:pool+680', 'pointer': 'e0'})
    else:
        memory.append({'addr': 'buf:pool+680', 'bytes': '00' * 8})
    for i, (refs, kind, flags) in enumerate(entries):
        name = f'e{i}'
        buffers[name] = {'size': ENTRY_SIZE, 'bytes': 'cc' * ENTRY_SIZE}
        memory += [
            {'addr': f'buf:{name}+8', 'bytes': u32(refs)},
            {'addr': f'buf:{name}+12', 'bytes': u16(kind)},
            {'addr': f'buf:{name}+32', 'bytes': f'{flags & 0xff:02x}'},
        ]
        if i + 1 < len(entries):
            memory.append({'addr': f'buf:{name}+16', 'pointer': f'e{i + 1}'})
        else:
            memory.append({'addr': f'buf:{name}+16', 'bytes': '00' * 8})
    stubs = []
    if forward or (arg_low is not None and arg_low & 0xff):
        stubs.append({'address': FORWARD, 'argc': 2, 'ret': '0x1234567890abcdef'})
    return {
        'schema': 1,
        'address': ADDRESS,
        'id': cid,
        'returns': 'i64',
        'args': {'rdi': 'buf:holder', 'rsi': hex(rsi & MASK64), 'rdx': hex(value & 0xffffffff)},
        'buffers': buffers,
        'memory': memory,
        'imports': [],
        'stubs': stubs,
    }


CASES = [
    case('empty_list'),
    case('forward_flag_one', forward=True),
    case('forward_flag_ff', arg_low=0xff),
    case('forward_with_upper_bits', arg_low=0x80, upper_bits=0x100),
    case('low_byte_zero_upper_bits_list_path', arg_low=0x0, upper_bits=0x100),
    case('first_entry_idle', entries=[(0, 0x4000, 0x01)]),
    case('first_entry_idle_flags_cleared_others_kept', entries=[(0, 0x4000, 0xff)]),
    case('first_entry_idle_flag_already_clear', entries=[(0, 0x4000, 0x00)]),
    case('second_entry_idle', entries=[(3, 0x4000, 0x01), (0, 0x4000, 0x01)]),
    case('last_entry_idle', entries=[(1, 0x4000, 0x01), (2, 0x4001, 0x01), (0, 0x4000, 0x01)]),
    case('no_entry_idle', entries=[(1, 0x4000, 0x01), (0, 0x0000, 0x01), (0, 0x4001, 0x01)]),
    case('references_high_bits_not_idle', entries=[(0x10000, 0x4000, 0x01)]),
    case('kind_bit_15_ignored', entries=[(0, 0xc000, 0x01)]),
    case('kind_low_bits_differ', entries=[(0, 0x0000, 0x01), (0, 0x4000, 0x01)]),
    case('forward_does_not_touch_entries', forward=True, entries=[(0, 0x4000, 0x01)]),
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
