// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "runtime/original.h"
#include "sweep_item_owner.h"

namespace {

RT_ORIGINAL(0x0247b720, fn_0247b720, misc::SweepItemManager *(misc::SweepItem *item));
RT_ORIGINAL(0x02fbe658, fn_02fbe658, void(void *destination, void *source, uint64_t bytes));

/**
 *
 * Updates every item of one list with the step, and drops each item that reports itself finished:
 * the item is removed from its manager, disposed and taken out of the list.
 *
 */
void update_and_drop_list(misc::SweepItemList *list, void *step)
{
    misc::SweepItem **slot = list->begin;
    while (slot != list->end) {
        misc::SweepItem **next = slot + 1;
        for (;;) {
            misc::SweepItem *item = *slot;
            item->vtable->update(item, step);
            const bool finished = item->vtable->finished(item) != 0;
            if (!finished)
                break;
            if (item != nullptr) {
                misc::SweepItemManager *manager = fn_0247b720(item);
                item->vtable->dispose(item);
                manager->vtable->remove_item(manager, item);
            }
            const uint64_t tail_bytes = static_cast<uint64_t>(list->end - next) * sizeof(misc::SweepItem *);
            fn_02fbe658(slot, next, tail_bytes);
            --list->end;
            if (slot == list->end)
                return;
        }
        slot = next;
    }
}

}  // namespace

/**
 *
 * Advances both sweep lists of an owner by one step and drops the items that finished.
 *
 * The step argument is passed on unchanged to every item's update. Each list is walked from its
 * first slot; an item that is dropped is replaced by the one after it, which is updated in turn.
 *
 */
extern "C" void bb_misc_update_and_drop_finished(misc::SweepItemOwner *owner, void *step)
{
    update_and_drop_list(&owner->first_list, step);
    update_and_drop_list(&owner->second_list, step);
}
