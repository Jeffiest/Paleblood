// SPDX-License-Identifier: GPL-2.0-or-later
#include "owned_list.h"

#include "../engine/allocator.h"
#include "../loading/fios.h"

namespace {

/**
 *
 * The allocator's sized free slot at 0x18, typed to return the callee's result as the original tail jump does.
 *
 */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// The allocator a node was created with, from the node's address.
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::OwnedNode *));

}  // namespace

/**
 *
 * Deleting destructor of an owned list: sets the vtable, frees every node through its allocator,
 * clears the tail and the head, then frees the object through the thread's allocator.
 *
 * The object's size comes from its size tag: the default size when the high 16 bits hold 0xffff.
 * The result is the sized free's result, returned as the original does with its tail jump.
 */
extern "C" uint64_t bb_misc_owned_list_delete(misc::OwnedList *list)
{
    list->vtable = misc::owned_list_vtable.address();
    misc::OwnedNode *node = list->head;
    while (node != nullptr) {
        misc::OwnedNode *next = node->next;
        allocator_of(node)->free(node);
        node = next;
    }
    list->tail = nullptr;
    list->head = nullptr;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    const uint32_t size_tag = list->tag >> misc::size_tag_shift;
    const uint32_t size = size_tag == misc::size_tag_default ? misc::owned_list_default_size : size_tag;
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, list, size);
}
