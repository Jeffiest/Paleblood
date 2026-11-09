// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "ref_child.h"
#include "ref_holder.h"
#include "runtime/original.h"

namespace {

RT_GLOBAL(0x058018b0, list_grow_tag, const char);
// Makes room for one more element at the end of an array held in a slot of the holder.
RT_ORIGINAL(0x00819100, grow_for_append, void(const void *tag, void *array_slot, uint32_t element_size));

}  // namespace

/**
 *
 * Adds a child to a reference holder's child list, growing the list when it is full.
 *
 * The new child is stored after the existing ones and the child count goes up by one. The list is
 * full when its count equals the capacity held in the low 30 bits of its capacity field.
 */
extern "C" void bb_misc_ref_holder_add_child(misc::RefHolder *holder, misc::RefChild *child)
{
    if (holder->child_count == static_cast<int32_t>(holder->child_capacity & misc::list_capacity_mask))
        grow_for_append(list_grow_tag.address(), &holder->children, sizeof(misc::RefChild *));
    holder->children[holder->child_count] = child;
    ++holder->child_count;
}
