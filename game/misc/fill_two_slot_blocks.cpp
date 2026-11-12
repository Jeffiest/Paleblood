// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "reserved_slot.h"
#include "runtime/original.h"

namespace {

RT_GLOBAL(0x058018b0, reserve_tag, const char);

// Makes a slot's block hold the given count of elements of the given size, returning nonzero on failure.
RT_ORIGINAL(0x00819040, reserve_elements,
            int32_t(const void *allocator_tag, misc::ReservedSlot *slot, uint32_t capacity, uint32_t element_size));

constexpr uint32_t single_entry = 1;
constexpr uint32_t entry_size = 4;
constexpr uint32_t cleared_value = 0;

// Reserves a slot for one entry when it has no block yet; the reservation's result is not read.
void reserve_single_entry(misc::ReservedSlot *slot)
{
    if ((slot->capacity_word & misc::reserved_slot_capacity_mask) == 0)
        reserve_elements(reserve_tag.address(), slot, single_entry, entry_size);
}

}  // namespace

/**
 *
 * Gives both slots a block for one entry, stores the value in the first block and clears the
 * second, then returns the address of the second block.
 *
 * The second block's address stays in RAX, which the original returns.
 */
extern "C" uint64_t bb_misc_fill_two_slot_blocks(misc::ReservedSlot *slots, uint32_t value)
{
    reserve_single_entry(&slots[0]);
    slots[0].count = static_cast<int32_t>(single_entry);
    *static_cast<uint32_t *>(slots[0].block) = value;

    reserve_single_entry(&slots[1]);
    slots[1].count = static_cast<int32_t>(single_entry);
    *static_cast<uint32_t *>(slots[1].block) = cleared_value;

    return reinterpret_cast<uint64_t>(slots[1].block);
}
