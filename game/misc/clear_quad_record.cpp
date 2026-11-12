// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: clears a four-word record, all four 64-bit words to zero.
#include <cstdint>

#include "quad_word_record.h"

/**
 *
 * Sets all four 64-bit words of the record to zero, the last word first.
 *
 * The record is written in place and nothing else is touched. Nothing is returned.
 */
extern "C" void bb_misc_clear_quad_record(misc::QuadWordRecord *record)
{
    for (int index = misc::quad_word_count - 1; index >= 0; --index) record->words[index] = 0;
}
