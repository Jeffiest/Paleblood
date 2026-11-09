// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: calls a child of an owner with a flag byte, or reports zero when the owner has no child.
//
// misc_child_call_with_flag (0x0139bc10) passes the owner's child and the low byte of its third argument
// to the library call at 0x01441160, and returns that call's result. The second argument is not read.
#include <cstdint>

#include "child_slot_owner.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x01441160, fn_01441160, uint64_t(void *child, uint64_t unused_second, uint8_t flag));

}  // namespace

/**
 *
 * Returns the result of the child call with the flag, or zero when the owner holds no child.
 *
 * Only the low byte of the flag argument is passed on, and the second argument is not read at all.
 */
extern "C" uint64_t bb_misc_child_call_with_flag(misc::ChildSlotOwner *owner, [[maybe_unused]] uint64_t ignored_second, uint8_t flag)
{
    void *const child = owner->child_0x08;
    if (child == nullptr) return 0;
    return fn_01441160(child, 0, flag);
}
