// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the deleting destructor of an owner that holds a member sub-object at +0x68: it sets the owner's
// vtable, destroys the member and the owner's base part, then hands the owner to the library release.
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
RT_ORIGINAL(0x013e8250, destroy_base, void(void *owner));
RT_ORIGINAL(0x02fbe588, release_owner, uint64_t(void *owner));

}  // namespace

/**
 *
 * Deleting destructor of a member owner: stores its vtable, destroys the member and then the base part,
 * and returns the library release's result for the owner.
 *
 */
extern "C" uint64_t bb_misc_member_owner_delete_02243fc0(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    destroy_base(owner);
    return release_owner(owner);
}
