#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_record_registry_flag (0x018a9c00), for tools/verify.py run.

usage: record_registry_flag_cases.py OUT_DIR

The registry pointer is read from its global (0x0593b120). A null registry is reported through the
fatal report (0x024b55b0), which returns, and the pointer is read again. A flag (0x05527af8) that is
not negative gives whether it is set; a negative flag gives bit 22 of the registry's mode word
(+0xa60), with the rest of the shifted word kept in the upper bytes.
"""
import json
import os
import struct
import sys

ADDRESS = '0x018a9c00'
REGISTRY_GLOBAL = '0x0593b120'
FLAG_GLOBAL = '0x05527af8'
FATAL = '0x024b55b0'
MODE_WORD_OFFSET = 0xa60
REGISTRY_SIZE = 0xc88


def i32(v):
    """Little-endian hex of a 32-bit flag value."""
    return struct.pack('<i', v).hex()


def u64(v):
    """Little-endian hex of a 64-bit word."""
    return struct.pack('<Q', v & ((1 << 64) - 1)).hex()


def case(cid, registry, flag, mode_word=0):
    """registry: True when the global holds a registry buffer, False for null; flag: the int32 flag;
    mode_word: the registry's mode word, read only when the flag is negative."""
    b = {'registry': {'size': REGISTRY_SIZE}}
    if registry:
        m = [{'addr': REGISTRY_GLOBAL, 'pointer': 'registry'},
             {'addr': f'buf:registry+{MODE_WORD_OFFSET}', 'bytes': u64(mode_word)}]
    else:
        m = [{'addr': REGISTRY_GLOBAL, 'bytes': '00' * 8}]
    m.append({'addr': FLAG_GLOBAL, 'bytes': i32(flag)})
    stubs = []
    if not registry:
        stubs.append({'address': FATAL, 'argc': 4, 'argi': [0, 1, 2, 3]})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {}, 'buffers': b, 'memory': m, 'stubs': stubs, 'imports': []}


CASES = [
    case('null_registry_flag_clear', registry=False, flag=0),
    case('null_registry_flag_set', registry=False, flag=3),
    case('registry_flag_clear', registry=True, flag=0),
    case('registry_flag_set', registry=True, flag=0x7fffffff),
    case('registry_flag_negative_bit_clear', registry=True, flag=-2, mode_word=0x1000000),
    case('registry_flag_negative_bit_set', registry=True, flag=-0x80000000, mode_word=0x0000000000400000),
    case('registry_flag_negative_high_bits', registry=True, flag=-5, mode_word=0xffffffffffc00000),
    case('registry_flag_negative_low_bits_set', registry=True, flag=-1, mode_word=0x00000000ffffffff),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    os.makedirs(sys.argv[1], exist_ok=True)
    for c in CASES:
        with open(os.path.join(sys.argv[1], f"{c['id']}.json"), 'w') as f:
            json.dump(c, f, indent=1)
    print(f'{len(CASES)} cases written to {sys.argv[1]}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
