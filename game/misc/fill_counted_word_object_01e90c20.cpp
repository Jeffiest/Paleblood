// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: fills a counted word object's mask from a source, checks three flags of the shared counter table, then passes the object's word to the source.
#include <cstdint>

#include "counted_word_object.h"
#include "keyed_counter_table.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x024b55b0, fatal_report, void(const void *, uint32_t, const uint8_t *));

RT_GLOBAL(0x04d3309c, flag_check_file, const uint8_t);
RT_GLOBAL(0x04b388a8, flag_check_message, const uint8_t);

constexpr uint32_t kFillKind = 0x4;                 /**< The kind the source is asked to fill for both values. */
constexpr uint32_t kFirstCheckLine = 0x363;         /**< The line the report carries for the first flag check. */
constexpr uint32_t kSecondCheckLine = 0x364;        /**< The line the report carries for the second flag check. */
constexpr uint32_t kThirdCheckLine = 0x365;         /**< The line the report carries for the third flag check. */
constexpr size_t kCheckedEntry = 6148;              /**< The entry whose key and count must both be clear. */
constexpr size_t kFlagEntry = 6149;                 /**< The entry whose key holds the two flag bytes that are checked. */
constexpr uint32_t kByteShift = 8;                  /**< Moves the second byte of a key down to the low byte. */
constexpr uint32_t kByteMask = 0xff;                /**< One byte of a key. */

}  // namespace

/**
 *
 * Fills the object's mask from the source, then checks the shared counter table: its checked entry must be clear, the
 * low byte of its flag entry's key must be set and the next byte must be clear. Each failed check is reported by the
 * engine's fatal report, which returns, and the checks go on. Last, the source is asked to fill the object's word.
 *
 * The last two integer registers are the arguments a missing-table report passes on: the report does not read them.
 *
 */
extern "C" void bb_misc_fill_counted_word_object_01e90c20(misc::CountedWordObject *object,
                                                         misc::CountedWordSource *source, uint64_t, uint64_t,
                                                         uint64_t report_arg_0, uint64_t report_arg_1)
{
    source->vtable->fill_0x20(source, &object->mask_0x08, static_cast<int32_t>(kFillKind));
    misc::KeyedCounterTable *table = misc::require_counter_table(report_arg_0, report_arg_1);
    const uint32_t word = object->word_0x0c;
    const misc::KeyedCounterEntry &checked = table->entries_0x8008[kCheckedEntry];
    if (checked.key_0x00 != 0 || checked.count_0x04 != 0) {
        fatal_report(flag_check_file.address(), kFirstCheckLine, flag_check_message.address());
    }
    const misc::KeyedCounterEntry &flag = table->entries_0x8008[kFlagEntry];
    if ((flag.key_0x00 & kByteMask) == 0) {
        fatal_report(flag_check_file.address(), kSecondCheckLine, flag_check_message.address());
    }
    if (((flag.key_0x00 >> kByteShift) & kByteMask) != 0) {
        fatal_report(flag_check_file.address(), kThirdCheckLine, flag_check_message.address());
    }
    uint32_t word_copy = word;
    source->vtable->fill_0x20(source, &word_copy, static_cast<int32_t>(kFillKind));
}
