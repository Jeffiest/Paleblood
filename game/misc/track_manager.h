// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * One track's timing record: the frame count that a timer is reloaded with.
 *
 */
struct TrackRecord {
    uint8_t unknown_0x0000[0x920];
    uint32_t frames;                /**< The frame count a timer on this track is reloaded with. */
};
static_assert(offsetof(TrackRecord, frames) == 0x920);

/**
 *
 * The track manager singleton: it holds the timing record that the timers read their reload value from.
 *
 */
struct TrackManager {
    uint8_t unknown_0x0000[0x18];
    TrackRecord *track;             /**< The record the reload value is read from; it may be null. */
};
static_assert(offsetof(TrackManager, track) == 0x18);

}  // namespace misc
