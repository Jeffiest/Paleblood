// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: clears a cleared record's words from the last to the first, stores the tag and returns zero.
#include <cstddef>
#include <cstdint>

#include "cleared_record.h"

namespace {

/** The value the routine returns: the original leaves RAX at zero. */
constexpr uint64_t cleared_return = 0x0;

}  // namespace

/**
 *
 * Clears the record's fifteen words, from the last to the first, then stores the first argument in the tag word.
 *
 * The routine returns zero in RAX, so the caller always sees zero.
 */
extern "C" uint64_t bb_misc_clear_record_tag_02b4e390(uint64_t tag, misc::ClearedRecord *record)
{
    for (size_t index = misc::cleared_word_count; index > 0; --index) record->words[index - 1] = 0;
    record->tag_0x78 = tag;
    return cleared_return;
}
