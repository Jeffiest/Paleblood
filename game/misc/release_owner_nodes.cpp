// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: tears down an owner: releases its object, frees every node of its list through each node's allocator, and clears the list.
#include <cstdint>

#include "../engine/allocator.h"
#include "chained_node.h"
#include "node_owner.h"
#include "owned_object.h"
#include "runtime/original.h"

namespace {

using misc::ChainedNode;
using misc::NodeOwner;
using misc::OwnedObject;

RT_ORIGINAL(0x01c06cb0, fn_01c06cb0, void(void *child, OwnedObject *object));
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(ChainedNode *node));

/** The bit of the object's flags_0x32 that the release clears when the counter is set. */
constexpr uint8_t flag_0x32_bit0 = 0x01;

/** The bit of the object's flags_0x0a that the release sets when the counter is set. */
constexpr uint8_t flag_0x0a_bit2 = 0x04;

}  // namespace

/**
 *
 * Tears the owner down: releases its object, frees the nodes of its list, and clears the list.
 *
 * The object's child is released first. A nonzero counter in the object clears its flag and sets
 * another before the object's own release runs with a zero argument. Nodes are freed in list order.
 *
 */
extern "C" void bb_misc_release_owner_nodes(NodeOwner *owner)
{
    OwnedObject *object = owner->object;
    if (object != nullptr) {
        if (object->child_0x18 != nullptr) fn_01c06cb0(object->child_0x18, object);
        if (object->value_0x20 != 0) {
            object->flags_0x32 &= static_cast<uint8_t>(~flag_0x32_bit0);
            object->flags_0x0a |= flag_0x0a_bit2;
        }
        object->vtable->slot_0x20(object, 0);
    }
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
