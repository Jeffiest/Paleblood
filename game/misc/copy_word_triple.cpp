// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: copies three 32-bit words from a source record into a target record, and returns the last word it read.
#include <cstdint>

#include "word_triple_target.h"

/**
 *
 * Copies the source's three words into the target's three words, in order, one word at a time.
 *
 * The original leaves the last word it read in RAX, zero-extended, so that value is returned.
 *
 */
extern "C" uint64_t bb_misc_copy_word_triple(misc::WordTripleTarget *target, const misc::WordTripleSource *source)
{
    target->word_0x08 = source->word_0x00;
    target->word_0x0c = source->word_0x04;
    const uint32_t last_word = source->word_0x08;
    target->word_0x10 = last_word;
    return last_word;
}
