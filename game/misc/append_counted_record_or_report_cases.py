#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_append_counted_record_or_report (0x004183c0), for tools/verify.py run.

usage: append_counted_record_or_report_cases.py OUT_DIR

The list takes the entry into its second array under its lock when the array has room (64-bit capacity
compared with the 32-bit count). Each stored entry advances the list counter. When the array is full and a
source is given, the source's sink word is used; a zero sink word goes through the dispatch helper
(0x00454320), and the helper's second result is the sink when the word is still zero. The overflow is
reported (0x02788b20) with the sink, the count plus one and the capacity, both 32-bit.
"""
import json
import struct
import sys
from pathlib import Path

ADDRESS = '0x004183c0'
LOCK, UNLOCK = '0x02fbe598', '0x02fbe5a8'
DISPATCH, REPORT = '0x00454320', '0x02788b20'
LIST_SIZE = 0x1c0
ENTRY_SIZE = 0x10
ENTRY_SLOTS = 8
SOURCE_SIZE = 0x20
COUNT_OFFSET, ENTRIES_OFFSET, CAPACITY_OFFSET, COUNTER_OFFSET = 0xe8, 0x190, 0x198, 0x1a8
SINK_OFFSET = 0x18
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1


def u32(v):
    return struct.pack('<I', v & MASK32).hex()


def u64(v):
    return struct.pack('<Q', v & MASK64).hex()


def case(cid, count, capacity, counter=0x40, source=True, sink_target=False, dispatch=(),
         returned=0x5566778899aabbcc, key=0x1122334455667788, tag=0x99aabbcc):
    """sink_target: the source's sink word is a nonzero pointer to 'target'.
    dispatch: the words the helper returns, one per call in call order."""
    buffers = {'list': {'size': LIST_SIZE, 'bytes': 'c3' * LIST_SIZE},
               'entries': {'size': ENTRY_SIZE * ENTRY_SLOTS, 'bytes': 'd7' * ENTRY_SIZE * ENTRY_SLOTS},
               'entry': {'size': ENTRY_SIZE, 'bytes': u64(key) + u32(tag) + 'a5' * 4},
               'source': {'size': SOURCE_SIZE, 'bytes': '5a' * SOURCE_SIZE},
               'target': {'size': 0x10, 'bytes': '6b' * 0x10}}
    memory = [{'addr': 'buf:list+' + str(COUNT_OFFSET), 'bytes': u32(count)},
              {'addr': 'buf:list+' + str(CAPACITY_OFFSET), 'bytes': u64(capacity)},
              {'addr': 'buf:list+' + str(COUNTER_OFFSET), 'bytes': u32(counter)},
              {'addr': 'buf:list+' + str(ENTRIES_OFFSET), 'pointer': 'entries'}]
    if source:
        if sink_target:
            memory.append({'addr': 'buf:source+' + str(SINK_OFFSET), 'pointer': 'target'})
        else:
            memory.append({'addr': 'buf:source+' + str(SINK_OFFSET), 'bytes': u64(0)})
    stubs = [{'address': LOCK, 'argc': 1, 'argi': [0]}]
    for word in dispatch:
        # Only the dispatch word is passed: the lock call leaves RSI and RDX with values the original passes on unused.
        stubs.append({'address': DISPATCH, 'argc': 1, 'argi': [0], 'ret': hex(word & MASK64)})
    report_target = count >= capacity and source and (sink_target or (bool(dispatch) and dispatch[0] != 0))
    if report_target:
        stubs.append({'address': REPORT, 'argc': 4, 'argi': [0, 1, 2, 3]})
    stubs.append({'address': UNLOCK, 'argc': 1, 'argi': [0], 'ret': hex(returned & MASK64)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:list', 'rsi': 'buf:entry', 'rdx': 'buf:source' if source else '0x0'},
            'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('room_stores_and_counts', count=2, capacity=5, counter=0x40, sink_target=True),
    case('room_counter_wraps', count=6, capacity=7, counter=0xffffffff),
    case('room_capacity_above_32_bits', count=3, capacity=0x100000000, counter=7, source=False),
    case('full_without_source_is_silent', count=5, capacity=5, source=False),
    case('full_with_target_reports', count=3, capacity=3, sink_target=True),
    case('empty_list_with_target_reports', count=0, capacity=0, sink_target=True),
    case('full_zero_sink_dispatch_zero_is_silent', count=2, capacity=2, dispatch=[0]),
    case('full_zero_sink_dispatch_then_second_target', count=2, capacity=2, dispatch=[0x7000, 0x7100]),
    case('count_wraps_when_reported', count=0xffffffff, capacity=0, sink_target=True),
    case('count_equal_capacity_high_count', count=0x7fffffff, capacity=0x7fffffff, sink_target=True),
]

# The sink word is re-read after the dispatch helper returns nonzero. The helper is a leaf that only reads a
# global and never writes its arguments, so the word is still zero there and the taken outcome is unreachable.
UNREACHABLE = {
    '0x00418438': ('taken', 'the dispatch helper (0x00454320) never writes the source, so the re-read sink word is still zero'),
}


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print('usage: append_counted_record_or_report_cases.py OUT_DIR', file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        with (output / (fixture['id'] + '.json')).open('w') as stream:
            stream.write(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} synthetic cases written to {output}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
