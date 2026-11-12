// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

#include "keyed_slot_table.h"
#include "member_index_record.h"

namespace misc {

/**
 *
 * A group member that carries a slot index, which is zero until the group registers the member.
 *
 */
struct MemberIndexEntry {
    uint8_t unknown_0x0000[0x58];
    uint64_t value;     /**< The value the group hands out for this member. */
    uint8_t unknown_0x0060[0x08];
    int32_t slot_index; /**< Zero until registration gives the member its position in the group. */
};
static_assert(offsetof(MemberIndexEntry, value) == 0x58);
static_assert(offsetof(MemberIndexEntry, slot_index) == 0x68);

/**
 *
 * A group whose members are registered in a keyed slot table, with a source word copied into two
 * fields once the registration is done.
 *
 */
struct MemberIndexGroup {
    uint8_t unknown_0x0000[0xa8];
    int32_t source_word;          /**< Copied into copy_word_a and copy_word_b when registration ends. */
    uint8_t unknown_0x00ac[0x14];
    int32_t copy_word_a;          /**< Receives source_word; the route reads it as a slot index when nonzero. */
    uint8_t unknown_0x00c4[0x0c];
    MemberIndexEntry **members;   /**< The members, in group order. */
    int32_t member_count;         /**< Number of members; zero means none are registered. */
    uint8_t unknown_0x00dc[0x0c];
    KeyedSlotTable *cell;         /**< The slot table the group registers its members in. */
    MemberIndexRecord *records;   /**< The group's records, 0x28 bytes each. */
    int32_t record_count;         /**< Number of records. */
    uint8_t unknown_0x00fc[0x3c];
    int32_t copy_word_b;          /**< Receives source_word. */
};
static_assert(offsetof(MemberIndexGroup, source_word) == 0xa8);
static_assert(offsetof(MemberIndexGroup, copy_word_a) == 0xc0);
static_assert(offsetof(MemberIndexGroup, members) == 0xd0);
static_assert(offsetof(MemberIndexGroup, member_count) == 0xd8);
static_assert(offsetof(MemberIndexGroup, cell) == 0xe8);
static_assert(offsetof(MemberIndexGroup, records) == 0xf0);
static_assert(offsetof(MemberIndexGroup, record_count) == 0xf8);
static_assert(offsetof(MemberIndexGroup, copy_word_b) == 0x138);

}  // namespace misc
