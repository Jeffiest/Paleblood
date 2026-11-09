// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

/** Owner flag bit that makes the call answer true without asking the child. */
constexpr uint8_t owner_flag_skip = 0x2;

/** Answer given when the owner flag is set. */
constexpr uint8_t skipped_answer = 1;

struct ApplyChild;

struct ApplyChildVtable {
    uint8_t unknown_0x0000[0x4b0];
    uint8_t (*apply)(ApplyChild *child, uint32_t value);
};
static_assert(offsetof(ApplyChildVtable, apply) == 0x4b0);

struct ApplyChild {
    const ApplyChildVtable *vtable;
};

struct ApplyOwner {
    uint8_t unknown_0x0000[0x8];
    ApplyChild *child;
    uint8_t unknown_0x0010[0x1f0];
    uint8_t flags_0x0200;
};
static_assert(offsetof(ApplyOwner, child) == 0x8);
static_assert(offsetof(ApplyOwner, flags_0x0200) == 0x200);

}  // namespace

/**
 *
 * Answers true when the owner's skip flag is set, otherwise returns the child's answer to the value.
 *
 * The value is taken as its low byte and passed to the child's virtual apply with its upper bits
 * clear. Only the low byte of the answer is returned.
 */
extern "C" uint8_t bb_misc_apply_child_unless_flagged(ApplyOwner *owner, uint8_t value)
{
    if ((owner->flags_0x0200 & owner_flag_skip) != 0) return skipped_answer;

    ApplyChild *child = owner->child;
    return child->vtable->apply(child, static_cast<uint32_t>(value));
}
