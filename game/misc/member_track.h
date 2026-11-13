// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

#include "track_item_list.h"

namespace misc {

/**
 *
 * A track of items that a group member or the group's auxiliary track owns.
 *
 */
struct MemberTrack {
    uint8_t unknown_0x0000[0x10];
    TrackItemList *item_list; /**< The track's items. */
    int32_t item_count;       /**< Number of items; zero or less means none are counted. */
};
static_assert(offsetof(MemberTrack, item_list) == 0x10);
static_assert(offsetof(MemberTrack, item_count) == 0x18);

}  // namespace misc
