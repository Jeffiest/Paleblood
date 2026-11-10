// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_member_owner_destroy_02244000, in game/misc/member_owner_destroy_02244000.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

// auto_member_owner_destroy_01dccb50: misc_member_owner_destroy_02244000 with other addresses.
namespace twin_01dccb50 {

// Misc: the destructor of an owner that holds a member sub-object at +0x68: it sets the owner's vtable,
// destroys the member, then tail-calls the base part's destruction and returns its result.


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
RT_ORIGINAL(0x013e8250, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_member_owner_destroy_01dccb50(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    return destroy_base(owner);
}

}  // namespace twin_01dccb50

// auto_member_owner_destroy_01e62520: misc_member_owner_destroy_02244000 with other addresses.
namespace twin_01e62520 {

// Misc: the destructor of an owner that holds a member sub-object at +0x68: it sets the owner's vtable,
// destroys the member, then tail-calls the base part's destruction and returns its result.


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
RT_ORIGINAL(0x013e8250, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_member_owner_destroy_01e62520(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    return destroy_base(owner);
}

}  // namespace twin_01e62520

// auto_member_owner_destroy_02145790: misc_member_owner_destroy_02244000 with other addresses.
namespace twin_02145790 {

// Misc: the destructor of an owner that holds a member sub-object at +0x68: it sets the owner's vtable,
// destroys the member, then tail-calls the base part's destruction and returns its result.


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
RT_ORIGINAL(0x013e8250, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_member_owner_destroy_02145790(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    return destroy_base(owner);
}

}  // namespace twin_02145790

// auto_member_owner_destroy_02148d00: misc_member_owner_destroy_02244000 with other addresses.
namespace twin_02148d00 {

// Misc: the destructor of an owner that holds a member sub-object at +0x68: it sets the owner's vtable,
// destroys the member, then tail-calls the base part's destruction and returns its result.


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
RT_ORIGINAL(0x013e8250, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_member_owner_destroy_02148d00(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    return destroy_base(owner);
}

}  // namespace twin_02148d00

// auto_member_owner_destroy_021756c0: misc_member_owner_destroy_02244000 with other addresses.
namespace twin_021756c0 {

// Misc: the destructor of an owner that holds a member sub-object at +0x68: it sets the owner's vtable,
// destroys the member, then tail-calls the base part's destruction and returns its result.


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
RT_ORIGINAL(0x013e8250, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_member_owner_destroy_021756c0(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    return destroy_base(owner);
}

}  // namespace twin_021756c0

// auto_member_owner_destroy_02177000: misc_member_owner_destroy_02244000 with other addresses.
namespace twin_02177000 {

// Misc: the destructor of an owner that holds a member sub-object at +0x68: it sets the owner's vtable,
// destroys the member, then tail-calls the base part's destruction and returns its result.


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
RT_ORIGINAL(0x013e8250, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_member_owner_destroy_02177000(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    return destroy_base(owner);
}

}  // namespace twin_02177000

// auto_member_owner_destroy_02178940: misc_member_owner_destroy_02244000 with other addresses.
namespace twin_02178940 {

// Misc: the destructor of an owner that holds a member sub-object at +0x68: it sets the owner's vtable,
// destroys the member, then tail-calls the base part's destruction and returns its result.


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
RT_ORIGINAL(0x013e8250, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_member_owner_destroy_02178940(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    return destroy_base(owner);
}

}  // namespace twin_02178940

// auto_member_owner_destroy_0217a320: misc_member_owner_destroy_02244000 with other addresses.
namespace twin_0217a320 {

// Misc: the destructor of an owner that holds a member sub-object at +0x68: it sets the owner's vtable,
// destroys the member, then tail-calls the base part's destruction and returns its result.


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
RT_ORIGINAL(0x013e8250, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_member_owner_destroy_0217a320(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    return destroy_base(owner);
}

}  // namespace twin_0217a320

// auto_member_owner_destroy_0217bc80: misc_member_owner_destroy_02244000 with other addresses.
namespace twin_0217bc80 {

// Misc: the destructor of an owner that holds a member sub-object at +0x68: it sets the owner's vtable,
// destroys the member, then tail-calls the base part's destruction and returns its result.


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
RT_ORIGINAL(0x013e8250, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_member_owner_destroy_0217bc80(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    return destroy_base(owner);
}

}  // namespace twin_0217bc80

// auto_member_owner_destroy_0217d5c0: misc_member_owner_destroy_02244000 with other addresses.
namespace twin_0217d5c0 {

// Misc: the destructor of an owner that holds a member sub-object at +0x68: it sets the owner's vtable,
// destroys the member, then tail-calls the base part's destruction and returns its result.


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
RT_ORIGINAL(0x013e8250, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_member_owner_destroy_0217d5c0(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    return destroy_base(owner);
}

}  // namespace twin_0217d5c0

// auto_member_owner_destroy_0217fd00: misc_member_owner_destroy_02244000 with other addresses.
namespace twin_0217fd00 {

// Misc: the destructor of an owner that holds a member sub-object at +0x68: it sets the owner's vtable,
// destroys the member, then tail-calls the base part's destruction and returns its result.


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
RT_ORIGINAL(0x013e8250, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_member_owner_destroy_0217fd00(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    return destroy_base(owner);
}

}  // namespace twin_0217fd00

// auto_member_owner_destroy_0218d440: misc_member_owner_destroy_02244000 with other addresses.
namespace twin_0218d440 {

// Misc: the destructor of an owner that holds a member sub-object at +0x68: it sets the owner's vtable,
// destroys the member, then tail-calls the base part's destruction and returns its result.


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
RT_ORIGINAL(0x013e8250, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_member_owner_destroy_0218d440(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    return destroy_base(owner);
}

}  // namespace twin_0218d440

// auto_member_owner_destroy_021c2f40: misc_member_owner_destroy_02244000 with other addresses.
namespace twin_021c2f40 {

// Misc: the destructor of an owner that holds a member sub-object at +0x68: it sets the owner's vtable,
// destroys the member, then tail-calls the base part's destruction and returns its result.


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
RT_ORIGINAL(0x013e8250, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_member_owner_destroy_021c2f40(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    return destroy_base(owner);
}

}  // namespace twin_021c2f40

// auto_member_owner_destroy_021c4770: misc_member_owner_destroy_02244000 with other addresses.
namespace twin_021c4770 {

// Misc: the destructor of an owner that holds a member sub-object at +0x68: it sets the owner's vtable,
// destroys the member, then tail-calls the base part's destruction and returns its result.


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
RT_ORIGINAL(0x01384750, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_member_owner_destroy_021c4770(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    return destroy_base(owner);
}

}  // namespace twin_021c4770

// auto_member_owner_destroy_022036b0: misc_member_owner_destroy_02244000 with other addresses.
namespace twin_022036b0 {

// Misc: the destructor of an owner that holds a member sub-object at +0x68: it sets the owner's vtable,
// destroys the member, then tail-calls the base part's destruction and returns its result.


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
RT_ORIGINAL(0x013e8250, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_member_owner_destroy_022036b0(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    return destroy_base(owner);
}

}  // namespace twin_022036b0

// auto_member_owner_destroy_02206ce0: misc_member_owner_destroy_02244000 with other addresses.
namespace twin_02206ce0 {

// Misc: the destructor of an owner that holds a member sub-object at +0x68: it sets the owner's vtable,
// destroys the member, then tail-calls the base part's destruction and returns its result.


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
RT_ORIGINAL(0x013e8250, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_member_owner_destroy_02206ce0(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    return destroy_base(owner);
}

}  // namespace twin_02206ce0

// auto_member_owner_destroy_022086e0: misc_member_owner_destroy_02244000 with other addresses.
namespace twin_022086e0 {

// Misc: the destructor of an owner that holds a member sub-object at +0x68: it sets the owner's vtable,
// destroys the member, then tail-calls the base part's destruction and returns its result.


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
RT_ORIGINAL(0x013e8250, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_member_owner_destroy_022086e0(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    return destroy_base(owner);
}

}  // namespace twin_022086e0

// auto_member_owner_destroy_0220b040: misc_member_owner_destroy_02244000 with other addresses.
namespace twin_0220b040 {

// Misc: the destructor of an owner that holds a member sub-object at +0x68: it sets the owner's vtable,
// destroys the member, then tail-calls the base part's destruction and returns its result.


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
RT_ORIGINAL(0x013e8250, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_member_owner_destroy_0220b040(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    return destroy_base(owner);
}

}  // namespace twin_0220b040

// auto_member_owner_destroy_022e4f40: misc_member_owner_destroy_02244000 with other addresses.
namespace twin_022e4f40 {

// Misc: the destructor of an owner that holds a member sub-object at +0x68: it sets the owner's vtable,
// destroys the member, then tail-calls the base part's destruction and returns its result.


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
RT_ORIGINAL(0x013e8250, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_member_owner_destroy_022e4f40(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    return destroy_base(owner);
}

}  // namespace twin_022e4f40

// auto_member_owner_destroy_022efe40: misc_member_owner_destroy_02244000 with other addresses.
namespace twin_022efe40 {

// Misc: the destructor of an owner that holds a member sub-object at +0x68: it sets the owner's vtable,
// destroys the member, then tail-calls the base part's destruction and returns its result.


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
RT_ORIGINAL(0x013e8250, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_member_owner_destroy_022efe40(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    return destroy_base(owner);
}

}  // namespace twin_022efe40

// auto_member_owner_destroy_022f1610: misc_member_owner_destroy_02244000 with other addresses.
namespace twin_022f1610 {

// Misc: the destructor of an owner that holds a member sub-object at +0x68: it sets the owner's vtable,
// destroys the member, then tail-calls the base part's destruction and returns its result.


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
RT_ORIGINAL(0x013e8250, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_member_owner_destroy_022f1610(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    return destroy_base(owner);
}

}  // namespace twin_022f1610

// auto_member_owner_destroy_022f7d90: misc_member_owner_destroy_02244000 with other addresses.
namespace twin_022f7d90 {

// Misc: the destructor of an owner that holds a member sub-object at +0x68: it sets the owner's vtable,
// destroys the member, then tail-calls the base part's destruction and returns its result.


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
RT_ORIGINAL(0x013e8250, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_member_owner_destroy_022f7d90(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    return destroy_base(owner);
}

}  // namespace twin_022f7d90

// auto_member_owner_destroy_02307070: misc_member_owner_destroy_02244000 with other addresses.
namespace twin_02307070 {

// Misc: the destructor of an owner that holds a member sub-object at +0x68: it sets the owner's vtable,
// destroys the member, then tail-calls the base part's destruction and returns its result.


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
RT_ORIGINAL(0x013e8250, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_member_owner_destroy_02307070(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    return destroy_base(owner);
}

}  // namespace twin_02307070

// auto_member_owner_destroy_02309030: misc_member_owner_destroy_02244000 with other addresses.
namespace twin_02309030 {

// Misc: the destructor of an owner that holds a member sub-object at +0x68: it sets the owner's vtable,
// destroys the member, then tail-calls the base part's destruction and returns its result.


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
RT_ORIGINAL(0x013e8250, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_auto_member_owner_destroy_02309030(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(owner->unknown_0x68);
    return destroy_base(owner);
}

}  // namespace twin_02309030
