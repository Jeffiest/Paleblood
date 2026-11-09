// SPDX-License-Identifier: GPL-2.0-or-later
// Reads the double at offset 0x50 of the block that the builder returns. The block starts with the
// game's default values, and the builder fills in the rest.
#include "misc.h"

/**
 *
 * Builds a default scratch block, runs the builder on it and returns the double at offset 0x50 of the result.
 *
 */
extern "C" double bb_misc_scratch_value_50(misc::ScratchSource *source)
{
    misc::ScratchBlock block = misc::default_scratch_block();
    const misc::ScratchBlock *result = misc::build_scratch_block(source, &block);
    return result->value_50;
}
