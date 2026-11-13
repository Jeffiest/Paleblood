// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: stores a value into the store object through the store's own address under its lock, then releases the lock.
#include <cstdint>

#include "locked_store_object.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x02fbe598, lock_store_aliased, void(void *lock));
RT_ORIGINAL(0x02fbe5a8, unlock_store_aliased, uint64_t(void *lock));
RT_ORIGINAL(0x02790a50, fn_02790a50, void(void *target, void *source, const uint64_t *value));

}  // namespace

/**
 *
 * Stores the value into the object's store sub-object, passing the same sub-object as both target and source,
 * while holding the object's lock. The lock is released by the final call, whose result is the function's result.
 *
 */
extern "C" uint64_t bb_misc_store_value_aliased_locked(misc::LockedStoreObject *object, uint64_t value)
{
    lock_store_aliased(object->lock);
    fn_02790a50(object->store, object->store, &value);
    return unlock_store_aliased(object->lock);
}
