// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_tail_call_offset_member_thunk, in game/misc/tail_call_offset_member_thunk.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstdint>
#include "../misc/offset_member_thunk.h"
#include "../misc/thunk_second_argument.h"

// auto_tail_call_offset_member_thunk_01622270: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01622270 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01622270(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01622270

// auto_tail_call_offset_member_thunk_0162a380: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_0162a380 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0162a380(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_0162a380

// auto_tail_call_offset_member_thunk_01633fe0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01633fe0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01633fe0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01633fe0

// auto_tail_call_offset_member_thunk_01636f80: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01636f80 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01636f80(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01636f80

// auto_tail_call_offset_member_thunk_0163c7c0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_0163c7c0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0163c7c0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_0163c7c0

// auto_tail_call_offset_member_thunk_0164eff0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_0164eff0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0164eff0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_0164eff0

// auto_tail_call_offset_member_thunk_01699270: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01699270 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01699270(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01699270

// auto_tail_call_offset_member_thunk_0169ebd0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_0169ebd0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0169ebd0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_0169ebd0

// auto_tail_call_offset_member_thunk_016a4b80: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_016a4b80 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_016a4b80(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_016a4b80

// auto_tail_call_offset_member_thunk_016a4cb0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_016a4cb0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_016a4cb0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_016a4cb0

// auto_tail_call_offset_member_thunk_016aa9b0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_016aa9b0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_016aa9b0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_016aa9b0

// auto_tail_call_offset_member_thunk_016af900: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_016af900 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_016af900(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_016af900

// auto_tail_call_offset_member_thunk_016baac0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_016baac0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_016baac0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_016baac0

// auto_tail_call_offset_member_thunk_016cfba0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_016cfba0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_016cfba0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_016cfba0

// auto_tail_call_offset_member_thunk_016d38e0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_016d38e0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_016d38e0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_016d38e0

// auto_tail_call_offset_member_thunk_016d54d0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_016d54d0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_016d54d0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_016d54d0

// auto_tail_call_offset_member_thunk_016d9200: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_016d9200 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_016d9200(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_016d9200

// auto_tail_call_offset_member_thunk_016df9c0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_016df9c0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_016df9c0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_016df9c0

// auto_tail_call_offset_member_thunk_016e5d20: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_016e5d20 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_016e5d20(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_016e5d20

// auto_tail_call_offset_member_thunk_016edeb0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_016edeb0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_016edeb0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_016edeb0

// auto_tail_call_offset_member_thunk_0170f8d0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_0170f8d0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0170f8d0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_0170f8d0

// auto_tail_call_offset_member_thunk_017a78c0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_017a78c0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_017a78c0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_017a78c0

// auto_tail_call_offset_member_thunk_017c3a10: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_017c3a10 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_017c3a10(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_017c3a10

// auto_tail_call_offset_member_thunk_017d1650: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_017d1650 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_017d1650(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_017d1650

// auto_tail_call_offset_member_thunk_018295c0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_018295c0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_018295c0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_018295c0

// auto_tail_call_offset_member_thunk_0182fc20: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_0182fc20 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0182fc20(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_0182fc20

// auto_tail_call_offset_member_thunk_01830bc0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01830bc0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01830bc0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01830bc0

// auto_tail_call_offset_member_thunk_018429c0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_018429c0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_018429c0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_018429c0

// auto_tail_call_offset_member_thunk_0184f0a0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_0184f0a0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0184f0a0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_0184f0a0

// auto_tail_call_offset_member_thunk_018501b0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_018501b0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_018501b0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_018501b0

// auto_tail_call_offset_member_thunk_018517d0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_018517d0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_018517d0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_018517d0

// auto_tail_call_offset_member_thunk_01852380: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01852380 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01852380(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01852380

// auto_tail_call_offset_member_thunk_01852e80: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01852e80 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01852e80(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01852e80

// auto_tail_call_offset_member_thunk_01853a80: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01853a80 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01853a80(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01853a80

// auto_tail_call_offset_member_thunk_01854510: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01854510 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01854510(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01854510

// auto_tail_call_offset_member_thunk_01855110: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01855110 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01855110(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01855110

// auto_tail_call_offset_member_thunk_01863750: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01863750 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01863750(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01863750

// auto_tail_call_offset_member_thunk_018685d0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_018685d0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_018685d0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_018685d0

// auto_tail_call_offset_member_thunk_0186b1f0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_0186b1f0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0186b1f0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_0186b1f0

