// SPDX-License-Identifier: GPL-2.0-or-later
// Engine: points both slots of a counted pair at an owner embedded counted object
// (engine_counted_pair_retarget, 0x004090b0).
//
// The owner count is raised first, so an object already in a slot can be the embedded one.
#include "counted_pair.h"

namespace {

/**
 * Uses added to the owner embedded count before the slots are rebound.
 *
 * Each slot previous object then loses one use.
 */
constexpr uint32_t owner_hold_increment = 2;

}  // namespace

/**
 *
 * Makes both slots of the pair refer to the owner embedded counted object.
 *
 * Each slot previous object loses a use, and an object whose count reaches zero is released.
 * The counts are 32-bit and wrap, so a count that wraps to zero is released like any other zero.
 */
extern "C" void bb_engine_counted_pair_retarget(engine::CountedPair *pair, engine::CountedOwner *owner)
{
    engine::RefCounted *const embedded = &owner->embedded;
    owner->embedded.use_count += owner_hold_increment;

    engine::RefCounted *const previous_first = pair->first;
    if (--previous_first->use_count == 0) engine::counted_release(previous_first);
    pair->first = embedded;

    if (--owner->embedded.use_count == 0) engine::counted_release(embedded);
    ++pair->first->use_count;

    engine::RefCounted *const previous_second = pair->second;
    if (--previous_second->use_count == 0) engine::counted_release(previous_second);
    pair->second = pair->first;
}
