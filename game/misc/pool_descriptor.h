// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * One record of a pool descriptor: the index of the entry extra it refers to, then other fields.
 *
 */
struct PoolRecord {
    int32_t extra_index;          /**< Index into the entry's extras. */
    uint8_t unknown_0x04[0xc];
};
static_assert(offsetof(PoolRecord, extra_index) == 0x0);
static_assert(sizeof(PoolRecord) == 0x10);

/**
 *
 * How a pool owner's entries are measured: the children they visit and the records they read.
 *
 */
struct PoolDescriptor {
    uint8_t unknown_0x00[0x18];
    int32_t *child_indices;   /**< Indices of the owner's children, visited in this order. */
    int32_t child_count;      /**< Number of child indices. */
    uint8_t unknown_0x24[0x4];
    PoolRecord *records;      /**< Records read after the children. */
    int32_t record_count;     /**< Number of records. */
};
static_assert(offsetof(PoolDescriptor, child_indices) == 0x18);
static_assert(offsetof(PoolDescriptor, child_count) == 0x20);
static_assert(offsetof(PoolDescriptor, records) == 0x28);
static_assert(offsetof(PoolDescriptor, record_count) == 0x30);

}  // namespace misc
