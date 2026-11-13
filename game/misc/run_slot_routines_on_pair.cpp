// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: runs three slot routines on every slot of a pair's second and then first registry slot array.
#include <cstdint>

#include "registry_slot_pair.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x01447090, fn_01447090, void(misc::RegistrySlot *slot));
RT_ORIGINAL(0x01447010, fn_01447010, void(misc::RegistrySlot *slot));
RT_ORIGINAL(0x01446f50, fn_01446f50, uint64_t(misc::RegistrySlot *slot));

}  // namespace

/**
 *
 * Runs the first two slot routines and then the third on each slot of the second array, then does the same for each
 * slot of the first array. The slots are visited in order from the first to the last of each array.
 *
 * Returns what the last third routine call returned, or zero when both arrays are empty; the register then holds what
 * the caller left, which this routine does not change. Counts and slot arrays are read again on every pass.
 */
extern "C" uint64_t bb_misc_run_slot_routines_on_pair(misc::RegistrySlotPair *pair)
{
    uint64_t result = 0;
    for (uint32_t index = 0; index < pair->second_count; ++index) {
        misc::RegistrySlot *const slot = &pair->second_slots[index];
        fn_01447090(slot);
        fn_01447010(slot);
        result = fn_01446f50(slot);
    }
    for (uint32_t index = 0; index < pair->first_count; ++index) {
        misc::RegistrySlot *const slot = &pair->first_slots[index];
        fn_01447090(slot);
        fn_01447010(slot);
        result = fn_01446f50(slot);
    }
    return result;
}
