// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: advances a counted range: an empty range returns its begin; otherwise the step gate chooses a route, and the counter moves with the route's result.
#include <cstddef>
#include <cstdint>

#include "../engine/engine.h"
#include "counted_range.h"
#include "runtime/original.h"
#include "step_gate.h"
#include "track_manager.h"

namespace {

RT_GLOBAL(0x0593b120, step_gate_instance, misc::StepGate *);
RT_GLOBAL(0x04d3ad45, step_gate_name, const char);
RT_GLOBAL(0x05940288, track_manager_instance, misc::TrackManager *);
RT_GLOBAL(0x04d3a919, track_manager_name, const char);

RT_ORIGINAL(0x0225fce0, counted_route,
            uint64_t(misc::CountedRange *range, uint32_t route, uint64_t rdx, uint64_t rcx, uint64_t r8, uint64_t r9));

/** The route taken when the gate's mode bit is clear, and the two routes a counted advance takes. */
constexpr uint8_t counted_mode_bit = 0x02;
constexpr uint32_t plain_route = 0;
constexpr uint32_t reset_route = 1;

/** The threshold used when the track has no record. */
constexpr int32_t default_threshold = 5;

}  // namespace

/**
 *
 * Advances the range. An empty range returns its begin word. Otherwise, when the step gate's mode bit is clear, the
 * plain route is returned as it is. When it is set, the counter is compared with the track's threshold: below it the
 * plain route runs and the counter moves on when its result is nonzero; at or above it the reset route runs and the
 * counter is cleared when its result is nonzero. The route's result is the advance's result.
 */
extern "C" uint64_t bb_misc_advance_counted_range(misc::CountedRange *range, uint64_t /* the original never reads RSI */, uint64_t rdx,
                                                  uint64_t rcx, uint64_t r8, uint64_t r9)
{
    if (range->begin == range->end) return range->begin;

    const misc::StepGate *gate = engine::require(step_gate_instance, step_gate_name.address());
    if ((gate->mode_flags & counted_mode_bit) == 0) return counted_route(range, plain_route, rdx, rcx, r8, r9);

    const misc::TrackManager *manager = engine::require(track_manager_instance, track_manager_name.address());
    const misc::TrackRecord *track = manager->track;
    int32_t threshold = default_threshold;
    if (track != nullptr) threshold = static_cast<int32_t>(track->label_threshold);

    const uint64_t track_word = reinterpret_cast<uint64_t>(track);
    if (static_cast<int32_t>(range->counter) < threshold) {
        const uint64_t result = counted_route(range, plain_route, rdx, track_word, r8, r9);
        if (static_cast<uint32_t>(result) != 0) range->counter = range->counter + 1;
        return result;
    }
    const uint64_t result = counted_route(range, reset_route, rdx, track_word, r8, r9);
    if (static_cast<uint32_t>(result) != 0) range->counter = 0;
    return result;
}
