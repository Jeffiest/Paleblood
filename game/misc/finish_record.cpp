// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: finishes a record through its virtual table, then frees the record when the caller asks for it.
#include <cstdint>

#include "runtime/original.h"
#include "vcall_record.h"

namespace {

RT_ORIGINAL(0x02fbe588, free_block, uint64_t(void *block));

}  // namespace

/**
 *
 * Finishes the record through its finish slot and returns the slot's result. When the release flag is set the
 * record's block is freed as well and the free's result is returned instead.
 *
 */
extern "C" uint64_t bb_misc_finish_record(misc::VcallRecord *record, bool release)
{
    const uint64_t finished = record->vtable->finish_0x28(record);
    if (!release) {
        return finished;
    }
    return free_block(record);
}
