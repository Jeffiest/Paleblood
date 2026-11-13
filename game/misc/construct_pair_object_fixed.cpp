// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: constructs a dual member object with the fixed base flag, setting its two vtables and clearing its two words.
#include <cstdint>

#include "dual_member_object.h"
#include "runtime/original.h"

namespace {

// The base vtable and the derived vtable the object takes, each at its own guest address.
RT_GLOBAL(0x05680200, base_vtable, const uint8_t);
RT_GLOBAL(0x0567e460, derived_vtable, const uint8_t);

// The base initialiser, the first member's initialiser and the second member's clearing routine.
RT_ORIGINAL(0x00d62820, init_base_fixed, void(misc::DualMemberObject *self, uint32_t flag));
RT_ORIGINAL(0x00d6df20, init_first_member, void(void *member));
RT_ORIGINAL(0x00836630, clear_second_member, void(void *member));

/** The flag the base initialiser is given for this constructor. */
constexpr uint32_t fixed_base_flag = 2;

}  // namespace

/**
 *
 * Constructs the object with the fixed base flag. The base vtable is set, then the first member is initialised and
 * the first word cleared; the derived vtable is set, then the second member is cleared and the second word cleared.
 * The object's address, now holding the derived vtable, is returned in RAX.
 */
extern "C" uint64_t bb_misc_construct_pair_object_fixed(misc::DualMemberObject *self)
{
    init_base_fixed(self, fixed_base_flag);
    self->vtable = base_vtable.address();
    init_first_member(&self->first_member);
    self->cleared_word_a = 0;
    self->vtable = derived_vtable.address();
    clear_second_member(&self->second_member);
    self->cleared_word_b = 0;
    return reinterpret_cast<uint64_t>(derived_vtable.address());
}
