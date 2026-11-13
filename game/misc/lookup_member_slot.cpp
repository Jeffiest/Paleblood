// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: looks up a member slot in a group's slot table when given a slot, else reports the group's first member.
#include <cstdint>

#include "member_index_group.h"
#include "keyed_slot_table.h"
#include "runtime/original.h"

namespace {

// Finds the value stored under a key in a slot table, or the default when the key is absent.
RT_ORIGINAL(0x028c7fe0, find_slot_value, uint64_t(misc::KeyedSlotTable *table, int64_t key, int64_t missing));

/** The default a slot lookup returns for a key that is not in the table. */
constexpr int64_t missing_slot_value = -1;
/** The result when the group has no members, or its first member is registered. */
constexpr uint64_t unregistered_result = 0xffffffff;
/** The result when the group's first member has no slot index. */
constexpr uint64_t unset_first_member_result = 0;
/** The slot value that asks for the group's first member instead of a lookup. */
constexpr int32_t no_slot = 0;

}  // namespace

/**
 *
 * Returns the slot table's value for the given slot when the slot is nonzero, using minus one as the default.
 *
 * With a zero slot the result depends on the group's first member: when the group has members and the first
 * member has no slot index the result is zero, and otherwise it is the 32-bit value 0xffffffff, zero-extended.
 */
extern "C" uint64_t bb_misc_lookup_member_slot(misc::MemberIndexGroup *group, int32_t slot)
{
    if (slot != no_slot) return find_slot_value(group->cell, slot, missing_slot_value);
    if (group->member_count != 0 && group->members[0]->slot_index == 0) return unset_first_member_result;
    return unregistered_result;
}
