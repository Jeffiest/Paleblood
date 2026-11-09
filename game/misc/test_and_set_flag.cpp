// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: reports whether a record's flag byte was already set, and sets it when it was clear.
#include <cstddef>
#include <cstdint>

namespace {

/** A record whose flag byte at 0x0c is tested and set once. */
struct FlaggedRecord {
    uint8_t unknown_0x00[0x0c];
    uint8_t flag_0x0c;       /**< Zero until the first claim, then nonzero. */
};
static_assert(offsetof(FlaggedRecord, flag_0x0c) == 0x0c);

}  // namespace

/**
 *
 * Returns whether the record's flag was already set, and sets the flag when it was clear.
 *
 * The flag is tested as its whole byte; a set flag is left as it is.
 */
extern "C" bool bb_misc_test_and_set_flag(FlaggedRecord *record)
{
    const bool was_set = record->flag_0x0c != 0;
    if (!was_set) record->flag_0x0c = 1;
    return was_set;
}
