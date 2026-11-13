// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: counts a group's member count plus the set (nonzero) first words of its member tracks and its auxiliary track.
#include <cstdint>

#include "member_index_group.h"
#include "member_track.h"
#include "track_item_list.h"

namespace {

/** The flag bit that makes the count return its flagged result at once. */
constexpr uint8_t flag_bit = 0x01;
/** The result when the flag bit is set. */
constexpr int32_t flagged_result = 1;

/** Counts the items of a track whose first word is nonzero; a missing track or one with no items counts none. */
int32_t set_item_count(const misc::MemberTrack *track)
{
    if (track == nullptr) return 0;
    int32_t set = 0;
    for (int32_t index = 0; index < track->item_count; ++index) {
        if (track->item_list->items[index].zero_test != 0) ++set;
    }
    return set;
}

}  // namespace

/**
 *
 * Returns 1 when the flag bit of the second argument is set. Otherwise returns the group's member count plus the
 * number of items with a nonzero first word in each member's track and in the group's auxiliary track. A group
 * with no members counts only its auxiliary track, and a negative member count is kept as it is in the total.
 */
extern "C" int32_t bb_misc_count_set_track_items(misc::MemberIndexGroup *group, uint8_t flags)
{
    if ((flags & flag_bit) != 0) return flagged_result;

    int32_t total = group->member_count;
    for (int32_t position = 0; position < group->member_count; ++position) {
        total += set_item_count(group->members[position]->track);
    }
    total += set_item_count(group->aux_track);
    return total;
}
