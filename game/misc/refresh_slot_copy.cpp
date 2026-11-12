// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: refreshes a slot record's copy after a helper call, and returns the source word it copied.
#include <cstdint>

#include "runtime/original.h"
#include "slot_refresh_record.h"

namespace {

/** The helper seen as taking the six integer argument registers and returning an integer. */
using SixArgumentHelper = uint64_t(void *first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02262760, refresh_helper, SixArgumentHelper);

}  // namespace

/**
 *
 * Runs the helper on the record and every argument it was given, then copies the record's source word
 * into its copy and clears the flag. The source word is read again after the helper, and it is returned.
 */
extern "C" uint64_t bb_misc_refresh_slot_copy(misc::SlotRefreshRecord *record, uint64_t second, uint64_t third,
                                              uint64_t fourth, uint64_t fifth, uint64_t sixth)
{
    refresh_helper(record, second, third, fourth, fifth, sixth);
    record->copy = record->source;
    record->flag = 0;
    return record->source;
}
