// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the instructions of misc_tail_call_offset_member_thunk, in game/misc/tail_call_offset_member_thunk.cpp, each using other addresses and constants.
// Every block below is one source text with the addresses and constants exchanged.
#include <cstddef>
#include <cstdint>
#include "../misc/offset_member_thunk.h"

// auto_tail_call_offset_member_thunk_016222d0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_016222d0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_016222d0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_016222d0

// auto_tail_call_offset_member_thunk_0162a3e0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_0162a3e0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0162a3e0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_0162a3e0

// auto_tail_call_offset_member_thunk_01634040: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01634040 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01634040(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01634040

// auto_tail_call_offset_member_thunk_01636fe0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01636fe0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01636fe0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01636fe0

// auto_tail_call_offset_member_thunk_0163c820: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_0163c820 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0163c820(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_0163c820

// auto_tail_call_offset_member_thunk_0164f050: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_0164f050 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0164f050(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_0164f050

// auto_tail_call_offset_member_thunk_016992d0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_016992d0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_016992d0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_016992d0

// auto_tail_call_offset_member_thunk_0169ec30: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_0169ec30 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0169ec30(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_0169ec30

// auto_tail_call_offset_member_thunk_016a4be0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_016a4be0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_016a4be0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_016a4be0

// auto_tail_call_offset_member_thunk_016a4d10: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_016a4d10 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_016a4d10(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_016a4d10

// auto_tail_call_offset_member_thunk_016aaa10: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_016aaa10 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_016aaa10(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_016aaa10

// auto_tail_call_offset_member_thunk_016af960: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_016af960 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_016af960(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_016af960

// auto_tail_call_offset_member_thunk_016bab20: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_016bab20 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_016bab20(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_016bab20

// auto_tail_call_offset_member_thunk_016cfc00: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_016cfc00 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_016cfc00(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_016cfc00

// auto_tail_call_offset_member_thunk_016d3940: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_016d3940 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_016d3940(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_016d3940

// auto_tail_call_offset_member_thunk_016d5530: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_016d5530 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_016d5530(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_016d5530

// auto_tail_call_offset_member_thunk_016d9260: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_016d9260 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_016d9260(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_016d9260

// auto_tail_call_offset_member_thunk_016dfa20: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_016dfa20 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_016dfa20(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_016dfa20

// auto_tail_call_offset_member_thunk_016e5d80: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_016e5d80 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_016e5d80(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_016e5d80

// auto_tail_call_offset_member_thunk_016edf10: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_016edf10 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_016edf10(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_016edf10

// auto_tail_call_offset_member_thunk_0170f930: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_0170f930 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0170f930(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_0170f930

// auto_tail_call_offset_member_thunk_017c3a70: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_017c3a70 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_017c3a70(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_017c3a70

// auto_tail_call_offset_member_thunk_017d16b0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_017d16b0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_017d16b0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_017d16b0

// auto_tail_call_offset_member_thunk_01829620: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01829620 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01829620(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01829620

// auto_tail_call_offset_member_thunk_0182fc80: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_0182fc80 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0182fc80(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_0182fc80

// auto_tail_call_offset_member_thunk_01830c20: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01830c20 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01830c20(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01830c20

// auto_tail_call_offset_member_thunk_01842a20: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01842a20 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01842a20(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01842a20

// auto_tail_call_offset_member_thunk_01850210: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01850210 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01850210(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01850210

// auto_tail_call_offset_member_thunk_01868630: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01868630 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01868630(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01868630

// auto_tail_call_offset_member_thunk_0188e2c0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_0188e2c0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0188e2c0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_0188e2c0

// auto_tail_call_offset_member_thunk_018cc1c0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_018cc1c0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_018cc1c0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_018cc1c0

// auto_tail_call_offset_member_thunk_018d7080: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_018d7080 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_018d7080(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_018d7080

// auto_tail_call_offset_member_thunk_018e4c30: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_018e4c30 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_018e4c30(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_018e4c30

// auto_tail_call_offset_member_thunk_0190ce70: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_0190ce70 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0190ce70(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_0190ce70

// auto_tail_call_offset_member_thunk_0190df70: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_0190df70 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0190df70(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_0190df70

// auto_tail_call_offset_member_thunk_01918940: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01918940 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01918940(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01918940

// auto_tail_call_offset_member_thunk_0192a2b0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_0192a2b0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0192a2b0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_0192a2b0

// auto_tail_call_offset_member_thunk_019371e0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_019371e0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_019371e0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_019371e0

