// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct SetItem;

/**
 *
 * A set of items with an enable flag and a scale that the items are applied with.
 *
 */
struct ItemSet {
    uint8_t unknown_0x00[0xb8];
    SetItem **items;     /**< The items, applied in order. */
    int32_t item_count;  /**< Number of items. */
    uint8_t unknown_0xc4[0x74];
    uint8_t enabled;     /**< Nonzero when the set is applied. */
    uint8_t unknown_0x139[0x3];
    float scale;         /**< Scale every item is applied with. */
};
static_assert(offsetof(ItemSet, items) == 0xb8);
static_assert(offsetof(ItemSet, item_count) == 0xc0);
static_assert(offsetof(ItemSet, enabled) == 0x138);
static_assert(offsetof(ItemSet, scale) == 0x13c);

}  // namespace misc
