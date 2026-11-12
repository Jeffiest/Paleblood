// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x0225b8e0, fn_0225b8e0, uint64_t(void **slot, void *source, uint32_t flag));

}  // namespace

/**
 *
 * Forwards its two arguments to the routine with the flag cleared, and returns that result.
 *
 */
extern "C" uint64_t bb_misc_forward_with_zero_flag(void **slot, void *source)
{
    const uint32_t cleared_flag = 0;
    return fn_0225b8e0(slot, source, cleared_flag);
}
