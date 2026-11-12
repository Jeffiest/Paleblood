// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a block of eight single-precision limits stored as four low/high pairs.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * Four low/high limit pairs of single-precision values, stored back to back.
 *
 */
struct LimitRangeSet {
    float first_low;    /**< Low end of the first pair. */
    float first_high;   /**< High end of the first pair. */
    float second_low;   /**< Low end of the second pair. */
    float second_high;  /**< High end of the second pair. */
    float third_low;    /**< Low end of the third pair. */
    float third_high;   /**< High end of the third pair. */
    float fourth_low;   /**< Low end of the fourth pair. */
    float fourth_high;  /**< High end of the fourth pair. */
};
static_assert(offsetof(LimitRangeSet, first_high) == 0x04);
static_assert(offsetof(LimitRangeSet, second_low) == 0x08);
static_assert(offsetof(LimitRangeSet, third_low) == 0x10);
static_assert(offsetof(LimitRangeSet, fourth_high) == 0x1c);
static_assert(sizeof(LimitRangeSet) == 0x20);

}  // namespace misc
