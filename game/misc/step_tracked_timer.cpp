// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: advances a tracked timer by one step, reloading it from its track when it has run out or was armed.
#include <cstdint>

#include "../engine/engine.h"
#include "runtime/original.h"
#include "step_gate.h"
#include "step_timing.h"
#include "track_manager.h"
#include "tracked_timer.h"

namespace {

RT_GLOBAL(0x0593b120, step_gate_instance, misc::StepGate *);
RT_GLOBAL(0x04d3ad45, step_gate_name, const char);
RT_GLOBAL(0x05940288, track_manager_instance, misc::TrackManager *);
RT_GLOBAL(0x04d3a919, track_manager_name, const char);
RT_GLOBAL(0x04d29048, fallback_remaining, float);

RT_ORIGINAL(0x022a06d0, set_track_value, void(misc::TrackManager *manager, uint64_t *value, int32_t index));

/** The top byte of the gate's kind word, and the kind that carries a value through it. */
constexpr uint32_t kind_mask = 0xff000000;
constexpr uint32_t kind_with_value = 0x1d000000;

/** The track index of a timer that is not registered on any track. */
constexpr int32_t no_track = -1;

}  // namespace

/**
 *
 * Advances a tracked timer by the step's elapsed time, when the step gate allows it.
 *
 * The timer's remaining time drops by the delta. When the timer was armed or has run out, it is set
 * on its track first, if it has one, and then reloaded from the track's frame count, or from the
 * fallback when the track has no record. The armed flag is cleared at the end of every step that runs.
 */
extern "C" void bb_misc_step_tracked_timer(misc::TrackedTimer *timer, const misc::StepTiming *timing)
{
    const misc::StepGate *gate = engine::require(step_gate_instance, step_gate_name.address());
    if (gate->enabled == 0 || gate->suspended != 0 || gate->frozen != 0 || gate->locked != 0) return;

    timer->remaining -= timing->delta;
    if (timer->armed != 0 || timer->remaining < 0.0f) {
        if (timer->track_index != no_track) {
            uint64_t value = 0;
            if ((gate->kind_word & kind_mask) == kind_with_value) value = gate->kind_value;
            set_track_value(engine::require(track_manager_instance, track_manager_name.address()), &value,
                            timer->track_index);
        }
        const misc::TrackManager *manager = engine::require(track_manager_instance, track_manager_name.address());
        if (manager->track != nullptr) {
            timer->remaining = static_cast<float>(manager->track->frames);
        } else {
            timer->remaining = fallback_remaining.get();
        }
    }
    timer->armed = 0;
}
