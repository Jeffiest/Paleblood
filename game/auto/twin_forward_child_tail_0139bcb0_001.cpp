// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_forward_child_tail, in game/misc/forward_child_tail.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstdint>
#include "../misc/child_slot_owner.h"
#include "runtime/original.h"

// auto_forward_child_tail_00e852f0: misc_forward_child_tail with other addresses.
namespace twin_00e852f0 {

// Misc: tail-calls the library function on an owner's child, and does nothing when there is no child.
//
// auto_forward_child_tail_00e852f0 (0x00e852f0) jumps to the library function at 0x009f96b0 with the owner's child
// pointer. With no child it returns at once without setting the return register, so it returns nothing.


namespace {

RT_ORIGINAL(0x009f96b0, fn_009f96b0, void(void *child));

}  // namespace

/**
 *
 * Calls the library function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_00e852f0(misc::ChildSlotOwner *owner)
{
    void *const child = owner->child_0x08;
    if (child == nullptr) return;
    fn_009f96b0(child);
}

}  // namespace twin_00e852f0

// auto_forward_child_tail_00e85310: misc_forward_child_tail with other addresses.
namespace twin_00e85310 {

// Misc: tail-calls the library function on an owner's child, and does nothing when there is no child.
//
// auto_forward_child_tail_00e85310 (0x00e85310) jumps to the library function at 0x009f96d0 with the owner's child
// pointer. With no child it returns at once without setting the return register, so it returns nothing.


namespace {

RT_ORIGINAL(0x009f96d0, fn_009f96d0, void(void *child));

}  // namespace

/**
 *
 * Calls the library function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_00e85310(misc::ChildSlotOwner *owner)
{
    void *const child = owner->child_0x08;
    if (child == nullptr) return;
    fn_009f96d0(child);
}

}  // namespace twin_00e85310

// auto_forward_child_tail_02237ea0: misc_forward_child_tail with other addresses.
namespace twin_02237ea0 {

// Misc: tail-calls the library function on an owner's child, and does nothing when there is no child.
//
// auto_forward_child_tail_02237ea0 (0x02237ea0) jumps to the library function at 0x02233b10 with the owner's child
// pointer. With no child it returns at once without setting the return register, so it returns nothing.


namespace {

RT_ORIGINAL(0x02233b10, fn_02233b10, void(void *child));

}  // namespace

/**
 *
 * Calls the library function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_02237ea0(misc::ChildSlotOwner *owner)
{
    void *const child = owner->child_0x08;
    if (child == nullptr) return;
    fn_02233b10(child);
}

}  // namespace twin_02237ea0

// auto_forward_child_tail_0233efe0: misc_forward_child_tail with other addresses.
namespace twin_0233efe0 {

// Misc: tail-calls the library function on an owner's child, and does nothing when there is no child.
//
// auto_forward_child_tail_0233efe0 (0x0233efe0) jumps to the library function at 0x02360860 with the owner's child
// pointer. With no child it returns at once without setting the return register, so it returns nothing.


namespace {

RT_ORIGINAL(0x02360860, fn_02360860, void(void *child));

}  // namespace

/**
 *
 * Calls the library function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_0233efe0(misc::ChildSlotOwner *owner)
{
    void *const child = owner->child_0x08;
    if (child == nullptr) return;
    fn_02360860(child);
}

}  // namespace twin_0233efe0

// auto_forward_child_tail_0233f1c0: misc_forward_child_tail with other addresses.
namespace twin_0233f1c0 {

// Misc: tail-calls the library function on an owner's child, and does nothing when there is no child.
//
// auto_forward_child_tail_0233f1c0 (0x0233f1c0) jumps to the library function at 0x0235ca90 with the owner's child
// pointer. With no child it returns at once without setting the return register, so it returns nothing.


namespace {

RT_ORIGINAL(0x0235ca90, fn_0235ca90, void(void *child));

}  // namespace

/**
 *
 * Calls the library function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_0233f1c0(misc::ChildSlotOwner *owner)
{
    void *const child = owner->child_0x08;
    if (child == nullptr) return;
    fn_0235ca90(child);
}

}  // namespace twin_0233f1c0

// auto_forward_child_tail_02785790: misc_forward_child_tail with other addresses.
namespace twin_02785790 {

// Misc: tail-calls the library function on an owner's child, and does nothing when there is no child.
//
// auto_forward_child_tail_02785790 (0x02785790) jumps to the library function at 0x0045a4c0 with the owner's child
// pointer. With no child it returns at once without setting the return register, so it returns nothing.


namespace {

RT_ORIGINAL(0x0045a4c0, fn_0045a4c0, void(void *child));

}  // namespace

/**
 *
 * Calls the library function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_02785790(misc::ChildSlotOwner *owner)
{
    void *const child = owner->child_0x08;
    if (child == nullptr) return;
    fn_0045a4c0(child);
}

}  // namespace twin_02785790

// auto_forward_child_tail_02a70b40: misc_forward_child_tail with other addresses.
namespace twin_02a70b40 {

// Misc: tail-calls the library function on an owner's child, and does nothing when there is no child.
//
// auto_forward_child_tail_02a70b40 (0x02a70b40) jumps to the library function at 0x024bdb30 with the owner's child
// pointer. With no child it returns at once without setting the return register, so it returns nothing.


namespace {

RT_ORIGINAL(0x024bdb30, fn_024bdb30, void(void *child));

}  // namespace

/**
 *
 * Calls the library function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_02a70b40(misc::ChildSlotOwner *owner)
{
    void *const child = owner->child_0x08;
    if (child == nullptr) return;
    fn_024bdb30(child);
}

}  // namespace twin_02a70b40

// auto_forward_child_tail_02b388f0: misc_forward_child_tail with other addresses.
namespace twin_02b388f0 {

// Misc: tail-calls the library function on an owner's child, and does nothing when there is no child.
//
// auto_forward_child_tail_02b388f0 (0x02b388f0) jumps to the library function at 0x02b3ea50 with the owner's child
// pointer. With no child it returns at once without setting the return register, so it returns nothing.


namespace {

RT_ORIGINAL(0x02b3ea50, fn_02b3ea50, void(void *child));

}  // namespace

/**
 *
 * Calls the library function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_02b388f0(misc::ChildSlotOwner *owner)
{
    void *const child = owner->child_0x08;
    if (child == nullptr) return;
    fn_02b3ea50(child);
}

}  // namespace twin_02b388f0

// auto_forward_child_tail_02c51840: misc_forward_child_tail with other addresses.
namespace twin_02c51840 {

// Misc: tail-calls the library function on an owner's child, and does nothing when there is no child.
//
// auto_forward_child_tail_02c51840 (0x02c51840) jumps to the library function at 0x02c4ff20 with the owner's child
// pointer. With no child it returns at once without setting the return register, so it returns nothing.


namespace {

RT_ORIGINAL(0x02c4ff20, fn_02c4ff20, void(void *child));

}  // namespace

/**
 *
 * Calls the library function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_02c51840(misc::ChildSlotOwner *owner)
{
    void *const child = owner->child_0x08;
    if (child == nullptr) return;
    fn_02c4ff20(child);
}

}  // namespace twin_02c51840

// auto_forward_child_tail_02f91c30: misc_forward_child_tail with other addresses.
namespace twin_02f91c30 {

// Misc: tail-calls the library function on an owner's child, and does nothing when there is no child.
//
// auto_forward_child_tail_02f91c30 (0x02f91c30) jumps to the library function at 0x02777c70 with the owner's child
// pointer. With no child it returns at once without setting the return register, so it returns nothing.


namespace {

RT_ORIGINAL(0x02777c70, fn_02777c70, void(void *child));

}  // namespace

/**
 *
 * Calls the library function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_auto_forward_child_tail_02f91c30(misc::ChildSlotOwner *owner)
{
    void *const child = owner->child_0x08;
    if (child == nullptr) return;
    fn_02777c70(child);
}

}  // namespace twin_02f91c30
