// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: releases every slot of a first and then a second registry slot array, and returns what the last slot routine call returned.
#include <cstdint>

#include "registry_slot_pair.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x01447070, fn_01447070, uint64_t(misc::RegistrySlot *slot));

}  // namespace

/**
 *
 * Calls the slot routine on each slot of the first array in order, then on each slot of the second array in order.
 *
 * Each count and slot array is read again on every pass, as the slot routine may change them. Returns the value the
 * last slot routine call returned, or zero when both arrays are empty; the register then holds what the caller left,
 * which this routine does not change.
 */
extern "C" uint64_t bb_misc_release_two_slot_arrays(misc::RegistrySlotPair *pair)
{
    uint64_t result = 0;
    for (uint32_t index = 0; index < pair->first_count; ++index) {
        result = fn_01447070(&pair->first_slots[index]);
    }
    for (uint32_t index = 0; index < pair->second_count; ++index) {
        result = fn_01447070(&pair->second_slots[index]);
    }
    return result;
}
