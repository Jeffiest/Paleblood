// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: on the first item of a list whose sink the accept routine takes, stores a value byte and updates the item's flags.
#include <cstddef>
#include <cstdint>

#include "item_list.h"
#include "listed_item.h"
#include "runtime/original.h"

namespace {

/** Reports whether the accept routine takes a sink, given the caller's context. */
RT_ORIGINAL(0x010a1c70, sink_accepts, uint8_t(void *sink, void *context));

/** The flag bits an update keeps from the item's flag byte. */
constexpr uint8_t kept_flag_mask = 0xdb;
/** The flag bit every update sets. */
constexpr uint8_t marked_flag = 0x04;
/** The shift that places the caller's flag bits at the top of the flag byte. */
constexpr unsigned flag_shift = 5;

}  // namespace

/**
 *
 * Stores a value byte on the first item of a list whose sink the accept routine takes, and updates that item's flag byte.
 * The flag byte keeps its bits outside the mask, takes the caller's flag bits at the top, and sets the marked bit.
 *
 * The result is the item's new flag byte, or the accept routine's answer when the taken item is null or no item is
 * taken. An empty list leaves RAX as the caller had it, which the cases do not compare.
 *
 */
extern "C" uint8_t bb_misc_store_value_and_flags_on_first_accepting_item(misc::ItemList *list, void *context,
                                                                         uint32_t value, uint32_t flag_bits)
{
    uint8_t answer = 0;
    misc::ListedItem **const end = list->end_0x18;
    for (misc::ListedItem **slot = list->begin_0x10; slot != end; ++slot) {
        misc::ListedItem *item = *slot;
        // The sink is addressed from the item's base even when the item is null, as the original does.
        const auto sink_address = reinterpret_cast<uintptr_t>(item) + offsetof(misc::ListedItem, sink_region);
        answer = sink_accepts(reinterpret_cast<void *>(sink_address), context);
        if (answer != 0) {
            if (item == nullptr) return answer;
            item->value_0xec = static_cast<uint8_t>(value);
            const auto caller_flags = static_cast<uint8_t>(static_cast<uint8_t>(flag_bits) << flag_shift);
            const auto flags = static_cast<uint8_t>((item->flags_0xed & kept_flag_mask) | caller_flags | marked_flag);
            item->flags_0xed = flags;
            return flags;
        }
    }
    return answer;
}