// auto_tail_call_offset_member_thunk_01942c90: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01942c90 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01942c90(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01942c90

// auto_tail_call_offset_member_thunk_01986a50: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01986a50 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01986a50(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01986a50

// auto_tail_call_offset_member_thunk_019a0440: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_019a0440 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_019a0440(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_019a0440

// auto_tail_call_offset_member_thunk_019b71c0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_019b71c0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_019b71c0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_019b71c0

// auto_tail_call_offset_member_thunk_019ebad0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_019ebad0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_019ebad0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_019ebad0

// auto_tail_call_offset_member_thunk_01abe820: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01abe820 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01abe820(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01abe820

// auto_tail_call_offset_member_thunk_01addce0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01addce0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01addce0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01addce0

// auto_tail_call_offset_member_thunk_01b55fa0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01b55fa0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01b55fa0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01b55fa0

// auto_tail_call_offset_member_thunk_01b6ee30: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01b6ee30 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01b6ee30(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01b6ee30

// auto_tail_call_offset_member_thunk_01b72a00: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01b72a00 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01b72a00(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01b72a00

// auto_tail_call_offset_member_thunk_01b73af0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01b73af0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01b73af0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01b73af0

// auto_tail_call_offset_member_thunk_01b919f0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01b919f0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01b919f0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01b919f0

// auto_tail_call_offset_member_thunk_01bea320: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01bea320 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01bea320(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01bea320

// auto_tail_call_offset_member_thunk_01bf7030: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01bf7030 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01bf7030(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01bf7030

// auto_tail_call_offset_member_thunk_01bfc280: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01bfc280 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01bfc280(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01bfc280

// auto_tail_call_offset_member_thunk_01c0bb40: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01c0bb40 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01c0bb40(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01c0bb40

// auto_tail_call_offset_member_thunk_01c14ef0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01c14ef0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01c14ef0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01c14ef0

// auto_tail_call_offset_member_thunk_01c3c460: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01c3c460 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01c3c460(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01c3c460

// auto_tail_call_offset_member_thunk_01c3e280: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01c3e280 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01c3e280(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01c3e280

// auto_tail_call_offset_member_thunk_01c40220: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01c40220 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01c40220(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01c40220

// auto_tail_call_offset_member_thunk_01c81ed0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01c81ed0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01c81ed0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01c81ed0

// auto_tail_call_offset_member_thunk_01c88f50: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01c88f50 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01c88f50(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01c88f50

// auto_tail_call_offset_member_thunk_01c8b860: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01c8b860 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01c8b860(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01c8b860

// auto_tail_call_offset_member_thunk_01cd7880: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01cd7880 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01cd7880(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01cd7880

// auto_tail_call_offset_member_thunk_01ce8eb0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01ce8eb0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01ce8eb0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01ce8eb0

// auto_tail_call_offset_member_thunk_01ceb370: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01ceb370 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01ceb370(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01ceb370

// auto_tail_call_offset_member_thunk_01d07a30: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01d07a30 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01d07a30(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01d07a30

// auto_tail_call_offset_member_thunk_01d0b150: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01d0b150 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01d0b150(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01d0b150

// auto_tail_call_offset_member_thunk_01d11f60: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01d11f60 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01d11f60(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01d11f60

// auto_tail_call_offset_member_thunk_01d25a90: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01d25a90 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01d25a90(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01d25a90

// auto_tail_call_offset_member_thunk_01d61fd0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01d61fd0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01d61fd0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01d61fd0

// auto_tail_call_offset_member_thunk_01e0f080: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01e0f080 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01e0f080(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01e0f080

// auto_tail_call_offset_member_thunk_01e10a40: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01e10a40 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01e10a40(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01e10a40

// auto_tail_call_offset_member_thunk_01e1c9b0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01e1c9b0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01e1c9b0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01e1c9b0

// auto_tail_call_offset_member_thunk_01e288e0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01e288e0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01e288e0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01e288e0

// auto_tail_call_offset_member_thunk_01e3e2e0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01e3e2e0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01e3e2e0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01e3e2e0

// auto_tail_call_offset_member_thunk_01e477b0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01e477b0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01e477b0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01e477b0

// auto_tail_call_offset_member_thunk_01e500c0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01e500c0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01e500c0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01e500c0

// auto_tail_call_offset_member_thunk_01e588d0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01e588d0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01e588d0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01e588d0

// auto_tail_call_offset_member_thunk_01e5d110: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01e5d110 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01e5d110(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01e5d110

