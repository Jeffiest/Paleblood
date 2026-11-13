// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: copies a dual member object: sets up the base and first member, copies the second member and shares the source's held item.
#include <cstdint>

#include "dual_member_object.h"
#include "ref_item.h"
#include "runtime/original.h"

namespace {

// The base vtable and the derived vtable the copy takes, each at its own guest address.
RT_GLOBAL(0x05680200, base_vtable, const uint8_t);
RT_GLOBAL(0x0567e460, derived_vtable, const uint8_t);

// The base copy initialiser, the first member's initialiser and the second member's copy routine.
RT_ORIGINAL(0x00d628a0, init_base_copy, void(misc::DualMemberObject *self, const misc::DualMemberObject *source));
RT_ORIGINAL(0x00d6df20, init_first_member, void(void *member));
RT_ORIGINAL(0x008367c0, copy_second_member, void(void *destination, const void *source));

}  // namespace

/**
 *
 * Copies the source object into self. The base copy runs first and the base vtable is set; then the first member is
 * initialised, the first word cleared, the derived vtable set, and the second member copied from the source. The
 * source's held item gains a reference when it is counted and is then held by the copy too. The held item is returned.
 */
extern "C" uint64_t bb_misc_copy_pair_object(misc::DualMemberObject *self, const misc::DualMemberObject *source)
{
    init_base_copy(self, source);
    self->vtable = base_vtable.address();
    init_first_member(&self->first_member);
    self->cleared_word_a = 0;
    self->vtable = derived_vtable.address();
    copy_second_member(&self->second_member, &source->second_member);

    misc::RefItem *held = source->cleared_word_b;
    if (held != nullptr && held->refcount_word >= misc::ref_counted_threshold) {
        misc::increment_ref_count(&held->refcount_word);
    }
    self->cleared_word_b = held;
    return reinterpret_cast<uint64_t>(held);
}
