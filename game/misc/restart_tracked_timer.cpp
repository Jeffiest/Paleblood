// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: restarts a tracked timer from its track's start count, counts the step, and labels the timer every few steps.
#include <cstdint>

#include "../engine/engine.h"
#include "../engine/static_wide_string.h"
#include "runtime/original.h"
#include "step_gate.h"
#include "track_manager.h"
#include "tracked_timer.h"

namespace {

RT_GLOBAL(0x0593b120, step_gate_instance, misc::StepGate *);
RT_GLOBAL(0x04d3ad45, step_gate_name, const char);
RT_GLOBAL(0x05940288, track_manager_instance, misc::TrackManager *);
RT_GLOBAL(0x04d29044, fallback_start, float);
RT_GLOBAL(0x04dc0d20, label_text, const char16_t);

RT_ORIGINAL(0x02a295d0, assign_label_text, void(engine::WideString *label, const char16_t *text));
RT_ORIGINAL(0x01385b10, report_label, void(uint32_t key, const char16_t *text));

/** The key the label is reported under. */
constexpr uint32_t label_key = 0x59682f01;

/** A timer whose hold count exceeds this number of steps is labelled on this step. */
constexpr uint32_t hold_limit = 5;

}  // namespace

/**
 *
 * Restarts a tracked timer from its track when the step gate allows it, and counts the step.
 *
 * The timer's remaining time is set to the track's start count, or to the fallback when the track has no record.
 * Once the hold count passes the limit, a label is built in a temporary wide string on the default allocator and
 * reported under its key. The timer's after-step hook runs last, on every step that passes the gate.
 */
extern "C" void bb_misc_restart_tracked_timer(misc::TrackedTimer *timer)
{
    misc::TrackManager *manager = track_manager_instance.get();
    if (manager == nullptr) return;

    const misc::StepGate *gate = engine::require(step_gate_instance, step_gate_name.address());
    if (gate->enabled == 0 || gate->frozen != 0 || gate->suspended != 0 || gate->locked != 0) return;

    const misc::TrackRecord *track = manager->track;
    timer->remaining = track != nullptr ? static_cast<float>(track->start_frames) : fallback_start.get();
    timer->step_count = static_cast<int32_t>(static_cast<uint32_t>(timer->step_count) + 1u);

    if (static_cast<uint32_t>(timer->hold_count) + 1u > hold_limit) {
        engine::Allocator *allocator = engine::static_wide_string::default_allocator.get();
        if (allocator == nullptr) {
            allocator = engine::static_wide_string::acquire_default_allocator();
            engine::static_wide_string::default_allocator.get() = allocator;
        }

        engine::AllocatorInfo info;
        allocator->vtable->info(&info, allocator, 0);
        if ((info.flags & engine::allocator_info_valid) == 0) {
            engine::fatal_error(nullptr, engine::static_wide_string::invalid_heap_line,
                                engine::static_wide_string::invalid_heap_message.address());
        }

        engine::WideString label;
        label.allocator = allocator;
        label.capacity = engine::wide_string_inline_capacity - 1;
        label.size = 0;
        label.inline_text[0] = u'\0';
        label.owns = 1;
        assign_label_text(&label, label_text.address());
        report_label(label_key, label.capacity < engine::wide_string_inline_capacity ? label.inline_text : label.heap);
        engine::wide_string_release(&label);
    }

    timer->vtable->after_step(timer);
}
