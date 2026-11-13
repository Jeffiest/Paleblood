// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a list of registry slots, each 0x4b0 bytes, with its slot array and slot count.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/** One slot of a registry list: a block of 0x4b0 bytes whose contents the slot routines fill and release. */
struct RegistrySlot {
    uint8_t unknown_0x0000[0x4b0];
};
static_assert(sizeof(RegistrySlot) == 0x4b0);

/**
 *
 * A list of registry slots: the slot array at 0x10 and the number of slots at 0x28.
 *
 */
struct RegistrySlotList {
    uint8_t unknown_0x0000[0x10];
    RegistrySlot *slots;     /**< The slot array, each slot 0x4b0 bytes. */
    uint8_t unknown_0x0018[0x10];
    uint32_t count;          /**< The number of slots in the array. */
};
static_assert(offsetof(RegistrySlotList, slots) == 0x10);
static_assert(offsetof(RegistrySlotList, count) == 0x28);

}  // namespace misc