// auto_tail_call_offset_member_thunk_01872930: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01872930 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01872930(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01872930

// auto_tail_call_offset_member_thunk_01877090: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01877090 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01877090(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01877090

// auto_tail_call_offset_member_thunk_01878720: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01878720 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01878720(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01878720

// auto_tail_call_offset_member_thunk_01879840: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01879840 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01879840(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01879840

// auto_tail_call_offset_member_thunk_0187f970: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_0187f970 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0187f970(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_0187f970

// auto_tail_call_offset_member_thunk_0188e260: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_0188e260 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0188e260(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_0188e260

// auto_tail_call_offset_member_thunk_018a0230: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_018a0230 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_018a0230(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_018a0230

// auto_tail_call_offset_member_thunk_018a3fe0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_018a3fe0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_018a3fe0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_018a3fe0

// auto_tail_call_offset_member_thunk_018aa4d0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_018aa4d0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_018aa4d0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_018aa4d0

// auto_tail_call_offset_member_thunk_018b2330: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_018b2330 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_018b2330(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_018b2330

// auto_tail_call_offset_member_thunk_018c11e0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_018c11e0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_018c11e0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_018c11e0

// auto_tail_call_offset_member_thunk_018c8240: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_018c8240 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_018c8240(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_018c8240

// auto_tail_call_offset_member_thunk_018cc160: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_018cc160 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_018cc160(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_018cc160

// auto_tail_call_offset_member_thunk_018d7020: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_018d7020 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_018d7020(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_018d7020

// auto_tail_call_offset_member_thunk_018e4bd0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_018e4bd0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_018e4bd0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_018e4bd0

// auto_tail_call_offset_member_thunk_0190ce10: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_0190ce10 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0190ce10(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_0190ce10

// auto_tail_call_offset_member_thunk_0190df10: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_0190df10 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0190df10(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_0190df10

// auto_tail_call_offset_member_thunk_019188e0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_019188e0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_019188e0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_019188e0

// auto_tail_call_offset_member_thunk_0192a250: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_0192a250 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0192a250(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_0192a250

// auto_tail_call_offset_member_thunk_01937180: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01937180 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01937180(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01937180

// auto_tail_call_offset_member_thunk_01942c30: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01942c30 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01942c30(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01942c30

// auto_tail_call_offset_member_thunk_01950380: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01950380 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01950380(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01950380

// auto_tail_call_offset_member_thunk_019587e0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_019587e0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_019587e0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_019587e0

// auto_tail_call_offset_member_thunk_019630b0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_019630b0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_019630b0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_019630b0

// auto_tail_call_offset_member_thunk_019869f0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_019869f0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_019869f0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_019869f0

// auto_tail_call_offset_member_thunk_01998de0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01998de0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01998de0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01998de0

// auto_tail_call_offset_member_thunk_0199d880: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_0199d880 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0199d880(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_0199d880

// auto_tail_call_offset_member_thunk_019a03e0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_019a03e0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_019a03e0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_019a03e0

// auto_tail_call_offset_member_thunk_019b7160: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_019b7160 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_019b7160(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_019b7160

// auto_tail_call_offset_member_thunk_019c1490: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_019c1490 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_019c1490(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_019c1490

// auto_tail_call_offset_member_thunk_019eba70: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_019eba70 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_019eba70(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_019eba70

// auto_tail_call_offset_member_thunk_01abe7c0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01abe7c0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01abe7c0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01abe7c0

// auto_tail_call_offset_member_thunk_01addc80: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01addc80 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01addc80(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01addc80

// auto_tail_call_offset_member_thunk_01b55f40: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01b55f40 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01b55f40(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01b55f40

// auto_tail_call_offset_member_thunk_01b6edd0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01b6edd0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01b6edd0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01b6edd0

// auto_tail_call_offset_member_thunk_01b729a0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01b729a0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01b729a0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01b729a0

// auto_tail_call_offset_member_thunk_01b73a90: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01b73a90 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01b73a90(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01b73a90

// auto_tail_call_offset_member_thunk_01b91990: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01b91990 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01b91990(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01b91990

// auto_tail_call_offset_member_thunk_01b9b9b0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01b9b9b0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01b9b9b0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01b9b9b0

// auto_tail_call_offset_member_thunk_01b9c5e0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01b9c5e0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01b9c5e0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01b9c5e0

// auto_tail_call_offset_member_thunk_01b9d230: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01b9d230 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01b9d230(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01b9d230

// auto_tail_call_offset_member_thunk_01b9de90: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01b9de90 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01b9de90(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01b9de90

