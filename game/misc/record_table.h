// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a table of 24-byte records, located by its record storage and its count.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A table of 24-byte records: the storage its records start at, and how many records it holds.
 *
 */
struct RecordTable {
    uint8_t unknown_0x0000[0x18];
    const void *records; /**< Address of the first record of the storage. */
    uint32_t count;      /**< Number of records in the table. */
};
static_assert(offsetof(RecordTable, records) == 0x18);
static_assert(offsetof(RecordTable, count) == 0x20);

/** Distance in bytes between two consecutive records of a table. */
constexpr uint64_t record_stride = 0x18;

}  // namespace misc
