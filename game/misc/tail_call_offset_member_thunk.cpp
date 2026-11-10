// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.
#include <cstdint>

#include "offset_member_thunk.h"
#include "thunk_second_argument.h"

namespace {

/** The signature shared by the targets: the adjusted object, the second argument and the 32-bit argument. */
using OffsetThunkTarget = uint64_t (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object with the record's value and returns the target's result.
 *
 * A zero target or a null object returns without a call, and the original leaves the return register alone
 * there, so this returns zero. A virtual target is read from the adjusted object's vtable first.
 */
extern "C" uint64_t bb_misc_tail_call_offset_member_thunk(misc::OffsetMemberThunk *thunk,
                                                          misc::ThunkSecondArgument *second)
{
    const uint64_t target = thunk->target_0x10;
    if (target == 0) return 0;
    if (thunk->object_0x08 == 0) return 0;
    const uintptr_t self = thunk->object_0x08 + thunk->adjustment_0x18;
    uintptr_t callee = target;
    if ((target & misc::offset_thunk_virtual_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::offset_thunk_virtual_bit));
    }
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value_0x10,
                                                       thunk->argument_0x28);
}
