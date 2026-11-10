// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_child_call_or_zero, in game/misc/child_call_or_zero.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstdint>
#include "../misc/child_slot_owner.h"
#include "runtime/original.h"

// auto_child_call_or_zero_0233f1d0: misc_child_call_or_zero with other addresses.
namespace twin_0233f1d0 {

// Misc: returns the result of calling an owner's child, or zero when the owner has no child.
//
// auto_child_call_or_zero_0233f1d0 (0x0233f1d0) calls the library function at 0x0235d0e0 with the child pointer and
// its own second argument, and returns its result. With no child it returns zero without calling anything.


namespace {

RT_ORIGINAL(0x0235d0e0, fn_0235d0e0, uint64_t(void *child, uint32_t second));

}  // namespace

/**
 *
 * Returns the result of the library call on the owner's child, or zero when the owner has no child.
 *
 * The owner is only read; the child pointer and the second argument are passed to the call unchanged.
 */
extern "C" uint64_t bb_auto_child_call_or_zero_0233f1d0(misc::ChildSlotOwner *owner, uint32_t second)
{
    void *const child = owner->child_0x08;
    if (child == nullptr) return 0;
    return fn_0235d0e0(child, second);
}

}  // namespace twin_0233f1d0

// auto_child_call_or_zero_02b38760: misc_child_call_or_zero with other addresses.
namespace twin_02b38760 {

// Misc: returns the result of calling an owner's child, or zero when the owner has no child.
//
// auto_child_call_or_zero_02b38760 (0x02b38760) calls the library function at 0x02b3e7e0 with the child pointer and
// its own second argument, and returns its result. With no child it returns zero without calling anything.


namespace {

RT_ORIGINAL(0x02b3e7e0, fn_02b3e7e0, uint64_t(void *child, uint32_t second));

}  // namespace

/**
 *
 * Returns the result of the library call on the owner's child, or zero when the owner has no child.
 *
 * The owner is only read; the child pointer and the second argument are passed to the call unchanged.
 */
extern "C" uint64_t bb_auto_child_call_or_zero_02b38760(misc::ChildSlotOwner *owner, uint32_t second)
{
    void *const child = owner->child_0x08;
    if (child == nullptr) return 0;
    return fn_02b3e7e0(child, second);
}

}  // namespace twin_02b38760

// auto_child_call_or_zero_02c518e0: misc_child_call_or_zero with other addresses.
namespace twin_02c518e0 {

// Misc: returns the result of calling an owner's child, or zero when the owner has no child.
//
// auto_child_call_or_zero_02c518e0 (0x02c518e0) calls the library function at 0x02c50860 with the child pointer and
// its own second argument, and returns its result. With no child it returns zero without calling anything.


namespace {

RT_ORIGINAL(0x02c50860, fn_02c50860, uint64_t(void *child, uint32_t second));

}  // namespace

/**
 *
 * Returns the result of the library call on the owner's child, or zero when the owner has no child.
 *
 * The owner is only read; the child pointer and the second argument are passed to the call unchanged.
 */
extern "C" uint64_t bb_auto_child_call_or_zero_02c518e0(misc::ChildSlotOwner *owner, uint32_t second)
{
    void *const child = owner->child_0x08;
    if (child == nullptr) return 0;
    return fn_02c50860(child, second);
}

}  // namespace twin_02c518e0

// auto_child_call_or_zero_02c51900: misc_child_call_or_zero with other addresses.
namespace twin_02c51900 {

// Misc: returns the result of calling an owner's child, or zero when the owner has no child.
//
// auto_child_call_or_zero_02c51900 (0x02c51900) calls the library function at 0x02c505f0 with the child pointer and
// its own second argument, and returns its result. With no child it returns zero without calling anything.


namespace {

RT_ORIGINAL(0x02c505f0, fn_02c505f0, uint64_t(void *child, uint32_t second));

}  // namespace

/**
 *
 * Returns the result of the library call on the owner's child, or zero when the owner has no child.
 *
 * The owner is only read; the child pointer and the second argument are passed to the call unchanged.
 */
extern "C" uint64_t bb_auto_child_call_or_zero_02c51900(misc::ChildSlotOwner *owner, uint32_t second)
{
    void *const child = owner->child_0x08;
    if (child == nullptr) return 0;
    return fn_02c505f0(child, second);
}

}  // namespace twin_02c51900

// auto_child_call_or_zero_02c51920: misc_child_call_or_zero with other addresses.
namespace twin_02c51920 {

// Misc: returns the result of calling an owner's child, or zero when the owner has no child.
//
// auto_child_call_or_zero_02c51920 (0x02c51920) calls the library function at 0x02c50690 with the child pointer and
// its own second argument, and returns its result. With no child it returns zero without calling anything.


namespace {

RT_ORIGINAL(0x02c50690, fn_02c50690, uint64_t(void *child, uint32_t second));

}  // namespace

/**
 *
 * Returns the result of the library call on the owner's child, or zero when the owner has no child.
 *
 * The owner is only read; the child pointer and the second argument are passed to the call unchanged.
 */
extern "C" uint64_t bb_auto_child_call_or_zero_02c51920(misc::ChildSlotOwner *owner, uint32_t second)
{
    void *const child = owner->child_0x08;
    if (child == nullptr) return 0;
    return fn_02c50690(child, second);
}

}  // namespace twin_02c51920
