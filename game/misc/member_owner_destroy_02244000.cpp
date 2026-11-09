// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the destructor of an owner that holds a member sub-object at +0x68: it sets the owner's vtable,
// destroys the member, then tail-calls the base part's destruction and returns its result.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

/** An owner with a sub-object at +0x68; only the sub-object's address is used here. */
struct MemberOwner {
    const void *vtable;             /**< The owner's vtable, stored as is. */
    uint8_t unknown_0x08[0x60];
    uint8_t unknown_0x68[0x08];      /**< The member sub-object, destroyed through its own routine. */
};
static_assert(offsetof(MemberOwner, unknown_0x68) == 0x68);

RT_GLOBAL(0x0574f2e0, member_owner_vtable, const uint8_t);
RT_ORIGINAL(0x013e68b0, destroy_member, void(void *member));
RT_ORIGINAL(0x013e8250, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_misc_member_owner_destroy_02244000(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    return destroy_base(owner);
}
