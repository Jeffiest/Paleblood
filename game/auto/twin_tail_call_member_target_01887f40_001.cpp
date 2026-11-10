// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_tail_call_member_target, in game/misc/tail_call_member_target.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "../misc/member_thunk.h"

// auto_tail_call_member_target_0170f9a0: misc_tail_call_member_target with other addresses.
namespace twin_0170f9a0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_0170f9a0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_0170f9a0

// auto_tail_call_member_target_01799790: misc_tail_call_member_target with other addresses.
namespace twin_01799790 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01799790(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01799790

// auto_tail_call_member_target_017a7990: misc_tail_call_member_target with other addresses.
namespace twin_017a7990 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_017a7990(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_017a7990

// auto_tail_call_member_target_017a92d0: misc_tail_call_member_target with other addresses.
namespace twin_017a92d0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_017a92d0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_017a92d0

// auto_tail_call_member_target_017a94a0: misc_tail_call_member_target with other addresses.
namespace twin_017a94a0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_017a94a0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_017a94a0

// auto_tail_call_member_target_017b4170: misc_tail_call_member_target with other addresses.
namespace twin_017b4170 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_017b4170(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_017b4170

// auto_tail_call_member_target_017b58a0: misc_tail_call_member_target with other addresses.
namespace twin_017b58a0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_017b58a0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_017b58a0

// auto_tail_call_member_target_017c3ae0: misc_tail_call_member_target with other addresses.
namespace twin_017c3ae0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_017c3ae0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_017c3ae0

// auto_tail_call_member_target_018567f0: misc_tail_call_member_target with other addresses.
namespace twin_018567f0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_018567f0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_018567f0

// auto_tail_call_member_target_01860290: misc_tail_call_member_target with other addresses.
namespace twin_01860290 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01860290(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01860290

// auto_tail_call_member_target_0186b2b0: misc_tail_call_member_target with other addresses.
namespace twin_0186b2b0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_0186b2b0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_0186b2b0

// auto_tail_call_member_target_0186f400: misc_tail_call_member_target with other addresses.
namespace twin_0186f400 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_0186f400(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_0186f400

// auto_tail_call_member_target_01870140: misc_tail_call_member_target with other addresses.
namespace twin_01870140 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01870140(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01870140

// auto_tail_call_member_target_01870cf0: misc_tail_call_member_target with other addresses.
namespace twin_01870cf0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01870cf0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01870cf0

// auto_tail_call_member_target_01874260: misc_tail_call_member_target with other addresses.
namespace twin_01874260 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01874260(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01874260

// auto_tail_call_member_target_0187f9e0: misc_tail_call_member_target with other addresses.
namespace twin_0187f9e0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_0187f9e0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_0187f9e0

// auto_tail_call_member_target_018839e0: misc_tail_call_member_target with other addresses.
namespace twin_018839e0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_018839e0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_018839e0

// auto_tail_call_member_target_0188e460: misc_tail_call_member_target with other addresses.
namespace twin_0188e460 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_0188e460(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_0188e460

// auto_tail_call_member_target_0189e430: misc_tail_call_member_target with other addresses.
namespace twin_0189e430 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_0189e430(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_0189e430

// auto_tail_call_member_target_018a02a0: misc_tail_call_member_target with other addresses.
namespace twin_018a02a0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_018a02a0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_018a02a0

// auto_tail_call_member_target_018ad5f0: misc_tail_call_member_target with other addresses.
namespace twin_018ad5f0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_018ad5f0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_018ad5f0

// auto_tail_call_member_target_018b0000: misc_tail_call_member_target with other addresses.
namespace twin_018b0000 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_018b0000(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_018b0000

// auto_tail_call_member_target_018b34e0: misc_tail_call_member_target with other addresses.
namespace twin_018b34e0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_018b34e0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_018b34e0

// auto_tail_call_member_target_018bdb10: misc_tail_call_member_target with other addresses.
namespace twin_018bdb10 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_018bdb10(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_018bdb10

// auto_tail_call_member_target_018c1250: misc_tail_call_member_target with other addresses.
namespace twin_018c1250 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_018c1250(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_018c1250

// auto_tail_call_member_target_018c6630: misc_tail_call_member_target with other addresses.
namespace twin_018c6630 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_018c6630(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_018c6630

// auto_tail_call_member_target_018c82b0: misc_tail_call_member_target with other addresses.
namespace twin_018c82b0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_018c82b0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_018c82b0

// auto_tail_call_member_target_01937250: misc_tail_call_member_target with other addresses.
namespace twin_01937250 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01937250(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01937250

// auto_tail_call_member_target_0196f5b0: misc_tail_call_member_target with other addresses.
namespace twin_0196f5b0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_0196f5b0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_0196f5b0

// auto_tail_call_member_target_0198f8d0: misc_tail_call_member_target with other addresses.
namespace twin_0198f8d0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_0198f8d0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_0198f8d0

// auto_tail_call_member_target_0199d7f0: misc_tail_call_member_target with other addresses.
namespace twin_0199d7f0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_0199d7f0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_0199d7f0

// auto_tail_call_member_target_019aced0: misc_tail_call_member_target with other addresses.
namespace twin_019aced0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_019aced0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_019aced0

// auto_tail_call_member_target_019bf8d0: misc_tail_call_member_target with other addresses.
namespace twin_019bf8d0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_019bf8d0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_019bf8d0

// auto_tail_call_member_target_019c1500: misc_tail_call_member_target with other addresses.
namespace twin_019c1500 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_019c1500(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_019c1500

// auto_tail_call_member_target_019c2e20: misc_tail_call_member_target with other addresses.
namespace twin_019c2e20 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_019c2e20(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_019c2e20

// auto_tail_call_member_target_019c6290: misc_tail_call_member_target with other addresses.
namespace twin_019c6290 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_019c6290(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_019c6290

// auto_tail_call_member_target_019c7370: misc_tail_call_member_target with other addresses.
namespace twin_019c7370 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_019c7370(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_019c7370

// auto_tail_call_member_target_019c9730: misc_tail_call_member_target with other addresses.
namespace twin_019c9730 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_019c9730(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_019c9730

// auto_tail_call_member_target_019cc1b0: misc_tail_call_member_target with other addresses.
namespace twin_019cc1b0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_019cc1b0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_019cc1b0

// auto_tail_call_member_target_019d7e70: misc_tail_call_member_target with other addresses.
namespace twin_019d7e70 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_019d7e70(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_019d7e70

// auto_tail_call_member_target_019e11c0: misc_tail_call_member_target with other addresses.
namespace twin_019e11c0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_019e11c0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_019e11c0

// auto_tail_call_member_target_019ebb40: misc_tail_call_member_target with other addresses.
namespace twin_019ebb40 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_019ebb40(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_019ebb40

// auto_tail_call_member_target_01a2f000: misc_tail_call_member_target with other addresses.
namespace twin_01a2f000 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01a2f000(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01a2f000

// auto_tail_call_member_target_01a34320: misc_tail_call_member_target with other addresses.
namespace twin_01a34320 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01a34320(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01a34320

// auto_tail_call_member_target_01a5a5d0: misc_tail_call_member_target with other addresses.
namespace twin_01a5a5d0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01a5a5d0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01a5a5d0

// auto_tail_call_member_target_01a87710: misc_tail_call_member_target with other addresses.
namespace twin_01a87710 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01a87710(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01a87710

// auto_tail_call_member_target_01ab64f0: misc_tail_call_member_target with other addresses.
namespace twin_01ab64f0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01ab64f0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01ab64f0

// auto_tail_call_member_target_01abe890: misc_tail_call_member_target with other addresses.
namespace twin_01abe890 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01abe890(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01abe890

// auto_tail_call_member_target_01addd50: misc_tail_call_member_target with other addresses.
namespace twin_01addd50 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01addd50(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01addd50

// auto_tail_call_member_target_01af1330: misc_tail_call_member_target with other addresses.
namespace twin_01af1330 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01af1330(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01af1330

// auto_tail_call_member_target_01b00a90: misc_tail_call_member_target with other addresses.
namespace twin_01b00a90 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01b00a90(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01b00a90

// auto_tail_call_member_target_01b053c0: misc_tail_call_member_target with other addresses.
namespace twin_01b053c0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01b053c0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01b053c0

// auto_tail_call_member_target_01b08b30: misc_tail_call_member_target with other addresses.
namespace twin_01b08b30 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01b08b30(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01b08b30

// auto_tail_call_member_target_01b0cdb0: misc_tail_call_member_target with other addresses.
namespace twin_01b0cdb0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01b0cdb0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01b0cdb0

// auto_tail_call_member_target_01b0f340: misc_tail_call_member_target with other addresses.
namespace twin_01b0f340 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01b0f340(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01b0f340

// auto_tail_call_member_target_01b19040: misc_tail_call_member_target with other addresses.
namespace twin_01b19040 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01b19040(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01b19040

// auto_tail_call_member_target_01b24790: misc_tail_call_member_target with other addresses.
namespace twin_01b24790 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01b24790(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01b24790

// auto_tail_call_member_target_01b56010: misc_tail_call_member_target with other addresses.
namespace twin_01b56010 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01b56010(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01b56010

// auto_tail_call_member_target_01b6eef0: misc_tail_call_member_target with other addresses.
namespace twin_01b6eef0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01b6eef0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01b6eef0

// auto_tail_call_member_target_01b72ad0: misc_tail_call_member_target with other addresses.
namespace twin_01b72ad0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01b72ad0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01b72ad0

// auto_tail_call_member_target_01b73b60: misc_tail_call_member_target with other addresses.
namespace twin_01b73b60 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01b73b60(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01b73b60

// auto_tail_call_member_target_01bc9b90: misc_tail_call_member_target with other addresses.
namespace twin_01bc9b90 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01bc9b90(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01bc9b90

// auto_tail_call_member_target_01bce520: misc_tail_call_member_target with other addresses.
namespace twin_01bce520 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01bce520(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01bce520

// auto_tail_call_member_target_01beedc0: misc_tail_call_member_target with other addresses.
namespace twin_01beedc0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01beedc0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01beedc0

// auto_tail_call_member_target_01bf0310: misc_tail_call_member_target with other addresses.
namespace twin_01bf0310 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01bf0310(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01bf0310

// auto_tail_call_member_target_01bf0c50: misc_tail_call_member_target with other addresses.
namespace twin_01bf0c50 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01bf0c50(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01bf0c50

// auto_tail_call_member_target_01c23920: misc_tail_call_member_target with other addresses.
namespace twin_01c23920 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01c23920(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01c23920

// auto_tail_call_member_target_01c2a810: misc_tail_call_member_target with other addresses.
namespace twin_01c2a810 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01c2a810(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01c2a810

// auto_tail_call_member_target_01c2aa90: misc_tail_call_member_target with other addresses.
namespace twin_01c2aa90 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01c2aa90(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01c2aa90

// auto_tail_call_member_target_01c3c4d0: misc_tail_call_member_target with other addresses.
namespace twin_01c3c4d0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01c3c4d0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01c3c4d0

// auto_tail_call_member_target_01c40290: misc_tail_call_member_target with other addresses.
namespace twin_01c40290 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01c40290(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01c40290

// auto_tail_call_member_target_01c62710: misc_tail_call_member_target with other addresses.
namespace twin_01c62710 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01c62710(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01c62710

// auto_tail_call_member_target_01c67340: misc_tail_call_member_target with other addresses.
namespace twin_01c67340 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01c67340(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01c67340

// auto_tail_call_member_target_01c6cfa0: misc_tail_call_member_target with other addresses.
namespace twin_01c6cfa0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01c6cfa0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01c6cfa0

// auto_tail_call_member_target_01c7c820: misc_tail_call_member_target with other addresses.
namespace twin_01c7c820 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01c7c820(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01c7c820

// auto_tail_call_member_target_01ca13a0: misc_tail_call_member_target with other addresses.
namespace twin_01ca13a0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01ca13a0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01ca13a0

// auto_tail_call_member_target_01ca2b60: misc_tail_call_member_target with other addresses.
namespace twin_01ca2b60 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01ca2b60(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01ca2b60

// auto_tail_call_member_target_01cac6c0: misc_tail_call_member_target with other addresses.
namespace twin_01cac6c0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01cac6c0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01cac6c0

// auto_tail_call_member_target_01cb5fe0: misc_tail_call_member_target with other addresses.
namespace twin_01cb5fe0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01cb5fe0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01cb5fe0

// auto_tail_call_member_target_01ce3110: misc_tail_call_member_target with other addresses.
namespace twin_01ce3110 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01ce3110(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01ce3110

// auto_tail_call_member_target_01d11fd0: misc_tail_call_member_target with other addresses.
namespace twin_01d11fd0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01d11fd0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01d11fd0

// auto_tail_call_member_target_01d75e30: misc_tail_call_member_target with other addresses.
namespace twin_01d75e30 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01d75e30(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01d75e30

// auto_tail_call_member_target_01d91730: misc_tail_call_member_target with other addresses.
namespace twin_01d91730 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01d91730(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01d91730

// auto_tail_call_member_target_01d966f0: misc_tail_call_member_target with other addresses.
namespace twin_01d966f0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01d966f0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01d966f0

// auto_tail_call_member_target_01da4310: misc_tail_call_member_target with other addresses.
namespace twin_01da4310 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01da4310(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01da4310

// auto_tail_call_member_target_01db1c40: misc_tail_call_member_target with other addresses.
namespace twin_01db1c40 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01db1c40(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01db1c40

// auto_tail_call_member_target_01de6e00: misc_tail_call_member_target with other addresses.
namespace twin_01de6e00 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01de6e00(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01de6e00

// auto_tail_call_member_target_01df3770: misc_tail_call_member_target with other addresses.
namespace twin_01df3770 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01df3770(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01df3770

// auto_tail_call_member_target_01e00060: misc_tail_call_member_target with other addresses.
namespace twin_01e00060 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01e00060(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01e00060

// auto_tail_call_member_target_01e04ec0: misc_tail_call_member_target with other addresses.
namespace twin_01e04ec0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01e04ec0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01e04ec0

// auto_tail_call_member_target_01e6af20: misc_tail_call_member_target with other addresses.
namespace twin_01e6af20 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01e6af20(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01e6af20

// auto_tail_call_member_target_01ead020: misc_tail_call_member_target with other addresses.
namespace twin_01ead020 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01ead020(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01ead020

// auto_tail_call_member_target_01ec1b00: misc_tail_call_member_target with other addresses.
namespace twin_01ec1b00 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_01ec1b00(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_01ec1b00

// auto_tail_call_member_target_020be830: misc_tail_call_member_target with other addresses.
namespace twin_020be830 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_020be830(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_020be830

// auto_tail_call_member_target_020cd280: misc_tail_call_member_target with other addresses.
namespace twin_020cd280 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_020cd280(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_020cd280

// auto_tail_call_member_target_020d7670: misc_tail_call_member_target with other addresses.
namespace twin_020d7670 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_020d7670(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_020d7670

// auto_tail_call_member_target_020dade0: misc_tail_call_member_target with other addresses.
namespace twin_020dade0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_020dade0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_020dade0

// auto_tail_call_member_target_020f75e0: misc_tail_call_member_target with other addresses.
namespace twin_020f75e0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_020f75e0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_020f75e0

// auto_tail_call_member_target_020fdd70: misc_tail_call_member_target with other addresses.
namespace twin_020fdd70 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_020fdd70(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_020fdd70

// auto_tail_call_member_target_02104d50: misc_tail_call_member_target with other addresses.
namespace twin_02104d50 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_02104d50(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_02104d50

// auto_tail_call_member_target_02155390: misc_tail_call_member_target with other addresses.
namespace twin_02155390 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_02155390(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_02155390

// auto_tail_call_member_target_021a4670: misc_tail_call_member_target with other addresses.
namespace twin_021a4670 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_021a4670(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_021a4670

// auto_tail_call_member_target_021aec30: misc_tail_call_member_target with other addresses.
namespace twin_021aec30 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_021aec30(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_021aec30

// auto_tail_call_member_target_0221c860: misc_tail_call_member_target with other addresses.
namespace twin_0221c860 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_0221c860(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_0221c860

// auto_tail_call_member_target_0222a480: misc_tail_call_member_target with other addresses.
namespace twin_0222a480 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_0222a480(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_0222a480

// auto_tail_call_member_target_02235990: misc_tail_call_member_target with other addresses.
namespace twin_02235990 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_02235990(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_02235990

// auto_tail_call_member_target_0224e240: misc_tail_call_member_target with other addresses.
namespace twin_0224e240 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_0224e240(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_0224e240

// auto_tail_call_member_target_02253360: misc_tail_call_member_target with other addresses.
namespace twin_02253360 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_02253360(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_02253360

// auto_tail_call_member_target_02259d40: misc_tail_call_member_target with other addresses.
namespace twin_02259d40 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_02259d40(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_02259d40

// auto_tail_call_member_target_02262ad0: misc_tail_call_member_target with other addresses.
namespace twin_02262ad0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_02262ad0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_02262ad0

// auto_tail_call_member_target_02271080: misc_tail_call_member_target with other addresses.
namespace twin_02271080 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_02271080(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_02271080

// auto_tail_call_member_target_0227aa60: misc_tail_call_member_target with other addresses.
namespace twin_0227aa60 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_0227aa60(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_0227aa60

// auto_tail_call_member_target_022d5280: misc_tail_call_member_target with other addresses.
namespace twin_022d5280 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_022d5280(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_022d5280

// auto_tail_call_member_target_022eba80: misc_tail_call_member_target with other addresses.
namespace twin_022eba80 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_022eba80(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_022eba80

// auto_tail_call_member_target_02306c60: misc_tail_call_member_target with other addresses.
namespace twin_02306c60 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_02306c60(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_02306c60

// auto_tail_call_member_target_02306d30: misc_tail_call_member_target with other addresses.
namespace twin_02306d30 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_02306d30(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_02306d30

// auto_tail_call_member_target_02348d70: misc_tail_call_member_target with other addresses.
namespace twin_02348d70 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_02348d70(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_02348d70

// auto_tail_call_member_target_0234ea50: misc_tail_call_member_target with other addresses.
namespace twin_0234ea50 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_0234ea50(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_0234ea50

// auto_tail_call_member_target_02352ed0: misc_tail_call_member_target with other addresses.
namespace twin_02352ed0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_02352ed0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_02352ed0

// auto_tail_call_member_target_023d0d30: misc_tail_call_member_target with other addresses.
namespace twin_023d0d30 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_023d0d30(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_023d0d30

// auto_tail_call_member_target_023e22f0: misc_tail_call_member_target with other addresses.
namespace twin_023e22f0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_023e22f0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_023e22f0

// auto_tail_call_member_target_02422bb0: misc_tail_call_member_target with other addresses.
namespace twin_02422bb0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_02422bb0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_02422bb0

// auto_tail_call_member_target_0243a0d0: misc_tail_call_member_target with other addresses.
namespace twin_0243a0d0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_0243a0d0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_0243a0d0

// auto_tail_call_member_target_024474b0: misc_tail_call_member_target with other addresses.
namespace twin_024474b0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_024474b0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_024474b0

// auto_tail_call_member_target_0244f3d0: misc_tail_call_member_target with other addresses.
namespace twin_0244f3d0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_0244f3d0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_0244f3d0

// auto_tail_call_member_target_02d6d180: misc_tail_call_member_target with other addresses.
namespace twin_02d6d180 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_02d6d180(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_02d6d180

// auto_tail_call_member_target_02d9e130: misc_tail_call_member_target with other addresses.
namespace twin_02d9e130 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_02d9e130(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_02d9e130

// auto_tail_call_member_target_02dadb20: misc_tail_call_member_target with other addresses.
namespace twin_02dadb20 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_02dadb20(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_02dadb20

// auto_tail_call_member_target_02db9710: misc_tail_call_member_target with other addresses.
namespace twin_02db9710 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_02db9710(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_02db9710

// auto_tail_call_member_target_02dbc890: misc_tail_call_member_target with other addresses.
namespace twin_02dbc890 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_02dbc890(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_02dbc890

// auto_tail_call_member_target_02dcad60: misc_tail_call_member_target with other addresses.
namespace twin_02dcad60 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_02dcad60(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_02dcad60

// auto_tail_call_member_target_02dcb580: misc_tail_call_member_target with other addresses.
namespace twin_02dcb580 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_02dcb580(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_02dcb580

// auto_tail_call_member_target_02dcc840: misc_tail_call_member_target with other addresses.
namespace twin_02dcc840 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_02dcc840(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_02dcc840

// auto_tail_call_member_target_02dd04b0: misc_tail_call_member_target with other addresses.
namespace twin_02dd04b0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_02dd04b0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_02dd04b0

// auto_tail_call_member_target_02ddb580: misc_tail_call_member_target with other addresses.
namespace twin_02ddb580 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_02ddb580(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_02ddb580

// auto_tail_call_member_target_02dddeb0: misc_tail_call_member_target with other addresses.
namespace twin_02dddeb0 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_02dddeb0(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_02dddeb0

// auto_tail_call_member_target_02de1c60: misc_tail_call_member_target with other addresses.
namespace twin_02de1c60 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_02de1c60(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_02de1c60

// auto_tail_call_member_target_02de3970: misc_tail_call_member_target with other addresses.
namespace twin_02de3970 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_02de3970(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_02de3970

// auto_tail_call_member_target_02de3c40: misc_tail_call_member_target with other addresses.
namespace twin_02de3c40 {

// Misc: tail-calls the target of a member-function thunk on its adjusted object, with a 32-bit argument.


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
using MemberTailTarget = void (*)(void *object, uint64_t second, uint32_t argument);

}  // namespace

/**
 *
 * Calls the thunk's target on the adjusted object, as a tail call. Nothing is returned.
 *
 * A zero target returns without a call. A virtual target is read from the adjusted object's vtable first;
 * the second argument is passed on unchanged.
 */
extern "C" void bb_auto_tail_call_member_target_02de3c40(MemberTailThunk *thunk, uint64_t second)
{
    const uint64_t target = thunk->target;
    if (target == 0) return;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = target;
    if ((target & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::virtual_target_bit));
    }
    reinterpret_cast<MemberTailTarget>(callee)(reinterpret_cast<void *>(self), second, thunk->argument);
}

}  // namespace twin_02de3c40
