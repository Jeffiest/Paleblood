// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: prepares each listed value of an owned state with the resource manager's mode, then clears
// the flag of each of the value's elements.
#include "owned_group.h"
#include "owned_node.h"
#include "owned_state.h"
#include "owned_value.h"
#include "root_state.h"

#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x01242e90, fn_01242e90, void(void *, void *, int32_t));
RT_GLOBAL(0x05940dd8, root_state_instance, misc::RootState *);

/**
 *
 * The manager mode that means no mode; it is passed on as zero instead.
 *
 */
constexpr int32_t no_mode = -1;

/**
 *
 * The mode passed on when the manager has none.
 *
 */
constexpr int32_t mode_when_none = 0;

/**
 *
 * The mode the prepare call receives, read from the manager at the moment of the call.
 *
 */
int32_t current_mode()
{
    const int32_t mode = root_state_instance.get()->resources_0x5ad0->mode_0x0080;
    return mode == no_mode ? mode_when_none : mode;
}

}  // namespace

/**
 *
 * Prepares every value of every group's inner list, then clears the flags of their elements.
 *
 * For each value the prepare call receives the resource manager's sub-object, the value's field at
 * +0x40 and the current mode (zero when the manager has none). The value's flag is then cleared,
 * and each element of its array (when the array and the count are both set) has its flag cleared.
 */
extern "C" void bb_misc_prepare_listed_values(misc::OwnedState *self)
{
    misc::OwnedNode *group_node = self->sentinel->next;
    while (group_node != self->sentinel) {
        misc::OwnedGroup *group = static_cast<misc::OwnedGroup *>(group_node->value_0x0018);
        misc::OwnedNode *item = group->items_0x0008->next;
        while (item != group->items_0x0008) {
            misc::OwnedValue *value = static_cast<misc::OwnedValue *>(item->value_0x0018);
            fn_01242e90(root_state_instance.get()->resources_0x5ad0->unknown_0x01b8, value->unknown_0x0040,
                        current_mode());
            value->flag_0x02c0 = 0;
            if (value->elements_0x02c8 && value->count_0x02c4) {
                for (uint32_t i = 0; i < value->count_0x02c4; ++i) value->elements_0x02c8[i].flag_0x0024 = 0;
            }
            item = item->next;
        }
        group_node = group_node->next;
    }
}
