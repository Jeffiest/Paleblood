// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "flagged_member.h"
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
 * Gives the object its two vtables, releases its flagged member, then returns the result of the slot object's slot.
 *
 * With no slot object the result is zero.
 */
uint64_t release_member_then_tail(misc::TwoBaseObject *object)
{
    object->primary_vtable = &two_base_vtable.address()->primary_address_point;
    object->secondary_vtable = &two_base_vtable.address()->secondary_address_point;
    release_member(object->member_0x40);
    misc::SlotObject *slot = object->slot_object_0x28;
    if (slot == nullptr) return 0;
    return slot->vtable->slot_0x18(slot, object->value_0x30);
}

}  // namespace

/**
 *
 * Releases a two-base object through its primary base, then returns the result of its slot object's slot.
 */
extern "C" uint64_t bb_misc_release_two_base_member_tail(misc::TwoBaseObject *object)
{
    return release_member_then_tail(object);
}
