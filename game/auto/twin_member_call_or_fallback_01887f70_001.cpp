// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_member_call_or_fallback, in game/misc/member_call_or_fallback.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "../misc/member_thunk.h"
#include "runtime/original.h"

// auto_member_call_or_fallback_0170f9d0: misc_member_call_or_fallback with other addresses.
namespace twin_0170f9d0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_0170f9d0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_0170f9d0

// auto_member_call_or_fallback_017997c0: misc_member_call_or_fallback with other addresses.
namespace twin_017997c0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_017997c0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_017997c0

// auto_member_call_or_fallback_017a79c0: misc_member_call_or_fallback with other addresses.
namespace twin_017a79c0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_017a79c0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_017a79c0

// auto_member_call_or_fallback_017a9300: misc_member_call_or_fallback with other addresses.
namespace twin_017a9300 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_017a9300(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_017a9300

// auto_member_call_or_fallback_017a94d0: misc_member_call_or_fallback with other addresses.
namespace twin_017a94d0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_017a94d0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_017a94d0

// auto_member_call_or_fallback_017b41a0: misc_member_call_or_fallback with other addresses.
namespace twin_017b41a0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_017b41a0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_017b41a0

// auto_member_call_or_fallback_017b58d0: misc_member_call_or_fallback with other addresses.
namespace twin_017b58d0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_017b58d0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_017b58d0

// auto_member_call_or_fallback_017c3b10: misc_member_call_or_fallback with other addresses.
namespace twin_017c3b10 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_017c3b10(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_017c3b10

// auto_member_call_or_fallback_01856820: misc_member_call_or_fallback with other addresses.
namespace twin_01856820 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01856820(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01856820

// auto_member_call_or_fallback_018602c0: misc_member_call_or_fallback with other addresses.
namespace twin_018602c0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_018602c0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_018602c0

// auto_member_call_or_fallback_0186b2e0: misc_member_call_or_fallback with other addresses.
namespace twin_0186b2e0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_0186b2e0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_0186b2e0

// auto_member_call_or_fallback_0186f430: misc_member_call_or_fallback with other addresses.
namespace twin_0186f430 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_0186f430(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_0186f430

// auto_member_call_or_fallback_01870170: misc_member_call_or_fallback with other addresses.
namespace twin_01870170 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01870170(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01870170

// auto_member_call_or_fallback_01870d20: misc_member_call_or_fallback with other addresses.
namespace twin_01870d20 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01870d20(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01870d20

// auto_member_call_or_fallback_01874290: misc_member_call_or_fallback with other addresses.
namespace twin_01874290 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01874290(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01874290

// auto_member_call_or_fallback_0187fa10: misc_member_call_or_fallback with other addresses.
namespace twin_0187fa10 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_0187fa10(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_0187fa10

// auto_member_call_or_fallback_01883a10: misc_member_call_or_fallback with other addresses.
namespace twin_01883a10 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01883a10(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01883a10

// auto_member_call_or_fallback_0188e490: misc_member_call_or_fallback with other addresses.
namespace twin_0188e490 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_0188e490(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_0188e490

// auto_member_call_or_fallback_0189e460: misc_member_call_or_fallback with other addresses.
namespace twin_0189e460 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_0189e460(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_0189e460

// auto_member_call_or_fallback_018a02d0: misc_member_call_or_fallback with other addresses.
namespace twin_018a02d0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_018a02d0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_018a02d0

// auto_member_call_or_fallback_018ad620: misc_member_call_or_fallback with other addresses.
namespace twin_018ad620 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_018ad620(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_018ad620

// auto_member_call_or_fallback_018b0030: misc_member_call_or_fallback with other addresses.
namespace twin_018b0030 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_018b0030(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_018b0030

// auto_member_call_or_fallback_018b3510: misc_member_call_or_fallback with other addresses.
namespace twin_018b3510 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_018b3510(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_018b3510

// auto_member_call_or_fallback_018bdb40: misc_member_call_or_fallback with other addresses.
namespace twin_018bdb40 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_018bdb40(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_018bdb40

// auto_member_call_or_fallback_018c1280: misc_member_call_or_fallback with other addresses.
namespace twin_018c1280 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_018c1280(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_018c1280

// auto_member_call_or_fallback_018c6660: misc_member_call_or_fallback with other addresses.
namespace twin_018c6660 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_018c6660(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_018c6660

// auto_member_call_or_fallback_018c82e0: misc_member_call_or_fallback with other addresses.
namespace twin_018c82e0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_018c82e0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_018c82e0

// auto_member_call_or_fallback_01937280: misc_member_call_or_fallback with other addresses.
namespace twin_01937280 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01937280(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01937280

// auto_member_call_or_fallback_0196f5e0: misc_member_call_or_fallback with other addresses.
namespace twin_0196f5e0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_0196f5e0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_0196f5e0

// auto_member_call_or_fallback_0198f900: misc_member_call_or_fallback with other addresses.
namespace twin_0198f900 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_0198f900(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_0198f900

// auto_member_call_or_fallback_0199d820: misc_member_call_or_fallback with other addresses.
namespace twin_0199d820 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_0199d820(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_0199d820

// auto_member_call_or_fallback_019acf00: misc_member_call_or_fallback with other addresses.
namespace twin_019acf00 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_019acf00(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_019acf00

// auto_member_call_or_fallback_019bf900: misc_member_call_or_fallback with other addresses.
namespace twin_019bf900 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_019bf900(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_019bf900

// auto_member_call_or_fallback_019c1530: misc_member_call_or_fallback with other addresses.
namespace twin_019c1530 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_019c1530(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_019c1530

// auto_member_call_or_fallback_019c2e50: misc_member_call_or_fallback with other addresses.
namespace twin_019c2e50 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_019c2e50(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_019c2e50

// auto_member_call_or_fallback_019c62c0: misc_member_call_or_fallback with other addresses.
namespace twin_019c62c0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_019c62c0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_019c62c0

// auto_member_call_or_fallback_019c73a0: misc_member_call_or_fallback with other addresses.
namespace twin_019c73a0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_019c73a0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_019c73a0

// auto_member_call_or_fallback_019c9760: misc_member_call_or_fallback with other addresses.
namespace twin_019c9760 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_019c9760(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_019c9760

// auto_member_call_or_fallback_019cc1e0: misc_member_call_or_fallback with other addresses.
namespace twin_019cc1e0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_019cc1e0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_019cc1e0

// auto_member_call_or_fallback_019d7ea0: misc_member_call_or_fallback with other addresses.
namespace twin_019d7ea0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_019d7ea0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_019d7ea0

// auto_member_call_or_fallback_019e11f0: misc_member_call_or_fallback with other addresses.
namespace twin_019e11f0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_019e11f0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_019e11f0

// auto_member_call_or_fallback_019ebb70: misc_member_call_or_fallback with other addresses.
namespace twin_019ebb70 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_019ebb70(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_019ebb70

// auto_member_call_or_fallback_01a2f030: misc_member_call_or_fallback with other addresses.
namespace twin_01a2f030 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01a2f030(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01a2f030

// auto_member_call_or_fallback_01a34350: misc_member_call_or_fallback with other addresses.
namespace twin_01a34350 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01a34350(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01a34350

// auto_member_call_or_fallback_01a5a600: misc_member_call_or_fallback with other addresses.
namespace twin_01a5a600 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01a5a600(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01a5a600

// auto_member_call_or_fallback_01a87740: misc_member_call_or_fallback with other addresses.
namespace twin_01a87740 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01a87740(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01a87740

// auto_member_call_or_fallback_01ab6520: misc_member_call_or_fallback with other addresses.
namespace twin_01ab6520 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01ab6520(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01ab6520

// auto_member_call_or_fallback_01abe8c0: misc_member_call_or_fallback with other addresses.
namespace twin_01abe8c0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01abe8c0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01abe8c0

// auto_member_call_or_fallback_01addd80: misc_member_call_or_fallback with other addresses.
namespace twin_01addd80 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01addd80(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01addd80

// auto_member_call_or_fallback_01af1360: misc_member_call_or_fallback with other addresses.
namespace twin_01af1360 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01af1360(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01af1360

// auto_member_call_or_fallback_01b00ac0: misc_member_call_or_fallback with other addresses.
namespace twin_01b00ac0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01b00ac0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01b00ac0

// auto_member_call_or_fallback_01b053f0: misc_member_call_or_fallback with other addresses.
namespace twin_01b053f0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01b053f0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01b053f0

// auto_member_call_or_fallback_01b08b60: misc_member_call_or_fallback with other addresses.
namespace twin_01b08b60 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01b08b60(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01b08b60

// auto_member_call_or_fallback_01b0cde0: misc_member_call_or_fallback with other addresses.
namespace twin_01b0cde0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01b0cde0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01b0cde0

// auto_member_call_or_fallback_01b0f370: misc_member_call_or_fallback with other addresses.
namespace twin_01b0f370 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01b0f370(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01b0f370

// auto_member_call_or_fallback_01b19070: misc_member_call_or_fallback with other addresses.
namespace twin_01b19070 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01b19070(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01b19070

// auto_member_call_or_fallback_01b247c0: misc_member_call_or_fallback with other addresses.
namespace twin_01b247c0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01b247c0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01b247c0

// auto_member_call_or_fallback_01b56040: misc_member_call_or_fallback with other addresses.
namespace twin_01b56040 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01b56040(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01b56040

// auto_member_call_or_fallback_01b6ef20: misc_member_call_or_fallback with other addresses.
namespace twin_01b6ef20 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01b6ef20(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01b6ef20

// auto_member_call_or_fallback_01b72b00: misc_member_call_or_fallback with other addresses.
namespace twin_01b72b00 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01b72b00(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01b72b00

// auto_member_call_or_fallback_01b73b90: misc_member_call_or_fallback with other addresses.
namespace twin_01b73b90 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01b73b90(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01b73b90

// auto_member_call_or_fallback_01bc9bc0: misc_member_call_or_fallback with other addresses.
namespace twin_01bc9bc0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01bc9bc0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01bc9bc0

// auto_member_call_or_fallback_01bce550: misc_member_call_or_fallback with other addresses.
namespace twin_01bce550 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01bce550(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01bce550

// auto_member_call_or_fallback_01beedf0: misc_member_call_or_fallback with other addresses.
namespace twin_01beedf0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01beedf0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01beedf0

// auto_member_call_or_fallback_01bf0340: misc_member_call_or_fallback with other addresses.
namespace twin_01bf0340 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01bf0340(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01bf0340

// auto_member_call_or_fallback_01bf0c80: misc_member_call_or_fallback with other addresses.
namespace twin_01bf0c80 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01bf0c80(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01bf0c80

// auto_member_call_or_fallback_01c23950: misc_member_call_or_fallback with other addresses.
namespace twin_01c23950 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01c23950(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01c23950

// auto_member_call_or_fallback_01c2a840: misc_member_call_or_fallback with other addresses.
namespace twin_01c2a840 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01c2a840(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01c2a840

// auto_member_call_or_fallback_01c2aac0: misc_member_call_or_fallback with other addresses.
namespace twin_01c2aac0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01c2aac0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01c2aac0

// auto_member_call_or_fallback_01c3c500: misc_member_call_or_fallback with other addresses.
namespace twin_01c3c500 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01c3c500(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01c3c500

// auto_member_call_or_fallback_01c402c0: misc_member_call_or_fallback with other addresses.
namespace twin_01c402c0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01c402c0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01c402c0

// auto_member_call_or_fallback_01c62740: misc_member_call_or_fallback with other addresses.
namespace twin_01c62740 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01c62740(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01c62740

// auto_member_call_or_fallback_01c67370: misc_member_call_or_fallback with other addresses.
namespace twin_01c67370 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01c67370(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01c67370

// auto_member_call_or_fallback_01c6cfd0: misc_member_call_or_fallback with other addresses.
namespace twin_01c6cfd0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01c6cfd0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01c6cfd0

// auto_member_call_or_fallback_01c7c850: misc_member_call_or_fallback with other addresses.
namespace twin_01c7c850 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01c7c850(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01c7c850

// auto_member_call_or_fallback_01ca13d0: misc_member_call_or_fallback with other addresses.
namespace twin_01ca13d0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01ca13d0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01ca13d0

// auto_member_call_or_fallback_01ca2b90: misc_member_call_or_fallback with other addresses.
namespace twin_01ca2b90 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01ca2b90(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01ca2b90

// auto_member_call_or_fallback_01cac6f0: misc_member_call_or_fallback with other addresses.
namespace twin_01cac6f0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01cac6f0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01cac6f0

// auto_member_call_or_fallback_01cb6010: misc_member_call_or_fallback with other addresses.
namespace twin_01cb6010 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01cb6010(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01cb6010

// auto_member_call_or_fallback_01ce3140: misc_member_call_or_fallback with other addresses.
namespace twin_01ce3140 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01ce3140(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01ce3140

// auto_member_call_or_fallback_01d12000: misc_member_call_or_fallback with other addresses.
namespace twin_01d12000 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01d12000(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01d12000

// auto_member_call_or_fallback_01d75e60: misc_member_call_or_fallback with other addresses.
namespace twin_01d75e60 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01d75e60(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01d75e60

// auto_member_call_or_fallback_01d91760: misc_member_call_or_fallback with other addresses.
namespace twin_01d91760 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01d91760(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01d91760

// auto_member_call_or_fallback_01d96720: misc_member_call_or_fallback with other addresses.
namespace twin_01d96720 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01d96720(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01d96720

// auto_member_call_or_fallback_01da4340: misc_member_call_or_fallback with other addresses.
namespace twin_01da4340 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01da4340(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01da4340

// auto_member_call_or_fallback_01db1c70: misc_member_call_or_fallback with other addresses.
namespace twin_01db1c70 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01db1c70(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01db1c70

// auto_member_call_or_fallback_01de6e30: misc_member_call_or_fallback with other addresses.
namespace twin_01de6e30 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01de6e30(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01de6e30

// auto_member_call_or_fallback_01df37a0: misc_member_call_or_fallback with other addresses.
namespace twin_01df37a0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01df37a0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01df37a0

// auto_member_call_or_fallback_01e00090: misc_member_call_or_fallback with other addresses.
namespace twin_01e00090 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01e00090(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01e00090

// auto_member_call_or_fallback_01e04ef0: misc_member_call_or_fallback with other addresses.
namespace twin_01e04ef0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01e04ef0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01e04ef0

// auto_member_call_or_fallback_01e6af50: misc_member_call_or_fallback with other addresses.
namespace twin_01e6af50 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01e6af50(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01e6af50

// auto_member_call_or_fallback_01ead050: misc_member_call_or_fallback with other addresses.
namespace twin_01ead050 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01ead050(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01ead050

// auto_member_call_or_fallback_01ec1b30: misc_member_call_or_fallback with other addresses.
namespace twin_01ec1b30 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_01ec1b30(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_01ec1b30

// auto_member_call_or_fallback_020be860: misc_member_call_or_fallback with other addresses.
namespace twin_020be860 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_020be860(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_020be860

// auto_member_call_or_fallback_020cd2b0: misc_member_call_or_fallback with other addresses.
namespace twin_020cd2b0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_020cd2b0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_020cd2b0

// auto_member_call_or_fallback_020d76a0: misc_member_call_or_fallback with other addresses.
namespace twin_020d76a0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_020d76a0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_020d76a0

// auto_member_call_or_fallback_020dae10: misc_member_call_or_fallback with other addresses.
namespace twin_020dae10 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_020dae10(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_020dae10

// auto_member_call_or_fallback_020f7610: misc_member_call_or_fallback with other addresses.
namespace twin_020f7610 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_020f7610(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_020f7610

// auto_member_call_or_fallback_020fdda0: misc_member_call_or_fallback with other addresses.
namespace twin_020fdda0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_020fdda0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_020fdda0

// auto_member_call_or_fallback_02104d80: misc_member_call_or_fallback with other addresses.
namespace twin_02104d80 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_02104d80(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_02104d80

// auto_member_call_or_fallback_021553c0: misc_member_call_or_fallback with other addresses.
namespace twin_021553c0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_021553c0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_021553c0

// auto_member_call_or_fallback_021a46a0: misc_member_call_or_fallback with other addresses.
namespace twin_021a46a0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_021a46a0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_021a46a0

// auto_member_call_or_fallback_021aec60: misc_member_call_or_fallback with other addresses.
namespace twin_021aec60 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_021aec60(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_021aec60

// auto_member_call_or_fallback_0221c890: misc_member_call_or_fallback with other addresses.
namespace twin_0221c890 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_0221c890(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_0221c890

// auto_member_call_or_fallback_0222a4b0: misc_member_call_or_fallback with other addresses.
namespace twin_0222a4b0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_0222a4b0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_0222a4b0

// auto_member_call_or_fallback_022359c0: misc_member_call_or_fallback with other addresses.
namespace twin_022359c0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_022359c0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_022359c0

// auto_member_call_or_fallback_0224e270: misc_member_call_or_fallback with other addresses.
namespace twin_0224e270 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_0224e270(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_0224e270

// auto_member_call_or_fallback_02253390: misc_member_call_or_fallback with other addresses.
namespace twin_02253390 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_02253390(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_02253390

// auto_member_call_or_fallback_02259d70: misc_member_call_or_fallback with other addresses.
namespace twin_02259d70 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_02259d70(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_02259d70

// auto_member_call_or_fallback_02262b00: misc_member_call_or_fallback with other addresses.
namespace twin_02262b00 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_02262b00(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_02262b00

// auto_member_call_or_fallback_022710b0: misc_member_call_or_fallback with other addresses.
namespace twin_022710b0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_022710b0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_022710b0

// auto_member_call_or_fallback_0227aa90: misc_member_call_or_fallback with other addresses.
namespace twin_0227aa90 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_0227aa90(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_0227aa90

// auto_member_call_or_fallback_022d52b0: misc_member_call_or_fallback with other addresses.
namespace twin_022d52b0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_022d52b0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_022d52b0

// auto_member_call_or_fallback_022ebab0: misc_member_call_or_fallback with other addresses.
namespace twin_022ebab0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_022ebab0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_022ebab0

// auto_member_call_or_fallback_02306c90: misc_member_call_or_fallback with other addresses.
namespace twin_02306c90 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_02306c90(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_02306c90

// auto_member_call_or_fallback_02306d60: misc_member_call_or_fallback with other addresses.
namespace twin_02306d60 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_02306d60(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_02306d60

// auto_member_call_or_fallback_02348da0: misc_member_call_or_fallback with other addresses.
namespace twin_02348da0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_02348da0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_02348da0

// auto_member_call_or_fallback_0234ea80: misc_member_call_or_fallback with other addresses.
namespace twin_0234ea80 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_0234ea80(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_0234ea80

// auto_member_call_or_fallback_02352f00: misc_member_call_or_fallback with other addresses.
namespace twin_02352f00 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_02352f00(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_02352f00

// auto_member_call_or_fallback_023d0d60: misc_member_call_or_fallback with other addresses.
namespace twin_023d0d60 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_023d0d60(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_023d0d60

// auto_member_call_or_fallback_023e2320: misc_member_call_or_fallback with other addresses.
namespace twin_023e2320 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_023e2320(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_023e2320

// auto_member_call_or_fallback_02422be0: misc_member_call_or_fallback with other addresses.
namespace twin_02422be0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_02422be0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_02422be0

// auto_member_call_or_fallback_0243a100: misc_member_call_or_fallback with other addresses.
namespace twin_0243a100 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_0243a100(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_0243a100

// auto_member_call_or_fallback_024474e0: misc_member_call_or_fallback with other addresses.
namespace twin_024474e0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_024474e0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_024474e0

// auto_member_call_or_fallback_0244f400: misc_member_call_or_fallback with other addresses.
namespace twin_0244f400 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04dc0016, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_0244f400(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_0244f400

// auto_member_call_or_fallback_02d6d1b0: misc_member_call_or_fallback with other addresses.
namespace twin_02d6d1b0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04cb6ef4, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_02d6d1b0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_02d6d1b0

// auto_member_call_or_fallback_02d9e160: misc_member_call_or_fallback with other addresses.
namespace twin_02d9e160 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04cbc988, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_02d9e160(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_02d9e160

// auto_member_call_or_fallback_02dadb50: misc_member_call_or_fallback with other addresses.
namespace twin_02dadb50 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04cc03a4, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_02dadb50(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_02dadb50

// auto_member_call_or_fallback_02db9740: misc_member_call_or_fallback with other addresses.
namespace twin_02db9740 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04cc3298, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_02db9740(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_02db9740

// auto_member_call_or_fallback_02dbc8c0: misc_member_call_or_fallback with other addresses.
namespace twin_02dbc8c0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04cc41ce, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_02dbc8c0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_02dbc8c0

// auto_member_call_or_fallback_02dcad90: misc_member_call_or_fallback with other addresses.
namespace twin_02dcad90 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04cc6262, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_02dcad90(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_02dcad90

// auto_member_call_or_fallback_02dcb5b0: misc_member_call_or_fallback with other addresses.
namespace twin_02dcb5b0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04cc66e4, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_02dcb5b0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_02dcb5b0

// auto_member_call_or_fallback_02dcc870: misc_member_call_or_fallback with other addresses.
namespace twin_02dcc870 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04cc697c, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_02dcc870(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_02dcc870

// auto_member_call_or_fallback_02dd04e0: misc_member_call_or_fallback with other addresses.
namespace twin_02dd04e0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04cc858a, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_02dd04e0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_02dd04e0

// auto_member_call_or_fallback_02ddb5b0: misc_member_call_or_fallback with other addresses.
namespace twin_02ddb5b0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04ccd04a, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_02ddb5b0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_02ddb5b0

// auto_member_call_or_fallback_02dddee0: misc_member_call_or_fallback with other addresses.
namespace twin_02dddee0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04ccdb88, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_02dddee0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_02dddee0

// auto_member_call_or_fallback_02de1c90: misc_member_call_or_fallback with other addresses.
namespace twin_02de1c90 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04ccf492, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_02de1c90(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_02de1c90

// auto_member_call_or_fallback_02de39a0: misc_member_call_or_fallback with other addresses.
namespace twin_02de39a0 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04cd02aa, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_02de39a0(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_02de39a0

// auto_member_call_or_fallback_02de3c70: misc_member_call_or_fallback with other addresses.
namespace twin_02de3c70 {

// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.


namespace {

/** A member-function thunk with the adjustment at 0x18, the target at 0x30, the object at 0x38 and a 32-bit argument at 0x40. */
struct MemberFallbackThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint8_t unknown_0x20[0x10];
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit; zero selects the fallback. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberFallbackThunk, adjustment) == 0x18);
static_assert(offsetof(MemberFallbackThunk, target) == 0x30);
static_assert(offsetof(MemberFallbackThunk, object) == 0x38);
static_assert(offsetof(MemberFallbackThunk, argument) == 0x40);

/** The signature shared by the fallback slot and the targets: the object, a second value and an argument. */
using FallbackTarget = uint64_t (*)(void *object, uint64_t second, uint64_t argument);

/** A vtable whose slot at 0x80 handles the fallback. */
struct FallbackVtable {
    uint8_t unknown_0x0000[0x80];
    FallbackTarget fallback_slot_0x0080;   /**< Called with the fallback object, the tag and the argument. */
};
static_assert(offsetof(FallbackVtable, fallback_slot_0x0080) == 0x80);

/** An object whose vtable pointer leads to the fallback slot. */
struct FallbackObject {
    const FallbackVtable *vtable;   /**< The object's vtable. */
};

/** The tag the fallback receives in place of the second argument: the address of a constant in the image. */
RT_GLOBAL(0x04cd02aa, fallback_tag, uint8_t);

}  // namespace

/**
 *
 * Tail calls the thunk's target on its adjusted object, or without a target calls the fallback slot.
 *
 * The fallback slot gets the object, the fixed tag and the 64-bit argument. A virtual target is read from
 * the adjusted object's vtable first, and the fallback object is passed as the second argument otherwise.
 */
extern "C" uint64_t bb_auto_member_call_or_fallback_02de3c70(MemberFallbackThunk *thunk, FallbackObject *fallback,
                                                    uint64_t argument)
{
    const uint64_t target = thunk->target;
    if (target == 0) {
        return fallback->vtable->fallback_slot_0x0080(fallback, reinterpret_cast<uint64_t>(fallback_tag.address()),
                                                      argument);
    }
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<FallbackTarget>(callee)(reinterpret_cast<void *>(self),
                                                    reinterpret_cast<uint64_t>(fallback), thunk->argument);
}

}  // namespace twin_02de3c70
