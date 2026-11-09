#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic owned states for misc_release_owned_state (0x026e3860): with and without each item,
the packed reference at count 0, 1, 2 and wrapped, flag bits and the other bits of the packed word,
the counter below, at and above its threshold and limit, the wrapped counter, a held object, node
lists of zero, one and several nodes, and the two base resets whose results differ.

usage: release_owned_state_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x026e3860'
RESET_MEMBER = '0x026e4ce0'
RELEASE_ITEM = '0x0122da70'
BASE_RESET = '0x026de680'
FATAL = '0x024b55b0'
FREE, DESTROY = '0x004000a0', '0x00400020'
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1
OBJECT_SIZE = 0x998

ALLOCATOR = 0x000
SENTINEL = 0x318
NODE_COUNT = 0x320
NODE_ALLOCATOR = 0x328
HELD = 0x338
HELD_ALLOCATOR = 0x350
WORD_5C8 = 0x5c8
VALUE_5D8 = 0x5d8
COUNTER = 0x5e0
FLAGS = 0x669
ITEM_978 = 0x978
ITEM_980 = 0x980
PACKED_REF = 0x990
FREE_SLOT = 112
DESTROY_SLOT = 32


def q(value):
    """A little-endian 64-bit value."""
    return (value & MASK64).to_bytes(8, 'little').hex()


def u32(value):
    """A little-endian 32-bit value."""
    return (value & MASK32).to_bytes(4, 'little').hex()


def packed(count, other=0):
    """A packed reference word: the count in bits 15 to 29 and the other bits as given."""
    return (count & 0x7fff) << 15 | (other & 0xc0007fff)


