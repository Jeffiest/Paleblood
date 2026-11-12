// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "forwarding_pair_object.h"
#include "runtime/original.h"

namespace {

// Releases the member object of a forwarding pair (0x00836840), taking the member's address.
RT_ORIGINAL(0x00836840, destroy_member, void(void *member));
// Receives the object after its member is released; its result is the result of the routine.
RT_ORIGINAL(0x00cd4000, fn_00cd4000, uint64_t(misc::ForwardingPairObject *object));

}  // namespace

/**
 *
 * Releases the member of a forwarding pair object and hands the object on to the next stage.
 *
 * Returns the next stage's result as it is.
 */
extern "C" uint64_t bb_misc_destroy_member_then_forward(misc::ForwardingPairObject *object)
{
    destroy_member(&object->member);
    return fn_00cd4000(object);
}
