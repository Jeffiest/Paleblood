// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: counts a timed record down by a step and, once the time runs out, reloads it and advances its counter.
#include <cstddef>
#include <cstdint>

#include "timed_record.h"

namespace {

using misc::TimedRecord;

/** The counter advances while its next value is below this limit. */
constexpr int32_t counter_limit = 4;

/** The value the counter holds once it has reached the limit. */
constexpr int32_t counter_saturated = 3;

}  // namespace

/**
 *
 * Subtracts the step from the remaining time and, when that is no longer above zero, reloads the remaining time from the period and advances the counter.
 *
 * The counter stops at three. Nothing is written when time remains.
 */
extern "C" void bb_misc_tick_timed_record(TimedRecord *record, float step)
{
    record->remaining_0x6c -= step;
    if (!(record->remaining_0x6c <= 0.0f)) {
        return;
    }
    record->remaining_0x6c = record->period_0x68;
    int32_t next = record->counter_0x70 + 1;
    record->counter_0x70 = next < counter_limit ? next : counter_saturated;
}
