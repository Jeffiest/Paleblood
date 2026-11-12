// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A timer registered on a track: it counts its remaining time down each step and is reloaded from the track.
 *
 */
struct TrackedTimer {
    uint8_t unknown_0x0000[0xc8];
    uint8_t armed;                  /**< Nonzero when the timer must be reloaded on this step. */
    uint8_t unknown_0x00c9[0x03];
    int32_t track_index;            /**< The track the timer is registered on, or minus one for none. */
    uint8_t unknown_0x00d0[0x08];
    float remaining;                /**< The time left on the timer, in seconds. */
};
static_assert(offsetof(TrackedTimer, armed) == 0xc8);
static_assert(offsetof(TrackedTimer, track_index) == 0xcc);
static_assert(offsetof(TrackedTimer, remaining) == 0xd8);

}  // namespace misc