def case(cid, item978=False, item980=False, ref=None, counter=0, flags=0x00, held=False, nodes=0,
         base_ret=0, tail_ret=0, word_5c8=0, value_5d8=0):
    """One call on a state built from the arguments. The calls are scripted in the order the code
    makes them: the member reset, the first item with its release and free, the second item's free,
    the packed reference's destroy when its count was one, the member base reset, the counter report
    when the counter is at least the threshold and one more reaches the limit, the held object's free,
    the node frees and the sentinel's free, and finally the tail base reset."""
    b = {'self': {'size': OBJECT_SIZE}, 'alloc': {'size': 8}, 'node_alloc': {'size': 8},
         'held_alloc': {'size': 8}, 'alloc_vt': {'size': 0x78}, 'sentinel': {'size': 16},
         'held': {'size': 16}, 'item978': {'size': 16}, 'item980': {'size': 16}}
    m = [{'addr': 'buf:alloc', 'pointer': 'alloc_vt'}, {'addr': 'buf:node_alloc', 'pointer': 'alloc_vt'},
         {'addr': 'buf:held_alloc', 'pointer': 'alloc_vt'}, {'addr': 'buf:alloc_vt+%d' % FREE_SLOT, 'guest': FREE},
         {'addr': 'buf:self+%d' % ALLOCATOR, 'pointer': 'alloc'},
         {'addr': 'buf:self+%d' % NODE_ALLOCATOR, 'pointer': 'node_alloc'},
         {'addr': 'buf:self+%d' % HELD_ALLOCATOR, 'pointer': 'held_alloc'},
         {'addr': 'buf:self+%d' % SENTINEL, 'pointer': 'sentinel'},
         {'addr': 'buf:self+%d' % NODE_COUNT, 'bytes': q(nodes)},
         {'addr': 'buf:self+%d' % WORD_5C8, 'bytes': q(word_5c8)[:4]},
         {'addr': 'buf:self+%d' % VALUE_5D8, 'bytes': q(value_5d8)},
         {'addr': 'buf:self+%d' % COUNTER, 'bytes': q(counter)},
         {'addr': 'buf:self+%d' % FLAGS, 'bytes': '%02x' % flags},
         {'addr': 'buf:self+%d' % (HELD + 8), 'bytes': q(0x1111)},
         {'addr': 'buf:self+%d' % (HELD + 16), 'bytes': q(0x2222)}]
    stubs = [{'address': RESET_MEMBER, 'argc': 1}]
    if not held:
        m.append({'addr': 'buf:self+%d' % HELD, 'bytes': q(0)})

    if item978:
        m.append({'addr': 'buf:self+%d' % ITEM_978, 'pointer': 'item978'})
        stubs += [{'address': RELEASE_ITEM, 'argc': 1}, {'address': FREE, 'argc': 2}]
    else:
        m.append({'addr': 'buf:self+%d' % ITEM_978, 'bytes': q(0)})
    if item980:
        m.append({'addr': 'buf:self+%d' % ITEM_980, 'pointer': 'item980'})
        stubs.append({'address': FREE, 'argc': 2})
    else:
        m.append({'addr': 'buf:self+%d' % ITEM_980, 'bytes': q(0)})

    if ref is not None:
        b['ref'] = {'size': 16}
        b['ref_vt'] = {'size': 0x28}
        m += [{'addr': 'buf:self+%d' % PACKED_REF, 'pointer': 'ref'},
              {'addr': 'buf:ref', 'pointer': 'ref_vt'},
              {'addr': 'buf:ref_vt+%d' % DESTROY_SLOT, 'guest': DESTROY},
              {'addr': 'buf:ref+8', 'bytes': u32(ref)}]
        if ((ref >> 15) & 0x7fff) == 1:
            stubs.append({'address': DESTROY, 'argc': 1})
    else:
        m.append({'addr': 'buf:self+%d' % PACKED_REF, 'bytes': q(0)})

    stubs.append({'address': BASE_RESET, 'argc': 1, 'ret': hex(base_ret & MASK64)})

    if counter >= 8:
        counter_after_increment = (counter + 1) & MASK64
        if counter_after_increment >= 0x41:
            stubs.append({'address': FATAL, 'argc': 3})

    if held:
        m.append({'addr': 'buf:self+%d' % HELD, 'pointer': 'held'})
        stubs.append({'address': FREE, 'argc': 2})

    if nodes:
        names = ['n%d' % i for i in range(nodes)]
        for n in names:
            b[n] = {'size': 16}
        chain = names + ['sentinel']
        m.append({'addr': 'buf:sentinel', 'pointer': names[0]})
        m.append({'addr': 'buf:sentinel+8', 'pointer': names[-1]})
        for i, n in enumerate(names):
            m.append({'addr': 'buf:%s' % n, 'pointer': chain[i + 1]})
            m.append({'addr': 'buf:%s+8' % n, 'pointer': chain[i - 1] if i else 'sentinel'})
            stubs.append({'address': FREE, 'argc': 2})
    else:
        m.append({'addr': 'buf:sentinel', 'pointer': 'sentinel'})
        m.append({'addr': 'buf:sentinel+8', 'pointer': 'sentinel'})
    stubs.append({'address': FREE, 'argc': 2})

    stubs.append({'address': BASE_RESET, 'argc': 1, 'ret': hex(tail_ret & MASK64)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:self'}, 'buffers': b, 'memory': m, 'stubs': stubs, 'imports': []}


CASES = [
    case('empty_state'),
    case('first_item_released', item978=True),
    case('second_item_released', item980=True),
    case('both_items_released', item978=True, item980=True),
    case('reference_last_destroys', ref=packed(1)),
    case('reference_shared_not_destroyed', ref=packed(2)),
    case('reference_count_zero_wraps', ref=packed(0)),
    case('reference_flags_and_high_bits_kept', ref=packed(1, 0xc0001234), tail_ret=7),
    case('reference_flags_kept_shared', ref=packed(3, 0x40000001), flags=0x03),
    case('counter_seven_keeps_flag', counter=7, flags=0xff),
    case('counter_eight_clears_flag', counter=8, flags=0xff),
    case('counter_0x3f_no_report', counter=0x3f, flags=0x02),
    case('counter_0x40_reports', counter=0x40, flags=0x02),
    case('counter_wrapped_no_report', counter=MASK64, flags=0x02),
    case('counter_zero_stays_flag', counter=0, flags=0x02),
    case('held_object_released', held=True),
    case('one_node', nodes=1),
    case('three_nodes', nodes=3),
    case('node_and_items', nodes=2, item978=True, item980=True),
    case('tail_result_forwarded', tail_ret=MASK64),
    case('base_result_ignored', base_ret=0x1234, tail_ret=0x55),
    case('stale_fields_cleared', word_5c8=0xabcd, value_5d8=MASK64),
    case('everything_together', item978=True, item980=True, ref=packed(1, 0x80000000),
         counter=9, flags=0x03, held=True, nodes=3, base_ret=5, tail_ret=6, word_5c8=0xffff,
         value_5d8=0x123456789),
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
