// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "flagged_member.h"
#include "misc.h"
#include "runtime/original.h"
#include "slot_object.h"
#include "two_base_object.h"
#include "two_base_vtable.h"

namespace {

/** The static vtable block that the object's two base subobjects point into. */
RT_GLOBAL(0x0553c5d0, two_base_vtable, misc::TwoBaseVtable);
/** Releases a flagged member through its release routine. */
RT_ORIGINAL(0x0045a4c0, release_flagged_member, void(misc::FlaggedMember *member));

/** The count at or below which a flagged member is marked. */
constexpr int32_t flag_count_threshold = 1;
/** The value a flagged member's flag is set to. */
constexpr uint8_t flag_set = 1;

/**
 *
 * Marks a flagged member when its count is at or below the threshold, then releases it when it exists.
 */
void release_member(misc::FlaggedMember *member)
{
    if (member->count_0xe4 <= flag_count_threshold) member->flag_0xec = flag_set;
    if (member != nullptr) release_flagged_member(member);
}

/**
 *
 * Gives the object its two vtables, releases its flagged member, calls the slot object's slot, then hands
 * the object to the scratch service's release and returns that result.
 */
uint64_t release_two_base_object(misc::TwoBaseObject *object)
{
    object->primary_vtable = &two_base_vtable.address()->primary_address_point;
    object->secondary_vtable = &two_base_vtable.address()->secondary_address_point;
    release_member(object->member_0x40);
    if (object->slot_object_0x28 != nullptr) {
        object->slot_object_0x28->vtable->slot_0x18(object->slot_object_0x28, object->value_0x30);
    }
    misc::Service *scratch = misc::scratch_service.get();
    return scratch->vtable->release(scratch, object);
}

}  // namespace

/**
 *
 * Releases a two-base object through its primary base and returns the scratch service's result.
 */
extern "C" uint64_t bb_misc_release_two_base_object(misc::TwoBaseObject *object)
{
    return release_two_base_object(object);
}
