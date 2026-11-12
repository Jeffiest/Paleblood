// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: releases the object an owner holds, then takes a reference on the new object and holds it instead.
#include <cstdint>

#include "held_reference_owner.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x0045a510, release_held, uint64_t(void *object));

}  // namespace

/**
 *
 * Releases the object the owner holds when it holds one, adds a reference to the new object when there is one,
 * and makes the owner hold the new object. The result is what the release returns, or zero when nothing was held.
 *
 */
extern "C" uint64_t bb_misc_replace_held_reference(misc::HeldReferenceOwner *owner,
                                                   misc::HeldReference *reference)
{
    uint64_t released = 0;
    if (owner->held_0x1c0 != nullptr) released = release_held(owner->held_0x1c0);
    if (reference != nullptr) reference->count_0x08 += 1;
    owner->held_0x1c0 = reference;
    return released;
}
