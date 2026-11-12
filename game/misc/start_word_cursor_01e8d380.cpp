// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: starts a word cursor from a word, clearing its block; a negative word tagged for the handler is passed on to it.
#include <cstdint>

#include "runtime/original.h"
#include "word_cursor.h"

namespace {

RT_ORIGINAL(0x01e89070, fn_01e89070, uint64_t(misc::WordCursor *cursor, const uint32_t *word, uint64_t, uint64_t,
                                              uint64_t, uint64_t));

constexpr uint32_t kTagShift = 28;      /**< The tag sits in the three bits from 28 of a negative word. */
constexpr uint32_t kTagMask = 0x7;      /**< Three bits of tag. */
constexpr uint32_t kHandlerTag = 4;     /**< The tag that hands the word on to the handler. */
constexpr int32_t kNoIndex = -1;        /**< The index a fresh cursor holds: none is set. */
constexpr uint64_t kExtractControl = 0x31c; /**< The bit-field control the tag extraction leaves in RCX for the handler. */

}  // namespace

/**
 *
 * Stores the word in the cursor, clears the cursor's block and sets its index to none. A word that is not negative
 * is returned as it is. A negative word whose tag is the handler's tag is returned by the handler, which is given the
 * cursor, the word, the bit-field control the extraction left in RCX and the other integer registers unchanged; any other negative word returns its tag.
 *
 */
extern "C" uint64_t bb_misc_start_word_cursor_01e8d380(misc::WordCursor *cursor, const uint32_t *word,
                                                        uint64_t third_arg, uint64_t,
                                                        uint64_t fifth_arg, uint64_t sixth_arg)
{
    cursor->word_0x00 = *word;
    cursor->block_0x08 = nullptr;
    cursor->index_0x10 = kNoIndex;
    const uint32_t stored = *word;
    if (static_cast<int32_t>(stored) >= 0) return stored;
    const uint32_t tag = (stored >> kTagShift) & kTagMask;
    if (tag == kHandlerTag) return fn_01e89070(cursor, word, third_arg, kExtractControl, fifth_arg, sixth_arg);
    return tag;
}
