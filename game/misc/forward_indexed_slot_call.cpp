// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: passes a call for the slot at an index of a pair's second array to the slot routine and returns its result.
#include <cstdint>

#include "registry_slot_pair.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x01447280, fn_01447280, uint64_t(misc::RegistrySlot *slot, uint32_t first_argument,
                                            uint64_t second_argument));

}  // namespace

/**
 *
 * Forwards the first 32-bit argument and the 64-bit argument to the slot routine for the slot at an index of the pair's
 * second array, and returns what the slot routine returns.
 *
 * The index is taken as 32 bits and the slot is found from the array start on each call. Nothing is checked against the
 * array's count.
 */
extern "C" uint64_t bb_misc_forward_indexed_slot_call(misc::RegistrySlotPair *pair, uint32_t index,
                                                      uint32_t first_argument, uint64_t second_argument)
{
    misc::RegistrySlot *const slot = &pair->second_slots[index];
    return fn_01447280(slot, first_argument, second_argument);
}
