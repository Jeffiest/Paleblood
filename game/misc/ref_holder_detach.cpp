// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "ref_child.h"
#include "ref_holder.h"
#include "ref_item.h"

/**
 *
 * Detaches an item from a reference holder and tells each child about it.
 *
 * An item that is not attached is left alone. Otherwise it is removed from the attached list by moving
 * the last attached item into its place, every child is told with its remove notification, and the
 * item's count is lowered when its counted flag is set. An item whose count reaches zero is destroyed
 * through its vtable.
 */
extern "C" void bb_misc_ref_holder_detach(misc::RefHolder *holder, misc::RefItem *item)
{
    int32_t index = 0;
    while (index < holder->attached_count && holder->attached[index] != item) ++index;
    if (index >= holder->attached_count) return;

    const int32_t remaining = --holder->attached_count;
    if (index != remaining) holder->attached[index] = holder->attached[remaining];

    for (int32_t child = 0; child < holder->child_count; ++child)
        holder->children[child]->vtable->notify_remove(holder->children[child], item);

    if (item->refcount_word >= misc::ref_counted_threshold) {
        if (misc::decrement_ref_count(&item->refcount_word) == 0) item->vtable->destroy(item);
    }
}
