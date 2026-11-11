// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the element list owner's destructor: sets its vtable, empties its lists, releases their arrays, then forwards.
#include <cstdint>

#include "element_list_owner.h"
#include "runtime/original.h"

namespace {

/** Empties both node lists of the owner and destroys their nodes. */
RT_ORIGINAL(0x02254830, clear_node_lists, uint64_t(misc::ElementListOwner *owner));

/** The release routine the destructor ends in, which returns its own result. */
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *object));

}  // namespace

/**
 *
 * Destroys an element list owner: stores its vtable, empties its lists, releases each list's array through its allocator,
 * then forwards to the release routine.
 *
 * The second array is released first, and its three list words are cleared only when it was present. The first array is
 * released through its allocator and its pointer is left as it was. The result is the release routine's result, which
 * the routine leaves in RAX.
 *
 */
extern "C" uint64_t bb_misc_destroy_element_list_owner(misc::ElementListOwner *owner)
{
    owner->vtable = misc::element_list_owner_vtable.address();
    clear_node_lists(owner);
    if (owner->second_begin_0x38 != nullptr) {
        owner->second_allocator_0x50->free(owner->second_begin_0x38);
        owner->second_begin_0x38 = nullptr;
        owner->second_end_0x40 = nullptr;
        owner->second_capacity_0x48 = nullptr;
    }
    if (owner->first_begin_0x10 != nullptr) {
        owner->first_allocator_0x28->free(owner->first_begin_0x10);
    }
    return fn_02fbe588(owner);
}
