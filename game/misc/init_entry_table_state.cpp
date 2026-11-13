// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

#include "../engine/vector.h"
#include "runtime/original.h"

namespace {

using engine::Vec4;

constexpr uint32_t row_count = 9;
constexpr uint32_t first_row = 0;
constexpr uint32_t second_row = 1;
constexpr uint32_t third_row = 2;
constexpr uint32_t fourth_row = 3;
constexpr uint32_t first_filled_row = 1;
constexpr uint32_t pad_to_state = 0x40;
constexpr uint32_t pad_to_cleared_word = 0x24;
constexpr uint32_t pad_to_cleared_half = 0x04;
constexpr uint32_t pad_to_last_row = 0x0e;

/** One entry of the table: nine vector rows, a few of whose words are then set individually. */
union EntryTableBlock {
    Vec4 rows[row_count];
    struct {
        uint8_t unknown_0x00[pad_to_state];
        uint32_t state;
        uint8_t unknown_0x44[pad_to_cleared_word];
        uint32_t cleared_word;
        uint8_t unknown_0x6c[pad_to_cleared_half];
        uint16_t cleared_half;
        uint8_t unknown_0x72[pad_to_last_row];
    } fields;
};
static_assert(sizeof(EntryTableBlock) == 0x90);
static_assert(offsetof(EntryTableBlock, fields.state) == 0x40);
static_assert(offsetof(EntryTableBlock, fields.cleared_word) == 0x68);
static_assert(offsetof(EntryTableBlock, fields.cleared_half) == 0x70);

/** The record the second block pointer addresses: three 16-bit marks, a 64-bit word and a 16-bit word. */
struct __attribute__((packed)) MarkRecord {
    uint16_t first_mark;
    uint16_t second_mark;
    uint16_t third_mark;
    uint64_t cleared_qword;
    uint16_t cleared_half;
};
static_assert(offsetof(MarkRecord, cleared_qword) == 6 && offsetof(MarkRecord, cleared_half) == 0xe);

/** The table object: counters and bounds that start as sentinels, and blocks the fill call creates. */
struct EntryTable {
    void *owner;                 /**< The first argument handed in. */
    uint64_t unused_08;          /**< Cleared. */
    EntryTableBlock *blocks;     /**< Set by the fill call. */
    uint32_t capacity;           /**< Cleared. */
    uint32_t capacity_flags;     /**< Starts at the lowest signed value. */
    uint8_t unknown_0x20[0x04];
    uint32_t free_head;          /**< Starts at the highest signed value, then 1. */
    MarkRecord *marks;           /**< Set by the fill call. */
    uint32_t count_30;           /**< Cleared. */
    uint32_t flags_34;           /**< Starts at the lowest signed value. */
    void *pointer_38;            /**< Cleared. */
    uint32_t count_40;           /**< Cleared. */
    uint32_t flags_44;           /**< Starts at the lowest signed value. */
    void *pointer_48;            /**< Cleared. */
    uint32_t count_50;           /**< Cleared. */
    uint32_t limit_54;           /**< Starts at all ones. */
    uint32_t live_count;         /**< Starts at 0, then 1. */
    uint32_t value_5c;           /**< Cleared. */
    uint32_t value_60;           /**< Cleared twice. */
    uint8_t unknown_0x64[0x04];
    void *pointer_68;            /**< Cleared. */
    uint32_t count_70;           /**< Cleared. */
    uint32_t flags_74;           /**< Starts at the lowest signed value. */
    uint8_t *byte_marks;         /**< Set by the fill call. */
    uint32_t count_80;           /**< Cleared. */
    uint32_t flags_84;           /**< Starts at the lowest signed value. */
    void *pointer_88;            /**< Cleared. */
    uint32_t count_90;           /**< Cleared. */
    uint32_t flags_94;           /**< Starts at the lowest signed value. */
    uint32_t *limits;            /**< Set by the fill call. */
    uint32_t count_a0;           /**< Cleared. */
    uint32_t flags_a4;           /**< Starts at the lowest signed value. */
    void *pointer_a8;            /**< Cleared. */
    uint32_t count_b0;           /**< Cleared. */
    uint32_t flags_b4;           /**< Starts at the lowest signed value. */
    void *pointer_b8;            /**< Cleared. */
    uint64_t sentinel_c0;        /**< Starts at the lowest signed 64-bit value. */
};
static_assert(offsetof(EntryTable, blocks) == 0x10 && offsetof(EntryTable, marks) == 0x28);
static_assert(offsetof(EntryTable, byte_marks) == 0x78 && offsetof(EntryTable, limits) == 0x98);
static_assert(offsetof(EntryTable, sentinel_c0) == 0xc0);

constexpr uint32_t lowest_signed32 = 0x80000000;
constexpr uint32_t highest_signed32 = 0x7fffffff;
constexpr uint32_t all_ones32 = 0xffffffff;
constexpr uint64_t lowest_signed64 = 0x8000000000000000;
constexpr uint16_t unset_mark = 0xffff;
constexpr uint8_t unset_byte = 0xff;

RT_GLOBAL(0x02fd5270, fill_row, const Vec4);
RT_GLOBAL(0x02fd5420, first_row_base, const Vec4);
RT_GLOBAL(0x02fd5430, second_row_base, const Vec4);
RT_GLOBAL(0x02fd5440, third_row_base, const Vec4);
RT_GLOBAL(0x02fd5450, fourth_row_base, const Vec4);

RT_ORIGINAL(0x00f2b990, fn_00f2b990, void(EntryTable *table, void *source, uint32_t count));

}  // namespace

