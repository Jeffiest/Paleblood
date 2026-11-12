// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: runs a set operation on the object's set region under the object's lock, then releases the
// lock and returns the release result.
#include <cstdint>

#include "locked_set_object.h"
#include "runtime/original.h"

namespace {

using misc::LockedSetObject;

RT_ORIGINAL(0x02fbe598, lock_object, void(void *lock));
RT_ORIGINAL(0x02fbe5a8, unlock_object, int32_t(void *lock));
RT_ORIGINAL(0x0278ddc0, run_set_operation, void(void *set, const void *key, uint32_t *count));

}  // namespace

/**
 *
 * Runs the set operation for the key on the object's set region while the object's lock is held, and
 * returns the result of releasing the lock.
 *
 */
extern "C" int32_t bb_misc_run_locked_set_operation(LockedSetObject *object, const void *key)
{
    lock_object(object->lock_0x0170);
    run_set_operation(object->set_0x01b0, key, &object->count_0xe8);
    return unlock_object(object->lock_0x0170);
}
