// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a store object whose value sub-object sits in front of the lock that guards it.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/** The room the value sub-object takes in the store object. */
constexpr size_t locked_store_value_size = 0x8;

/** The room the lock takes in the store object. */
constexpr size_t locked_store_lock_size = 0x8;

/**
 *
 * The store object: an unknown prefix, the value sub-object the store routine writes into, and the lock that
 * guards the store.
 *
 */
struct LockedStoreObject {
    uint8_t unknown_0x0000[0x38];                 /**< Space before the value sub-object, not read here. */
    uint8_t store[locked_store_value_size];       /**< The value sub-object; its address is given to the store routine. */
    uint8_t lock[locked_store_lock_size];         /**< The lock; its address is given to the lock calls. */
};
static_assert(offsetof(LockedStoreObject, store) == 0x38);
static_assert(offsetof(LockedStoreObject, lock) == 0x40);

}  // namespace misc
