// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: constructs a dual member object with a caller's flag, setting its vtables and clearing its second word.
#include <cstdint>

#include "dual_member_object.h"
#include "runtime/original.h"

namespace {

// The base vtable and the derived vtable the object takes, each at its own guest address.
RT_GLOBAL(0x05680200, base_vtable, const uint8_t);
RT_GLOBAL(0x0567e460, derived_vtable, const uint8_t);

// The base initialiser, the first member's initialiser and the second member's initialiser.
RT_ORIGINAL(0x00d62990, init_base_flagged, void(misc::DualMemberObject *self, uint32_t flag));
RT_ORIGINAL(0x00d6df20, init_first_member, void(void *member));
RT_ORIGINAL(0x00836830, init_second_member, void(void *member, uint32_t flag));

}  // namespace

/**
 *
 * Constructs the object with the caller's flag. The base initialiser runs first and the base vtable is set; then the
 * first member is initialised, the derived vtable is set and the second member is initialised with the flag. The
 * second word is cleared, and when the flag is nonzero the state byte becomes the active state. The derived vtable's
 * address is returned in RAX.
 */
extern "C" uint64_t bb_misc_construct_pair_object_flagged(misc::DualMemberObject *self, uint32_t flag)
{
    init_base_flagged(self, flag);
    self->vtable = base_vtable.address();
    init_first_member(&self->first_member);
    self->vtable = derived_vtable.address();
    init_second_member(&self->second_member, flag);
    self->cleared_word_b = 0;
    if (flag != 0) self->state_byte = misc::dual_member_active_state;
    return reinterpret_cast<uint64_t>(derived_vtable.address());
}
