// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A keyed table of slots that a group registers its members in. The storage pointer is set by the
 * table routines, the used count grows as slots are added, and the index mask starts at minus one.
 *
 */
struct KeyedSlotTable {
    uint64_t storage;     /**< Slot storage, owned by the table routines. Zero when the table is made. */
    uint32_t used_count;  /**< Number of slots in use. Zero when the table is made. */
    int32_t index_mask;   /**< Mask applied to a hash to choose a slot. Minus one when the table is made. */
};
static_assert(offsetof(KeyedSlotTable, storage) == 0x00);
static_assert(offsetof(KeyedSlotTable, used_count) == 0x08);
static_assert(offsetof(KeyedSlotTable, index_mask) == 0x0c);
static_assert(sizeof(KeyedSlotTable) == 0x10);

}  // namespace misc
