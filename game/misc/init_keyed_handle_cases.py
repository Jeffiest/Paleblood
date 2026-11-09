#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic handles for the keyed handle initialization (0x01e509f0): a target that is null or
set, and flag bytes that are clear, already set in other bits, and fully set (the active bit is
only added)."""
import json
from pathlib import Path
import sys

ADDRESS = '0x01e509f0'
VTABLE = '0x05798a50'
HANDLE_SIZE = 0x20
TARGET_SIZE = 0x10


def case(cid, target=True, flags=0x00):
    """A handle buffer with its flag byte preset; the target is a buffer or null."""
    buffers = {'handle': {'size': HANDLE_SIZE, 'bytes': 'a5' * HANDLE_SIZE}}
    memory = [{'addr': 'buf:handle+24', 'bytes': f'{flags:02x}'}]
    if target:
        buffers['target'] = {'size': TARGET_SIZE, 'bytes': '5e' * TARGET_SIZE}
        args_target = 'buf:target'
    else:
        args_target = '0x0'
    return {
        'schema': 1,
        'address': ADDRESS,
        'id': cid,
        'returns': 'void',
        'args': {'rdi': 'buf:handle', 'rsi': args_target},
        'buffers': buffers,
        'memory': memory,
        'imports': [],
        'stubs': [],
    }


CASES = [
    case('target_set_flags_clear', target=True, flags=0x00),
    case('target_null_flags_clear', target=False, flags=0x00),
    case('flags_other_bits_kept', target=True, flags=0x20),
    case('flags_active_already_set', target=True, flags=0x01),
    case('flags_all_set', target=False, flags=0xff),
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
