#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_update_and_drop_finished (0x022556f0), for tools/verify.py run.

usage: update_and_drop_finished_cases.py OUT_DIR

Two lists of item pointers in an owner (first list at +0x10, second at +0x38). Each item has a
vtable with dispose (+0x08), finished (+0x20) and update (+0xd0) slots, and a manager returned
by the lookup, whose vtable has the remove slot (+0x70). Covers empty lists, kept and dropped
items at the start, middle and end of each list, runs of dropped items, a drop of the last
item (the early return), and both lists in one call.
"""
import json
import os
import sys

UPDATE, FINISHED, DISPOSE, REMOVE = '0x00400300', '0x004000a0', '0x00400020', '0x004009f0'
FIND, MEMMOVE = '0x0247b720', '0x02fbe658'
STEP_BYTES = 16

# The null test after the item's vtable was already used by the update call (it faults first).
UNREACHABLE = {
    '0x02255742': ('taken', 'null item: the update call at 0x0225572c already dereferenced it'),
    '0x022557f2': ('taken', 'null item: the update call at 0x022557d6 already dereferenced it'),
}


def walk(flags, stubs):
    """Appends the stub entries the original makes while it walks one list whose items are
    dropped (True) or kept (False), in the order it makes them."""
    items = list(range(len(flags)))
    i = 0
    while i < len(items):
        while True:
            item = items[i]
            stubs.append({'address': UPDATE, 'argc': 2})
            stubs.append({'address': FINISHED, 'argc': 1, 'ret': 1 if flags[item] else 0})
            if not flags[item]:
                break
            stubs.append({'address': FIND, 'argc': 1, 'ret': 'buf:manager'})
            stubs.append({'address': DISPOSE, 'argc': 1})
            stubs.append({'address': REMOVE, 'argc': 2})
            stubs.append({'address': MEMMOVE, 'argc': 3})
            del items[i]
            if i == len(items):
                return
        i += 1


def case(cid, first, second):
    """first and second: the finished flag of each item in the list, in order."""
    b = {'owner': {'size': 0x48}, 'step': {'size': STEP_BYTES}, 'manager': {'size': 16},
         'manager_vt': {'size': 0x78}}
    m = [{'addr': 'buf:manager', 'pointer': 'manager_vt'},
         {'addr': 'buf:manager_vt+112', 'guest': REMOVE}]
    stubs = []
    for name, flags in (('a', first), ('b', second)):
        b['slots_' + name] = {'size': max(8, 8 * len(flags))}
        base = 0x10 if name == 'a' else 0x38
        m.append({'addr': f'buf:owner+{base}', 'pointer': f'slots_{name}'})
        m.append({'addr': f'buf:owner+{base + 8}', 'pointer': f'slots_{name}+{8 * len(flags)}'})
        for i in range(len(flags)):
            item = f'item_{name}{i}'
            b[item] = {'size': 16}
            b[item + '_vt'] = {'size': 0xd8}
            m += [{'addr': f'buf:slots_{name}+{8 * i}', 'pointer': item},
                  {'addr': f'buf:{item}', 'pointer': item + '_vt'},
                  {'addr': f'buf:{item}_vt+8', 'guest': DISPOSE},
                  {'addr': f'buf:{item}_vt+32', 'guest': FINISHED},
                  {'addr': f'buf:{item}_vt+208', 'guest': UPDATE}]
    walk(first, stubs)
    walk(second, stubs)
    return {'schema': 1, 'address': '0x022556f0', 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:owner', 'rsi': 'buf:step'}, 'buffers': b, 'memory': m,
            'stubs': stubs, 'imports': []}


CASES = [
    case('both_empty', [], []),
    case('first_kept_only', [False], []),
    case('first_dropped_only', [True], []),
    case('first_dropped_then_kept', [True, False], []),
    case('first_kept_dropped_kept', [False, True, False], []),
    case('first_kept_then_last_dropped', [False, True], []),
    case('first_run_dropped', [True, True, False], []),
    case('first_all_dropped', [True, True], []),
    case('first_mixed_long', [False, True, True, False, True], []),
    case('second_kept_only', [], [False]),
    case('second_dropped_only', [], [True]),
    case('second_last_dropped', [], [False, True]),
    case('second_kept_dropped_kept', [], [False, True, False]),
    case('second_all_dropped', [], [True, True]),
    case('both_lists', [False, True], [True, False]),
    case('first_empty_second_mixed', [], [True, False, True]),
]


def main():
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
