// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the instructions of misc_member_owner_destroy_02244000, in game/misc/member_owner_destroy_02244000.cpp, each using other addresses and constants.
// Every block below is one source text with the addresses and constants exchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

// auto_member_owner_destroy_016f9640: misc_member_owner_destroy_02244000 with other addresses and constants.
namespace near_016f9640 {

/** An owner known by its vtable word; its member sub-object lies further in. */
struct MemberOwner {
    const void *vtable;
};

namespace {

/** Where the member sub-object lies in the owner. */
constexpr size_t member_offset = 0x10;

RT_GLOBAL(0x0571cac0, member_owner_vtable, const uint8_t);
RT_ORIGINAL(0x02c51450, destroy_member, void(void *member));
RT_ORIGINAL(0x02fbe588, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 */
extern "C" uint64_t bb_auto_member_owner_destroy_016f9640(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(reinterpret_cast<uint8_t *>(owner) + member_offset);
    return destroy_base(owner);
}

}  // namespace near_016f9640

// auto_member_owner_destroy_018d8f10: misc_member_owner_destroy_02244000 with other addresses and constants.
namespace near_018d8f10 {

/** An owner known by its vtable word; its member sub-object lies further in. */
struct MemberOwner {
    const void *vtable;
};

namespace {

/** Where the member sub-object lies in the owner. */
constexpr size_t member_offset = 0x10;

RT_GLOBAL(0x0576f320, member_owner_vtable, const uint8_t);
RT_ORIGINAL(0x01ec5880, destroy_member, void(void *member));
RT_ORIGINAL(0x02fbe588, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 */
extern "C" uint64_t bb_auto_member_owner_destroy_018d8f10(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(reinterpret_cast<uint8_t *>(owner) + member_offset);
    return destroy_base(owner);
}

}  // namespace near_018d8f10

// auto_member_owner_destroy_01d2d860: misc_member_owner_destroy_02244000 with other addresses and constants.
namespace near_01d2d860 {

/** An owner known by its vtable word; its member sub-object lies further in. */
struct MemberOwner {
    const void *vtable;
};

namespace {

/** Where the member sub-object lies in the owner. */
constexpr size_t member_offset = 0x28;

RT_GLOBAL(0x05730340, member_owner_vtable, const uint8_t);
RT_ORIGINAL(0x0137ebc0, destroy_member, void(void *member));
RT_ORIGINAL(0x02fbe588, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 */
extern "C" uint64_t bb_auto_member_owner_destroy_01d2d860(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(reinterpret_cast<uint8_t *>(owner) + member_offset);
    return destroy_base(owner);
}

}  // namespace near_01d2d860

// auto_member_owner_destroy_01d34ed0: misc_member_owner_destroy_02244000 with other addresses and constants.
namespace near_01d34ed0 {

/** An owner known by its vtable word; its member sub-object lies further in. */
struct MemberOwner {
    const void *vtable;
};

namespace {

/** Where the member sub-object lies in the owner. */
constexpr size_t member_offset = 0x28;

RT_GLOBAL(0x05730400, member_owner_vtable, const uint8_t);
RT_ORIGINAL(0x0137ebc0, destroy_member, void(void *member));
RT_ORIGINAL(0x02fbe588, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 */
extern "C" uint64_t bb_auto_member_owner_destroy_01d34ed0(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(reinterpret_cast<uint8_t *>(owner) + member_offset);
    return destroy_base(owner);
}

}  // namespace near_01d34ed0

// auto_member_owner_destroy_01d48f80: misc_member_owner_destroy_02244000 with other addresses and constants.
namespace near_01d48f80 {

/** An owner known by its vtable word; its member sub-object lies further in. */
struct MemberOwner {
    const void *vtable;
};

namespace {

/** Where the member sub-object lies in the owner. */
constexpr size_t member_offset = 0x28;

RT_GLOBAL(0x057305b0, member_owner_vtable, const uint8_t);
RT_ORIGINAL(0x0137ebc0, destroy_member, void(void *member));
RT_ORIGINAL(0x02fbe588, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 */
extern "C" uint64_t bb_auto_member_owner_destroy_01d48f80(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(reinterpret_cast<uint8_t *>(owner) + member_offset);
    return destroy_base(owner);
}

}  // namespace near_01d48f80

// auto_member_owner_destroy_02155790: misc_member_owner_destroy_02244000 with other addresses and constants.
namespace near_02155790 {

/** An owner known by its vtable word; its member sub-object lies further in. */
struct MemberOwner {
    const void *vtable;
};

namespace {

/** Where the member sub-object lies in the owner. */
constexpr size_t member_offset = 0x8;

RT_GLOBAL(0x057a2630, member_owner_vtable, const uint8_t);
RT_ORIGINAL(0x025c4a30, destroy_member, void(void *member));
RT_ORIGINAL(0x02fbe588, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 */
extern "C" uint64_t bb_auto_member_owner_destroy_02155790(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(reinterpret_cast<uint8_t *>(owner) + member_offset);
    return destroy_base(owner);
}

}  // namespace near_02155790

// auto_member_owner_destroy_0238c1a0: misc_member_owner_destroy_02244000 with other addresses and constants.
namespace near_0238c1a0 {

/** An owner known by its vtable word; its member sub-object lies further in. */
struct MemberOwner {
    const void *vtable;
};

namespace {

/** Where the member sub-object lies in the owner. */
constexpr size_t member_offset = 0x20;

RT_GLOBAL(0x057ad630, member_owner_vtable, const uint8_t);
RT_ORIGINAL(0x02be23f0, destroy_member, void(void *member));
RT_ORIGINAL(0x02fbe588, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 */
extern "C" uint64_t bb_auto_member_owner_destroy_0238c1a0(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(reinterpret_cast<uint8_t *>(owner) + member_offset);
    return destroy_base(owner);
}

}  // namespace near_0238c1a0

// auto_member_owner_destroy_023c5100: misc_member_owner_destroy_02244000 with other addresses and constants.
namespace near_023c5100 {

/** An owner known by its vtable word; its member sub-object lies further in. */
struct MemberOwner {
    const void *vtable;
};

namespace {

/** Where the member sub-object lies in the owner. */
constexpr size_t member_offset = 0x8;

RT_GLOBAL(0x05758b00, member_owner_vtable, const uint8_t);
RT_ORIGINAL(0x023c8290, destroy_member, void(void *member));
RT_ORIGINAL(0x02fbe588, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 */
extern "C" uint64_t bb_auto_member_owner_destroy_023c5100(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(reinterpret_cast<uint8_t *>(owner) + member_offset);
    return destroy_base(owner);
}

}  // namespace near_023c5100

// auto_member_owner_destroy_023e8490: misc_member_owner_destroy_02244000 with other addresses and constants.
namespace near_023e8490 {

/** An owner known by its vtable word; its member sub-object lies further in. */
struct MemberOwner {
    const void *vtable;
};

namespace {

/** Where the member sub-object lies in the owner. */
constexpr size_t member_offset = 0x8;

RT_GLOBAL(0x057594c0, member_owner_vtable, const uint8_t);
RT_ORIGINAL(0x013c0600, destroy_member, void(void *member));
RT_ORIGINAL(0x02fbe588, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 */
extern "C" uint64_t bb_auto_member_owner_destroy_023e8490(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(reinterpret_cast<uint8_t *>(owner) + member_offset);
    return destroy_base(owner);
}

}  // namespace near_023e8490

// auto_member_owner_destroy_02426000: misc_member_owner_destroy_02244000 with other addresses and constants.
namespace near_02426000 {

/** An owner known by its vtable word; its member sub-object lies further in. */
struct MemberOwner {
    const void *vtable;
};

namespace {

/** Where the member sub-object lies in the owner. */
constexpr size_t member_offset = 0x18;

RT_GLOBAL(0x057b3290, member_owner_vtable, const uint8_t);
RT_ORIGINAL(0x0247e4f0, destroy_member, void(void *member));
RT_ORIGINAL(0x02fbe588, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 */
extern "C" uint64_t bb_auto_member_owner_destroy_02426000(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(reinterpret_cast<uint8_t *>(owner) + member_offset);
    return destroy_base(owner);
}

}  // namespace near_02426000

// auto_member_owner_destroy_0248bd50: misc_member_owner_destroy_02244000 with other addresses and constants.
namespace near_0248bd50 {

/** An owner known by its vtable word; its member sub-object lies further in. */
struct MemberOwner {
    const void *vtable;
};

namespace {

/** Where the member sub-object lies in the owner. */
constexpr size_t member_offset = 0x18;

RT_GLOBAL(0x057b3290, member_owner_vtable, const uint8_t);
RT_ORIGINAL(0x0247e4f0, destroy_member, void(void *member));
RT_ORIGINAL(0x02fbe588, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 */
extern "C" uint64_t bb_auto_member_owner_destroy_0248bd50(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(reinterpret_cast<uint8_t *>(owner) + member_offset);
    return destroy_base(owner);
}

}  // namespace near_0248bd50

// auto_member_owner_destroy_0256ce10: misc_member_owner_destroy_02244000 with other addresses and constants.
namespace near_0256ce10 {

/** An owner known by its vtable word; its member sub-object lies further in. */
struct MemberOwner {
    const void *vtable;
};

namespace {

/** Where the member sub-object lies in the owner. */
constexpr size_t member_offset = 0x18;

RT_GLOBAL(0x0575f3a0, member_owner_vtable, const uint8_t);
RT_ORIGINAL(0x0256d690, destroy_member, void(void *member));
RT_ORIGINAL(0x02fbe588, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 */
extern "C" uint64_t bb_auto_member_owner_destroy_0256ce10(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(reinterpret_cast<uint8_t *>(owner) + member_offset);
    return destroy_base(owner);
}

}  // namespace near_0256ce10

// auto_member_owner_destroy_02648eb0: misc_member_owner_destroy_02244000 with other addresses and constants.
namespace near_02648eb0 {

/** An owner known by its vtable word; its member sub-object lies further in. */
struct MemberOwner {
    const void *vtable;
};

namespace {

/** Where the member sub-object lies in the owner. */
constexpr size_t member_offset = 0x150;

RT_GLOBAL(0x057b7610, member_owner_vtable, const uint8_t);
RT_ORIGINAL(0x012a25e0, destroy_member, void(void *member));
RT_ORIGINAL(0x012a1de0, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 */
extern "C" uint64_t bb_auto_member_owner_destroy_02648eb0(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(reinterpret_cast<uint8_t *>(owner) + member_offset);
    return destroy_base(owner);
}

}  // namespace near_02648eb0

// auto_member_owner_destroy_02649460: misc_member_owner_destroy_02244000 with other addresses and constants.
namespace near_02649460 {

/** An owner known by its vtable word; its member sub-object lies further in. */
struct MemberOwner {
    const void *vtable;
};

namespace {

/** Where the member sub-object lies in the owner. */
constexpr size_t member_offset = 0x130;

RT_GLOBAL(0x057b7670, member_owner_vtable, const uint8_t);
RT_ORIGINAL(0x012a25e0, destroy_member, void(void *member));
RT_ORIGINAL(0x012a1de0, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 */
extern "C" uint64_t bb_auto_member_owner_destroy_02649460(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(reinterpret_cast<uint8_t *>(owner) + member_offset);
    return destroy_base(owner);
}

}  // namespace near_02649460

// auto_member_owner_destroy_02649d60: misc_member_owner_destroy_02244000 with other addresses and constants.
namespace near_02649d60 {

/** An owner known by its vtable word; its member sub-object lies further in. */
struct MemberOwner {
    const void *vtable;
};

namespace {

/** Where the member sub-object lies in the owner. */
constexpr size_t member_offset = 0x1ac;

RT_GLOBAL(0x057b76d0, member_owner_vtable, const uint8_t);
RT_ORIGINAL(0x012a25e0, destroy_member, void(void *member));
RT_ORIGINAL(0x012a1de0, destroy_base, uint64_t(void *owner));

}  // namespace

/**
 *
 * Destroys a member owner: stores its vtable, destroys the member, then destroys the base part and
 * returns that routine's result.
 */
extern "C" uint64_t bb_auto_member_owner_destroy_02649d60(MemberOwner *owner)
{
    owner->vtable = member_owner_vtable.address();
    destroy_member(reinterpret_cast<uint8_t *>(owner) + member_offset);
    return destroy_base(owner);
}

}  // namespace near_02649d60
