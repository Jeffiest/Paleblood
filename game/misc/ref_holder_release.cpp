// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "ref_branch.h"
#include "ref_child.h"
#include "ref_holder.h"
#include "ref_item.h"

/**
 *
 * Releases a reference item from a reference holder: removes it from the held list, tells each child
 * about it and about every leaf of every branch of the item, then drops one reference.
 *
 * The held list closes over the removed slot by moving its last entry into place. The item is
 * destroyed through its vtable when its count reaches zero.
 */
extern "C" void bb_misc_ref_holder_release(misc::RefHolder *holder, misc::RefItem *item)
{
    int32_t index = -1;
    for (int32_t slot = 0; slot < holder->held_count; ++slot) {
        if (holder->held[slot] == item) {
            index = slot;
            break;
        }
    }
    const int32_t remaining = --holder->held_count;
    if (index != remaining) holder->held[index] = holder->held[remaining];

    for (int32_t child = 0; child < holder->child_count; ++child)
        holder->children[child]->vtable->notify_0x18(holder->children[child], item);

    for (int32_t branch = 0; branch < item->branch_count; ++branch) {
        misc::RefBranch *current = item->branches[branch];
        for (int32_t leaf = 0; leaf < current->leaf_count; ++leaf) {
            for (int32_t child = 0; child < holder->child_count; ++child)
                holder->children[child]->vtable->notify_remove(holder->children[child], current->leaves[leaf]);
        }
    }

    if (item->refcount_word >= misc::ref_counted_threshold) {
        if (misc::decrement_ref_count(&item->refcount_word) == 0) item->vtable->destroy(item);
    }
}
