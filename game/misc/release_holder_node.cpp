// SPDX-License-Identifier: GPL-2.0-or-later
#include "node_holder.h"

#include "../engine/allocator.h"
#include "runtime/original.h"

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Releases the node a holder owns and clears the holder's reference to it.
 *
 * The node is first looked up for its allocator, then released through its first vtable slot, then
 * freed through that allocator. A holder that owns no node does nothing.
 */
extern "C" void bb_misc_release_holder_node(misc::NodeHolder *holder)
{
    misc::DestroyableNode *node = holder->node;
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->slot_00(node);
    allocator->free(node);
    holder->node = nullptr;
}