// auto_tail_call_offset_member_thunk_01b9eae0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01b9eae0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01b9eae0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01b9eae0

// auto_tail_call_offset_member_thunk_01b9f6d0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01b9f6d0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01b9f6d0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01b9f6d0

// auto_tail_call_offset_member_thunk_01ba0700: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01ba0700 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01ba0700(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01ba0700

// auto_tail_call_offset_member_thunk_01ba1390: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01ba1390 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01ba1390(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01ba1390

// auto_tail_call_offset_member_thunk_01ba2000: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01ba2000 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01ba2000(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01ba2000

// auto_tail_call_offset_member_thunk_01ba2cc0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01ba2cc0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01ba2cc0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01ba2cc0

// auto_tail_call_offset_member_thunk_01ba3980: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01ba3980 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01ba3980(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01ba3980

// auto_tail_call_offset_member_thunk_01ba4520: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01ba4520 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01ba4520(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01ba4520

// auto_tail_call_offset_member_thunk_01ba50b0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01ba50b0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01ba50b0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01ba50b0

// auto_tail_call_offset_member_thunk_01ba5f90: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01ba5f90 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01ba5f90(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01ba5f90

// auto_tail_call_offset_member_thunk_01ba6e20: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01ba6e20 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01ba6e20(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01ba6e20

// auto_tail_call_offset_member_thunk_01ba7aa0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01ba7aa0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01ba7aa0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01ba7aa0

// auto_tail_call_offset_member_thunk_01ba86e0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01ba86e0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01ba86e0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01ba86e0

// auto_tail_call_offset_member_thunk_01ba9260: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01ba9260 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01ba9260(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01ba9260

// auto_tail_call_offset_member_thunk_01ba9f10: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01ba9f10 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01ba9f10(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01ba9f10

// auto_tail_call_offset_member_thunk_01baab10: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01baab10 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01baab10(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01baab10

// auto_tail_call_offset_member_thunk_01bab730: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01bab730 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01bab730(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01bab730

// auto_tail_call_offset_member_thunk_01bac3c0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01bac3c0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01bac3c0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01bac3c0

// auto_tail_call_offset_member_thunk_01bacf70: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01bacf70 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01bacf70(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01bacf70

// auto_tail_call_offset_member_thunk_01bade50: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01bade50 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01bade50(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01bade50

// auto_tail_call_offset_member_thunk_01baeb00: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01baeb00 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01baeb00(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01baeb00

// auto_tail_call_offset_member_thunk_01baf9e0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01baf9e0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01baf9e0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01baf9e0

// auto_tail_call_offset_member_thunk_01bb04d0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01bb04d0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01bb04d0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01bb04d0

// auto_tail_call_offset_member_thunk_01bb1120: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01bb1120 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01bb1120(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01bb1120

// auto_tail_call_offset_member_thunk_01bb1e90: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01bb1e90 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01bb1e90(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01bb1e90

// auto_tail_call_offset_member_thunk_01bb2d10: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01bb2d10 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01bb2d10(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01bb2d10

// auto_tail_call_offset_member_thunk_01bb3870: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01bb3870 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01bb3870(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01bb3870

// auto_tail_call_offset_member_thunk_01bb4440: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01bb4440 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01bb4440(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01bb4440

// auto_tail_call_offset_member_thunk_01bb5350: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01bb5350 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01bb5350(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01bb5350

// auto_tail_call_offset_member_thunk_01bb6100: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01bb6100 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01bb6100(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01bb6100

// auto_tail_call_offset_member_thunk_01bb6d60: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01bb6d60 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01bb6d60(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01bb6d60

// auto_tail_call_offset_member_thunk_01bb80c0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01bb80c0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01bb80c0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01bb80c0

// auto_tail_call_offset_member_thunk_01bb8d30: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01bb8d30 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01bb8d30(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01bb8d30

// auto_tail_call_offset_member_thunk_01bea2c0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01bea2c0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01bea2c0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01bea2c0

// auto_tail_call_offset_member_thunk_01bf6fd0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01bf6fd0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01bf6fd0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01bf6fd0

// auto_tail_call_offset_member_thunk_01bfc220: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01bfc220 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01bfc220(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01bfc220

// auto_tail_call_offset_member_thunk_01c0bae0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01c0bae0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01c0bae0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01c0bae0

// auto_tail_call_offset_member_thunk_01c14e90: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01c14e90 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01c14e90(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01c14e90

