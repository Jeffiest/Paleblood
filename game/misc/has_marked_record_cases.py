#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic record tables for the marked-record lookup at 0x018878d0: a zero count, an empty ring, null
records, unmarked and marked records with matching and other keys, and a match after skipped records. The
null registry path is declared unreachable: it reports a missing singleton and then loads through null."""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x018878d0'
REGISTRY_GLOBAL = '0x0593b120'
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1
UNREACHABLE = {'0x018878e6': ('fallthrough', 'fatal error 0x024b55b0 then a load through null at 0x0188790c')}


def word(value):
    return struct.pack('<Q', value & MASK64).hex()


def record(key, marked):
    """A record: the key dword at +0x8, the marked byte at +0xc, the rest zero."""
    data = bytearray(0x10)
    struct.pack_into('<I', data, 0x8, key & MASK32)
    data[0xc] = marked
    return data.hex()


def case(cid, nodes=(), count=None, key=0x12345678, arg_key=None):
    """`nodes` lists the records in ring order: a record's bytes in hex, or None for a null record pointer."""
    arg_key = key if arg_key is None else arg_key
    buffers = {'registry': {'size': 0xc88}, 'table': {'size': 0x48}, 'sentinel': {'size': 0x18}}
    memory = [{'addr': REGISTRY_GLOBAL, 'pointer': 'registry'},
              {'addr': 'buf:registry+0xc80', 'pointer': 'table'},
              {'addr': 'buf:table+0x30', 'pointer': 'sentinel'},
              {'addr': 'buf:table+0x38', 'bytes': word(len(nodes) if count is None else count)},
              {'addr': 'buf:sentinel+0', 'pointer': 'node0' if nodes else 'sentinel'}]
    for index, data in enumerate(nodes):
        following = f'node{index + 1}' if index + 1 < len(nodes) else 'sentinel'
        buffers[f'node{index}'] = {'size': 0x18}
        memory.append({'addr': f'buf:node{index}+0', 'pointer': following})
        if data is None:
            memory.append({'addr': f'buf:node{index}+16', 'bytes': word(0)})
        else:
            buffers[f'record{index}'] = {'size': 0x10, 'bytes': data}
            memory.append({'addr': f'buf:node{index}+16', 'pointer': f'record{index}'})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i8',
            'args': {'rdi': hex(arg_key & MASK64)},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': []}


MATCH = record(0x12345678, 1)
CASES = [
    case('count_zero_never_walks', nodes=[None], count=0),
    case('empty_ring_with_count', nodes=(), count=1),
    case('null_record_skipped', nodes=[None]),
    case('unmarked_matching_key_skipped', nodes=[record(0x12345678, 0)]),
    case('marked_other_key_skipped', nodes=[record(0x12345679, 1)]),
    case('marked_match_found', nodes=[MATCH]),
    case('match_after_skipped_records', nodes=[None, record(0x1, 0), MATCH]),
    case('key_upper_bits_ignored', nodes=[MATCH], arg_key=0xffffffff12345678),
    case('marked_byte_high_bits_count', nodes=[record(0x12345678, 0x80)]),
    case('no_record_matches', nodes=[record(0x2, 1), record(0x3, 0)]),
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
