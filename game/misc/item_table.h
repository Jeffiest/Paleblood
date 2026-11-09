// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an item table with two lists of 32-bit items and their flag bytes, and the counts that size them.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The table: a first value, the first item and flag arrays with their count, and a second pair of
 * arrays with its count. The arrays are sized by the count and filled by the table's fill step.
 *
 */
struct ItemTable {
    int32_t first_value;          /**< The value the fill step starts its sequence from. */
    uint8_t unknown_0x04[4];
    int32_t capacity_remaining;   /**< Written by the fill step. */
    int32_t unknown_0x0c;         /**< Cleared by the fill step. */
    int32_t *items;               /**< First item list, one 32-bit item per count. */
    uint8_t *flags;               /**< First flag array, one byte per count. */
    int32_t count;                /**< Length of the first lists. */
    uint8_t unknown_0x24[4];
    int32_t remaining;            /**< Written by the fill step. */
    int32_t second_used;          /**< Cleared by the fill step. */
    int32_t *second_items;        /**< Second item list. */
    uint8_t *second_flags;        /**< Second flag array. */
    int32_t second_count;         /**< Length of the second lists. */
};
static_assert(offsetof(ItemTable, items) == 0x10);
static_assert(offsetof(ItemTable, flags) == 0x18);
static_assert(offsetof(ItemTable, count) == 0x20);
static_assert(offsetof(ItemTable, remaining) == 0x28);
static_assert(offsetof(ItemTable, second_used) == 0x2c);
static_assert(offsetof(ItemTable, second_items) == 0x30);
static_assert(offsetof(ItemTable, second_flags) == 0x38);
static_assert(offsetof(ItemTable, second_count) == 0x40);

}  // namespace misc
