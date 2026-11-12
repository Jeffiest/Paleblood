// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a record that holds a counted word block behind its own virtual table, set to a reset table and then a final one.
#pragma once

#include <cstddef>
#include <cstdint>

#include "counted_word_block.h"
#include "runtime/original.h"

namespace misc {

/** The virtual table a counted block record holds while its block is being reset, in read-only data. */
RT_GLOBAL(0x057362d0, counted_block_record_reset_vtable, const uint8_t);
/** The virtual table a counted block record holds once its block is reset, in read-only data. */
RT_GLOBAL(0x057997d0, counted_block_record_final_vtable, const uint8_t);

/**
 *
 * A record whose virtual table is its first word and whose counted word block sits at offset 0x20.
 *
 * The bytes between the table and the block are not read by the routines that use this record.
 *
 */
struct CountedBlockRecord {
    const void *vtable;             /**< The record's virtual table, set to one of two tables while it is used. */
    uint8_t unknown_0x0008[0x10];
    uint32_t first_word;            /**< Set to zero when the record is built. */
    uint32_t second_word;           /**< Set to zero when the record is built. */
    CountedWordBlock block;         /**< The counted word block the record holds. */
};
static_assert(offsetof(CountedBlockRecord, vtable) == 0x0);
static_assert(offsetof(CountedBlockRecord, first_word) == 0x18 && offsetof(CountedBlockRecord, second_word) == 0x1c);
static_assert(offsetof(CountedBlockRecord, block) == 0x20);
static_assert(sizeof(CountedBlockRecord) == 0x80);

/** The number of records handed to the registry in one registration, and the flag it receives. */
constexpr uint32_t counted_block_registered_count = 1;
constexpr uint32_t counted_block_registration_flag = 1;

}  // namespace misc
