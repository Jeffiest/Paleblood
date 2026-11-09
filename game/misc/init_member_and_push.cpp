// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "list_member.h"
#include "list_owner.h"
#include "misc.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x02fbe598, lock_owner, void(void *lock));
RT_ORIGINAL(0x02fbe5a8, unlock_owner, uint64_t(void *lock));
RT_GLOBAL(0x0553c2c0, member_table, const uint8_t);

/** The offset of the member vtable inside its table. */
constexpr uint64_t member_vtable_offset = 0x10;
/** The kind a made member carries. */
constexpr uint32_t member_kind = 1;
/** The value word a made member carries. */
constexpr uint32_t member_value = 0;
/** The size of a list node, and the flags it is allocated with. */
constexpr uint32_t list_node_size = 0x18;
constexpr uint32_t allocation_flags = 0;

}  // namespace

/**
 *
 * Makes a member of a width, takes a reference to its source, and pushes it onto the front of the
 * source's list under the list's lock. The lock's release is the function's result.
 *
 */
extern "C" uint64_t bb_misc_init_member_and_push(misc::ListMember *member, misc::ListSource *source, uint32_t width)
{
    member->vtable = static_cast<const uint8_t *>(member_table.address()) + member_vtable_offset;
    member->kind = member_kind;
    member->width = width;
    member->value = member_value;
    if (source != nullptr) {
        misc::fn_0045a4b0(source);
    }
    member->source = source;

    misc::ListOwner *list = source->list;
    lock_owner(list->lock);
    misc::Service *service = misc::scratch_service.get();
    auto *node = static_cast<misc::ListNode *>(service->vtable->allocate(service, list_node_size, allocation_flags));
    node->next = list->head;
    node->previous = &list->head;
    node->value = reinterpret_cast<uint64_t>(member);
    list->head->previous = node;
    list->head = node;
    return unlock_owner(list->lock);
}
