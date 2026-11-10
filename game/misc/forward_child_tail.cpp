// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: tail-calls the library function on an owner's child, and does nothing when there is no child.
//
// misc_forward_child_tail (0x0139bcb0) jumps to the library function at 0x01440fb0 with the owner's child
// pointer. With no child it returns at once without setting the return register, so it returns nothing.
#include <cstdint>

#include "child_slot_owner.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x01440fb0, fn_01440fb0, void(void *child));

}  // namespace

/**
 *
 * Calls the library function on the owner's child, as a tail call. Nothing is returned.
 *
 * With no child nothing is called.
 */
extern "C" void bb_misc_forward_child_tail(misc::ChildSlotOwner *owner)
{
    void *const child = owner->child_0x08;
    if (child == nullptr) return;
    fn_01440fb0(child);
}