// auto_tail_call_offset_member_thunk_01e77400: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01e77400 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01e77400(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01e77400

// auto_tail_call_offset_member_thunk_01e84350: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01e84350 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01e84350(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01e84350

// auto_tail_call_offset_member_thunk_01e8ec10: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01e8ec10 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01e8ec10(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01e8ec10

// auto_tail_call_offset_member_thunk_01e917d0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01e917d0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01e917d0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01e917d0

// auto_tail_call_offset_member_thunk_01ec1dd0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01ec1dd0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01ec1dd0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01ec1dd0

// auto_tail_call_offset_member_thunk_01ec45a0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_01ec45a0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_01ec45a0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_01ec45a0

// auto_tail_call_offset_member_thunk_020b5a80: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_020b5a80 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_020b5a80(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_020b5a80

// auto_tail_call_offset_member_thunk_020b5b40: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_020b5b40 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_020b5b40(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_020b5b40

// auto_tail_call_offset_member_thunk_020be980: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_020be980 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_020be980(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_020be980

// auto_tail_call_offset_member_thunk_020c0e80: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_020c0e80 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_020c0e80(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_020c0e80

// auto_tail_call_offset_member_thunk_020cd370: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_020cd370 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_020cd370(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_020cd370

// auto_tail_call_offset_member_thunk_02108120: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_02108120 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02108120(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_02108120

// auto_tail_call_offset_member_thunk_02122d70: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_02122d70 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02122d70(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_02122d70

// auto_tail_call_offset_member_thunk_0212b2e0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_0212b2e0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0212b2e0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_0212b2e0

// auto_tail_call_offset_member_thunk_0214edf0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_0214edf0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0214edf0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_0214edf0

// auto_tail_call_offset_member_thunk_02150b80: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_02150b80 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02150b80(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_02150b80

// auto_tail_call_offset_member_thunk_02171cf0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_02171cf0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02171cf0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_02171cf0

// auto_tail_call_offset_member_thunk_0218cff0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_0218cff0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0218cff0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_0218cff0

// auto_tail_call_offset_member_thunk_02199020: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_02199020 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02199020(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_02199020

// auto_tail_call_offset_member_thunk_021a8e40: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_021a8e40 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_021a8e40(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_021a8e40

// auto_tail_call_offset_member_thunk_021b68d0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_021b68d0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_021b68d0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_021b68d0

// auto_tail_call_offset_member_thunk_021be1f0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_021be1f0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_021be1f0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_021be1f0

// auto_tail_call_offset_member_thunk_021d3cb0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_021d3cb0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_021d3cb0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_021d3cb0

// auto_tail_call_offset_member_thunk_021f5f70: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_021f5f70 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_021f5f70(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_021f5f70

// auto_tail_call_offset_member_thunk_02217380: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_02217380 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02217380(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_02217380

// auto_tail_call_offset_member_thunk_02222180: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_02222180 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02222180(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_02222180

// auto_tail_call_offset_member_thunk_022280e0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_022280e0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_022280e0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_022280e0

// auto_tail_call_offset_member_thunk_022331f0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_022331f0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_022331f0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_022331f0

// auto_tail_call_offset_member_thunk_0223b3e0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_0223b3e0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0223b3e0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_0223b3e0

// auto_tail_call_offset_member_thunk_0224a360: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_0224a360 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0224a360(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_0224a360

// auto_tail_call_offset_member_thunk_02266820: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_02266820 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02266820(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_02266820

// auto_tail_call_offset_member_thunk_02268be0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_02268be0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02268be0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_02268be0

// auto_tail_call_offset_member_thunk_022737c0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_022737c0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_022737c0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_022737c0

// auto_tail_call_offset_member_thunk_02274970: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_02274970 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02274970(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_02274970

// auto_tail_call_offset_member_thunk_0227ab50: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_0227ab50 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0227ab50(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_0227ab50

// auto_tail_call_offset_member_thunk_022a7810: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_022a7810 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_022a7810(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_022a7810

// auto_tail_call_offset_member_thunk_022d5370: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_022d5370 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_022d5370(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_022d5370

// auto_tail_call_offset_member_thunk_022dfb30: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_022dfb30 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_022dfb30(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_022dfb30

// auto_tail_call_offset_member_thunk_022f7760: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_022f7760 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_022f7760(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_022f7760

// auto_tail_call_offset_member_thunk_02363bc0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_02363bc0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02363bc0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_02363bc0

// auto_tail_call_offset_member_thunk_0236f0f0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_0236f0f0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0236f0f0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_0236f0f0

