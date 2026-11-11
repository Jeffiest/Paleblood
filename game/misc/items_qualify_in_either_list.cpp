// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: reports whether an item in either of two lists qualifies: the first list by rank or flag, the second only after the first.
#include <cstdint>

#include "item_list_pair.h"
#include "listed_item.h"

namespace {

constexpr int32_t first_list_rank_limit = 6;
constexpr uint8_t first_list_flag = 0x02;
constexpr int32_t second_list_rank_limit = 4;
constexpr uint8_t second_list_flag = 0x04;

}  // namespace

/**
 *
 * Reports whether an item qualifies in either list. The first list qualifies an item whose rank is above six or whose
 * flag byte has bit 0x02; the second list qualifies an item whose rank is above four or whose flag word has bit 0x04.
 * The second list is walked whatever the first gave, and a qualifying item in it settles the answer; otherwise the
 * answer is the first list's.
 *
 * The result is a bool in AL; the rest of RAX is not part of it.
 *
 */
extern "C" uint8_t bb_misc_items_qualify_in_either_list(misc::ItemListPair *lists)
{
    bool first_qualifies = false;
    misc::ListedItem **const first_end = lists->first_end_0x18;
    for (misc::ListedItem **slot = lists->first_begin_0x10; slot != first_end; ++slot) {
        misc::ListedItem *item = *slot;
        if (item->vtable->rank_0x58(item) > first_list_rank_limit) {
            first_qualifies = true;
            break;
        }
        if ((item->flags_0xed & first_list_flag) != 0) {
            first_qualifies = true;
            break;
        }
    }

    misc::ListedItem **const second_end = lists->second_end_0x40;
    for (misc::ListedItem **slot = lists->second_begin_0x38; slot != second_end; ++slot) {
        misc::ListedItem *item = *slot;
        if (item->vtable->rank_0x58(item) > second_list_rank_limit) return true;
        if ((item->flags_0x128 & second_list_flag) != 0) return true;
    }
    return first_qualifies;
}
