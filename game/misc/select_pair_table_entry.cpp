// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: picks one of the two words of a row in the pair table, by a row index and a flag byte.
//
// misc_select_pair_table_entry (0x0139bcc0) reads the table at 0x056f1e80, whose rows are two qwords each.
// The row is the second argument and the word is chosen by the low bit of the flag inverted, so flag zero
// selects the second word and flag one the first. The first argument is not read.
#include <cstdint>

#include "runtime/original.h"

namespace {

// Qwords in one row of the pair table.
constexpr uint64_t pair_words_per_row = 2;

RT_GLOBAL(0x056f1e80, pair_table, uint64_t);

}  // namespace

/**
 *
 * Returns the word of the pair table at the row, in the column given by the flag's low byte inverted.
 *
 * Only the low byte of the flag is used, and the first argument is not read.
 */
extern "C" uint64_t bb_misc_select_pair_table_entry([[maybe_unused]] uint64_t ignored_first, uint32_t row, uint8_t flag)
{
    const uint64_t column = static_cast<uint64_t>(flag) ^ 1;
    return pair_table.address()[static_cast<uint64_t>(row) * pair_words_per_row + column];
}
