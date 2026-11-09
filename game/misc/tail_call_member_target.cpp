// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.
#include <cstddef>
#include <cstdint>

#include "member_thunk.h"

namespace {

/** A member-function thunk with the target at 0x20, the object at 0x28 and a 32-bit argument at 0x40. */
struct MemberTailThunk {
    uint8_t unknown_0x00[0x18];
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit. */
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint8_t unknown_0x30[0x10];
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(MemberTailThunk, adjustment) == 0x18);
static_assert(offsetof(MemberTailThunk, target) == 0x20);
static_assert(offsetof(MemberTailThunk, object) == 0x28);
static_assert(offsetof(MemberTailThunk, argument) == 0x40);

/** The signature shared by the targets: the adjusted object, the second argument and the 32-bit argument. */
using MemberTailTarget = uint64_t (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object and returns the target's result.
 *
 * A zero target returns without a call, and the original leaves the return register alone there. A virtual
 * target is read from the adjusted object's vtable first; the second argument is passed on unchanged.
 */
extern "C" uint64_t bb_misc_tail_call_member_target(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return 0;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    return reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second,
                                                      thunk->argument);
}
