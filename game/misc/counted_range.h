// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A range that is advanced by counting steps: its begin and end words, and the counter the advance routes on.
 *
 */
struct CountedRange {
    uint8_t unknown_0x0000[0xd0];
    uint64_t begin;                 /**< The first word of the range; the range is empty when it equals the end. */
    uint64_t end;                   /**< The word one past the range. */
    uint8_t unknown_0x00e0[0x44];
    uint32_t counter;               /**< Counts advances toward the track's threshold. */
};
static_assert(offsetof(CountedRange, begin) == 0xd0);
static_assert(offsetof(CountedRange, end) == 0xd8);
static_assert(offsetof(CountedRange, counter) == 0x124);

}  // namespace misc
