// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: tail-calls a member-function thunk's target, or without a target calls the object's fallback slot.
#include <cstddef>
#include <cstdint>

#include "member_thunk.h"
#include "runtime/original.h"

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
extern "C" uint64_t bb_misc_member_call_or_fallback(MemberFallbackThunk *thunk, FallbackObject *fallback,
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
