// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a holder of two lists of listed items, each a begin and an end pointer into an array of item pointers.
#pragma once

#include <cstddef>
#include <cstdint>

#include "listed_item.h"

namespace misc {

/**
 *
 * A holder of two item lists: the first is at +0x10 and the second at +0x38, each as a begin and an end pointer.
 *
 * The words between the lists belong to other members and are not read by the routines that walk them.
 *
 */
struct ItemListPair {
    uint8_t unknown_0x0000[0x10];
    ListedItem **first_begin_0x10;     /**< The first item pointer of the first list. */
    ListedItem **first_end_0x18;       /**< One past the last item pointer of the first list. */
    uint8_t unknown_0x0020[0x18];
    ListedItem **second_begin_0x38;    /**< The first item pointer of the second list. */
    ListedItem **second_end_0x40;      /**< One past the last item pointer of the second list. */
};
static_assert(offsetof(ItemListPair, first_begin_0x10) == 0x10);
static_assert(offsetof(ItemListPair, first_end_0x18) == 0x18);
static_assert(offsetof(ItemListPair, second_begin_0x38) == 0x38);
static_assert(offsetof(ItemListPair, second_end_0x40) == 0x40);

}  // namespace misc
