// SPDX-License-Identifier: GPL-2.0-or-later
// Returns the word at 0x20 of the holder's source, with no check on the pointer.
#include "misc.h"

/**
 *
 * Returns the word that the holder's source keeps at offset 0x20.
 *
 */
extern "C" uint64_t bb_misc_read_source_word(const misc::WordHolder *holder)
{
    return holder->source_0x10->word_0x20;
}
