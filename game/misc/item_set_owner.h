// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct ItemSet;

/**
 *
 * The object that owns an item set and is handed to the item callbacks.
 *
 */
struct ItemSetOwner {
    uint8_t unknown_0x00[0x10];
    ItemSet *set; /**< The item set this owner applies. */
};
static_assert(offsetof(ItemSetOwner, set) == 0x10);

}  // namespace misc
