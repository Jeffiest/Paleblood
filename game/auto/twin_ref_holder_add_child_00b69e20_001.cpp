// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_ref_holder_add_child, in game/misc/ref_holder_add_child.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstdint>
#include "../misc/ref_child.h"
#include "../misc/ref_holder.h"
#include "runtime/original.h"

// auto_ref_holder_add_child_00953400: misc_ref_holder_add_child with other addresses.
namespace twin_00953400 {

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
extern "C" void bb_auto_ref_holder_add_child_00953400(misc::RefHolder *holder, misc::RefChild *child)
{
    if (holder->child_count == static_cast<int32_t>(holder->child_capacity & misc::list_capacity_mask))
        grow_for_append(list_grow_tag.address(), &holder->children, sizeof(misc::RefChild *));
    holder->children[holder->child_count] = child;
    ++holder->child_count;
}

}  // namespace twin_00953400

// auto_ref_holder_add_child_00aa4f30: misc_ref_holder_add_child with other addresses.
namespace twin_00aa4f30 {

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
extern "C" void bb_auto_ref_holder_add_child_00aa4f30(misc::RefHolder *holder, misc::RefChild *child)
{
    if (holder->child_count == static_cast<int32_t>(holder->child_capacity & misc::list_capacity_mask))
        grow_for_append(list_grow_tag.address(), &holder->children, sizeof(misc::RefChild *));
    holder->children[holder->child_count] = child;
    ++holder->child_count;
}

}  // namespace twin_00aa4f30
