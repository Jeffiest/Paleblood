// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: sets flag bit 0x01 on the first item of a list whose sink the accept routine takes, asking each item in turn.
#include <cstddef>
#include <cstdint>

#include "item_list.h"
#include "listed_item.h"
#include "runtime/original.h"

namespace {

/** Reports whether the accept routine takes a sink, given the caller's context. */
RT_ORIGINAL(0x010a1c70, sink_accepts, uint8_t(void *sink, void *context));

constexpr uint8_t accepted_flag = 0x01;

}  // namespace

/**
 *
 * Sets the accepted flag bit on the first item of a list whose sink the accept routine takes. The items are asked in
 * order and the walk stops at the first one taken. A null item is asked too, but has no flag to set.
 *
 * The result is the accept routine's last answer in AL, which the caller does not otherwise read. An empty list
 * asks nothing and leaves RAX as the caller had it, which the cases do not compare.
 *
 */
extern "C" uint8_t bb_misc_set_flag_on_first_accepting_item(misc::ItemList *list, void *context)
{
    uint8_t answer = 0;
    misc::ListedItem **const end = list->end_0x18;
    for (misc::ListedItem **slot = list->begin_0x10; slot != end; ++slot) {
        misc::ListedItem *item = *slot;
        // The sink is addressed from the item's base even when the item is null, as the original does.
        const auto sink_address = reinterpret_cast<uintptr_t>(item) + offsetof(misc::ListedItem, sink_region);
        answer = sink_accepts(reinterpret_cast<void *>(sink_address), context);
        if (answer != 0) {
            if (item != nullptr) item->flags_0xed |= accepted_flag;
            break;
        }
    }
    return answer;
}
