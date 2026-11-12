// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: copies one entry of the list's first array into the caller's record, under the list's lock when its level is low.
#include <cstdint>

#include "record_list_object.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x02fbe598, lock_record_list, void(void *lock));
RT_ORIGINAL(0x02fbe5a8, unlock_record_list, uint64_t(void *lock));

/** The level below which the lock is taken around the copy. */
constexpr int32_t locked_level_limit = 2;

}  // namespace

/**
 *
 * Copies the entry at the index of the list's first array into the record and returns the record. The copy runs
 * under the list's lock when the list's level is below the limit. The index is used as given, without a bound.
 *
 */
extern "C" misc::RecordListEntry *bb_misc_copy_entry_locked(misc::RecordListEntry *record, misc::RecordListObject *list,
                                                            int32_t index)
{
    const bool locked = list->level_0xe4 < locked_level_limit;
    if (locked) lock_record_list(list->lock_0x0170);

    const misc::RecordListEntry &source = list->entries_0x0178[index];
    record->key_0x00 = source.key_0x00;
    record->tag_0x08 = source.tag_0x08;

    if (locked) unlock_record_list(list->lock_0x0170);
    return record;
}
