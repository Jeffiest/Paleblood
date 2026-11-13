// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

#include "../engine/vector.h"
#include "owned_array.h"
#include "runtime/original.h"

namespace {

using engine::Vec4;
using misc::OwnedArray;

constexpr uint32_t slot_rows = 8;
constexpr uint32_t pad_to_slot_half = 0x38;
constexpr uint32_t pad_after_slot_half = 0x04;

/** One slot of the pool (128 bytes): eight vector rows with a few bytes set individually. */
union PoolSlot {
    Vec4 rows[slot_rows];
    struct {
        uint8_t unknown_0x00[pad_to_slot_half];
        uint16_t cleared_half;
        uint8_t unknown_0x3a[pad_after_slot_half];
        uint8_t unset_byte;
        uint8_t in_use;
    } fields;
};
static_assert(sizeof(PoolSlot) == 0x80);
static_assert(offsetof(PoolSlot, fields.cleared_half) == 0x38);
static_assert(offsetof(PoolSlot, fields.unset_byte) == 0x3e && offsetof(PoolSlot, fields.in_use) == 0x3f);

/** The pool object: its slots, a free-list header and an array of lists, one per entry. */
struct SlotPool {
    uint64_t owner;                  /**< The fourth argument handed in. */
    PoolSlot *slots;                 /**< Set by the slot set-up call. */
    uint8_t unknown_0x10[0x0c];
    uint32_t first_free;             /**< Set to 1. */
    uint8_t unknown_0x20[0x04];
    uint32_t used_slots;             /**< Set to 1. */
    uint32_t value_28;               /**< Cleared. */
    uint32_t value_2c;               /**< Cleared. */
    OwnedArray *lists;               /**< The array of lists. */
    int32_t list_count;              /**< The number of lists in use. */
    uint32_t list_capacity;          /**< The low 30 bits are the capacity. */
    uint8_t ready;                   /**< Cleared. */
};
static_assert(offsetof(SlotPool, slots) == 0x08 && offsetof(SlotPool, lists) == 0x30);
static_assert(offsetof(SlotPool, list_count) == 0x38 && offsetof(SlotPool, list_capacity) == 0x3c);
static_assert(offsetof(SlotPool, ready) == 0x40);

/** The description the pool is built from; only its list count is read. */
struct SlotPoolDescription {
    uint8_t unknown_0x00[0x1c];
    int32_t list_count;              /**< The number of lists to make. */
};
static_assert(offsetof(SlotPoolDescription, list_count) == 0x1c);

constexpr uint32_t capacity_mask = 0x3fffffff;
constexpr uint32_t list_element_size = sizeof(OwnedArray);
constexpr uint32_t item_size = sizeof(uint32_t);
constexpr uint8_t unset_byte = 0xff;
constexpr uint8_t slot_in_use = 1;
constexpr uint32_t capacity_growth = 2;
constexpr uint32_t first_row = 0;
constexpr uint32_t second_row = 1;
constexpr uint32_t third_row = 2;
constexpr uint32_t item_shift = 2;

RT_GLOBAL(0x02fd5270, fill_row, const Vec4);
RT_GLOBAL(0x02fd5450, fourth_row_base, const Vec4);

// Sets up the pool's slots and fills the slot storage; the second and third arguments pass through.
RT_ORIGINAL(0x00f4ff60, fn_00f4ff60, void(SlotPool *pool, uint64_t first, uint32_t second));
// Makes an array in a slot hold at least the capacity given, with the element size given.
RT_ORIGINAL(0x00819040, fn_00819040,
            void(const void *tag, void *array_slot, int32_t capacity, uint32_t element_size));
// Grows a full array so that another element fits.
RT_ORIGINAL(0x00819100, fn_00819100, void(const void *tag, void *array_slot, uint32_t element_size));

}  // namespace

/**
 *
 * Builds a slot pool: sets up its slots, resets the first slot, then makes the pool hold one empty
 * list per entry the description names and gives every list a first item of zero. The pool is returned.
 *
 */
extern "C" SlotPool *bb_misc_init_slot_pool_with_lists(SlotPool *pool, uint64_t first, uint32_t second, uint64_t owner,
                                                        const SlotPoolDescription *description)
{
    pool->owner = owner;
    fn_00f4ff60(pool, first, second);

    PoolSlot *slot = pool->slots;
    const Vec4 fill = fill_row.get();
    const Vec4 base = fourth_row_base.get();
    slot->rows[first_row] = fill;
    for (uint32_t row = third_row; row < slot_rows; row++) slot->rows[row] = fill;
    slot->rows[second_row] = base;
    slot->fields.unset_byte = unset_byte;
    slot->fields.cleared_half = 0;
    pool->slots->fields.in_use = slot_in_use;

    const int32_t wanted = description->list_count;
    const uint32_t capacity = pool->list_capacity & capacity_mask;
    if (static_cast<int32_t>(capacity) < wanted) {
        int32_t grown = static_cast<int32_t>(capacity * capacity_growth);
        if (grown < wanted) grown = wanted;
        fn_00819040(misc::array_allocator.address(), &pool->lists, grown, list_element_size);
    }

    OwnedArray *lists = pool->lists;
    const int32_t old_count = pool->list_count;
    if (old_count > wanted) {
        for (int32_t index = old_count - 1; index >= wanted; index--) {
            OwnedArray *list = &lists[index];
            list->length = 0;
            misc::release_array(list, misc::element_shift_4);
            list->data = nullptr;
            list->capacity = misc::unowned_capacity;
        }
        lists = pool->lists;
    }
    if (wanted > old_count) {
        for (int32_t index = old_count; index < wanted; index++) {
            lists[index].data = nullptr;
            lists[index].length = 0;
            lists[index].capacity = misc::unowned_capacity;
        }
    }
    pool->list_count = wanted;

    if (wanted > 0) {
        const int32_t per_list = static_cast<int32_t>(second << item_shift) / wanted;
        for (int32_t index = 0; index < wanted; index++) {
            OwnedArray *list = &pool->lists[index];
            uint32_t list_capacity = static_cast<uint32_t>(list->capacity) & capacity_mask;
            if (static_cast<int32_t>(list_capacity) < per_list) {
                int32_t grown = static_cast<int32_t>(list_capacity * capacity_growth);
                if (grown < per_list) grown = per_list;
                fn_00819040(misc::array_allocator.address(), list, grown, item_size);
            }
            list_capacity = static_cast<uint32_t>(list->capacity) & capacity_mask;
            if (list->length == list_capacity) fn_00819100(misc::array_allocator.address(), list, item_size);
            static_cast<uint32_t *>(list->data)[static_cast<int32_t>(list->length)] = 0;
            list->length++;
        }
    }
    pool->first_free = slot_in_use;
    pool->used_slots = slot_in_use;
    pool->value_28 = 0;
    pool->value_2c = 0;
    pool->ready = 0;
    return pool;
}
