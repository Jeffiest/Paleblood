// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the record list object whose two entry arrays and set region sit under one lock, and the report source.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/** The size of the lock word inside the list object, from +0x170. */
constexpr size_t record_list_lock_size = 0x8;
/** The size of the set region inside the list object, from +0x1b0; only its address is passed on. */
constexpr size_t record_list_set_size = 0x8;

/**
 *
 * One entry of a record list: a 64-bit key word, a 32-bit tag, and four bytes the list never writes.
 *
 */
struct RecordListEntry {
    uint64_t key_0x00;     /**< The key word copied in from the caller. */
    uint32_t tag_0x08;     /**< The tag copied in from the caller. */
    uint8_t unknown_0x000c[0x4];
};
static_assert(offsetof(RecordListEntry, key_0x00) == 0x00);
static_assert(offsetof(RecordListEntry, tag_0x08) == 0x08);
static_assert(sizeof(RecordListEntry) == 0x10);

/**
 *
 * The list object: a level word at +0xe4, a count at +0xe8, the lock at +0x170, the first entry array
 * at +0x178 with its capacity, the second at +0x190 with its capacity, a counter at +0x1a8 and the set
 * region at +0x1b0.
 *
 */
struct RecordListObject {
    uint8_t unknown_0x0000[0xe4];
    int32_t level_0xe4;                                 /**< The level below which the lock is taken. */
    uint32_t count_0xe8;                                /**< The number of entries already in the first array. */
    uint8_t unknown_0x00ec[0x84];
    uint8_t lock_0x0170[record_list_lock_size];         /**< The lock word; its address is passed to the lock calls. */
    RecordListEntry *entries_0x0178;                    /**< The first entry array. */
    uint64_t capacity_0x0180;                           /**< The number of entries the first array can hold. */
    uint8_t unknown_0x0188[0x8];
    RecordListEntry *entries_0x0190;                    /**< The second entry array. */
    uint64_t capacity_0x0198;                           /**< The number of entries the second array can hold. */
    uint8_t unknown_0x01a0[0x8];
    uint32_t counter_0x01a8;                            /**< Incremented each time an entry is added to the second array. */
    uint8_t unknown_0x01ac[0x4];
    uint8_t set_0x01b0[record_list_set_size];           /**< The set region; its address is passed on to the set call. */
};
static_assert(offsetof(RecordListObject, level_0xe4) == 0xe4);
static_assert(offsetof(RecordListObject, count_0xe8) == 0xe8);
static_assert(offsetof(RecordListObject, lock_0x0170) == 0x170);
static_assert(offsetof(RecordListObject, entries_0x0178) == 0x178);
static_assert(offsetof(RecordListObject, capacity_0x0180) == 0x180);
static_assert(offsetof(RecordListObject, entries_0x0190) == 0x190);
static_assert(offsetof(RecordListObject, capacity_0x0198) == 0x198);
static_assert(offsetof(RecordListObject, counter_0x01a8) == 0x1a8);
static_assert(offsetof(RecordListObject, set_0x01b0) == 0x1b0);

/**
 *
 * The source of a report: a word at +0x18 that names the sink the report goes to, or is zero.
 *
 */
struct RecordReportSource {
    uint8_t unknown_0x0000[0x18];
    void *sink_0x18;                                    /**< The report sink; zero when the source has none. */
};
static_assert(offsetof(RecordReportSource, sink_0x18) == 0x18);

}  // namespace misc
