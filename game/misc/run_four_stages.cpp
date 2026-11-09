// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: run four per-index stages on an object, passing each its own float, and return the last.
#include <cstdint>

#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x02fa5b90, first_stage, void(void *object, uint32_t index, float scale));
RT_ORIGINAL(0x02fa5d70, second_stage, void(void *object, uint32_t index, float scale));
RT_ORIGINAL(0x02fa5e60, third_stage, void(void *object, uint32_t index, float scale));
RT_ORIGINAL(0x02fa5c80, final_stage, uint64_t(void *object, uint32_t index, float scale));

RT_GLOBAL(0x04cb8894, first_scale, float);
RT_GLOBAL(0x04cb8898, second_scale, float);
RT_GLOBAL(0x04cb889c, third_scale, float);
RT_GLOBAL(0x04cb88a0, final_scale, float);

}  // namespace

/**
 *
 * Runs the first three stages on the object for one index, then returns the result of the final
 * stage, which takes the same object and index with its own scale.
 *
 * Each stage's scale comes from a constant in the image. The final stage's result is returned as it is.
 */
extern "C" uint64_t bb_misc_run_four_stages(void *object, uint32_t index)
{
    first_stage(object, index, first_scale.get());
    second_stage(object, index, second_scale.get());
    third_stage(object, index, third_scale.get());
    return final_stage(object, index, final_scale.get());
}
