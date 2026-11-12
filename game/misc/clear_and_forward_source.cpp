// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x0225b8e0, fn_0225b8e0, uint64_t(void **slot, void *source, uint32_t flag));

}  // namespace

/**
 *
 * Clears the slot, then, when there is a source, forwards both arguments to the routine with the
 * flag cleared and returns its result.
 *
 * Without a source the original returns with RAX untouched, so this returns zero there.
 *
 */
extern "C" uint64_t bb_misc_clear_and_forward_source(void **slot, void *source)
{
    *slot = nullptr;
    if (source == nullptr)
        return 0;
    const uint32_t cleared_flag = 0;
    return fn_0225b8e0(slot, source, cleared_flag);
}
