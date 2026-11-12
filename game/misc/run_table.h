// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: layouts of the run table, whose ids are split into a segment and a slot, and of the lookup that
// gives each id its range.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * Bits of a run-table id that give the slot index inside its segment.
 *
 */
constexpr uint32_t run_table_local_mask = 0x003fffff;

/**
 *
 * Bits of a run-table id that give its segment: the top ten bits, which the range keeps as they are.
 *
 */
constexpr uint32_t run_table_segment_mask = 0xffc00000;

/**
 *
 * Bit position of the segment number inside a run-table id.
 *
 */
constexpr uint32_t run_table_segment_shift = 22;

/**
 *
 * The id a run-table lookup reports when there is no entry.
 *
 */
constexpr uint32_t run_table_no_entry_id = 0xffffffff;

/**
 *
 * A slot value (and a request offset) meaning that nothing is set.
 *
 */
constexpr int32_t run_table_unset = -1;

/**
 *
 * A slot value meaning that the id is listed as absent while its run offset is still unset.
 *
 */
constexpr int32_t run_table_absent = -2;

/**
 *
 * One segment of a run table: a slot array indexed by the local part of an id, with its length.
 *
 */
struct RunTableSegment {
    uint8_t unknown_0x0000[0x10];
    int32_t *slots;           /**< Slot values, one per local index. */
    int32_t slot_count;       /**< Number of slots in the array. */
    uint8_t unknown_0x001c[4];
};
static_assert(offsetof(RunTableSegment, slots) == 0x10);
static_assert(offsetof(RunTableSegment, slot_count) == 0x18);
static_assert(sizeof(RunTableSegment) == 0x20);

/**
 *
 * A run table: its segments are indexed by the top bits of an id.
 *
 */
struct RunTable {
    uint8_t unknown_0x0000[0x10];
    RunTableSegment *segments; /**< Segment records, one for each value of the top ten id bits. */
};
static_assert(offsetof(RunTable, segments) == 0x10);

/**
 *
 * The request a run-table lookup resolves: an id, a run offset applied to it, and a tail offset applied
 * to the range the lookup gives it.
 *
 */
struct RunTableRequest {
    uint32_t id;               /**< The id to resolve. */
    int16_t run_offset;        /**< Offset from the slot of the id, or run_table_unset. */
    uint8_t unknown_0x0006[2];
    int16_t tail_offset;       /**< Offset from the start of the range, or run_table_unset. */
    uint8_t unknown_0x000a[2];
};
static_assert(offsetof(RunTableRequest, id) == 0x00);
static_assert(offsetof(RunTableRequest, run_offset) == 0x04);
static_assert(offsetof(RunTableRequest, tail_offset) == 0x08);
static_assert(sizeof(RunTableRequest) == 0x0c);

/**
 *
 * The record that the range lookup fills with the segment it searched.
 *
 */
struct RunTableCursor {
    void *segment_0x00;          /**< Segment the lookup searched. */
    uint32_t segment_index_0x08; /**< Its number. */
    uint8_t unknown_0x000c[4];
};
static_assert(offsetof(RunTableCursor, segment_0x00) == 0x00);
static_assert(offsetof(RunTableCursor, segment_index_0x08) == 0x08);
static_assert(sizeof(RunTableCursor) == 0x10);

/**
 *
 * The range that the lookup gives an id: a base and a limit for the tail offset.
 *
 */
struct RunTableRange {
    int32_t base;              /**< Added to the tail offset. */
    uint8_t unknown_0x0004[4];
    int16_t limit;             /**< A tail offset must be below this value. */
    uint8_t unknown_0x000a[6];
};
static_assert(offsetof(RunTableRange, base) == 0x00);
static_assert(offsetof(RunTableRange, limit) == 0x08);
static_assert(sizeof(RunTableRange) == 0x10);

}  // namespace misc
