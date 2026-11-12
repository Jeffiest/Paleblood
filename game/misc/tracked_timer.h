// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct TrackedTimer;

/**
 *
 * The tracked timer's virtual table: the hook that runs after each step, at slot 0x38.
 *
 */
struct TrackedTimerVtable {
    uint8_t unknown_0x0000[0x38];
    void (*after_step)(TrackedTimer *timer); /**< Called on the timer at the end of a step. */
};
static_assert(offsetof(TrackedTimerVtable, after_step) == 0x38);

/**
 *
 * A timer registered on a track: it counts its remaining time down each step and is reloaded from the track.
 *
 */
struct TrackedTimer {
    const TrackedTimerVtable *vtable; /**< The timer's virtual table. */
    uint8_t unknown_0x0008[0x48];
    int32_t hold_count;             /**< The number of steps the timer has been held. */
    int32_t step_count;             /**< The number of steps the timer has seen, wrapping at 32 bits. */
    uint8_t unknown_0x0058[0x70];
    uint8_t armed;                  /**< Nonzero when the timer must be reloaded on the next step. */
    uint8_t unknown_0x00c9[0x03];
    int32_t track_index;            /**< The track the timer is registered on, or minus one for none. */
    uint8_t unknown_0x00d0[0x08];
    float remaining;                /**< The time left on the timer, in seconds. */
};
static_assert(offsetof(TrackedTimer, vtable) == 0x00);
static_assert(offsetof(TrackedTimer, hold_count) == 0x50);
static_assert(offsetof(TrackedTimer, step_count) == 0x54);
static_assert(offsetof(TrackedTimer, armed) == 0xc8);
static_assert(offsetof(TrackedTimer, track_index) == 0xcc);
static_assert(offsetof(TrackedTimer, remaining) == 0xd8);

}  // namespace misc
