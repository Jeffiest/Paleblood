#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic holders for the pending-record notifier at 0x01887680.

Null and empty holders, records whose flag byte is each kind of value, the key's full 32 bits, and
upper register bits of the ignored second argument. The notifier is a scripted stub. No recordings.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01887680'
NOTIFIER = '0x018873c0'
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1


def record(flag, key):
    """A record: an ignored first byte, the flag byte, two ignored bytes, then the 32-bit key."""
    return bytes([0xa5, flag & 0xff, 0x5a, 0xc3]).hex() + struct.pack('<I', key & MASK32).hex()


def case(cid, holder=True, has_record=True, flag=0x00, key=0x11223344, ignored=0x0102030405060708,
         owner=0x7000000000000001):
    """One call. The notifier is scripted and compared with the owner and the key when it is reached."""
    buffers = {
        'owner': {'size': 16, 'bytes': 'b0' * 16},
        'holder': {'size': 16, 'bytes': 'd1' * 16},
        'record': {'size': 8, 'bytes': record(flag, key)},
    }
    memory = []
    if holder:
        memory.append({'addr': 'buf:holder+8', 'pointer': 'record'} if has_record
                      else {'addr': 'buf:holder+8', 'bytes': '00' * 8})
    fixture = {
        'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
        'args': {'rdi': f'0x{owner & MASK64:016x}', 'rsi': f'0x{ignored & MASK64:016x}',
                 'rdx': 'buf:holder' if holder else '0x0'},
        'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': [],
    }
    if holder and has_record and flag == 0:
        fixture['stubs'].append({'address': NOTIFIER, 'argc': 2, 'argi': [0, 1]})
    return fixture


CASES = [
    case('null_holder', holder=False),
    case('null_holder_upper_owner', holder=False, owner=0xffffffffffffffff, ignored=0x8000000000000000),
    case('holder_without_record', has_record=False),
    case('holder_without_record_flag_clear', has_record=False, flag=0x00),
    case('flag_clear_notifies', flag=0x00),
    case('flag_clear_key_zero', flag=0x00, key=0),
    case('flag_clear_key_high_bit', flag=0x00, key=0x80000000),
    case('flag_clear_key_all_bits', flag=0x00, key=MASK32),
    case('flag_clear_owner_all_bits', flag=0x00, owner=MASK64),
    case('flag_clear_ignored_upper_bits', flag=0x00, ignored=0xfedcba9876543210),
    case('flag_one_skips', flag=0x01),
    case('flag_0x80_skips', flag=0x80),
    case('flag_all_bits_skips', flag=0xff),
    case('flag_0x02_skips', flag=0x02),
    case('flag_0x40_skips', flag=0x40),
    case('flag_low_nibble_skips', flag=0x0f, key=0xdeadbeef),
]


def main():
    """Write only authored fixture JSON to the requested private directory."""
    if len(sys.argv) != 2:
        print(f'usage: {Path(__file__).name} OUT_DIR', file=sys.stderr)
        return 2
    directory = Path(sys.argv[1])
    directory.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        (directory / (fixture['id'] + '.json')).write_text(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} synthetic cases written to {directory}')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
