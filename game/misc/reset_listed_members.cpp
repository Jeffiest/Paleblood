// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: resets the member object of an owned state, then the value of every node in every group's list.
#include "owned_group.h"
#include "owned_node.h"
#include "owned_state.h"

#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x026e0860, fn_026e0860, void(void *));

}  // namespace

/**
 *
 * Resets the member object, then resets the value of each node of each group's inner list.
 *
 * The groups are walked in list order, and each group's inner list in its own order. The reset is
 * called with the address of the member object first and then with each node's value.
 */
extern "C" void bb_misc_reset_listed_members(misc::OwnedState *self)
{
    fn_026e0860(self->unknown_0x0670);

    misc::OwnedNode *group_node = self->sentinel->next;
    while (group_node != self->sentinel) {
        misc::OwnedGroup *group = static_cast<misc::OwnedGroup *>(group_node->value_0x0018);
        misc::OwnedNode *item = group->items_0x0008->next;
        while (item != group->items_0x0008) {
            fn_026e0860(item->value_0x0018);
            item = item->next;
        }
        group_node = group_node->next;
    }
}
