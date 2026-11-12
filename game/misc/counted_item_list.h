// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the list of counted items that the append routine adds to, and the target it passes the item on to.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct RefItem;

/**
 *
 * A list of counted items with its count and capacity, and an object that every append is passed on to.
 *
 */
struct CountedItemList {
    uint8_t unknown_0x0000[0x48];
    void *pass_on_target_0x48;     /**< Object the appended item is passed on to; null when there is none. */
    uint8_t unknown_0x0050[0x58];
    RefItem **items_0xa8;          /**< Array of item pointers, eight bytes each. */
    int32_t item_count_0xb0;       /**< Number of items in the array. */
    uint32_t item_capacity_0xb4;   /**< Capacity of the array, in the low 30 bits. */
};
static_assert(offsetof(CountedItemList, pass_on_target_0x48) == 0x48);
static_assert(offsetof(CountedItemList, items_0xa8) == 0xa8);
static_assert(offsetof(CountedItemList, item_count_0xb0) == 0xb0);
static_assert(offsetof(CountedItemList, item_capacity_0xb4) == 0xb4);

}  // namespace misc
