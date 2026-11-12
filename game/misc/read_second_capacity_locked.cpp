// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: reads the low word of the list's second capacity under the list's lock.
#include <cstdint>

#include "record_list_object.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x02fbe598, lock_record_list, void(void *lock));
RT_ORIGINAL(0x02fbe5a8, unlock_record_list, uint64_t(void *lock));

}  // namespace

/**
 *
 * Reads the low 32 bits of the list's second capacity under the list's lock and returns them. The unlock's result
 * is not returned.
 *
 */
extern "C" uint32_t bb_misc_read_second_capacity_locked(misc::RecordListObject *list)
{
    lock_record_list(list->lock_0x0170);
    const uint32_t capacity = static_cast<uint32_t>(list->capacity_0x0198);
    unlock_record_list(list->lock_0x0170);
    return capacity;
}
