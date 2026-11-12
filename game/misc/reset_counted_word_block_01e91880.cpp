// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: resets a counted word block: sets its virtual table and, for each of its five objects, sets the counted word
// virtual table, assigns the zero word and releases the count the word held.
#include <cstdint>

#include "counted_word_block.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x01e8bed0, assign_counted_word, uint64_t(uint32_t *destination, const uint32_t *source, uint64_t, uint64_t,
                                                     uint64_t, uint64_t));
RT_ORIGINAL(0x01e8bc00, release_counted_word, void(uint32_t *word_slot, uint64_t, uint64_t, uint64_t, uint64_t,
                                                   uint64_t));

}  // namespace

/**
 *
 * Sets the block's virtual table, then visits its objects from the last slot to the first. Each object gets the counted
 * word virtual table, has the zero word assigned to its word, which releases the count the old word held, and then has
 * that word released again on the entry-decrement path. The block's kind and the masks of its objects are left as they
 * are.
 *
 * The last four integer registers are passed on to the routines this calls: their reports read the last two.
 *
 */
extern "C" void bb_misc_reset_counted_word_block_01e91880(misc::CountedWordBlock *block, uint64_t,
                                                         uint64_t caller_rdx, uint64_t caller_rcx,
                                                         uint64_t report_arg_0, uint64_t report_arg_1)
{
    block->vtable_0x00 = misc::counted_word_block_vtable.address();
    for (uint32_t index = misc::counted_word_block_slot_count; index-- > 0;) {
        misc::CountedWordObject &slot = block->slots[index];
        slot.vtable_0x00 = misc::counted_word_vtable.address();
        const uint32_t zero_word = 0;
        assign_counted_word(&slot.word_0x0c, &zero_word, caller_rdx, caller_rcx, report_arg_0, report_arg_1);
        release_counted_word(&slot.word_0x0c, 0, 0, 0, report_arg_0, report_arg_1);
    }
}
