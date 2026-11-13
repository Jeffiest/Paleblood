// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * One item of a track: its first word is tested for zero, the rest is not read by the track routines.
 *
 */
struct TrackItem {
    uint64_t zero_test;            /**< Compared with zero when the track's items are counted. */
    uint8_t unknown_0x0008[0x40];
};
static_assert(offsetof(TrackItem, zero_test) == 0x00);
static_assert(sizeof(TrackItem) == 0x48);

/**
 *
 * The list of a track's items: a header, then the items in order.
 *
 */
struct TrackItemList {
    uint8_t unknown_0x0000[0x20];
    TrackItem items[1]; /**< The first item; the list continues with as many items as the track holds. */
};
static_assert(offsetof(TrackItemList, items) == 0x20);

}  // namespace misc
