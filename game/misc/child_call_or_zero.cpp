// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: returns the result of calling an owner's child, or zero when the owner has no child.
//
// misc_child_call_or_zero (0x0139bc90) calls the library function at 0x01441280 with the child pointer
// and returns its result. With no child it returns zero without calling anything.
#include <cstdint>

#include "child_slot_owner.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x01441280, fn_01441280, uint64_t(void *child));

}  // namespace

/**
 *
 * Returns the result of the library call on the owner's child, or zero when the owner has no child.
 *
 * The owner is only read; the child pointer is passed to the call unchanged.
 */
extern "C" uint64_t bb_misc_child_call_or_zero(misc::ChildSlotOwner *owner)
{
    void *const child = owner->child_0x08;
    if (child == nullptr) return 0;
    return fn_01441280(child);
}
