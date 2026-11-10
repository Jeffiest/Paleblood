// SPDX-License-Identifier: GPL-2.0-or-later
// A member-function pointer thunk: calls its target on the object adjusted by the thunk's offset.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/** Low bit of the target word: when set, the target is a virtual slot offset plus this bit. */
constexpr uint64_t virtual_target_bit = 1;

/**
 *
 * A member-function pointer: the object pointer at 0x10, the target at 0x18 and the offset at 0x20.
 *
 */
struct MemberThunk {
    uint8_t unknown_0x00[0x10];
    uintptr_t object;     /**< The object the member lives in, before the adjustment. */
    uint64_t target;      /**< Function address, or the virtual slot offset plus the virtual bit. */
    uint64_t adjustment;  /**< Added to the object to give the object the target is called on. */
};
static_assert(offsetof(MemberThunk, object) == 0x10 && offsetof(MemberThunk, target) == 0x18);
static_assert(offsetof(MemberThunk, adjustment) == 0x20);

/**
 *
 * Calls the thunk's target on the adjusted object and returns the target's result.
 *
 * A virtual target is read from the adjusted object's vtable at the offset the target holds, less the virtual bit.
 * The caller's second and third arguments are passed on to the target unchanged.
 */
inline uint64_t member_call(const MemberThunk *thunk, uint64_t second, uint64_t third)
{
    const uintptr_t self = thunk->object + thunk->adjustment;
    uint64_t target = thunk->target;
    if ((target & virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_target_bit));
    }
    using Target = uint64_t (*)(void *self, uint64_t second, uint64_t third);
    return reinterpret_cast<Target>(target)(reinterpret_cast<void *>(self), second, third);
}

}  // namespace misc
