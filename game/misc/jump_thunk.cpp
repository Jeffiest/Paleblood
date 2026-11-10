// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// misc_jump_thunk (0x00ad8840) is a single jump to the function at 0x00ad8850. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.
#include <cstdint>

#include "runtime/original.h"

namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ad8850, fn_00ad8850, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_misc_jump_thunk(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ad8850(first, second, third, fourth, fifth, sixth);
}