// auto_tail_call_offset_member_thunk_0237d160: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_0237d160 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0237d160(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_0237d160

// auto_tail_call_offset_member_thunk_0237d330: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_0237d330 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0237d330(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_0237d330

// auto_tail_call_offset_member_thunk_0238ff90: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_0238ff90 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0238ff90(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_0238ff90

// auto_tail_call_offset_member_thunk_0239f630: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_0239f630 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0239f630(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_0239f630

// auto_tail_call_offset_member_thunk_023a8450: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_023a8450 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_023a8450(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_023a8450

// auto_tail_call_offset_member_thunk_023b5d00: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_023b5d00 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_023b5d00(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_023b5d00

// auto_tail_call_offset_member_thunk_023b6b10: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_023b6b10 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_023b6b10(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_023b6b10

// auto_tail_call_offset_member_thunk_023cc0f0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_023cc0f0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_023cc0f0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_023cc0f0

// auto_tail_call_offset_member_thunk_023de060: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_023de060 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_023de060(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_023de060

// auto_tail_call_offset_member_thunk_023e7560: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_023e7560 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_023e7560(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_023e7560

// auto_tail_call_offset_member_thunk_023f9f60: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_023f9f60 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_023f9f60(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_023f9f60

// auto_tail_call_offset_member_thunk_02413320: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_02413320 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02413320(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_02413320

// auto_tail_call_offset_member_thunk_02425f00: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_02425f00 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02425f00(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_02425f00

// auto_tail_call_offset_member_thunk_0243a060: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_0243a060 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0243a060(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_0243a060

// auto_tail_call_offset_member_thunk_02447440: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_02447440 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02447440(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_02447440

// auto_tail_call_offset_member_thunk_0244f310: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_0244f310 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_0244f310(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_0244f310

// auto_tail_call_offset_member_thunk_02461a50: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_02461a50 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02461a50(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_02461a50

// auto_tail_call_offset_member_thunk_02d677c0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_02d677c0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02d677c0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_02d677c0

// auto_tail_call_offset_member_thunk_02d6af60: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_02d6af60 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02d6af60(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_02d6af60

// auto_tail_call_offset_member_thunk_02d8f0e0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_02d8f0e0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02d8f0e0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_02d8f0e0

// auto_tail_call_offset_member_thunk_02d94d00: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_02d94d00 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02d94d00(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_02d94d00

// auto_tail_call_offset_member_thunk_02d9d810: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_02d9d810 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02d9d810(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_02d9d810

// auto_tail_call_offset_member_thunk_02dab5a0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_02dab5a0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02dab5a0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_02dab5a0

// auto_tail_call_offset_member_thunk_02dad5d0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_02dad5d0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02dad5d0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_02dad5d0

// auto_tail_call_offset_member_thunk_02db81f0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_02db81f0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02db81f0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_02db81f0

// auto_tail_call_offset_member_thunk_02dbc640: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_02dbc640 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02dbc640(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_02dbc640

// auto_tail_call_offset_member_thunk_02dca8a0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_02dca8a0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02dca8a0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_02dca8a0

// auto_tail_call_offset_member_thunk_02dd0680: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_02dd0680 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02dd0680(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_02dd0680

// auto_tail_call_offset_member_thunk_02dd74e0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_02dd74e0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02dd74e0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_02dd74e0

// auto_tail_call_offset_member_thunk_02ddb210: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_02ddb210 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02ddb210(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_02ddb210

// auto_tail_call_offset_member_thunk_02ddb4e0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_02ddb4e0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02ddb4e0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_02ddb4e0

// auto_tail_call_offset_member_thunk_02ddddf0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_02ddddf0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02ddddf0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_02ddddf0

// auto_tail_call_offset_member_thunk_02de1bf0: misc_tail_call_offset_member_thunk with other addresses and constants.
namespace near_02de1bf0 {

/** The record passed second, of which only the value handed on to the target is known. */
struct SecondRecord {
    uint8_t unknown_0x0000[0x8];
    uint64_t value;
};
static_assert(offsetof(SecondRecord, value) == 0x8);

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
extern "C" uint64_t bb_auto_tail_call_offset_member_thunk_02de1bf0(misc::OffsetMemberThunk *thunk, SecondRecord *second)
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
    return reinterpret_cast<OffsetThunkTarget>(callee)(reinterpret_cast<void *>(self), second->value,
                                                       thunk->argument_0x28);
}

}  // namespace near_02de1bf0
