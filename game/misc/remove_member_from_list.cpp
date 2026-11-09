// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "list_member.h"
#include "list_owner.h"
#include "misc.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x02fbe598, lock_owner, void(void *lock));
RT_ORIGINAL(0x02fbe5a8, unlock_owner, uint64_t(void *lock));
RT_ORIGINAL(0x0045a480, fn_0045a480, uint64_t(void *member));
RT_GLOBAL(0x0553c2c0, member_table, const uint8_t);

/** The offset of the member vtable inside its table. */
constexpr uint64_t member_vtable_offset = 0x10;

/**
 * Unlinks the first node whose value is the given one, walking back from the tail, and releases it.
 */
void remove_first_match(misc::ListOwner *list, uint64_t value)
{
    misc::ListNode *sentinel = reinterpret_cast<misc::ListNode *>(&list->head);
    misc::ListNode *cursor = list->tail;
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
}

}  // namespace

/**
 *
 * Removes a member from its source's list: under the list's lock the node whose value is the member
 * is unlinked and released, then the member's source is released and the member is handed to the
 * final release, whose result is the function's result.
 *
 */
extern "C" uint64_t bb_misc_remove_member_from_list(misc::ListMember *member)
{
    member->vtable = static_cast<const uint8_t *>(member_table.address()) + member_vtable_offset;

    misc::ListOwner *list = member->source->list;
    lock_owner(list->lock);
    remove_first_match(list, reinterpret_cast<uint64_t>(member));
    unlock_owner(list->lock);

    misc::fn_0045a4c0(member->source);
    return fn_0045a480(member);
}
