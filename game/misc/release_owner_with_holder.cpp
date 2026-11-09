// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: tears down an owner like the owner teardown, but the object's release gets the physics holder and sets its flags.
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

/** The physics manager's slots: the holder it keeps at +0x28. */
struct PhysicsManagerSlots {
    uint8_t unknown_0x00[0x28];
    void *holder_0x28;
};
static_assert(offsetof(PhysicsManagerSlots, holder_0x28) == 0x28);
RT_GLOBAL(0x0593d700, physics_manager_slots, PhysicsManagerSlots *);

/** The bit of the object's flags_0x32 that the release sets when the counter is set. */
constexpr uint8_t flag_0x32_bit0 = 0x01;

/** The bit of the object's flags_0x0a that the release sets when the counter is set. */
constexpr uint8_t flag_0x0a_bit2 = 0x04;

}  // namespace

/**
 *
 * Tears the owner down: releases its object, frees the nodes of its list, and clears the list.
 *
 * The object's release runs first with the physics holder as its argument. Its child is released
 * next, and a nonzero counter in the object sets both flags. Nodes are freed in list order.
 *
 */
extern "C" void bb_misc_release_owner_with_holder(NodeOwner *owner)
{
    OwnedObject *object = owner->object;
    if (object != nullptr) {
        PhysicsManagerSlots *manager = physics_manager_slots.get();
        object->vtable->slot_0x20(object, reinterpret_cast<uintptr_t>(manager->holder_0x28));
        if (object->child_0x18 != nullptr) fn_01c06cb0(object->child_0x18, object);
        if (object->value_0x20 != 0) {
            object->flags_0x32 |= flag_0x32_bit0;
            object->flags_0x0a |= flag_0x0a_bit2;
        }
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
