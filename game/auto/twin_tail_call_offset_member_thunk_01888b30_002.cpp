// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_tail_call_offset_member_thunk, in game/misc/tail_call_offset_member_thunk.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstdint>
#include "../misc/offset_member_thunk.h"
#include "../misc/thunk_second_argument.h"

// auto_tail_call_offset_member_thunk_023b5ca0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_023b5ca0 {

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_023b5ca0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_023b5ca0

// auto_tail_call_offset_member_thunk_023b6ab0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_023b6ab0 {

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_023b6ab0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_023b6ab0

// auto_tail_call_offset_member_thunk_023cc090: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_023cc090 {

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_023cc090(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_023cc090

// auto_tail_call_offset_member_thunk_023de000: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_023de000 {

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_023de000(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_023de000

// auto_tail_call_offset_member_thunk_023e7500: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_023e7500 {

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_023e7500(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_023e7500

// auto_tail_call_offset_member_thunk_023f9f00: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_023f9f00 {

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_023f9f00(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_023f9f00

// auto_tail_call_offset_member_thunk_024132c0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_024132c0 {

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_024132c0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_024132c0

// auto_tail_call_offset_member_thunk_02425ea0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_02425ea0 {

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02425ea0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_02425ea0

// auto_tail_call_offset_member_thunk_0243a000: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_0243a000 {

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0243a000(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_0243a000

// auto_tail_call_offset_member_thunk_024473e0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_024473e0 {

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_024473e0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_024473e0

// auto_tail_call_offset_member_thunk_0244f2b0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_0244f2b0 {

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0244f2b0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_0244f2b0

// auto_tail_call_offset_member_thunk_024619f0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_024619f0 {

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_024619f0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_024619f0

// auto_tail_call_offset_member_thunk_02d67760: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_02d67760 {

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02d67760(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_02d67760

// auto_tail_call_offset_member_thunk_02d6af00: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_02d6af00 {

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02d6af00(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_02d6af00

// auto_tail_call_offset_member_thunk_02d8f080: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_02d8f080 {

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02d8f080(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_02d8f080

// auto_tail_call_offset_member_thunk_02d94ca0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_02d94ca0 {

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02d94ca0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_02d94ca0

// auto_tail_call_offset_member_thunk_02d9d7b0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_02d9d7b0 {

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02d9d7b0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_02d9d7b0

// auto_tail_call_offset_member_thunk_02dab540: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_02dab540 {

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02dab540(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_02dab540

// auto_tail_call_offset_member_thunk_02dad570: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_02dad570 {

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02dad570(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_02dad570

// auto_tail_call_offset_member_thunk_02db8190: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_02db8190 {

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02db8190(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_02db8190

// auto_tail_call_offset_member_thunk_02dbb970: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_02dbb970 {

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02dbb970(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_02dbb970

// auto_tail_call_offset_member_thunk_02dbc5e0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_02dbc5e0 {

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02dbc5e0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_02dbc5e0

// auto_tail_call_offset_member_thunk_02dca840: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_02dca840 {

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02dca840(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_02dca840

// auto_tail_call_offset_member_thunk_02dd0620: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_02dd0620 {

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02dd0620(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_02dd0620

// auto_tail_call_offset_member_thunk_02dd5940: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_02dd5940 {

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02dd5940(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_02dd5940

// auto_tail_call_offset_member_thunk_02dd7480: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_02dd7480 {

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02dd7480(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_02dd7480

// auto_tail_call_offset_member_thunk_02ddb1b0: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_02ddb1b0 {

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02ddb1b0(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_02ddb1b0

// auto_tail_call_offset_member_thunk_02ddb480: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_02ddb480 {

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02ddb480(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_02ddb480

// auto_tail_call_offset_member_thunk_02dddd90: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_02dddd90 {

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02dddd90(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_02dddd90

// auto_tail_call_offset_member_thunk_02de1b90: misc_tail_call_offset_member_thunk with other addresses.
namespace twin_02de1b90 {

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02de1b90(misc::OffsetMemberThunk *thunk,
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

}  // namespace twin_02de1b90
