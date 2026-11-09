// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an owner that holds one object and a list of nodes that it frees when it is torn down.
#pragma once

#include <cstddef>
#include <cstdint>

#include "chained_node.h"
#include "owned_object.h"

namespace misc {

/**
 *
 * The owner's state: a context, the object it holds, and the head and tail of its node list.
 *
 */
struct NodeOwner {
    uint8_t unknown_0x00[0x8];
    void *context;                 /**< Passed to the first pass over the nodes. */
    OwnedObject *object;           /**< Released first when not null. */
    uint8_t unknown_0x18[0x30];
    ChainedNode *nodes;            /**< The first node of the list, or null when empty. */
    ChainedNode *nodes_tail;       /**< Cleared when the list is torn down. */
};
static_assert(offsetof(NodeOwner, context) == 0x08 && offsetof(NodeOwner, object) == 0x10);
static_assert(offsetof(NodeOwner, nodes) == 0x48 && offsetof(NodeOwner, nodes_tail) == 0x50);

}  // namespace misc
