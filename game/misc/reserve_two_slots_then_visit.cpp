// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

#include "reserved_slot.h"
#include "runtime/original.h"

namespace {

struct ReserveAllocator;

/** Offset of the release entry in the allocator's virtual table. */
constexpr size_t release_slot_offset = 0x28;

struct ReserveAllocatorVtable {
    uint8_t unknown_0x0000[release_slot_offset];
    void (*release)(ReserveAllocator *allocator, void *block, uint64_t bytes);
};

struct ReserveAllocator {
    const ReserveAllocatorVtable *vtable; /**< Virtual table of the allocator. */
};
static_assert(offsetof(ReserveAllocatorVtable, release) == release_slot_offset);

RT_GLOBAL(0x058018a0, reserve_allocator, ReserveAllocator);

// Makes a slot's block hold the capacity, and returns nonzero when it could not.
RT_ORIGINAL(0x00819040, reserve_elements,
            int32_t(const void *allocator, misc::ReservedSlot *slot, uint32_t capacity, uint32_t element_size));
// Runs the visit with both slots, after the blocks are reserved.
RT_ORIGINAL(0x014bc590, visit_slots,
            void(void *context, int32_t count, misc::ReservedSlot *second, misc::ReservedSlot *first));

constexpr int32_t extra_entries = 4;
constexpr int32_t growth_factor = 2;
constexpr uint32_t first_element_size = 0x20;
constexpr uint32_t second_element_size = 8;

bool reserve_slot(misc::ReservedSlot *slot, uint32_t capacity, uint32_t element_size)
{
    return reserve_elements(reserve_allocator.address(), slot, capacity, element_size) != 0;
}

void release_block(void *block, uint32_t bytes)
{
    ReserveAllocator &allocator = reserve_allocator.get();
    allocator.vtable->release(&allocator, block, bytes);
}

}  // namespace

/**
 *
 * Reserves two growable slots for count plus four entries, runs the visit with them, then releases
 * whatever blocks were reserved and returns one when a reservation failed.
 *
 * The second slot is always reserved at its doubled capacity or at the wanted count, whichever is
 * larger. Both slots are reset on the way out, as the original leaves them.
 */
extern "C" uint32_t bb_misc_reserve_two_slots_then_visit(void *context, int32_t count)
{
    misc::ReservedSlot first{nullptr, 0, misc::reserved_slot_unallocated};
    misc::ReservedSlot second{nullptr, 0, misc::reserved_slot_unallocated};
    const int32_t wanted = count + extra_entries;
    bool failed = false;

    if (wanted > 0) failed = reserve_slot(&first, static_cast<uint32_t>(wanted), first_element_size);
    if (!failed) {
        first.count = wanted;
        const uint32_t second_capacity = second.capacity_word & misc::reserved_slot_capacity_mask;
        if (static_cast<int32_t>(second_capacity) < wanted) {
            uint32_t doubled = second_capacity * growth_factor;
            if (static_cast<int32_t>(doubled) < wanted) doubled = static_cast<uint32_t>(wanted);
            failed = reserve_slot(&second, doubled, second_element_size);
        }
    }
    if (!failed) {
        second.count = wanted;
        visit_slots(context, count, &second, &first);
    }

    second.count = 0;
    if (static_cast<int32_t>(second.capacity_word) >= 0)
        release_block(second.block, second.capacity_word * second_element_size);
    second.block = nullptr;
    second.capacity_word = misc::reserved_slot_unallocated;

    first.count = 0;
    if (static_cast<int32_t>(first.capacity_word) >= 0)
        release_block(first.block, first.capacity_word * first_element_size);

    return failed ? 1 : 0;
}
