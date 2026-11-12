#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic resets for misc_reset_indexed_slot_record (0x026f7720), for tools/verify.py run.

usage: reset_indexed_slot_record_cases.py OUT_DIR

The original stores fixed values into the record at RDI: two empty slots at +0x18 and +0x1c, the state words
from +0x28 to +0x4c, and never touches the bytes between them. The buffer is larger than the record, so any
write past it, or a skipped field, shows up in the comparison. Three prefills cover zeros, ones and a mixed pattern.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x026f7720'
BUFFER_SIZE = 0x60            # the record is 0x50 bytes; the rest is marker space the original must not write
PREFILLS = {
    'prefill_zero': '00' * BUFFER_SIZE,
    'prefill_ones': 'ff' * BUFFER_SIZE,
    'prefill_mixed': ''.join(f'{(0x5a + i) & 0xff:02x}' for i in range(BUFFER_SIZE)),
}


def case(cid, prefill):
    """One reset of a record with the given prefilled bytes; RAX is not compared (the original leaves it alone)."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:record'},
            'buffers': {'record': {'size': BUFFER_SIZE, 'bytes': prefill}},
            'memory': [],
            'imports': [],
            'stubs': []}


CASES = [case(cid, prefill) for cid, prefill in PREFILLS.items()]


def main():
    """Write deterministic synthetic resets to the requested directory."""
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
