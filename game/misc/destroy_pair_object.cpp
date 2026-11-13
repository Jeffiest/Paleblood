// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: destroys a dual member object: sets its vtable, releases the item it holds, destroys its second member and tail-calls the base destructor.
#include <cstdint>

#include "dual_member_object.h"
#include "ref_item.h"
#include "runtime/original.h"

namespace {

// The derived vtable the destructor sets first, at its guest address.
RT_GLOBAL(0x0567e460, derived_vtable, const uint8_t);

// Destroys the second member block given by its address.
RT_ORIGINAL(0x00836840, destroy_second_member, void(void *member));
// The base destructor, which the destructor tail-calls and whose result is returned.
RT_ORIGINAL(0x00d4f900, destroy_base, uint64_t(misc::DualMemberObject *self));

}  // namespace

/**
 *
 * Destroys the object. Its vtable is set to the derived one, then the item it holds loses a reference and is destroyed
 * when that was the last one. The held item is cleared, the second member is destroyed, and the base destructor runs
 * with the object as its argument; the base destructor's result is returned.
 */
extern "C" uint64_t bb_misc_destroy_pair_object(misc::DualMemberObject *self)
{
    self->vtable = derived_vtable.address();

    misc::RefItem *held = self->cleared_word_b;
    if (held != nullptr && held->refcount_word >= misc::ref_counted_threshold) {
        if (misc::decrement_ref_count(&held->refcount_word) == 0) held->vtable->destroy(held);
    }
    self->cleared_word_b = nullptr;
    destroy_second_member(&self->second_member);
    return destroy_base(self);
}
