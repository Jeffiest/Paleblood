// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: resets a counted word object: sets its virtual table, clears its word and releases the word's count.
#include <cstdint>

#include "counted_word_object.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x01e8bed0, assign_counted_word, uint64_t(uint32_t *destination, const uint32_t *source, uint64_t, uint64_t,
                                                     uint64_t, uint64_t));
RT_ORIGINAL(0x01e8bc00, release_counted_word, void(uint32_t *word_slot, uint64_t, uint64_t, uint64_t, uint64_t,
                                                   uint64_t));

}  // namespace

/**
 *
 * Sets the object's virtual table, assigns the zero word to the object's word, which releases the count the old word
 * held, and then runs the entry decrement on that word, which is zero by then and so changes nothing.
 *
 * The last four integer registers are passed on to the routines the reset calls: their reports read the last two.
 *
 */
extern "C" void bb_misc_reset_counted_word_object_01e90ac0(misc::CountedWordObject *object, uint64_t,
                                                          uint64_t caller_rdx, uint64_t caller_rcx,
                                                          uint64_t report_arg_0, uint64_t report_arg_1)
{
    object->vtable_0x00 = misc::counted_word_vtable.address();
    const uint32_t zero_word = 0;
    assign_counted_word(&object->word_0x0c, &zero_word, caller_rdx, caller_rcx, report_arg_0, report_arg_1);
    release_counted_word(&object->word_0x0c, 0, 0, 0, report_arg_0, report_arg_1);
}
