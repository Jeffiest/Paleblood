// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: assigns a source word to one counted word slot of a counted word block when the slot's mask shares a bit with the value its word cursor gives.
#include <cstdint>

#include "counted_word_block.h"
#include "runtime/original.h"
#include "word_cursor.h"

namespace {

RT_ORIGINAL(0x01e89070, fn_01e89070, uint64_t(misc::WordCursor *cursor, uint64_t index_register, const uint32_t *source,
                                             uint64_t, uint64_t, uint64_t));
RT_ORIGINAL(0x01e8bed0, assign_counted_word, uint64_t(uint32_t *destination, const uint32_t *source, uint64_t, uint64_t,
                                                     uint64_t, uint64_t));

constexpr uint32_t kTagShift = 28;          /**< The tag sits in the three bits from 28 of a negative word. */
constexpr uint32_t kTagMask = 0x7;          /**< Three bits of tag. */
constexpr uint32_t kHandlerTag = 4;         /**< The tag that hands the word to the cursor handler. */
constexpr uint64_t kExtractControl = 0x31c; /**< The bit-field control the tag extraction leaves in RCX for the handler. */

}  // namespace

/**
 *
 * Assigns the source word to the word of the block slot at index when the slot's mask shares a bit with the value the
 * word's cursor gives. A negative source word tagged for the handler is first passed to the handler with a cursor, and
 * the value is read from the block the handler leaves; any other word has no value, so nothing is assigned.
 *
 * Only the low 32 bits of the index register are used. Returns one when the word was assigned and zero otherwise. The
 * assignment receives the value and the slot's mask in the second and third integer registers the original sets; the
 * last two integer registers are passed on to the routines this calls: their reports read them.
 *
 */
extern "C" uint64_t bb_misc_assign_block_slot_word_01e91990(misc::CountedWordBlock *block, uint64_t index_register,
                                                           const uint32_t *source, uint64_t,
                                                           uint64_t report_arg_0, uint64_t report_arg_1)
{
    const uint32_t index = static_cast<uint32_t>(index_register);
    misc::WordCursor cursor;
    cursor.word_0x00 = *source;
    cursor.block_0x08 = nullptr;
    cursor.index_0x10 = -1;
    uint32_t block_value = 0;
    const uint32_t word = *source;
    if (static_cast<int32_t>(word) < 0) {
        const uint32_t tag = (word >> kTagShift) & kTagMask;
        if (tag == kHandlerTag) {
            fn_01e89070(&cursor, index_register, source, kExtractControl, report_arg_0, report_arg_1);
            if (cursor.block_0x08 != nullptr) block_value = cursor.block_0x08->value_0x1c;
        }
    }
    misc::CountedWordObject &slot = block->slots[index];
    const uint32_t mask = slot.mask_0x08;
    if ((mask & block_value) == 0) return 0;
    assign_counted_word(&slot.word_0x0c, source, block_value, mask, report_arg_0, report_arg_1);
    return 1;
}
