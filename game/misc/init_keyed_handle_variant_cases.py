#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic keyed handles for misc_init_keyed_handle_variant (0x01e534c0): a target that is null or
set, flag bits clear, set or all set before the active bit is added, and an id that was set before."""
import json
from pathlib import Path
import sys

ADDRESS = '0x01e534c0'
MASK64 = (1 << 64) - 1


def case(cid, target=0x1234567, flags=0x00, initial_id=0x5555):
    """A handle that starts with the given flags and id; the target is passed as the second argument."""
    return {
        'schema': 1,
        'address': ADDRESS,
        'id': cid,
        'returns': 'void',
        'args': {'rdi': 'buf:handle', 'rsi': hex(target & MASK64)},
        'buffers': {'handle': {'size': 0x20, 'bytes': f'{flags & 0xff:02x}'.rjust(2, '0')
                               + '00' * 0x17 + '00' * 0x8}},
        'memory': [],
        'imports': [],
        'stubs': [],
    }


CASES = [
    case('null_target_no_flags', target=0),
    case('target_no_flags'),
    case('target_flag_already_set', flags=0x01),
    case('target_other_flag_bits_kept', flags=0xfe),
    case('target_all_flag_bits', flags=0xff),
    case('target_high_bits', target=0x8000000000000000),
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
