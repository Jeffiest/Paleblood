// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "forwarding_pair_object.h"
#include "runtime/original.h"

namespace {

// Prepares the object for an id (0x0085d9e0), taking the object and the id.
RT_ORIGINAL(0x0085d9e0, fn_0085d9e0, void(misc::ForwardingPairObject *object, uint32_t id));
// Stores the id in the sub-object at 0x30 (0x00c299e0).
RT_ORIGINAL(0x00c299e0, fn_00c299e0, void(misc::ForwardingSubObject *sub_object, uint32_t id));
// Initialises the member at 0x268 (0x00836630); its result is the result of the routine.
RT_ORIGINAL(0x00836630, init_tail_member, uint64_t(misc::ForwardingMember *member));

}  // namespace

/**
 *
 * Prepares a forwarding pair object for an id, stores the id in its sub-object, and initialises its member.
 *
 * Returns the member initialisation's result as it is.
 */
extern "C" uint64_t bb_misc_setup_member_then_forward(misc::ForwardingPairObject *object, uint32_t id)
{
    fn_0085d9e0(object, id);
    fn_00c299e0(&object->sub_object, id);
    return init_tail_member(&object->member);
}
