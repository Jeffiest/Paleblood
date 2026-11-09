// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: passes each node's payload with the owner's context to a callee, then frees every node through its allocator and clears the list.
#include <cstdint>

#include "../engine/allocator.h"
#include "chained_node.h"
#include "node_owner.h"
#include "runtime/original.h"

namespace {

using misc::ChainedNode;
using misc::NodeOwner;

RT_ORIGINAL(0x01cc2230, fn_01cc2230, void(void *context, void *payload));
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(ChainedNode *node));

}  // namespace

/**
 *
 * Hands each node's payload, with the owner's context, to a callee, then frees the nodes and clears the list.
 *
 * The first pass runs over the list from its head. The second frees each node through its allocator in list order.
 * An empty list does nothing beyond clearing the head and tail.
 *
 */
extern "C" void bb_misc_dispatch_and_free_nodes(NodeOwner *owner)
{
    for (ChainedNode *node = owner->nodes; node != nullptr; node = node->next)
        fn_01cc2230(owner->context, node->payload);
    ChainedNode *node = owner->nodes;
    while (node != nullptr) {
        ChainedNode *next = node->next;
        engine::Allocator *allocator = allocator_of(node);
        allocator->free(node);
        node = next;
    }
    owner->nodes_tail = nullptr;
    owner->nodes = nullptr;
}
