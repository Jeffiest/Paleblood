// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "ref_child.h"
#include "ref_holder.h"
#include "ref_item.h"
#include "runtime/original.h"

namespace {

RT_GLOBAL(0x058018b0, list_grow_tag, const char);
// Makes room for one more element at the end of an array held in a slot of the holder.
RT_ORIGINAL(0x00819100, grow_for_append, void(const void *tag, void *array_slot, uint32_t element_size));

}  // namespace

/**
 *
 * Attaches an item to a reference holder and tells each child about it.
 *
 * An item already attached is left alone. Otherwise its count is raised when its counted flag is set,
 * it is appended to the attached list (growing the list when it is full), and every child is told
 * with its add notification.
 */
extern "C" void bb_misc_ref_holder_attach(misc::RefHolder *holder, misc::RefItem *item)
{
    for (int32_t index = 0; index < holder->attached_count; ++index) {
        if (holder->attached[index] == item) return;
    }

    if (item->refcount_word >= misc::ref_counted_threshold) misc::increment_ref_count(&item->refcount_word);

    if (holder->attached_count == static_cast<int32_t>(holder->attached_capacity & misc::list_capacity_mask))
        grow_for_append(list_grow_tag.address(), &holder->attached, sizeof(misc::RefItem *));
    holder->attached[holder->attached_count] = item;
    ++holder->attached_count;

    for (int32_t index = 0; index < holder->child_count; ++index)
        holder->children[index]->vtable->notify_add(holder->children[index], item);
}
