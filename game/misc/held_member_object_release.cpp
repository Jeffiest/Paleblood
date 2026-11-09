// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "held_member_object.h"
#include "ref_item.h"
#include "runtime/original.h"

namespace {

// The vtable every held member object is given once it is released.
RT_GLOBAL(0x0566e7f0, held_member_vtable, const misc::HeldMemberVtable);
// Destroys one member object given by its address.
RT_ORIGINAL(0x00836840, destroy_member, void(void *member));

}  // namespace

/**
 *
 * Releases a held member object: it takes its vtable, destroys its four members from the last one
 * upwards, drops the reference it holds, and destroys its tail member.
 *
 * The held item loses one reference and is destroyed through its vtable when the count reaches zero.
 * The held pointer is cleared whether or not the item was counted.
 */
extern "C" void bb_misc_held_member_object_release(misc::HeldMemberObject *object)
{
    object->vtable = held_member_vtable.address();
    destroy_member(object->member_0x58);
    destroy_member(object->member_0x48);
    destroy_member(object->member_0x38);
    destroy_member(object->member_0x28);

    misc::RefItem *held = object->held;
    if (held != nullptr && held->refcount_word >= misc::ref_counted_threshold) {
        if (misc::decrement_ref_count(&held->refcount_word) == 0) held->vtable->destroy(held);
    }
    object->held = nullptr;

    destroy_member(object->tail_member);
}
