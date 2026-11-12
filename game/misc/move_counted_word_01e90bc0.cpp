// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: stores a counted word object's word in a destination, counting it, then clears the object's word.
#include <cstdint>

#include "counted_word_object.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x01e8bae0, store_word_and_count, uint64_t(uint32_t *destination, const uint32_t *word, uint64_t, uint64_t,
                                                       uint64_t, uint64_t));
RT_ORIGINAL(0x01e8bed0, assign_counted_word, uint64_t(uint32_t *destination, const uint32_t *source, uint64_t, uint64_t,
                                                     uint64_t, uint64_t));

}  // namespace

/**
 *
 * Stores the object's word in the destination, counting it there, and then assigns the zero word to the object's word,
 * which releases the count the word held.
 *
 * Returns the destination, as the original leaves it in RAX. The last four integer registers are passed on to the
 * routines this calls: their reports read the last two.
 *
 */
extern "C" uint64_t bb_misc_move_counted_word_01e90bc0(uint32_t *destination, misc::CountedWordObject *object,
                                                      uint64_t caller_rdx, uint64_t caller_rcx,
                                                      uint64_t report_arg_0, uint64_t report_arg_1)
{
    store_word_and_count(destination, &object->word_0x0c, caller_rdx, caller_rcx, report_arg_0, report_arg_1);
    const uint32_t zero_word = 0;
    assign_counted_word(&object->word_0x0c, &zero_word, caller_rdx, caller_rcx, report_arg_0, report_arg_1);
    return reinterpret_cast<uint64_t>(destination);
}
