// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "counted_item_list.h"
#include "ref_holder.h"
#include "ref_item.h"
#include "runtime/original.h"

namespace {

RT_GLOBAL(0x058018b0, list_grow_tag, const char);
// Makes room for one more element at the end of an array held in a slot of the list.
RT_ORIGINAL(0x00819100, grow_for_append, void(const void *tag, void *array_slot, uint32_t element_size));
// Receives the appended item from the object the list passes every append on to.
RT_ORIGINAL(0x00cd6290, fn_00cd6290, uint64_t(void *target, misc::RefItem *item));

/** Whether an item carries the counted flag, which makes its count tracked. */
bool is_counted(const misc::RefItem *item)
{
    return item->refcount_word >= misc::ref_counted_threshold;
}

}  // namespace

/**
 *
 * Appends a counted item to a list and passes the item on to the list's target.
 *
 * The item is held for the append and then released again, and it is destroyed when that release
 * leaves no references. A null item is appended as a null slot. Without a target the function
 * returns zero, and with one it returns the target's result.
 */
extern "C" uint64_t bb_misc_append_counted_item(misc::CountedItemList *list, misc::RefItem *item)
{
    if (item != nullptr && is_counted(item)) misc::increment_ref_count(&item->refcount_word);

    if (list->item_count_0xb0 == static_cast<int32_t>(list->item_capacity_0xb4 & misc::list_capacity_mask))
        grow_for_append(list_grow_tag.address(), &list->items_0xa8, sizeof(misc::RefItem *));

    if (item == nullptr) {
        list->items_0xa8[list->item_count_0xb0] = nullptr;
        ++list->item_count_0xb0;
    } else {
        if (is_counted(item)) misc::increment_ref_count(&item->refcount_word);
        list->items_0xa8[list->item_count_0xb0] = item;
        ++list->item_count_0xb0;
        if (is_counted(item) && misc::decrement_ref_count(&item->refcount_word) == 0)
            item->vtable->destroy(item);
    }

    if (list->pass_on_target_0x48 == nullptr) return 0;
    return fn_00cd6290(list->pass_on_target_0x48, item);
}
