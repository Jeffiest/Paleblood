// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: stores a counted word block slot's word in a destination, counting it there, then assigns the zero word to the slot.
#include <cstdint>

#include "counted_word_block.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x01e8bae0, store_word_and_count, uint64_t(uint32_t *destination, const uint32_t *word, uint64_t, uint64_t,
                                                       uint64_t, uint64_t));
RT_ORIGINAL(0x01e8bed0, assign_counted_word, uint64_t(uint32_t *destination, const uint32_t *source, uint64_t, uint64_t,
                                                     uint64_t, uint64_t));

}  // namespace

/**
 *
 * Stores the word of the block slot at index in the destination, counting it there, and then assigns the zero word to
 * that slot, which releases the count the word held.
 *
 * Only the low 32 bits of the index register are used; the full register is passed on to the routines this calls, as
 * the original leaves it. The last two integer registers are passed on too: their reports read them.
 *
 * Returns the destination, as the original leaves it in RAX.
 *
 */
extern "C" uint64_t bb_misc_store_and_clear_block_slot_01e91a50(uint32_t *destination, misc::CountedWordBlock *block,
                                                               uint64_t index_register, uint64_t caller_rcx,
                                                               uint64_t report_arg_0, uint64_t report_arg_1)
{
    const uint32_t index = static_cast<uint32_t>(index_register);
    uint32_t *slot_word = &block->slots[index].word_0x0c;
    store_word_and_count(destination, slot_word, index_register, caller_rcx, report_arg_0, report_arg_1);
    const uint32_t zero_word = 0;
    assign_counted_word(slot_word, &zero_word, index_register, caller_rcx, report_arg_0, report_arg_1);
    return reinterpret_cast<uint64_t>(destination);
}
