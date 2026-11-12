// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: appends a record to the list's second array under its lock when there is room and counts it, otherwise reports the overflow.
#include <cstdint>

#include "misc.h"
#include "record_list_object.h"

namespace {

RT_ORIGINAL(0x02fbe598, lock_record_list, void(void *lock));
RT_ORIGINAL(0x02fbe5a8, unlock_record_list, uint64_t(void *lock));
RT_GLOBAL(0x04b3bef1, counted_overflow_format, const char);
RT_ORIGINAL(0x00454320, dispatch_word, uint64_t(const void *dispatch));

}  // namespace

/**
 *
 * Copies the record into the list's second array under the list's lock when the array has room, and counts it
 * in the list's counter. When the array is full the overflow is reported to the sink of the source, found
 * through the dispatch word when the source holds none.
 *
 */
extern "C" uint64_t bb_misc_append_counted_record_or_report(misc::RecordListObject *list,
                                                            const misc::RecordListEntry *entry,
                                                            misc::RecordReportSource *source)
{
    lock_record_list(list->lock_0x0170);
    if (list->capacity_0x0198 > list->count_0xe8) {
        misc::RecordListEntry *slot = list->entries_0x0190 + list->count_0xe8;
        slot->key_0x00 = entry->key_0x00;
        slot->tag_0x08 = entry->tag_0x08;
        list->counter_0x01a8 += 1;
    } else if (source != nullptr) {
        void *sink = source->sink_0x18;
        if (sink == nullptr) {
            if (dispatch_word(nullptr) != 0) {
                sink = source->sink_0x18;
                if (sink == nullptr) {
                    sink = reinterpret_cast<void *>(dispatch_word(nullptr));
                }
                misc::fn_02788b20(sink, counted_overflow_format.address(), static_cast<uint32_t>(list->count_0xe8 + 1),
                                  static_cast<uint32_t>(list->capacity_0x0198));
            }
        } else {
            misc::fn_02788b20(sink, counted_overflow_format.address(), static_cast<uint32_t>(list->count_0xe8 + 1),
                              static_cast<uint32_t>(list->capacity_0x0198));
        }
    }
    return unlock_record_list(list->lock_0x0170);
}
