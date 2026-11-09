// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "list_owner.h"
#include "misc.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x02fbe598, lock_owner, void(void *lock));
RT_ORIGINAL(0x02fbe5a8, unlock_owner, uint64_t(void *lock));

}  // namespace

/**
 *
 * Removes the first node of the owner's list, walking from the last node back, whose value is the
 * given one; the node is released through the scratch service. The walk runs under the owner's lock,
 * which is released last and whose result is the function's result.
 *
 */
extern "C" uint64_t bb_misc_remove_value_locked(misc::ListOwner *owner, uint64_t value)
{
    lock_owner(owner->lock);

    misc::ListNode *sentinel = reinterpret_cast<misc::ListNode *>(&owner->head);
    misc::ListNode *cursor = owner->tail;
    while (cursor != sentinel) {
        misc::ListNode *previous = static_cast<misc::ListNode *>(cursor->previous);
        if (cursor->value == value) {
            cursor->next->previous = cursor->previous;
            static_cast<misc::ListNode *>(cursor->previous)->next = cursor->next;
            if (cursor != nullptr) {
                misc::Service *service = misc::scratch_service.get();
                service->vtable->release(service, cursor);
            }
            break;
        }
        cursor = previous;
    }
    return unlock_owner(owner->lock);
}
