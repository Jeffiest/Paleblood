// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: run the four per-index stages for two indices on one object, the second set last.
#include <cstdint>

#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x02fa5b90, first_stage, void(void *object, uint32_t index, float scale));
RT_ORIGINAL(0x02fa5d70, second_stage, void(void *object, uint32_t index, float scale));
RT_ORIGINAL(0x02fa5e60, third_stage, void(void *object, uint32_t index, float scale));
RT_ORIGINAL(0x02fa5c80, final_stage, uint64_t(void *object, uint32_t index, float scale));

RT_GLOBAL(0x04cb88a4, shared_scale, float);

/** Scale of the first two stages, which the original sets to zero. */
constexpr float zero_scale = 0.0f;

/**
 *
 * Runs the first three stages for one index on the object.
 *
 * The first two stages take a zero scale and the third takes the shared scale.
 */
void run_stages_for_index(void *object, uint32_t index)
{
    first_stage(object, index, zero_scale);
    second_stage(object, index, zero_scale);
    third_stage(object, index, shared_scale.get());
}

}  // namespace

/**
 *
 * Runs the stages for two indices on one object, and returns the result of the final stage.
 *
 * The first index gets three stages and then the final stage with the shared scale, then the second
 * index gets three stages. The final stage for the second index is the tail call whose result is returned.
 */
extern "C" uint64_t bb_misc_run_stages_for_pair(void *object, uint32_t first_index, uint32_t second_index)
{
    run_stages_for_index(object, first_index);
    final_stage(object, first_index, shared_scale.get());
    run_stages_for_index(object, second_index);
    return final_stage(object, second_index, shared_scale.get());
}
