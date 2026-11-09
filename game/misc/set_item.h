// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * An item of an item set: a kind that selects which of the set's callbacks handles it.
 *
 */
struct SetItem {
    uint8_t unknown_0x00[0x18];
    int32_t kind; /**< Kind of the item; selects its callback. */
};
static_assert(offsetof(SetItem, kind) == 0x18);

}  // namespace misc