// auto_tail_call_offset_member_thunk_01c3c400: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01c3c400 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01c3c400(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01c3c400

// auto_tail_call_offset_member_thunk_01c3e220: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01c3e220 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01c3e220(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01c3e220

// auto_tail_call_offset_member_thunk_01c401c0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01c401c0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01c401c0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01c401c0

// auto_tail_call_offset_member_thunk_01c81e70: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01c81e70 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01c81e70(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01c81e70

// auto_tail_call_offset_member_thunk_01c88ef0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01c88ef0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01c88ef0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01c88ef0

// auto_tail_call_offset_member_thunk_01c8b800: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01c8b800 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01c8b800(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01c8b800

// auto_tail_call_offset_member_thunk_01cd7820: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01cd7820 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01cd7820(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01cd7820

// auto_tail_call_offset_member_thunk_01cde950: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01cde950 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01cde950(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01cde950

// auto_tail_call_offset_member_thunk_01ce30a0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01ce30a0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01ce30a0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01ce30a0

// auto_tail_call_offset_member_thunk_01ce8e50: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01ce8e50 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01ce8e50(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01ce8e50

// auto_tail_call_offset_member_thunk_01ceb310: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01ceb310 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01ceb310(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01ceb310

// auto_tail_call_offset_member_thunk_01d079d0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01d079d0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01d079d0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01d079d0

// auto_tail_call_offset_member_thunk_01d0b0f0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01d0b0f0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01d0b0f0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01d0b0f0

// auto_tail_call_offset_member_thunk_01d11f00: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01d11f00 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01d11f00(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01d11f00

// auto_tail_call_offset_member_thunk_01d25a30: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01d25a30 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01d25a30(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01d25a30

// auto_tail_call_offset_member_thunk_01d61f70: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01d61f70 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01d61f70(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01d61f70

// auto_tail_call_offset_member_thunk_01e0f020: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01e0f020 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01e0f020(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01e0f020

// auto_tail_call_offset_member_thunk_01e109e0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01e109e0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01e109e0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01e109e0

// auto_tail_call_offset_member_thunk_01e1c950: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01e1c950 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01e1c950(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01e1c950

// auto_tail_call_offset_member_thunk_01e28880: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01e28880 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01e28880(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01e28880

// auto_tail_call_offset_member_thunk_01e3e280: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01e3e280 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01e3e280(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01e3e280

// auto_tail_call_offset_member_thunk_01e47750: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01e47750 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01e47750(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01e47750

// auto_tail_call_offset_member_thunk_01e50060: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01e50060 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01e50060(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01e50060

// auto_tail_call_offset_member_thunk_01e58870: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01e58870 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01e58870(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01e58870

// auto_tail_call_offset_member_thunk_01e5d0b0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01e5d0b0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01e5d0b0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01e5d0b0

// auto_tail_call_offset_member_thunk_01e773a0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01e773a0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01e773a0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01e773a0

// auto_tail_call_offset_member_thunk_01e842f0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01e842f0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01e842f0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01e842f0

// auto_tail_call_offset_member_thunk_01e8ae10: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01e8ae10 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01e8ae10(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01e8ae10

// auto_tail_call_offset_member_thunk_01e8ebb0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01e8ebb0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01e8ebb0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01e8ebb0

// auto_tail_call_offset_member_thunk_01e91770: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01e91770 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01e91770(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01e91770

// auto_tail_call_offset_member_thunk_01ec1d10: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01ec1d10 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01ec1d10(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01ec1d10

// auto_tail_call_offset_member_thunk_01ec1d70: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01ec1d70 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01ec1d70(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01ec1d70

// auto_tail_call_offset_member_thunk_01ec4540: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_01ec4540 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01ec4540(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_01ec4540

// auto_tail_call_offset_member_thunk_020b5a20: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_020b5a20 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_020b5a20(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_020b5a20

// auto_tail_call_offset_member_thunk_020b5ae0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_020b5ae0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_020b5ae0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_020b5ae0

// auto_tail_call_offset_member_thunk_020be920: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_020be920 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_020be920(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_020be920

// auto_tail_call_offset_member_thunk_020c0e20: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_020c0e20 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_020c0e20(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_020c0e20

// auto_tail_call_offset_member_thunk_020cd310: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_020cd310 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_020cd310(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_020cd310

// auto_tail_call_offset_member_thunk_020ef170: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_020ef170 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_020ef170(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_020ef170

// auto_tail_call_offset_member_thunk_020f1950: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_020f1950 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_020f1950(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_020f1950

