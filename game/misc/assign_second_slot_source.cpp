// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: assigns a source to the slot at an index of a pair's second array, growing the array first when the index is past its count.
#include <cstdint>

#include "registry_slot_pair.h"
#include "runtime/original.h"

namespace {

/** The growth routine keeps the array at least as large as the index, rounded up in steps of this many slots. */
constexpr uint32_t slot_capacity_step = 0x20;
/** The mask that rounds a slot capacity down to a multiple of the step. */
constexpr uint32_t slot_capacity_mask = ~(slot_capacity_step - 1);

RT_ORIGINAL(0x013b9950, fn_013b9950, void(void *holder, void *storage, void *count, uint32_t capacity,
                                         uint64_t flag));
RT_ORIGINAL(0x01447210, fn_01447210, uint64_t(misc::RegistrySlot *slot, const void *source));

}  // namespace

/**
 *
 * Makes sure the pair's second array holds the index, growing it when the index is at or past its count, then hands the
 * slot at the index and the source to the assignment routine and returns what that routine returns.
 *
 * The index is taken as 32 bits. The array and its count are read again after the growth.
 */
extern "C" uint64_t bb_misc_assign_second_slot_source(misc::RegistrySlotPair *pair, uint32_t index,
                                                      const void *source)
{
    if (pair->second_count <= index) {
        const uint32_t capacity = (index + slot_capacity_step) & slot_capacity_mask;
        fn_013b9950(pair, &pair->second_slots, &pair->second_count, capacity, 0);
    }
    misc::RegistrySlot *const slot = &pair->second_slots[index];
    return fn_01447210(slot, source);
}
