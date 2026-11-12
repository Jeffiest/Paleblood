// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object whose set is changed under its own lock, with the count the set reports.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/** The size of the lock object inside the object, from +0x170 up to the set region. */
constexpr size_t locked_lock_size = 0x40;
/** The size of the set region inside the object, from +0x1b0; only its address is passed on. */
constexpr size_t locked_set_region_size = 0x8;

/**
 *
 * The object: a count word at +0xe8, the lock at +0x170 and the set region at +0x1b0.
 *
 */
struct LockedSetObject {
    uint8_t unknown_0x0000[0xe8];
    uint32_t count_0xe8;                /**< The count the set operation reports into. */
    uint8_t unknown_0x00ec[0x84];
    uint8_t lock_0x0170[locked_lock_size];          /**< The lock object; its address is passed to the lock calls. */
    uint8_t set_0x01b0[locked_set_region_size]; /**< The set region; its address is passed to the set call. */
};
static_assert(offsetof(LockedSetObject, count_0xe8) == 0xe8);
static_assert(offsetof(LockedSetObject, lock_0x0170) == 0x170);
static_assert(offsetof(LockedSetObject, set_0x01b0) == 0x1b0);

}  // namespace misc
