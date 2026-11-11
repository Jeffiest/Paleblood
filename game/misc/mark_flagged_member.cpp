// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "flagged_member.h"

namespace {

/** The count at or below which a flagged member is marked. */
constexpr int32_t flag_count_threshold = 1;
/** The value a flagged member's flag is set to. */
constexpr uint8_t flag_set = 1;

}  // namespace

/**
 *
 * Marks a flagged member when its signed count is at or below the threshold, and leaves it alone otherwise.
 */
extern "C" void bb_misc_mark_flagged_member(misc::FlaggedMember *member)
{
    if (member->count_0xe4 <= flag_count_threshold) member->flag_0xec = flag_set;
}
