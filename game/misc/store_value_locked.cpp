// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: stores a value into the store object under its lock, then releases the lock and returns its result.
#include <cstdint>

#include "locked_store_object.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x02fbe598, lock_store, void(void *lock));
RT_ORIGINAL(0x02fbe5a8, unlock_store, uint64_t(void *lock));
RT_ORIGINAL(0x02790920, store_value_into, void(void *store, const uint64_t *value));

}  // namespace

/**
 *
 * Stores the value into the object's store sub-object while holding the object's lock. The lock is released by
 * the final call, whose result is the function's result.
 *
 */
extern "C" uint64_t bb_misc_store_value_locked(misc::LockedStoreObject *object, uint64_t value)
{
    lock_store(object->lock);
    store_value_into(object->store, &value);
    return unlock_store(object->lock);
}
