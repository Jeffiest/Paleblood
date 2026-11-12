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
    uint8_t unknown_0x0000[0x8b4];
    uint32_t label_threshold;       /**< The counter value at which the counted range takes its second route. */
    uint8_t unknown_0x08b8[0x68];
    uint32_t frames;                /**< The frame count a timer on this track is reloaded with. */
    uint32_t start_frames;          /**< The frame count a timer on this track starts with. */
};
static_assert(offsetof(TrackRecord, label_threshold) == 0x8b4);
static_assert(offsetof(TrackRecord, frames) == 0x920);
static_assert(offsetof(TrackRecord, start_frames) == 0x924);

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
