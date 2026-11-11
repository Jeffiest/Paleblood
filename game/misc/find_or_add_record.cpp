// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

#include "ref_holder.h"
#include "runtime/original.h"

namespace {

/**
 *
 * A record of twenty bytes: an opaque body and two halfwords at its end.
 *
 */
struct Record {
    uint8_t unknown_0x00[0x10];
    uint16_t halfword_0x10;
    uint16_t halfword_0x12;
};
static_assert(sizeof(Record) == 0x14);

/**
 *
 * A growable array of records: its data, its count and its capacity word, whose low bits hold the
 * capacity.
 *
 */
struct RecordArray {
    Record *data;
    int32_t count;
    uint32_t capacity_word;
};
static_assert(offsetof(RecordArray, count) == 0x8 && offsetof(RecordArray, capacity_word) == 0xc);

/**
 *
 * A growable array of 32-bit values, laid out like RecordArray with four-byte elements.
 *
 */
struct ValueArray {
    int32_t *data;
    int32_t count;
    uint32_t capacity_word;
};
static_assert(offsetof(ValueArray, count) == 0x8 && offsetof(ValueArray, capacity_word) == 0xc);

// The tag the array growth functions are given, the same global the holder's list growth uses.
RT_GLOBAL(0x058018b0, list_grow_tag, const char);
// Makes room for one more element at the end of an array held in a slot.
RT_ORIGINAL(0x00819100, grow_for_append, void(const void *tag, void *array_slot, uint32_t element_size));
// Makes the value array hold the given capacity of four-byte elements.
RT_ORIGINAL(0x00819040, fn_00819040, void(const void *tag, void *array_slot, uint32_t capacity, uint32_t element_size));

// The index-table entry of a key that has no record yet.
constexpr int32_t absent_record = -1;
// Capacity growth doubles the value array's capacity, or reaches the count needed.
constexpr int32_t growth_factor = 2;
// The size of one value in bytes.
constexpr int32_t value_bytes = 4;

}  // namespace

/**
 *
 * Finds the record of a key, or adds it: a key with a record gets that record back. A new one is copied
 * from the source record at the key's index and appended to the records, its index is stored in the
 * index table, and extra_count values from the key's row of the value table are appended to the values.
 *
 * Returns the record's address.
 */
extern "C" Record *bb_misc_find_or_add_record(const Record *source, RecordArray *records, const int32_t *rows,
                                               ValueArray *values, int32_t **index_of, int32_t index,
                                               int32_t extra_count)
{
    int32_t *slots = *index_of;
    if (slots[index] != absent_record) return &records->data[slots[index]];

    if (records->count == static_cast<int32_t>(records->capacity_word & misc::list_capacity_mask))
        grow_for_append(list_grow_tag.address(), records, sizeof(Record));
    const int32_t new_index = records->count;
    records->count = new_index + 1;
    records->data[new_index] = source[index];

    if (extra_count != 0) {
        const int32_t old_count = values->count;
        const int32_t new_count = old_count + extra_count;
        if (static_cast<int32_t>(values->capacity_word & misc::list_capacity_mask) < new_count) {
            int32_t capacity = static_cast<int32_t>(values->capacity_word & misc::list_capacity_mask) * growth_factor;
            if (capacity < new_count) capacity = new_count;
            fn_00819040(list_grow_tag.address(), values, static_cast<uint32_t>(capacity), value_bytes);
        }
        values->count = new_count;
        if (extra_count * value_bytes > 0) {
            const int32_t *row = &rows[index * extra_count];
            for (int32_t value = 0; value < extra_count; ++value) values->data[old_count + value] = row[value];
        }
    }

    slots[index] = new_index;
    return &records->data[new_index];
}
