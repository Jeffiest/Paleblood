// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a holder of a list of listed items, given as a begin and an end pointer into an array of item pointers.
#pragma once

#include <cstddef>
#include <cstdint>

#include "listed_item.h"

namespace misc {

/**
 *
 * A holder of listed items: the list is a begin pointer and an end pointer, and the words before it belong to other members.
 *
 */
struct ItemList {
    uint8_t unknown_0x0000[0x10];
    ListedItem **begin_0x10;    /**< The first item pointer of the list. */
    ListedItem **end_0x18;      /**< One past the last item pointer of the list. */
};
static_assert(offsetof(ItemList, begin_0x10) == 0x10);
static_assert(offsetof(ItemList, end_0x18) == 0x18);

}  // namespace misc
