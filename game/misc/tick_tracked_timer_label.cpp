// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: clears a tracked timer's reset word, runs its after-step hook, counts the step, and labels the timer every seventh hold.
#include <cstddef>
#include <cstdint>

#include "../engine/engine.h"
#include "../engine/static_wide_string.h"
#include "runtime/original.h"
#include "tracked_timer.h"

namespace {

RT_GLOBAL(0x04dc0d20, label_text, const char16_t);

RT_ORIGINAL(0x02a295d0, assign_label_text, void(engine::WideString *label, const char16_t *text));
RT_ORIGINAL(0x01385b10, report_label, void(uint32_t key, const char16_t *text));

/** The key the label is reported under. */
constexpr uint32_t label_key = 0x59682f01;

/** A timer whose hold count plus one passes this number is labelled on this step. */
constexpr uint32_t label_hold_limit = 6;

}  // namespace

/**
 *
 * Clears the timer counter, runs its after-step hook, and counts the step. Once the hold count plus one
 * passes the limit, a label is built in a temporary wide string on the default allocator and reported under its key.
 */
extern "C" void bb_misc_tick_tracked_timer_label(misc::TrackedTimer *timer)
{
    timer->counter = 0;
    timer->vtable->after_step(timer);
    timer->step_count = static_cast<int32_t>(static_cast<uint32_t>(timer->step_count) + 1u);

    if (static_cast<uint32_t>(timer->hold_count) + 1u > label_hold_limit) {
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
}
