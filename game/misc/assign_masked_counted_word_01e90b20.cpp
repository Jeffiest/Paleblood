// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: assigns a source word to a counted word object when the object's mask shares a bit with the value of the word's cursor block.
#include <cstdint>

#include "counted_word_object.h"
#include "runtime/original.h"
#include "word_cursor.h"

namespace {

RT_ORIGINAL(0x01e89070, fn_01e89070, uint64_t(misc::WordCursor *cursor, const uint32_t *word, uint64_t, uint64_t,
                                              uint64_t, uint64_t));
RT_ORIGINAL(0x01e8bed0, assign_counted_word, uint64_t(uint32_t *destination, const uint32_t *source, uint64_t, uint64_t,
                                                     uint64_t, uint64_t));

constexpr uint32_t kTagShift = 28;      /**< The tag sits in the three bits from 28 of a negative word. */
constexpr uint32_t kTagMask = 0x7;      /**< Three bits of tag. */
constexpr uint32_t kHandlerTag = 4;     /**< The tag that hands the word to the cursor handler. */
constexpr uint64_t kExtractControl = 0x31c; /**< The bit-field control the tag extraction leaves in RCX for the handler. */

}  // namespace

/**
 *
 * Assigns the source word to the object's word when the object's mask shares a bit with the value that the word's
 * cursor block holds. A negative source word tagged for the handler is first passed to the handler with a cursor, and
 * the value is read from the block the handler leaves; any other word has no value, so nothing is assigned.
 *
 * Returns one when the word was assigned and zero otherwise. The last four integer registers are passed on to the
 * routines this calls: their reports read the last two.
 *
 */
extern "C" uint64_t bb_misc_assign_masked_counted_word_01e90b20(misc::CountedWordObject *object,
                                                               const uint32_t *source, uint64_t caller_rdx, uint64_t,
                                                               uint64_t report_arg_0, uint64_t report_arg_1)
{
    misc::WordCursor cursor;
    cursor.word_0x00 = *source;
    cursor.block_0x08 = nullptr;
    cursor.index_0x10 = -1;
    uint32_t block_value = 0;
    const uint32_t word = *source;
    if (static_cast<int32_t>(word) < 0) {
        const uint32_t tag = (word >> kTagShift) & kTagMask;
        if (tag == kHandlerTag) {
            fn_01e89070(&cursor, source, caller_rdx, kExtractControl, report_arg_0, report_arg_1);
            if (cursor.block_0x08 != nullptr) block_value = cursor.block_0x08->value_0x1c;
        }
    }
    if ((object->mask_0x08 & block_value) == 0) return 0;
    assign_counted_word(&object->word_0x0c, source, 0, 0, report_arg_0, report_arg_1);
    return 1;
}
