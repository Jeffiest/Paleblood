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
 * Destroys a node and frees it through the allocator it was created with.
 *
 * The allocator is looked up first, then the node's destroy slot runs, then the allocator frees the
 * node. A null node does nothing. The original tail-jumps into the allocator's free slot, so the
 * free's result is not a value this routine gives back.
 */
extern "C" void bb_misc_destroy_node_and_free(misc::DestroyableNode *node)
{
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->destroy(node);
    allocator->free(node);
}
