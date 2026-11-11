// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: reports whether every item of the first list ranks above five and every item of the second ranks above two.
#include <cstdint>

#include "item_list_pair.h"
#include "listed_item.h"

namespace {

constexpr int32_t first_list_rank_threshold = 5;
constexpr int32_t second_list_rank_threshold = 2;

}  // namespace

/**
 *
 * Reports whether every item of the first list ranks above five and every item of the second ranks above two. Each list
 * is walked to its first item that fails, and the second list is walked whatever the first list gave. Empty lists pass.
 *
 * The result is a bool in AL; the rest of RAX is not part of it.
 *
 */
extern "C" uint8_t bb_misc_both_item_lists_rank_above(misc::ItemListPair *lists)
{
    bool all_pass = true;
    misc::ListedItem **const first_end = lists->first_end_0x18;
    for (misc::ListedItem **slot = lists->first_begin_0x10; slot != first_end; ++slot) {
        misc::ListedItem *item = *slot;
        if (item->vtable->rank_0x58(item) <= first_list_rank_threshold) {
            all_pass = false;
            break;
        }
    }

    misc::ListedItem **const second_end = lists->second_end_0x40;
    for (misc::ListedItem **slot = lists->second_begin_0x38; slot != second_end; ++slot) {
        misc::ListedItem *item = *slot;
        if (item->vtable->rank_0x58(item) <= second_list_rank_threshold) {
            all_pass = false;
            break;
        }
    }
    return all_pass;
}
