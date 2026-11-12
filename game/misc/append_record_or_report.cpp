// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: appends a record to the list's first array when it has room, otherwise reports the overflow to the source's sink.
#include <cstdint>

#include "misc.h"
#include "record_list_object.h"

namespace {

RT_ORIGINAL(0x02fbe598, lock_record_list, void(void *lock));
RT_ORIGINAL(0x02fbe5a8, unlock_record_list, uint64_t(void *lock));
RT_GLOBAL(0x04b3bea5, record_overflow_format, const char);
RT_ORIGINAL(0x00454320, dispatch_word, uint64_t(const void *dispatch));

}  // namespace

/**
 *
 * Copies the record into the list's first array under the list's lock when the array has room. When it is full
 * the overflow is reported to the sink of the source, found through the dispatch word when the source holds none.
 *
 */
extern "C" uint64_t bb_misc_append_record_or_report(misc::RecordListObject *list, const misc::RecordListEntry *entry,
                                                    misc::RecordReportSource *source)
{
    lock_record_list(list->lock_0x0170);
    if (list->capacity_0x0180 > list->count_0xe8) {
        misc::RecordListEntry *slot = list->entries_0x0178 + list->count_0xe8;
        slot->key_0x00 = entry->key_0x00;
        slot->tag_0x08 = entry->tag_0x08;
    } else if (source != nullptr) {
        void *sink = source->sink_0x18;
        if (sink == nullptr) {
            if (dispatch_word(nullptr) != 0) {
                sink = source->sink_0x18;
                if (sink == nullptr) {
                    sink = reinterpret_cast<void *>(dispatch_word(nullptr));
                }
                misc::fn_02788b20(sink, record_overflow_format.address(), static_cast<uint32_t>(list->count_0xe8 + 1),
                                  static_cast<uint32_t>(list->capacity_0x0180));
            }
        } else {
            misc::fn_02788b20(sink, record_overflow_format.address(), static_cast<uint32_t>(list->count_0xe8 + 1),
                              static_cast<uint32_t>(list->capacity_0x0180));
        }
    }
    return unlock_record_list(list->lock_0x0170);
}
