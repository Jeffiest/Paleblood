// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: releases an element list owner's contents without freeing the owner: sets its vtable, empties its lists and frees their arrays.
#include <cstdint>

#include "element_list_owner.h"
#include "free_returning_vtable.h"
#include "runtime/original.h"

namespace {

/** Empties both node lists of the owner and destroys their nodes; returns what it leaves in RAX. */
RT_ORIGINAL(0x02254830, clear_node_lists, uint64_t(misc::ElementListOwner *owner));

/**
 *
 * Frees one block through an allocator's free slot and returns the value the free leaves in RAX.
 *
 */
uint64_t free_block(engine::Allocator *allocator, misc::DestroyableNode **block)
{
    return reinterpret_cast<const misc::FreeReturningVtable *>(allocator->vtable)->free(allocator, block);
}

}  // namespace

/**
 *
 * Releases an element list owner's contents: stores its vtable, empties its lists, and frees each list's array through
 * its allocator, the second array first, with the first array's three list words cleared after its free.
 *
 * The result is the value RAX holds at the return: the last free's result when an array was freed, otherwise the
 * list clear's result. The owner itself is not freed.
 *
 */
extern "C" uint64_t bb_misc_release_element_list_owner_in_place(misc::ElementListOwner *owner)
{
    owner->vtable = misc::element_list_owner_vtable.address();
    uint64_t result = clear_node_lists(owner);
    if (owner->second_begin_0x38 != nullptr) {
        result = free_block(owner->second_allocator_0x50, owner->second_begin_0x38);
        owner->second_begin_0x38 = nullptr;
        owner->second_end_0x40 = nullptr;
        owner->second_capacity_0x48 = nullptr;
    }
    if (owner->first_begin_0x10 != nullptr) {
        result = free_block(owner->first_allocator_0x28, owner->first_begin_0x10);
        owner->first_capacity_0x20 = nullptr;
        owner->first_end_0x18 = nullptr;
        owner->first_begin_0x10 = nullptr;
    }
    return result;
}
