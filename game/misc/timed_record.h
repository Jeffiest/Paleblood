// SPDX-License-Identifier: GPL-2.0-or-later
// A timed record: a vtable pointer, a period that the remaining time is reloaded with, and a counter.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/** A timed record: a vtable pointer, the period and remaining time at 0x68 and 0x6c, and a counter at 0x70. */
struct TimedRecord {
    const void *vtable;      /**< The record's vtable block. */
    uint8_t unknown_0x08[0x60];
    float period_0x68;       /**< The starting value the remaining time is reloaded with. */
    float remaining_0x6c;    /**< The time left before the next reload. */
    int32_t counter_0x70;    /**< The number of reloads so far, saturating at three. */
};
static_assert(offsetof(TimedRecord, period_0x68) == 0x68);
static_assert(offsetof(TimedRecord, remaining_0x6c) == 0x6c);
static_assert(offsetof(TimedRecord, counter_0x70) == 0x70);

}  // namespace misc
