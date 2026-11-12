// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: reads the second header value of a word cursor's block, or zero when the cursor has no block.
#include <cstdint>

#include "word_cursor.h"

/**
 *
 * Returns the second header value of the cursor's block, or zero when the cursor has no block.
 *
 */
extern "C" uint32_t bb_misc_word_cursor_second_value_01e8d480(const misc::WordCursor *cursor)
{
    const misc::WordCursorBlock *block = cursor->block_0x08;
    if (block == nullptr) return 0;
    return block->value_0x1c;
}
