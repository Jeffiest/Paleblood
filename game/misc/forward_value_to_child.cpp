// SPDX-License-Identifier: GPL-2.0-or-later
#include "value_owner.h"

/**
 *
 * Records the value in the owner's word at +0x138, then hands it to the child and returns the child's result.
 *
 * With no child the value is still recorded and the result is zero.
 */
extern "C" uint64_t bb_misc_forward_value_to_child(misc::ValueOwner *owner, uint64_t value)
{
    owner->word_0x138 = value;
    misc::ValueChild *child = owner->child_0x90;
    if (child == nullptr) return 0;
    return child->vtable->handle_0x60(child, value);
}
