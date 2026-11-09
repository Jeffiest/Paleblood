// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "ref_branch.h"
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
 * Holds a reference item in a holder: counts it when flagged, appends it to the held list, and tells
 * each child about every leaf of every branch of the item and then about the item itself.
 *
 * The leaf notifications go through the children's add slot, the item notification through slot 0x10.
 */
extern "C" void bb_misc_ref_holder_hold(misc::RefHolder *holder, misc::RefItem *item)
{
    if (item->refcount_word >= misc::ref_counted_threshold) misc::increment_ref_count(&item->refcount_word);

    if (holder->held_count == static_cast<int32_t>(holder->held_capacity & misc::list_capacity_mask))
        grow_for_append(list_grow_tag.address(), &holder->held, sizeof(misc::RefItem *));
    holder->held[holder->held_count] = item;
    ++holder->held_count;

    for (int32_t branch = 0; branch < item->branch_count; ++branch) {
        misc::RefBranch *current = item->branches[branch];
        for (int32_t leaf = 0; leaf < current->leaf_count; ++leaf) {
            for (int32_t child = 0; child < holder->child_count; ++child)
                holder->children[child]->vtable->notify_add(holder->children[child], current->leaves[leaf]);
        }
    }

    for (int32_t child = 0; child < holder->child_count; ++child)
        holder->children[child]->vtable->notify_0x10(holder->children[child], item);
}
