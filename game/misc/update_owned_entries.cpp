// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: updates the owned state's entries from its groups, then hands its item to the table's follow-up.
#include "owned_group.h"
#include "owned_node.h"
#include "owned_state.h"
#include "owned_value.h"

#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x026de8b0, fn_026de8b0, void(void *, void *, uint64_t));
RT_ORIGINAL(0x0122e6b0, fn_0122e6b0, void(void *, uint64_t, void *));

/**
 *
 * The index of the first entry the walk updates: entry zero is never touched.
 *
 */
constexpr uint32_t first_entry_index = 1;

}  // namespace

/**
 *
 * Updates the entries from the groups, then passes the item, the second argument and the entry array
 * on to the follow-up routine.
 *
 * The entry array is first updated as a whole with the member object's address and the third argument.
 * The walk then visits every value of every group in order, and each value whose index is below the
 * entry count updates its entry with the value's field at +0x40. The index counts every value, across
 * the groups. The follow-up's result is not used by the caller.
 */
extern "C" void bb_misc_update_owned_entries(misc::OwnedState *self, uint64_t second, uint64_t third)
{
    if (!self->entries_0x0980) return;

    fn_026de8b0(self->entries_0x0980, self->unknown_0x06b0, third);

    uint32_t index = first_entry_index;
    misc::OwnedNode *group_node = self->sentinel->next;
    while (group_node != self->sentinel) {
        misc::OwnedGroup *group = static_cast<misc::OwnedGroup *>(group_node->value_0x0018);
        misc::OwnedNode *item = group->items_0x0008->next;
        while (item != group->items_0x0008) {
            if (self->entry_count_0x0988 > index) {
                misc::OwnedValue *value = static_cast<misc::OwnedValue *>(item->value_0x0018);
                fn_026de8b0(&self->entries_0x0980[index], &value->unknown_0x0040, third);
            }
            ++index;
            item = item->next;
        }
        group_node = group_node->next;
    }

    fn_0122e6b0(self->item_0x0978, second, self->entries_0x0980);
}
