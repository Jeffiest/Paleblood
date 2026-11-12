// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "counted_item_list.h"
#include "ref_item.h"
#include "runtime/original.h"

namespace {

// Receives the removed item from the object the list passes every change on to.
RT_ORIGINAL(0x00cd64f0, fn_00cd64f0, void(void *target, misc::RefItem *item));

/** Whether an item carries the counted flag, which makes its count tracked. */
bool is_counted(const misc::RefItem *item)
{
    return item->refcount_word >= misc::ref_counted_threshold;
}

/** Releases one reference of a counted item and destroys the item when none is left. */
void release_counted(misc::RefItem *item)
{
    if (item != nullptr && is_counted(item) && misc::decrement_ref_count(&item->refcount_word) == 0)
        item->vtable->destroy(item);
}

}  // namespace

/**
 *
 * Removes an item from a counted list, moving the last item into its slot, and passes the removal on.
 *
 * The item is held while the list is searched and released afterwards. A null item matches a null
 * slot. Nothing is returned.
 */
extern "C" void bb_misc_remove_counted_item(misc::CountedItemList *list, misc::RefItem *item)
{
    if (item != nullptr && is_counted(item)) misc::increment_ref_count(&item->refcount_word);

    int32_t found_index = -1;
    for (int32_t index = 0; index < list->item_count_0xb0; ++index) {
        if (list->items_0xa8[index] == item) {
            found_index = index;
            break;
        }
    }
    release_counted(item);
    if (found_index < 0) return;

    if (list->pass_on_target_0x48 != nullptr) fn_00cd64f0(list->pass_on_target_0x48, item);

    misc::RefItem *removed = list->items_0xa8[found_index];
    release_counted(removed);
    list->items_0xa8[found_index] = nullptr;
    --list->item_count_0xb0;
    if (list->item_count_0xb0 != found_index)
        list->items_0xa8[found_index] = list->items_0xa8[list->item_count_0xb0];
}