/**
 *
 * Sets up an entry table with sentinel values, has the fill call create its blocks, and then
 * writes the first block's rows and the marker values into the blocks.
 *
 */
extern "C" void bb_misc_init_entry_table_state(EntryTable *table, void *owner, void *source, uint32_t count)
{
    constexpr uint32_t active_state = 1;
    table->owner = owner;
    table->capacity = 0;
    table->blocks = nullptr;
    table->unused_08 = 0;
    table->capacity_flags = lowest_signed32;
    table->free_head = highest_signed32;
    table->marks = nullptr;
    table->count_30 = 0;
    table->flags_34 = lowest_signed32;
    table->pointer_38 = nullptr;
    table->count_40 = 0;
    table->flags_44 = lowest_signed32;
    table->pointer_48 = nullptr;
    table->count_50 = 0;
    table->limit_54 = all_ones32;
    table->live_count = 0;
    table->value_5c = 0;
    table->value_60 = 0;
    table->pointer_68 = nullptr;
    table->count_70 = 0;
    table->flags_74 = lowest_signed32;
    table->byte_marks = nullptr;
    table->count_80 = 0;
    table->flags_84 = lowest_signed32;
    table->pointer_88 = nullptr;
    table->count_90 = 0;
    table->flags_94 = lowest_signed32;
    table->limits = nullptr;
    table->count_a0 = 0;
    table->flags_a4 = lowest_signed32;
    table->pointer_a8 = nullptr;
    table->count_b0 = 0;
    table->flags_b4 = lowest_signed32;
    table->pointer_b8 = nullptr;
    table->sentinel_c0 = lowest_signed64;
    fn_00f2b990(table, source, count);

    EntryTableBlock *block = table->blocks;
    const Vec4 fill = fill_row.get();
    const Vec4 first_base = first_row_base.get();
    const Vec4 second_base = second_row_base.get();
    const Vec4 third_base = third_row_base.get();
    const Vec4 fourth_base = fourth_row_base.get();
    for (uint32_t row = first_filled_row; row < row_count; row++) block->rows[row] = fill;
    block->fields.state = active_state;
    block->fields.cleared_word = 0;
    block->fields.cleared_half = 0;
    // The rows 1 to 3 still hold the fill row at this point, so it is also the source of their w lanes.
    block->rows[first_row] = first_base.with_w_of(fill);
    block->rows[second_row] = second_base.with_w_of(fill);
    block->rows[third_row] = third_base.with_w_of(fill);
    block->rows[fourth_row] = fourth_base.with_w_of(fill);

    MarkRecord *marks = table->marks;
    marks->third_mark = unset_mark;
    marks->second_mark = unset_mark;
    marks->first_mark = unset_mark;
    marks->cleared_half = 0;
    marks->cleared_qword = 0;
    *table->byte_marks = unset_byte;
    *table->limits = highest_signed32;
    table->free_head = active_state;
    table->value_60 = 0;
    table->live_count = active_state;
}
