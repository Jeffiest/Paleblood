// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: sets up a timed record: its base init, its vtable, two floats of five and a cleared counter.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"
#include "timed_record.h"

namespace {

using misc::TimedRecord;

/** The two timer fields' starting value, in seconds. */
constexpr float initial_timer_seconds = 5.0f;

/** The value the original leaves in RAX: the two starting floats packed into one word. */
constexpr uint64_t packed_timer_pair = 0x40a0000040a00000;

RT_GLOBAL(0x05722910, timed_record_vtable, uint8_t);

RT_ORIGINAL(0x01884e90, init_base_record, void(TimedRecord *record, uint64_t arg1, uint64_t arg2, uint64_t arg3));

}  // namespace

/**
 *
 * Initializes the base record, then sets the vtable, both timer fields to five seconds and the counter to zero.
 *
 * The original leaves the packed timer pair in RAX, which the replacement returns. The base init reads the three
 * argument registers after the record, so they are passed on to it.
 */
extern "C" uint64_t bb_misc_init_timed_record(TimedRecord *record, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
    init_base_record(record, arg1, arg2, arg3);
    record->vtable = timed_record_vtable.address();
    record->period_0x68 = initial_timer_seconds;
    record->remaining_0x6c = initial_timer_seconds;
    record->counter_0x70 = 0;
    return packed_timer_pair;
}
