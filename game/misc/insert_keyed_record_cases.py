#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic registry for the keyed insert at 0x01887870: the key goes to the ring of the table at +0x10 of the
registry singleton, and the insert's result is returned unchanged. The null registry path is declared
unreachable: it reports a missing singleton and then loads through null."""
import json
from pathlib import Path
import sys

ADDRESS = '0x01887870'
REGISTRY_GLOBAL = '0x0593b120'
INSERT = '0x018876b0'
MASK64 = (1 << 64) - 1
UNREACHABLE = {'0x01887886': ('fallthrough', 'fatal error 0x024b55b0 then a load through null at 0x018878ac')}


def case(cid, key=0x12345678, ret=0, arg_key=None):
    """The registry holds a table whose ring pointer is the insert's first argument; the key is the 32-bit EDI."""
    arg_key = key if arg_key is None else arg_key
    buffers = {'registry': {'size': 0xc88}, 'table': {'size': 0x48}, 'ring': {'size': 0x18}}
    memory = [{'addr': REGISTRY_GLOBAL, 'pointer': 'registry'},
              {'addr': 'buf:registry+0xc80', 'pointer': 'table'},
              {'addr': 'buf:table+0x10', 'pointer': 'ring'}]
    stubs = [{'address': INSERT, 'argc': 2, 'ret': hex(ret & MASK64)}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': hex(arg_key & MASK64)},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('key_zero_forwards_ring', key=0),
    case('key_seven', key=7),
    case('key_all_ones', key=0xffffffff),
    case('upper_register_bits_not_forwarded', key=0x9, arg_key=0xdeadbeef00000009),
    case('insert_result_zero', key=0x55, ret=0),
    case('insert_result_upper_word_returned', key=0x55, ret=0x1234567800000000),
    case('insert_result_all_ones_returned', key=0x55, ret=MASK64),
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
