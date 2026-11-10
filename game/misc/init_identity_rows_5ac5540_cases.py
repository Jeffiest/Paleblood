#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_init_identity_rows_5ac5540 (0x00409110), for tools/verify.py run.

usage: init_identity_rows_5ac5540_cases.py OUT_DIR

The function writes the 48-byte matrix at 0x05ac5540 and then the flag at 0x05ac5590, unless the flag's
low byte is already nonzero. Each case sets old bytes in the matrix, a flag value, and marker bytes
beside the matrix and after the flag that must survive. The function takes no arguments, so the
argument registers hold values that must be ignored.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x00409110'
MATRIX = 0x05ac5540
FLAG = 0x05ac5590
BYTES = 48
BEFORE = 0x05ac5538
AFTER = 0x05ac5570
AFTER_FLAG = 0x05ac5598
GARBAGE = {'rdi': '0x5a5a5a5a5a5a5a5a', 'rsi': '0x1111111111111111', 'rdx': '0xffffffffffffffff',
           'rcx': '0x0', 'r8': '0x8080808080808080', 'r9': '0x7f'}


def ramp(seed):
    """Bytes that differ from their neighbours, so a wrong offset or width is visible."""
    return bytes(((i * 37 + seed) & 0xff) for i in range(BYTES)).hex()


def case(cid, flag, old='e5' * BYTES, registers=None):
    """One call with the flag's eight bytes (low byte first) and old matrix bytes."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': dict(GARBAGE if registers is None else registers),
            'buffers': {}, 'imports': [], 'stubs': [],
            'memory': [{'addr': hex(BEFORE), 'bytes': 'a1' * 8},
                       {'addr': hex(AFTER), 'bytes': 'b2' * 16},
                       {'addr': hex(AFTER_FLAG), 'bytes': 'c3' * 8},
                       {'addr': hex(MATRIX), 'bytes': old},
                       {'addr': hex(FLAG), 'bytes': flag}]}


CASES = [
    case('flag_clear_old_bytes', '00' * 8),
    case('flag_clear_zero_matrix', '00' * 8, old='00' * BYTES),
    case('flag_clear_all_ones_matrix', '00' * 8, old='ff' * BYTES),
    case('flag_clear_ramp_matrix', '00' * 8, old=ramp(0x42)),
    case('flag_clear_zero_registers', '00' * 8, registers={k: '0x0' for k in GARBAGE}),
    case('flag_low_byte_clear_upper_bytes_set', '00' + 'ff' * 7),
    case('flag_low_byte_clear_second_byte_one', '0001' + '00' * 6, old=ramp(0x99)),
    case('flag_set', '01' + '00' * 7),
    case('flag_set_ramp_matrix', '01' + '00' * 7, old=ramp(0x17)),
    case('flag_low_byte_high_bit', '80' + '00' * 7),
    case('flag_low_byte_all_ones', 'ff' + '00' * 7),
    case('flag_all_ones', 'ff' * 8, old='00' * BYTES),
    case('flag_low_byte_two', '02' + '00' * 7),
]


def main():
    """Write one JSON case per call shape to the requested directory."""
    if len(sys.argv) != 2:
        print(f'usage: {Path(__file__).name} OUT_DIR', file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        (output / (fixture['id'] + '.json')).write_text(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} cases written to {output}')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
