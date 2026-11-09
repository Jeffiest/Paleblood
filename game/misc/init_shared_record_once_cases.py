#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic states for misc_init_shared_record_once (0x018882a0).

usage: init_shared_record_once_cases.py OUT_DIR

The init flag at 0x05acebc8 is tested as its low byte. The shared object pointer at 0x05940670 is created
by a stub when it is null. The flag query is the object's vtable slot at 0x20: it writes a record byte, and
the 0x20 bit must be set or the fatal report stub runs (and the setup goes on). The teardown registration
receives the entry, the record and the handle. Covers a set flag (no work), a non-null and a null shared
object, a set and a clear flag bit, and a flag whose upper bytes are set with a zero low byte.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x018882a0'
FLAG = '0x05acebc8'
SHARED = '0x05940670'
CREATE = '0x02fa2b10'
FATAL = '0x024b55b0'
REGISTER = '0x02fbe548'
QUERY = '0x004000a0'
MASK64 = (1 << 64) - 1


def word(value):
    """Encode a complete eight-byte value."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, flag=0, shared_null=False, flag_byte=0x20):
    """One call. The flag query writes flag_byte into the record; the registration and fatal stubs are
    scripted only on the paths that reach them."""
    buffers = {'obj': {'size': 0x10, 'bytes': 'ab' * 0x10}, 'vt': {'size': 0x40}}
    memory = [{'addr': FLAG, 'bytes': word(flag)},
              {'addr': SHARED, 'bytes': word(0)} if shared_null else {'addr': SHARED, 'pointer': 'obj'},
              {'addr': 'buf:obj+0', 'pointer': 'vt'},
              {'addr': 'buf:vt+0x20', 'guest': QUERY}]
    stubs = []
    if (flag & 0xff) == 0:
        if shared_null:
            stubs.append({'address': CREATE, 'argc': 0, 'ret': 'buf:obj'})
        query_bytes = bytes([flag_byte]) + bytes(7)
        stubs.append({'address': QUERY, 'argc': 3, 'argi': [1, 2],
                      'writes': [{'arg': 0, 'offset': 0, 'bytes': query_bytes.hex()}]})
        if (flag_byte & 0x20) == 0:
            stubs.append({'address': FATAL, 'argc': 3, 'argi': [0, 1, 2]})
        stubs.append({'address': REGISTER, 'argc': 3})
    returns = 'void'
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': returns, 'args': {},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('flag_set_no_work', flag=1),
    case('flag_upper_bytes_low_zero', flag=0x100, flag_byte=0x20),
    case('flag_clear_shared_present_bit_set'),
    case('flag_clear_shared_null_bit_set', shared_null=True),
    case('flag_clear_shared_present_bit_clear', flag_byte=0x00),
    case('flag_clear_shared_null_bit_clear', shared_null=True, flag_byte=0x00),
    case('flag_clear_other_bits_only', flag_byte=0xdf),
    case('flag_clear_all_bits', flag_byte=0xff),
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
