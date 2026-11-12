// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: copies an entry of the list's second array into the caller's record when the index is in range, under the list's lock.
#include <cstdint>

#include "record_list_object.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x02fbe598, lock_record_list, void(void *lock));
RT_ORIGINAL(0x02fbe5a8, unlock_record_list, uint64_t(void *lock));

}  // namespace

/**
 *
 * Copies the entry at the index of the list's second array into the record when the index, read as an unsigned
 * 32-bit value, is below the array's capacity. The check and the copy run under the list's lock. The result is
 * true when the entry was copied.
 *
 */
extern "C" bool bb_misc_copy_second_entry_locked(misc::RecordListObject *list, misc::RecordListEntry *record,
                                                 uint32_t index)
{
    lock_record_list(list->lock_0x0170);
    bool copied = false;
    if (static_cast<uint64_t>(index) < list->capacity_0x0198) {
        const misc::RecordListEntry &source = list->entries_0x0190[static_cast<int32_t>(index)];
        record->key_0x00 = source.key_0x00;
        record->tag_0x08 = source.tag_0x08;
        copied = true;
    }
    unlock_record_list(list->lock_0x0170);
    return copied;
}
