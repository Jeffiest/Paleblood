// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>
#include <cstring>

#include "runtime/original.h"
#include "slot_pool.h"

namespace {

using misc::SlotPool;

RT_GLOBAL(0x057e3be0, stack_guard_pointer, const uint64_t *);
RT_ORIGINAL(0x02fbe4f8, stack_guard_failure, void());
RT_GLOBAL(0x058018b0, reserve_allocator_tag, const char);

// The child computation: stores whether the pool changed and the total it computed.
RT_ORIGINAL(0x00b685f0, fn_00b685f0, void(SlotPool *pool, int32_t scale, uint8_t *changed, uint32_t *total));
// Reserves room for count elements in an array held in a slot of the pool.
RT_ORIGINAL(0x00819040, reserve_elements, void(const void *allocator_tag, void *array_slot, uint32_t capacity, uint32_t element_size));
RT_ORIGINAL(0x02fbe688, fill_bytes, void *(void *destination, int32_t value, uint64_t size));
// Visits one child of the pool and returns the value it passes on.
RT_ORIGINAL(0x00b5afd0, fn_00b5afd0, uint64_t(void *child, SlotPool *pool, uint64_t value));

constexpr uint32_t capacity_mask = 0x3fffffff;  // the low 30 bits of a capacity field hold the capacity
constexpr int32_t growth_factor = 2;

uint64_t read_stack_guard()
{
    uint64_t value;
    std::memcpy(&value, stack_guard_pointer.get(), sizeof(value));
    return value;
}

// Makes an array hold count elements: when its capacity is short, it is reserved at twice the
// capacity, or at count when that is still short.
void ensure_capacity(uint32_t capacity_field, void *array_slot, int32_t count, uint32_t element_size)
{
    const int32_t capacity = static_cast<int32_t>(capacity_field & capacity_mask);
    if (capacity >= count) return;
    int32_t wanted = capacity * growth_factor;
    if (wanted < count) wanted = count;
    reserve_elements(reserve_allocator_tag.address(), array_slot, static_cast<uint32_t>(wanted), element_size);
}

}  // namespace

/**
 *
 * Gives a pool's slots a value spread across count steps, or visits its children when unchanged.
 *
 * The child computation runs first. When the pool changed, the slots are grown to count, the slots
 * past the old count are zeroed, and slot i receives value plus i times the total divided by count
 * (32-bit wrapping). Otherwise the slot count is cleared and every child is visited in order, each
 * passing its result on. The stack guard is checked afterwards and the guard value is returned.
 */
extern "C" uint64_t bb_misc_slot_pool_reassign(SlotPool *pool, uint64_t value, int32_t count)
{
    const uint64_t guard = read_stack_guard();
    uint8_t changed = 0;
    uint32_t total = 0;
    fn_00b685f0(pool, count, &changed, &total);

    if (changed != 0) {
        ensure_capacity(pool->values_capacity, &pool->values, count, sizeof(uint64_t));
        if (count > pool->slot_count) {
            fill_bytes(&pool->values[pool->slot_count], 0,
                       static_cast<uint64_t>(count - pool->slot_count) * sizeof(uint64_t));
        }
        pool->slot_count = count;

        ensure_capacity(pool->used_capacity, &pool->used, count, sizeof(uint8_t));
        if (count > pool->used_size) {
            fill_bytes(&pool->used[pool->used_size], 0, static_cast<uint64_t>(count - pool->used_size));
        }
        pool->used_size = count;

        if (count > 0) {
            uint32_t accumulated = 0;
            for (int32_t slot = 0; slot < count; ++slot) {
                pool->values[slot] = static_cast<uint64_t>(accumulated / static_cast<uint32_t>(count)) + value;
                accumulated += total;
            }
        }
    } else {
        pool->slot_count = 0;
        for (int32_t child = 0; child < pool->child_count; ++child)
            value = fn_00b5afd0(pool->children[child], pool, value);
    }

    const uint64_t after = read_stack_guard();
    if (after != guard) stack_guard_failure();
    return after;
}
