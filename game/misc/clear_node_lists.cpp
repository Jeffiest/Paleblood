// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: empties both node lists of an owner, destroying and freeing each non-null node.
#include <cstdint>

#include "../engine/allocator.h"
#include "destroyable_node.h"
#include "element_list_owner.h"
#include "runtime/original.h"

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

/**
 *
 * The allocator's vtable as this routine reads it: its free slot returns the value it leaves in RAX.
 *
 */
struct FreeReturningVtable {
    uint8_t unknown_0x0000[0x70];
    uint64_t (*free)(engine::Allocator *allocator, void *data);
};
static_assert(offsetof(FreeReturningVtable, free) == 0x70);

}  // namespace

namespace {

/**
 *
 * Destroys a node through its destroy slot, then frees it through the allocator it was created with.
 *
 * The allocator is looked up first and the free's result is returned, since that is what the routine leaves in RAX.
 *
 */
uint64_t destroy_and_free_node(misc::DestroyableNode *node)
{
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->destroy(node);
    return reinterpret_cast<const FreeReturningVtable *>(allocator->vtable)->free(allocator, node);
}

}  // namespace

/**
 *
 * Empties both node lists of an owner: each non-null node is destroyed and freed, then each list's end is set to its begin.
 *
 * The result is the value the last free left in RAX, or zero when no node was freed; a path without a free
 * leaves RAX as the caller had it, which the cases do not compare. The lists are walked from their begin to the end
 * read on entry, and each end is then re-read from its begin, as the original does.
 *
 */
extern "C" uint64_t bb_misc_clear_node_lists(misc::ElementListOwner *owner)
{
    uint64_t result = 0;

    misc::DestroyableNode **const first_end = owner->first_end_0x18;
    for (misc::DestroyableNode **slot = owner->first_begin_0x10; slot != first_end; ++slot) {
        if (*slot != nullptr) result = destroy_and_free_node(*slot);
    }
    owner->first_end_0x18 = owner->first_begin_0x10;

    misc::DestroyableNode **const second_end = owner->second_end_0x40;
    for (misc::DestroyableNode **slot = owner->second_begin_0x38; slot != second_end; ++slot) {
        if (*slot != nullptr) result = destroy_and_free_node(*slot);
    }
    owner->second_end_0x40 = owner->second_begin_0x38;

    return result;
}
