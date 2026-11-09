// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: tail-calls the library function on an owner's child, and does nothing when there is no child.
//
// misc_forward_child_tail (0x0139bcb0) jumps to the library function at 0x01440fb0 with the owner's child
// pointer, so that function's result is this one's. With no child the original returns at once and leaves
// the return register as the caller had it; this returns zero there.
#include <cstdint>

#include "child_slot_owner.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x01440fb0, fn_01440fb0, uint64_t(void *child));

}  // namespace

/**
 *
 * Returns the result of the library call on the owner's child, which is passed on as a tail call.
 *
 * With no child the function returns zero; the original leaves the return register untouched there.
 */
extern "C" uint64_t bb_misc_forward_child_tail(misc::ChildSlotOwner *owner)
{
    void *const child = owner->child_0x08;
    if (child == nullptr) return 0;
    return fn_01440fb0(child);
}