// auto_tail_call_offset_member_thunk_021080c0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_021080c0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_021080c0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_021080c0

// auto_tail_call_offset_member_thunk_02122d10: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_02122d10 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02122d10(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_02122d10

// auto_tail_call_offset_member_thunk_0212b280: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_0212b280 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0212b280(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_0212b280

// auto_tail_call_offset_member_thunk_0214ed90: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_0214ed90 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0214ed90(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_0214ed90

// auto_tail_call_offset_member_thunk_02150b20: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_02150b20 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02150b20(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_02150b20

// auto_tail_call_offset_member_thunk_02171c90: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_02171c90 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02171c90(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_02171c90

// auto_tail_call_offset_member_thunk_0218a4c0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_0218a4c0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0218a4c0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_0218a4c0

// auto_tail_call_offset_member_thunk_0218cf90: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_0218cf90 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0218cf90(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_0218cf90

// auto_tail_call_offset_member_thunk_02198fc0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_02198fc0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02198fc0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_02198fc0

// auto_tail_call_offset_member_thunk_021a8de0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_021a8de0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_021a8de0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_021a8de0

// auto_tail_call_offset_member_thunk_021b6870: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_021b6870 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_021b6870(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_021b6870

// auto_tail_call_offset_member_thunk_021be190: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_021be190 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_021be190(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_021be190

// auto_tail_call_offset_member_thunk_021d3c50: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_021d3c50 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_021d3c50(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_021d3c50

// auto_tail_call_offset_member_thunk_021f5f10: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_021f5f10 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_021f5f10(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_021f5f10

// auto_tail_call_offset_member_thunk_02217320: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_02217320 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02217320(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_02217320

// auto_tail_call_offset_member_thunk_02222120: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_02222120 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02222120(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_02222120

// auto_tail_call_offset_member_thunk_02228080: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_02228080 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02228080(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_02228080

// auto_tail_call_offset_member_thunk_02233190: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_02233190 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02233190(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_02233190

// auto_tail_call_offset_member_thunk_0223b380: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_0223b380 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0223b380(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_0223b380

// auto_tail_call_offset_member_thunk_022481b0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_022481b0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_022481b0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_022481b0

// auto_tail_call_offset_member_thunk_0224a300: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_0224a300 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0224a300(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_0224a300

// auto_tail_call_offset_member_thunk_022667c0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_022667c0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_022667c0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_022667c0

// auto_tail_call_offset_member_thunk_02268b80: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_02268b80 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02268b80(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_02268b80

// auto_tail_call_offset_member_thunk_02273760: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_02273760 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02273760(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_02273760

// auto_tail_call_offset_member_thunk_02274910: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_02274910 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02274910(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_02274910

// auto_tail_call_offset_member_thunk_0227aaf0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_0227aaf0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0227aaf0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_0227aaf0

// auto_tail_call_offset_member_thunk_022a77b0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_022a77b0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_022a77b0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_022a77b0

// auto_tail_call_offset_member_thunk_022d5310: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_022d5310 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_022d5310(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_022d5310

// auto_tail_call_offset_member_thunk_022dfad0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_022dfad0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_022dfad0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_022dfad0

// auto_tail_call_offset_member_thunk_022e16e0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_022e16e0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_022e16e0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_022e16e0

// auto_tail_call_offset_member_thunk_022e4620: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_022e4620 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_022e4620(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_022e4620

// auto_tail_call_offset_member_thunk_022f7700: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_022f7700 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_022f7700(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_022f7700

// auto_tail_call_offset_member_thunk_02363b60: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_02363b60 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02363b60(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_02363b60

// auto_tail_call_offset_member_thunk_0236f090: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_0236f090 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0236f090(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_0236f090

// auto_tail_call_offset_member_thunk_0237d100: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_0237d100 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0237d100(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_0237d100

// auto_tail_call_offset_member_thunk_0237d2d0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_0237d2d0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0237d2d0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_0237d2d0

// auto_tail_call_offset_member_thunk_02384460: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_02384460 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02384460(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_02384460

// auto_tail_call_offset_member_thunk_02385800: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_02385800 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02385800(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_02385800

// auto_tail_call_offset_member_thunk_0238ff30: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_0238ff30 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0238ff30(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_0238ff30

// auto_tail_call_offset_member_thunk_0239f5d0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_0239f5d0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0239f5d0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_0239f5d0

// auto_tail_call_offset_member_thunk_023a83f0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_023a83f0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, passing a second record's value.


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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_023a83f0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_023a83f0
