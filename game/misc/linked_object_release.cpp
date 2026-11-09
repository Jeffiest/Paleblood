// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "linked_object.h"
#include "ref_item.h"
#include "runtime/original.h"

namespace {

// The vtable every linked object is given once its members are released.
RT_GLOBAL(0x0566d970, linked_object_vtable, const misc::LinkedObjectVtable);
// Destroys one member object given by its address.
RT_ORIGINAL(0x00836840, destroy_member, void(void *member));

}  // namespace

/**
 *
 * Releases a linked object: it takes its vtable, destroys its first two members, drops the reference it
 * holds, and destroys its last member.
 *
 * The held item loses one reference and is destroyed through its vtable when the count reaches zero.
 * The held pointer is cleared whether or not the item was counted.
 */
extern "C" void bb_misc_linked_object_release(misc::LinkedObject *object)
{
    object->vtable = linked_object_vtable.address();
    destroy_member(object->first_member);
    destroy_member(object->second_member);

    misc::RefItem *held = object->held;
    if (held != nullptr && held->refcount_word >= misc::ref_counted_threshold) {
        if (misc::decrement_ref_count(&held->refcount_word) == 0) held->vtable->destroy(held);
    }
    object->held = nullptr;

    destroy_member(object->tail_member);
}
