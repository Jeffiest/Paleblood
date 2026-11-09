// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "list_owner.h"
#include "misc.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x02fbe598, lock_owner, void(void *lock));
RT_ORIGINAL(0x02fbe5a8, unlock_owner, uint64_t(void *lock));

/** The size of a list node. */
constexpr uint32_t list_node_size = 0x18;
/** The flags a node is allocated with. */
constexpr uint32_t allocation_flags = 0;

}  // namespace

/**
 *
 * Pushes a value onto the front of the owner's list under its lock, then unlocks and returns the
 * unlock's result. The new node is linked in before the old first node, which is never null.
 *
 */
extern "C" uint64_t bb_misc_push_front_locked(misc::ListOwner *owner, uint64_t value)
{
    lock_owner(owner->lock);

    misc::Service *service = misc::scratch_service.get();
    auto *node = static_cast<misc::ValueListNode *>(service->vtable->allocate(service, list_node_size, allocation_flags));
    node->next = owner->head;
    node->previous = &owner->head;
    node->value = value;
    owner->head->previous = node;
    owner->head = node;

    return unlock_owner(owner->lock);
}
