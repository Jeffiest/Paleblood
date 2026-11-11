// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: reports whether every item in a list ranks above three, asking each item's rank slot in turn.
#include <cstdint>

#include "item_list.h"
#include "listed_item.h"

/**
 *
 * Reports whether every item of a list ranks above three. The items are asked in order and the first that does not
 * rank above three ends the walk. An empty list reports true.
 *
 * The result is a bool in AL; the rest of RAX is not part of it.
 *
 */
extern "C" uint8_t bb_misc_all_items_rank_above_three(misc::ItemList *list)
{
    constexpr int32_t rank_threshold = 3;
    misc::ListedItem **const end = list->end_0x18;
    for (misc::ListedItem **slot = list->begin_0x10; slot != end; ++slot) {
        misc::ListedItem *item = *slot;
        if (item->vtable->rank_0x58(item) <= rank_threshold) return false;
    }
    return true;
}
