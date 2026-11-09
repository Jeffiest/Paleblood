// SPDX-License-Identifier: GPL-2.0-or-later
#include "destroyable_node.h"
#include "../engine/allocator.h"
#include "runtime/original.h"

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Releases what a node holds through its first vtable slot, then frees the node through the
 * allocator it was created with.
 *
 * The node is the second argument; the first is not read. The allocator is looked up first, as in
 * the destroy routine. A null node does nothing. The free is a tail call in the original, so the
 * free's result is not returned here.
 */
extern "C" void bb_misc_destroy_node_slot_00_and_free(void *unused_first, misc::DestroyableNode *node)
{
    (void)unused_first;
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->slot_00(node);
    allocator->free(node);
}
