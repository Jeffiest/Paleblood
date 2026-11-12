// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: queries the list's set with a key and a value, under the list's lock when its level is low.
#include <cstdint>

#include "record_list_object.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x02fbe598, lock_record_list, void(void *lock));
RT_ORIGINAL(0x02fbe5a8, unlock_record_list, uint64_t(void *lock));
RT_ORIGINAL(0x00415270, query_record_set, uint8_t(void *set, uint64_t key, uint64_t value, uint32_t flags));

/** The level below which the lock is taken around the query. */
constexpr int32_t locked_level_limit = 2;
/** The mask that keeps the low byte of the flags, the only part the query reads. */
constexpr uint32_t flags_low_byte_mask = 0xff;

}  // namespace

/**
 *
 * Queries the list's set with the key, the value and the flags, and returns the low byte the query gives. The
 * query runs under the list's lock when the list's level is below the limit.
 *
 */
extern "C" uint8_t bb_misc_set_lookup_locked(misc::RecordListObject *list, uint64_t key, uint64_t value,
                                             uint32_t flags)
{
    const uint32_t low_flags = flags & flags_low_byte_mask;
    if (list->level_0xe4 >= locked_level_limit) {
        return query_record_set(list->set_0x01b0, key, value, low_flags);
    }

    lock_record_list(list->lock_0x0170);
    const uint8_t result = query_record_set(list->set_0x01b0, key, value, low_flags);
    unlock_record_list(list->lock_0x0170);
    return result;
}
