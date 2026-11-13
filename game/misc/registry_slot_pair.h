// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a pair of registry slot arrays, each with its own slot count.
#pragma once

#include <cstddef>
#include <cstdint>

#include "registry_slot_list.h"

namespace misc {

/**
 *
 * Two arrays of registry slots: the first array at 0x10 with its count at 0x28, the second at 0x18 with its count at
 * 0x2c.
 *
 */
struct RegistrySlotPair {
    uint8_t unknown_0x0000[0x10];
    RegistrySlot *first_slots;    /**< The first slot array, each slot 0x4b0 bytes. */
    RegistrySlot *second_slots;   /**< The second slot array, each slot 0x4b0 bytes. */
    uint8_t unknown_0x0020[0x08];
    uint32_t first_count;         /**< The number of slots in the first array. */
    uint32_t second_count;        /**< The number of slots in the second array. */
};
static_assert(offsetof(RegistrySlotPair, first_slots) == 0x10);
static_assert(offsetof(RegistrySlotPair, second_slots) == 0x18);
static_assert(offsetof(RegistrySlotPair, first_count) == 0x28);
static_assert(offsetof(RegistrySlotPair, second_count) == 0x2c);

}  // namespace misc
