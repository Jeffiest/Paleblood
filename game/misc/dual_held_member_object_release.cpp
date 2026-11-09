// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "dual_held_member_object.h"
#include "ref_item.h"
#include "runtime/original.h"

namespace {

// The vtable every dual held member object is given once it is released.
RT_GLOBAL(0x0566e840, dual_held_vtable, const misc::DualHeldMemberVtable);
// Destroys one member object given by its address.
RT_ORIGINAL(0x00836840, destroy_member, void(void *member));

// Drops one reference a held item keeps: the item is destroyed through its vtable when the count reaches zero.
void drop_held_reference(misc::RefItem *held)
{
    if (held != nullptr && held->refcount_word >= misc::ref_counted_threshold) {
        if (misc::decrement_ref_count(&held->refcount_word) == 0) held->vtable->destroy(held);
    }
}

}  // namespace

/**
 *
 * Releases a dual held member object: it takes its vtable, destroys its first member, drops the second
 * held reference, destroys its second member, drops the first held reference, and destroys its tail member.
 *
 * Each held pointer is cleared whether or not its item was counted.
 */
extern "C" void bb_misc_dual_held_member_object_release(misc::DualHeldMemberObject *object)
{
    object->vtable = dual_held_vtable.address();
    destroy_member(object->member_0x48);

    drop_held_reference(object->held_0x38);
    object->held_0x38 = nullptr;
    destroy_member(object->member_0x30);

    drop_held_reference(object->held_0x20);
    object->held_0x20 = nullptr;
    destroy_member(object->member_0x10);
}
