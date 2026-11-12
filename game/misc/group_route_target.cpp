// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: picks a member of a group by its route slot or its first member and returns that member's value, or the last record's head.
#include <cstdint>

#include "member_index_group.h"
#include "keyed_slot_table.h"
#include "runtime/original.h"

namespace {

// Finds the value stored under a key in a slot table, or the default when the key is absent.
RT_ORIGINAL(0x028c7fe0, find_slot_value, uint64_t(misc::KeyedSlotTable *table, int64_t key, int64_t missing));

/** The default a slot lookup returns for a key that is not in the table, and the index of no member. */
constexpr int64_t missing_index = -1;
/** The index of the group's first member. */
constexpr int64_t first_member_index = 0;
/** The slot value that picks a member by lookup instead of the first member. */
constexpr int32_t no_route_slot = 0;
/** The count that means the group has records. */
constexpr int32_t no_records = 0;
/** The record whose head is returned is the last one, found from the record count. */
constexpr int32_t last_record_offset = 1;

}  // namespace

/**
 *
 * Returns the head word of the group's last record when the group has records. Otherwise it picks a member: the one
 * the route slot finds in the slot table when that slot is nonzero, else the first member when the group has members
 * and that member has a slot index of zero, else the member at index minus one. The picked member's value is returned.
 */
extern "C" uint64_t bb_misc_group_route_target(misc::MemberIndexGroup *group)
{
    if (group->record_count > no_records) {
        return group->records[group->record_count - last_record_offset].head;
    }

    int64_t member_index = missing_index;
    const int32_t route_slot = group->copy_word_a;
    if (route_slot != no_route_slot) {
        member_index = static_cast<int32_t>(find_slot_value(group->cell, route_slot, missing_index));
    } else if (group->member_count != 0 && group->members[first_member_index]->slot_index == 0) {
        member_index = first_member_index;
    }
    return group->members[member_index]->value;
}
