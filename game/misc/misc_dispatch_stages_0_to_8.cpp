// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "runtime/original.h"

namespace {

struct StageOwner;
struct StageTarget;

/** Stage index the final, tail-called stage runs with. */
constexpr uint32_t final_stage = 8;

RT_ORIGINAL(0x01e58c30, fn_01e58c30, uint64_t(StageTarget *, StageOwner *, uint32_t));

}  // namespace

/**
 *
 * Runs the stage callee for stages 0 to 7 in order, then returns the stage 8 callee's result.
 *
 * Each call gets the target, the owner and the stage index. The earlier results are not used. A
 * null target returns without calling anything, and that path leaves the result register as the
 * caller set it, so the replacement returns 0 there.
 */
extern "C" uint64_t bb_misc_dispatch_stages_0_to_8(StageOwner *owner, StageTarget *target)
{
    if (target == nullptr) return 0;

    for (uint32_t stage = 0; stage < final_stage; ++stage) {
        fn_01e58c30(target, owner, stage);
    }
    return fn_01e58c30(target, owner, final_stage);
}
