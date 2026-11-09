// SPDX-License-Identifier: GPL-2.0-or-later
#include "misc.h"

namespace {

/** The flag bit of a record's tagged link, which is not part of the address. */
constexpr uint64_t link_flag_bit = 0x1;

}  // namespace

/**
 *
 * Returns the address held in a lookup record's tagged link, with its flag bit cleared.
 *
 * The record is only read, and nothing is reported for any value of the link.
 */
extern "C" uint64_t bb_misc_record_link_address(misc::LookupRecord *record)
{
    return record->tagged_word_10 & ~link_flag_bit;
}
