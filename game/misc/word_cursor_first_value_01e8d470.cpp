// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: reads the first header value of a word cursor's block, or zero when the cursor has no block.
#include <cstdint>

#include "word_cursor.h"

/**
 *
 * Returns the first header value of the cursor's block, or zero when the cursor has no block.
 *
 */
extern "C" uint32_t bb_misc_word_cursor_first_value_01e8d470(const misc::WordCursor *cursor)
{
    const misc::WordCursorBlock *block = cursor->block_0x08;
    if (block == nullptr) return 0;
    return block->value_0x18;
}
