// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * One 16-byte record of a pair table, copied as a whole by value.
 *
 */
struct RecordPair {
    uint64_t low;   /**< The first eight bytes, at 0x00. */
    uint64_t high;  /**< The last eight bytes, at 0x08. */
};
static_assert(offsetof(RecordPair, high) == 0x08);
static_assert(sizeof(RecordPair) == 0x10);

}  // namespace misc
