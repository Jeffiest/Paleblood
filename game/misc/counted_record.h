// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a sixteen-byte record of a 32-bit count and a 64-bit value, filled by the routines that report a count.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A count and a value: the count is 32 bits at the start, and the value is 64 bits at +0x08.
 *
 */
struct CountedRecord {
    uint32_t count_0x00;      /**< The count the record reports. */
    uint8_t unknown_0x04[0x04];
    uint64_t value_0x08;      /**< The value the record reports. */
};
static_assert(offsetof(CountedRecord, value_0x08) == 0x08);
static_assert(sizeof(CountedRecord) == 0x10);

}  // namespace misc
