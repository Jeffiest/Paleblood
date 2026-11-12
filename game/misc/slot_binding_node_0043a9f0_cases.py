#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_bind_slot_node_0043a9f0 (0x0043a9f0), for tools/verify.py run.

usage: slot_binding_node_0043a9f0_cases.py OUT_DIR

A source object (vtable, flag byte at +8, two key banks at +9 and +0x11) is bound into a table
sorted by a 16-bit key. Covers tables of 0 to 5 nodes (every pass count of the search), keys
smaller than all, equal, between and larger than the stored ones, a busy equal node (a new node
is made), all four flag combinations of the low bits with and without the bank bit, and every
bit of the slot mask.
"""
import json
import os
import struct
import sys

ADDRESS = '0x0043a9f0'
LOW = 1          # index of the key's low byte inside a bank (the second variant uses 1)
DESCRIBE, MASK, ALLOC = '0x00400020', '0x00400300', '0x00438210'
LABEL = '0x04b3cbe3'
MARK = 0x55
UNREACHABLE = {'0x0043aa99': ('taken', 'null test after the node was already loaded through at 0x43aa8f')}


def case(cid, keys, key, flags=0, mask=0, busy=(), node_mode=1, other_bank=0x77):
    """keys: sorted node keys; key: the source's 16-bit key; flags: source flag byte."""
    bank = 1 if flags & 0x80 else 0
    b = {'src': {'size': 0x20}, 'vt': {'size': 0x60}, 'tbl': {'size': 0x38}, 'nodes': {'size': 8 * max(len(keys), 1)},
         'fresh': {'size': 0x78}}
    banks = bytearray([other_bank] * 16)
    banks[bank * 8 + LOW] = key & 0xff
    banks[bank * 8 + LOW + 1] = key >> 8
    m = [{'addr': 'buf:src', 'pointer': 'vt'}, {'addr': 'buf:src+8', 'bytes': bytes([flags]).hex()},
         {'addr': 'buf:src+9', 'bytes': banks.hex()},
         {'addr': 'buf:vt+64', 'guest': DESCRIBE}, {'addr': 'buf:vt+88', 'guest': MASK},
         {'addr': 'buf:tbl+40', 'pointer': 'nodes'}, {'addr': 'buf:tbl+48', 'bytes': struct.pack('<Q', len(keys)).hex()},
         {'addr': 'buf:fresh+16', 'bytes': 'aa' * 0x60}]
    for i, k in enumerate(keys):
        n = f'n{i}'
        b[n] = {'size': 0x78}
        m += [{'addr': f'buf:nodes+{8 * i}', 'pointer': n}, {'addr': f'buf:{n}+16', 'bytes': 'cc' * 4},
              {'addr': f'buf:{n}+20', 'bytes': struct.pack('<i', k).hex()},
              {'addr': f'buf:{n}+24', 'bytes': (bytes([MARK]) * 80).hex()},
              {'addr': f'buf:{n}+104', 'bytes': bytes([node_mode, 2 if i in busy else 0]).hex()}]
    stubs = [{'address': DESCRIBE, 'argc': 2}]
    found = [i for i, k in enumerate(keys) if k == key and k <= key]
    # the node the search lands on: the last one whose key is not above the source's key
    below = [i for i, k in enumerate(keys) if k <= key]
    node_ok = bool(below) and keys[below[-1]] == key and below[-1] not in busy
    if node_ok:
        if (flags & 3) in (1, 3):
            stubs.append({'address': MASK, 'argc': 1, 'ret': hex(mask)})
        elif (flags & 3) in (0, 2):
            pass
    else:
        stubs.append({'address': ALLOC, 'argc': 2, 'ret': 'buf:fresh'})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:src', 'rsi': 'buf:tbl', 'rdx': '0x1234abcd'}, 'buffers': b, 'memory': m,
            'stubs': stubs, 'imports': []}


CASES = []
for flags in (0, 1, 2, 3, 0x80, 0x81, 0x82, 0x83, 0xfc):
    CASES.append(case(f'empty_flags_{flags:02x}', [], 0x0305, flags))
KEYS = [0x0102, 0x0305, 0x0400, 0x0a0b, 0x7fff]
for n in range(1, 6):
    ks = KEYS[:n]
    CASES.append(case(f'smaller_than_all_{n}', ks, 0x0001, 0))
    CASES.append(case(f'larger_than_all_{n}', ks, 0x7ffe if n == 5 else 0x7f00 + 1, 1, mask=0x55))
    for i, k in enumerate(ks):
        CASES.append(case(f'equal_{n}_{i}_mode0', ks, k, 0, node_mode=1))
        CASES.append(case(f'equal_{n}_{i}_mode1', ks, k, 1, mask=0x1ff))
    CASES.append(case(f'between_{n}', ks, 0x0200 if n > 1 else 0x0103, 1))
for flags in (0, 1, 2, 3, 0x80, 0x81, 0x82, 0x83):
    for node_mode in (0, 1):
        CASES.append(case(f'found_{flags:02x}_node{node_mode}', KEYS[:3], 0x0305, flags, mask=0x000,
                          node_mode=node_mode))
    CASES.append(case(f'found_{flags:02x}_all_bits', KEYS[:3], 0x0305, flags, mask=0x1ff))
    CASES.append(case(f'found_{flags:02x}_high_bits', KEYS[:3], 0x0305, flags, mask=0xfffffe00))
for bit in range(9):
    CASES.append(case(f'found_mask_bit{bit}', KEYS[:3], 0x0305, 3, mask=1 << bit))
    CASES.append(case(f'found_mask_bit{bit}_mode1', KEYS[:3], 0x0305, 1, mask=1 << bit))
CASES.append(case('found_mask_bit8_extra', KEYS[:3], 0x0305, 1, mask=0x100))
CASES.append(case('busy_equal_node', KEYS[:3], 0x0305, 3, busy=(1,)))
CASES.append(case('busy_other_node', KEYS[:3], 0x0305, 3, busy=(0, 2), mask=0x4))
CASES.append(case('signed_key_node', [-5, 0x0102], 0x0001, 0))
CASES.append(case('bank_bytes_swapped', KEYS[:3], 0x0400, 0x80, other_bank=0x01))


def main():
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    os.makedirs(sys.argv[1], exist_ok=True)
    seen = set()
    for c in CASES:
        assert c['id'] not in seen, c['id']
        seen.add(c['id'])
        with open(os.path.join(sys.argv[1], f"{c['id']}.json"), 'w') as f:
            json.dump(c, f, indent=1)
    print(f'{len(CASES)} cases written to {sys.argv[1]}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
