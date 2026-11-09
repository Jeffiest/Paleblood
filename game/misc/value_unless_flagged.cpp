// SPDX-License-Identifier: GPL-2.0-or-later
// Returns zero when the flags byte has bit 0x80 set; otherwise returns the word at 0x20 of the holder's
// source. Only the low byte of the flags argument is read.
#include "misc.h"

namespace {

/** Flags bit that makes the lookup return zero. */
constexpr uint8_t suppress_flag = 0x80;

}  // namespace

/**
 *
 * Returns the source's word unless the flags byte has the suppress bit, in which case it returns zero.
 *
 */
extern "C" uint64_t bb_misc_value_unless_flagged(const misc::WordHolder *holder, uint8_t flags)
{
    if ((flags & suppress_flag) != 0) return 0;
    return holder->source_0x10->word_0x20;
}
