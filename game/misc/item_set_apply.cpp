// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>
#include <cstring>

#include "item_set.h"
#include "item_set_owner.h"
#include "runtime/original.h"
#include "set_item.h"

namespace {

RT_GLOBAL(0x057e3be0, stack_guard_pointer, const uint64_t *);
RT_ORIGINAL(0x02fbe4f8, stack_guard_failure, void());

// Item kinds that select the callback applied to them.
constexpr int32_t item_kind_first = 0xd;
constexpr int32_t item_kind_second = 0x1;

// The callbacks for each kind: the owner, the item, the scale vector and the caller's context.
RT_ORIGINAL(0x00b72480, apply_first_kind, void(misc::ItemSetOwner *owner, misc::SetItem *item, const float *scale, void *context));
RT_ORIGINAL(0x00b723f0, apply_second_kind, void(misc::ItemSetOwner *owner, misc::SetItem *item, const float *scale, void *context));

uint64_t read_stack_guard()
{
    uint64_t value;
    std::memcpy(&value, stack_guard_pointer.get(), sizeof(value));
    return value;
}

}  // namespace

/**
 *
 * Applies an enabled item set to every item in order, each with the set's scale in all four lanes.
 *
 * The item's kind selects its callback: the first kind and the second kind have one each, and any other
 * kind is left alone. A disabled set is not applied. The stack guard is checked afterwards.
 */
extern "C" void bb_misc_item_set_apply([[maybe_unused]] void *unused, misc::ItemSetOwner *owner, void *context)
{
    const uint64_t guard = read_stack_guard();
    if (owner->set->enabled != 0) {
        const float scale = owner->set->scale;
        const float scale_lanes[4] = {scale, scale, scale, scale};
        for (int32_t index = 0; index < owner->set->item_count; ++index) {
            misc::SetItem *item = owner->set->items[index];
            if (item->kind == item_kind_first) {
                apply_first_kind(owner, item, scale_lanes, context);
            } else if (item->kind == item_kind_second) {
                apply_second_kind(owner, item, scale_lanes, context);
            }
        }
    }
    if (read_stack_guard() != guard) stack_guard_failure();
}
