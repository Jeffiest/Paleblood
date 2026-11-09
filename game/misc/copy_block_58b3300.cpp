// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: copy a 48-byte constant block into the fixed global block at 0x058b3300.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

/** Number of 8-byte words in the copied block. */
constexpr size_t copied_block_words = 6;

/** The block layout: six 8-byte words, copied as a unit. */
using CopiedBlock = uint64_t[copied_block_words];

RT_GLOBAL(0x04cb8b40, source_block, CopiedBlock);
RT_GLOBAL(0x058b3300, target_block, CopiedBlock);

}  // namespace

/**
 *
 * Copies the 48-byte source block at 0x04cb8b40 over the target block at 0x058b3300.
 *
 * Every word is copied in order, and nothing outside the target block is written.
 */
extern "C" void bb_misc_copy_block_58b3300()
{
    for (size_t index = 0; index < copied_block_words; ++index) {
        target_block.get()[index] = source_block.get()[index];
    }
}
