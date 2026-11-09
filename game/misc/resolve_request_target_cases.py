#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic handle owners for misc_resolve_request_target (0x00400e40).

The owner's handle points into a page-aligned handle page, whose table gives one target per slot.
Covers a held pending request (with and without a handle), the zero handle that gives the fallback,
and every slot the table lists. The lookup calls nothing, so no stubs are needed.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x00400e40'
OWNER_BYTES = 0x68
HANDLE_FIELD = 0x48
PENDING_FIELD = 0x60
PENDING_BYTES = 0x31
TABLE_FIELD = 0x20
TARGETS_FIELD = 0x28
SLOT_BASE = 0x38
SLOT_STRIDE = 0x38
SLOT_COUNT = 4
PAGE_BYTES = SLOT_BASE + SLOT_STRIDE * SLOT_COUNT
TARGET_BYTES = 0x20


def pointer_preset(address, target):
    """A pointer slot at address that holds the address of a buffer, or literal zero bytes."""
    if target is None:
        return {'addr': address, 'bytes': '00' * 8}
    return {'addr': address, 'pointer': target}


def case(cid, slot=0, pending=False, zero_handle=False):
    """One lookup: the owner holds a pending request or a handle to one slot of the page."""
    handle_target = None if zero_handle else f'page+{SLOT_BASE + slot * SLOT_STRIDE:#x}'
    fixture = {
        'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
        'args': {'rdi': 'buf:owner'},
        'buffers': {
            'owner': {'size': OWNER_BYTES, 'bytes': 'a5' * OWNER_BYTES},
            'pending': {'size': PENDING_BYTES, 'bytes': 'b6' * PENDING_BYTES},
            'page': {'size': PAGE_BYTES, 'bytes': 'c7' * PAGE_BYTES},
            'table': {'size': TARGETS_FIELD + 8 * SLOT_COUNT, 'bytes': 'd8' * (TARGETS_FIELD + 8 * SLOT_COUNT)},
        },
        'memory': [
            pointer_preset(f'buf:owner+{HANDLE_FIELD:#x}', handle_target),
            pointer_preset(f'buf:owner+{PENDING_FIELD:#x}', 'pending' if pending else None),
            pointer_preset(f'buf:page+{TABLE_FIELD:#x}', 'table'),
        ],
        'imports': [],
        'stubs': [],
    }
    for index in range(SLOT_COUNT):
        name = f'target{index}'
        fixture['buffers'][name] = {'size': TARGET_BYTES, 'bytes': f'{0xe0 + index:02x}' * TARGET_BYTES}
        fixture['memory'].append(
            {'addr': f'buf:table+{TARGETS_FIELD + 8 * index:#x}', 'pointer': name})
    return fixture


CASES = [
    case('pending_request_wins_over_handle', slot=0, pending=True),
    case('pending_request_wins_over_zero_handle', pending=True, zero_handle=True),
    case('zero_handle_gives_fallback', zero_handle=True),
    case('slot_zero_target', slot=0),
    case('slot_one_target', slot=1),
    case('slot_two_target', slot=2),
    case('slot_three_target', slot=3),
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
