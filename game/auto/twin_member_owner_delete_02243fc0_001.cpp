// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_member_owner_delete_02243fc0, in game/misc/member_owner_delete_02243fc0.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

// auto_member_owner_delete_01dccb10: misc_member_owner_delete_02243fc0 with other addresses.
namespace twin_01dccb10 {

// Misc: the deleting destructor of an owner that holds a member sub-object at +0x68: it sets the owner's
// vtable, destroys the member and the owner's base part, then hands the owner to the library release.


namespace {

/** An owner with a sub-object at +0x68; only the sub-object's address is used here. */
struct MemberOwner {
    const void *vtable;             /**< The owner's vtable, stored as is. */
    uint8_t unknown_0x08[0x60];
    uint8_t unknown_0x68[0x08];      /**< The member sub-object, destroyed through its own routine. */
};
static_assert(offsetof(MemberOwner, unknown_0x68) == 0x68);

RT_GLOBAL(0x05733420, member_owner_vtable, const uint8_t);
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
extern "C" uint64_t bb_auto_member_owner_delete_01dccb10(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    destroy_base(owner);
    return release_owner(owner);
}

}  // namespace twin_01dccb10

// auto_member_owner_delete_01e624e0: misc_member_owner_delete_02243fc0 with other addresses.
namespace twin_01e624e0 {

// Misc: the deleting destructor of an owner that holds a member sub-object at +0x68: it sets the owner's
// vtable, destroys the member and the owner's base part, then hands the owner to the library release.


namespace {

/** An owner with a sub-object at +0x68; only the sub-object's address is used here. */
struct MemberOwner {
    const void *vtable;             /**< The owner's vtable, stored as is. */
    uint8_t unknown_0x08[0x60];
    uint8_t unknown_0x68[0x08];      /**< The member sub-object, destroyed through its own routine. */
};
static_assert(offsetof(MemberOwner, unknown_0x68) == 0x68);

RT_GLOBAL(0x05735a50, member_owner_vtable, const uint8_t);
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
extern "C" uint64_t bb_auto_member_owner_delete_01e624e0(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    destroy_base(owner);
    return release_owner(owner);
}

}  // namespace twin_01e624e0

// auto_member_owner_delete_02145750: misc_member_owner_delete_02243fc0 with other addresses.
namespace twin_02145750 {

// Misc: the deleting destructor of an owner that holds a member sub-object at +0x68: it sets the owner's
// vtable, destroys the member and the owner's base part, then hands the owner to the library release.


namespace {

/** An owner with a sub-object at +0x68; only the sub-object's address is used here. */
struct MemberOwner {
    const void *vtable;             /**< The owner's vtable, stored as is. */
    uint8_t unknown_0x08[0x60];
    uint8_t unknown_0x68[0x08];      /**< The member sub-object, destroyed through its own routine. */
};
static_assert(offsetof(MemberOwner, unknown_0x68) == 0x68);

RT_GLOBAL(0x0574cb50, member_owner_vtable, const uint8_t);
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
extern "C" uint64_t bb_auto_member_owner_delete_02145750(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    destroy_base(owner);
    return release_owner(owner);
}

}  // namespace twin_02145750

// auto_member_owner_delete_02148cc0: misc_member_owner_delete_02243fc0 with other addresses.
namespace twin_02148cc0 {

// Misc: the deleting destructor of an owner that holds a member sub-object at +0x68: it sets the owner's
// vtable, destroys the member and the owner's base part, then hands the owner to the library release.


namespace {

/** An owner with a sub-object at +0x68; only the sub-object's address is used here. */
struct MemberOwner {
    const void *vtable;             /**< The owner's vtable, stored as is. */
    uint8_t unknown_0x08[0x60];
    uint8_t unknown_0x68[0x08];      /**< The member sub-object, destroyed through its own routine. */
};
static_assert(offsetof(MemberOwner, unknown_0x68) == 0x68);

RT_GLOBAL(0x0574cbb0, member_owner_vtable, const uint8_t);
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
extern "C" uint64_t bb_auto_member_owner_delete_02148cc0(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    destroy_base(owner);
    return release_owner(owner);
}

}  // namespace twin_02148cc0

// auto_member_owner_delete_02175680: misc_member_owner_delete_02243fc0 with other addresses.
namespace twin_02175680 {

// Misc: the deleting destructor of an owner that holds a member sub-object at +0x68: it sets the owner's
// vtable, destroys the member and the owner's base part, then hands the owner to the library release.


namespace {

/** An owner with a sub-object at +0x68; only the sub-object's address is used here. */
struct MemberOwner {
    const void *vtable;             /**< The owner's vtable, stored as is. */
    uint8_t unknown_0x08[0x60];
    uint8_t unknown_0x68[0x08];      /**< The member sub-object, destroyed through its own routine. */
};
static_assert(offsetof(MemberOwner, unknown_0x68) == 0x68);

RT_GLOBAL(0x0574d340, member_owner_vtable, const uint8_t);
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
extern "C" uint64_t bb_auto_member_owner_delete_02175680(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    destroy_base(owner);
    return release_owner(owner);
}

}  // namespace twin_02175680

// auto_member_owner_delete_02176fc0: misc_member_owner_delete_02243fc0 with other addresses.
namespace twin_02176fc0 {

// Misc: the deleting destructor of an owner that holds a member sub-object at +0x68: it sets the owner's
// vtable, destroys the member and the owner's base part, then hands the owner to the library release.


namespace {

/** An owner with a sub-object at +0x68; only the sub-object's address is used here. */
struct MemberOwner {
    const void *vtable;             /**< The owner's vtable, stored as is. */
    uint8_t unknown_0x08[0x60];
    uint8_t unknown_0x68[0x08];      /**< The member sub-object, destroyed through its own routine. */
};
static_assert(offsetof(MemberOwner, unknown_0x68) == 0x68);

RT_GLOBAL(0x0574d3a0, member_owner_vtable, const uint8_t);
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
extern "C" uint64_t bb_auto_member_owner_delete_02176fc0(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    destroy_base(owner);
    return release_owner(owner);
}

}  // namespace twin_02176fc0

// auto_member_owner_delete_02178900: misc_member_owner_delete_02243fc0 with other addresses.
namespace twin_02178900 {

// Misc: the deleting destructor of an owner that holds a member sub-object at +0x68: it sets the owner's
// vtable, destroys the member and the owner's base part, then hands the owner to the library release.


namespace {

/** An owner with a sub-object at +0x68; only the sub-object's address is used here. */
struct MemberOwner {
    const void *vtable;             /**< The owner's vtable, stored as is. */
    uint8_t unknown_0x08[0x60];
    uint8_t unknown_0x68[0x08];      /**< The member sub-object, destroyed through its own routine. */
};
static_assert(offsetof(MemberOwner, unknown_0x68) == 0x68);

RT_GLOBAL(0x0574d400, member_owner_vtable, const uint8_t);
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
extern "C" uint64_t bb_auto_member_owner_delete_02178900(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    destroy_base(owner);
    return release_owner(owner);
}

}  // namespace twin_02178900

// auto_member_owner_delete_0217a2e0: misc_member_owner_delete_02243fc0 with other addresses.
namespace twin_0217a2e0 {

// Misc: the deleting destructor of an owner that holds a member sub-object at +0x68: it sets the owner's
// vtable, destroys the member and the owner's base part, then hands the owner to the library release.


namespace {

/** An owner with a sub-object at +0x68; only the sub-object's address is used here. */
struct MemberOwner {
    const void *vtable;             /**< The owner's vtable, stored as is. */
    uint8_t unknown_0x08[0x60];
    uint8_t unknown_0x68[0x08];      /**< The member sub-object, destroyed through its own routine. */
};
static_assert(offsetof(MemberOwner, unknown_0x68) == 0x68);

RT_GLOBAL(0x0574d460, member_owner_vtable, const uint8_t);
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
extern "C" uint64_t bb_auto_member_owner_delete_0217a2e0(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    destroy_base(owner);
    return release_owner(owner);
}

}  // namespace twin_0217a2e0

// auto_member_owner_delete_0217bc40: misc_member_owner_delete_02243fc0 with other addresses.
namespace twin_0217bc40 {

// Misc: the deleting destructor of an owner that holds a member sub-object at +0x68: it sets the owner's
// vtable, destroys the member and the owner's base part, then hands the owner to the library release.


namespace {

/** An owner with a sub-object at +0x68; only the sub-object's address is used here. */
struct MemberOwner {
    const void *vtable;             /**< The owner's vtable, stored as is. */
    uint8_t unknown_0x08[0x60];
    uint8_t unknown_0x68[0x08];      /**< The member sub-object, destroyed through its own routine. */
};
static_assert(offsetof(MemberOwner, unknown_0x68) == 0x68);

RT_GLOBAL(0x0574d4c0, member_owner_vtable, const uint8_t);
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
extern "C" uint64_t bb_auto_member_owner_delete_0217bc40(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    destroy_base(owner);
    return release_owner(owner);
}

}  // namespace twin_0217bc40

// auto_member_owner_delete_0217d580: misc_member_owner_delete_02243fc0 with other addresses.
namespace twin_0217d580 {

// Misc: the deleting destructor of an owner that holds a member sub-object at +0x68: it sets the owner's
// vtable, destroys the member and the owner's base part, then hands the owner to the library release.


namespace {

/** An owner with a sub-object at +0x68; only the sub-object's address is used here. */
struct MemberOwner {
    const void *vtable;             /**< The owner's vtable, stored as is. */
    uint8_t unknown_0x08[0x60];
    uint8_t unknown_0x68[0x08];      /**< The member sub-object, destroyed through its own routine. */
};
static_assert(offsetof(MemberOwner, unknown_0x68) == 0x68);

RT_GLOBAL(0x0574d520, member_owner_vtable, const uint8_t);
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
extern "C" uint64_t bb_auto_member_owner_delete_0217d580(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    destroy_base(owner);
    return release_owner(owner);
}

}  // namespace twin_0217d580

// auto_member_owner_delete_0217fcc0: misc_member_owner_delete_02243fc0 with other addresses.
namespace twin_0217fcc0 {

// Misc: the deleting destructor of an owner that holds a member sub-object at +0x68: it sets the owner's
// vtable, destroys the member and the owner's base part, then hands the owner to the library release.


namespace {

/** An owner with a sub-object at +0x68; only the sub-object's address is used here. */
struct MemberOwner {
    const void *vtable;             /**< The owner's vtable, stored as is. */
    uint8_t unknown_0x08[0x60];
    uint8_t unknown_0x68[0x08];      /**< The member sub-object, destroyed through its own routine. */
};
static_assert(offsetof(MemberOwner, unknown_0x68) == 0x68);

RT_GLOBAL(0x0574d580, member_owner_vtable, const uint8_t);
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
extern "C" uint64_t bb_auto_member_owner_delete_0217fcc0(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    destroy_base(owner);
    return release_owner(owner);
}

}  // namespace twin_0217fcc0

// auto_member_owner_delete_0218d400: misc_member_owner_delete_02243fc0 with other addresses.
namespace twin_0218d400 {

// Misc: the deleting destructor of an owner that holds a member sub-object at +0x68: it sets the owner's
// vtable, destroys the member and the owner's base part, then hands the owner to the library release.


namespace {

/** An owner with a sub-object at +0x68; only the sub-object's address is used here. */
struct MemberOwner {
    const void *vtable;             /**< The owner's vtable, stored as is. */
    uint8_t unknown_0x08[0x60];
    uint8_t unknown_0x68[0x08];      /**< The member sub-object, destroyed through its own routine. */
};
static_assert(offsetof(MemberOwner, unknown_0x68) == 0x68);

RT_GLOBAL(0x0574d710, member_owner_vtable, const uint8_t);
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
extern "C" uint64_t bb_auto_member_owner_delete_0218d400(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    destroy_base(owner);
    return release_owner(owner);
}

}  // namespace twin_0218d400

// auto_member_owner_delete_021c2f00: misc_member_owner_delete_02243fc0 with other addresses.
namespace twin_021c2f00 {

// Misc: the deleting destructor of an owner that holds a member sub-object at +0x68: it sets the owner's
// vtable, destroys the member and the owner's base part, then hands the owner to the library release.


namespace {

/** An owner with a sub-object at +0x68; only the sub-object's address is used here. */
struct MemberOwner {
    const void *vtable;             /**< The owner's vtable, stored as is. */
    uint8_t unknown_0x08[0x60];
    uint8_t unknown_0x68[0x08];      /**< The member sub-object, destroyed through its own routine. */
};
static_assert(offsetof(MemberOwner, unknown_0x68) == 0x68);

RT_GLOBAL(0x0574e390, member_owner_vtable, const uint8_t);
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
extern "C" uint64_t bb_auto_member_owner_delete_021c2f00(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    destroy_base(owner);
    return release_owner(owner);
}

}  // namespace twin_021c2f00

// auto_member_owner_delete_021c4730: misc_member_owner_delete_02243fc0 with other addresses.
namespace twin_021c4730 {

// Misc: the deleting destructor of an owner that holds a member sub-object at +0x68: it sets the owner's
// vtable, destroys the member and the owner's base part, then hands the owner to the library release.


namespace {

/** An owner with a sub-object at +0x68; only the sub-object's address is used here. */
struct MemberOwner {
    const void *vtable;             /**< The owner's vtable, stored as is. */
    uint8_t unknown_0x08[0x60];
    uint8_t unknown_0x68[0x08];      /**< The member sub-object, destroyed through its own routine. */
};
static_assert(offsetof(MemberOwner, unknown_0x68) == 0x68);

RT_GLOBAL(0x0574e3c0, member_owner_vtable, const uint8_t);
RT_ORIGINAL(0x021b7c50, destroy_member, void(void *member));
RT_ORIGINAL(0x01384750, destroy_base, void(void *owner));
RT_ORIGINAL(0x02fbe588, release_owner, uint64_t(void *owner));

}  // namespace

/**
 *
 * Deleting destructor of a member owner: stores its vtable, destroys the member and then the base part,
 * and returns the library release's result for the owner.
 *
 */
extern "C" uint64_t bb_auto_member_owner_delete_021c4730(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    destroy_base(owner);
    return release_owner(owner);
}

}  // namespace twin_021c4730

// auto_member_owner_delete_02203670: misc_member_owner_delete_02243fc0 with other addresses.
namespace twin_02203670 {

// Misc: the deleting destructor of an owner that holds a member sub-object at +0x68: it sets the owner's
// vtable, destroys the member and the owner's base part, then hands the owner to the library release.


namespace {

/** An owner with a sub-object at +0x68; only the sub-object's address is used here. */
struct MemberOwner {
    const void *vtable;             /**< The owner's vtable, stored as is. */
    uint8_t unknown_0x08[0x60];
    uint8_t unknown_0x68[0x08];      /**< The member sub-object, destroyed through its own routine. */
};
static_assert(offsetof(MemberOwner, unknown_0x68) == 0x68);

RT_GLOBAL(0x0574e680, member_owner_vtable, const uint8_t);
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
extern "C" uint64_t bb_auto_member_owner_delete_02203670(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    destroy_base(owner);
    return release_owner(owner);
}

}  // namespace twin_02203670

// auto_member_owner_delete_02206ca0: misc_member_owner_delete_02243fc0 with other addresses.
namespace twin_02206ca0 {

// Misc: the deleting destructor of an owner that holds a member sub-object at +0x68: it sets the owner's
// vtable, destroys the member and the owner's base part, then hands the owner to the library release.


namespace {

/** An owner with a sub-object at +0x68; only the sub-object's address is used here. */
struct MemberOwner {
    const void *vtable;             /**< The owner's vtable, stored as is. */
    uint8_t unknown_0x08[0x60];
    uint8_t unknown_0x68[0x08];      /**< The member sub-object, destroyed through its own routine. */
};
static_assert(offsetof(MemberOwner, unknown_0x68) == 0x68);

RT_GLOBAL(0x0574e6e0, member_owner_vtable, const uint8_t);
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
extern "C" uint64_t bb_auto_member_owner_delete_02206ca0(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    destroy_base(owner);
    return release_owner(owner);
}

}  // namespace twin_02206ca0

// auto_member_owner_delete_022086a0: misc_member_owner_delete_02243fc0 with other addresses.
namespace twin_022086a0 {

// Misc: the deleting destructor of an owner that holds a member sub-object at +0x68: it sets the owner's
// vtable, destroys the member and the owner's base part, then hands the owner to the library release.


namespace {

/** An owner with a sub-object at +0x68; only the sub-object's address is used here. */
struct MemberOwner {
    const void *vtable;             /**< The owner's vtable, stored as is. */
    uint8_t unknown_0x08[0x60];
    uint8_t unknown_0x68[0x08];      /**< The member sub-object, destroyed through its own routine. */
};
static_assert(offsetof(MemberOwner, unknown_0x68) == 0x68);

RT_GLOBAL(0x0574e740, member_owner_vtable, const uint8_t);
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
extern "C" uint64_t bb_auto_member_owner_delete_022086a0(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    destroy_base(owner);
    return release_owner(owner);
}

}  // namespace twin_022086a0

// auto_member_owner_delete_0220b000: misc_member_owner_delete_02243fc0 with other addresses.
namespace twin_0220b000 {

// Misc: the deleting destructor of an owner that holds a member sub-object at +0x68: it sets the owner's
// vtable, destroys the member and the owner's base part, then hands the owner to the library release.


namespace {

/** An owner with a sub-object at +0x68; only the sub-object's address is used here. */
struct MemberOwner {
    const void *vtable;             /**< The owner's vtable, stored as is. */
    uint8_t unknown_0x08[0x60];
    uint8_t unknown_0x68[0x08];      /**< The member sub-object, destroyed through its own routine. */
};
static_assert(offsetof(MemberOwner, unknown_0x68) == 0x68);

RT_GLOBAL(0x0574e7a0, member_owner_vtable, const uint8_t);
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
extern "C" uint64_t bb_auto_member_owner_delete_0220b000(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    destroy_base(owner);
    return release_owner(owner);
}

}  // namespace twin_0220b000

// auto_member_owner_delete_022e4f00: misc_member_owner_delete_02243fc0 with other addresses.
namespace twin_022e4f00 {

// Misc: the deleting destructor of an owner that holds a member sub-object at +0x68: it sets the owner's
// vtable, destroys the member and the owner's base part, then hands the owner to the library release.


namespace {

/** An owner with a sub-object at +0x68; only the sub-object's address is used here. */
struct MemberOwner {
    const void *vtable;             /**< The owner's vtable, stored as is. */
    uint8_t unknown_0x08[0x60];
    uint8_t unknown_0x68[0x08];      /**< The member sub-object, destroyed through its own routine. */
};
static_assert(offsetof(MemberOwner, unknown_0x68) == 0x68);

RT_GLOBAL(0x05751340, member_owner_vtable, const uint8_t);
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
extern "C" uint64_t bb_auto_member_owner_delete_022e4f00(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    destroy_base(owner);
    return release_owner(owner);
}

}  // namespace twin_022e4f00

// auto_member_owner_delete_022efe00: misc_member_owner_delete_02243fc0 with other addresses.
namespace twin_022efe00 {

// Misc: the deleting destructor of an owner that holds a member sub-object at +0x68: it sets the owner's
// vtable, destroys the member and the owner's base part, then hands the owner to the library release.


namespace {

/** An owner with a sub-object at +0x68; only the sub-object's address is used here. */
struct MemberOwner {
    const void *vtable;             /**< The owner's vtable, stored as is. */
    uint8_t unknown_0x08[0x60];
    uint8_t unknown_0x68[0x08];      /**< The member sub-object, destroyed through its own routine. */
};
static_assert(offsetof(MemberOwner, unknown_0x68) == 0x68);

RT_GLOBAL(0x057514e0, member_owner_vtable, const uint8_t);
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
extern "C" uint64_t bb_auto_member_owner_delete_022efe00(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    destroy_base(owner);
    return release_owner(owner);
}

}  // namespace twin_022efe00

// auto_member_owner_delete_022f15d0: misc_member_owner_delete_02243fc0 with other addresses.
namespace twin_022f15d0 {

// Misc: the deleting destructor of an owner that holds a member sub-object at +0x68: it sets the owner's
// vtable, destroys the member and the owner's base part, then hands the owner to the library release.


namespace {

/** An owner with a sub-object at +0x68; only the sub-object's address is used here. */
struct MemberOwner {
    const void *vtable;             /**< The owner's vtable, stored as is. */
    uint8_t unknown_0x08[0x60];
    uint8_t unknown_0x68[0x08];      /**< The member sub-object, destroyed through its own routine. */
};
static_assert(offsetof(MemberOwner, unknown_0x68) == 0x68);

RT_GLOBAL(0x057aa3e0, member_owner_vtable, const uint8_t);
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
extern "C" uint64_t bb_auto_member_owner_delete_022f15d0(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    destroy_base(owner);
    return release_owner(owner);
}

}  // namespace twin_022f15d0

// auto_member_owner_delete_022f7d50: misc_member_owner_delete_02243fc0 with other addresses.
namespace twin_022f7d50 {

// Misc: the deleting destructor of an owner that holds a member sub-object at +0x68: it sets the owner's
// vtable, destroys the member and the owner's base part, then hands the owner to the library release.


namespace {

/** An owner with a sub-object at +0x68; only the sub-object's address is used here. */
struct MemberOwner {
    const void *vtable;             /**< The owner's vtable, stored as is. */
    uint8_t unknown_0x08[0x60];
    uint8_t unknown_0x68[0x08];      /**< The member sub-object, destroyed through its own routine. */
};
static_assert(offsetof(MemberOwner, unknown_0x68) == 0x68);

RT_GLOBAL(0x05751630, member_owner_vtable, const uint8_t);
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
extern "C" uint64_t bb_auto_member_owner_delete_022f7d50(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    destroy_base(owner);
    return release_owner(owner);
}

}  // namespace twin_022f7d50

// auto_member_owner_delete_02307030: misc_member_owner_delete_02243fc0 with other addresses.
namespace twin_02307030 {

// Misc: the deleting destructor of an owner that holds a member sub-object at +0x68: it sets the owner's
// vtable, destroys the member and the owner's base part, then hands the owner to the library release.


namespace {

/** An owner with a sub-object at +0x68; only the sub-object's address is used here. */
struct MemberOwner {
    const void *vtable;             /**< The owner's vtable, stored as is. */
    uint8_t unknown_0x08[0x60];
    uint8_t unknown_0x68[0x08];      /**< The member sub-object, destroyed through its own routine. */
};
static_assert(offsetof(MemberOwner, unknown_0x68) == 0x68);

RT_GLOBAL(0x057557c0, member_owner_vtable, const uint8_t);
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
extern "C" uint64_t bb_auto_member_owner_delete_02307030(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    destroy_base(owner);
    return release_owner(owner);
}

}  // namespace twin_02307030

// auto_member_owner_delete_02308ff0: misc_member_owner_delete_02243fc0 with other addresses.
namespace twin_02308ff0 {

// Misc: the deleting destructor of an owner that holds a member sub-object at +0x68: it sets the owner's
// vtable, destroys the member and the owner's base part, then hands the owner to the library release.


namespace {

/** An owner with a sub-object at +0x68; only the sub-object's address is used here. */
struct MemberOwner {
    const void *vtable;             /**< The owner's vtable, stored as is. */
    uint8_t unknown_0x08[0x60];
    uint8_t unknown_0x68[0x08];      /**< The member sub-object, destroyed through its own routine. */
};
static_assert(offsetof(MemberOwner, unknown_0x68) == 0x68);

RT_GLOBAL(0x05755820, member_owner_vtable, const uint8_t);
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
extern "C" uint64_t bb_auto_member_owner_delete_02308ff0(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    destroy_base(owner);
    return release_owner(owner);
}

}  // namespace twin_02308ff0
