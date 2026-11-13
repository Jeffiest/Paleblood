// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: weighs a key's slots, adds a carried value to the positive extras of the key's slots, then finishes through the original tail routine.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

/** The number of weighted slots the table holds. */
constexpr size_t weighted_slot_count = 12;
/** The value that means none: the early result and the weight of a key with no node. */
constexpr int32_t none_value = -1;
/** The early result as the routine returns it. */
constexpr uint32_t none_result = 0xffffffff;
/** The scale value that means none. */
constexpr int16_t scale_none = -1;
/** The factor applied to a node's scale. */
constexpr int32_t scale_factor = 3;
/** The extra a slot is clamped to when the carried value goes negative. */
constexpr int32_t extra_floor = 0;

/** A node holding a signed scale at 0x18. */
struct WeightNode {
    uint8_t unknown_0x0000[0x18];
    int16_t scale;
};
static_assert(offsetof(WeightNode, scale) == 0x18);

/** The query: its key at 0x00 and its node at 0x08. */
struct WeightQuery {
    int32_t key;
    uint8_t unknown_0x0004[0x4];
    const WeightNode *node;
};
static_assert(offsetof(WeightQuery, node) == 0x8);

/** A weighted slot: a key, then an extra that the carried value is added to. */
struct WeightedSlot {
    int32_t key;
    int32_t extra;
};
static_assert(sizeof(WeightedSlot) == 0x8);

/** The table whose slots start at 0x18. */
struct WeightedTable {
    uint8_t unknown_0x0000[0x18];
    WeightedSlot slots[weighted_slot_count];
};
static_assert(offsetof(WeightedTable, slots) == 0x18);

RT_ORIGINAL(0x018e0720, fn_018e0720, uint32_t(WeightedTable *table, WeightQuery *query));

}  // namespace

/**
 *
 * Sums the weights of the query key's slots, adds the carried value to the positive extras of that key's
 * slots while carrying the remainder on, and returns the original finishing routine's result.
 *
 * A node with an unset scale, or whose weight would be unset, returns the none result at once. Without a
 * node each match weighs none; with one, each match weighs three times its scale.
 */
extern "C" uint32_t bb_misc_weighted_slots_then_finish(WeightedTable *table, WeightQuery *query, int32_t value)
{
    const WeightNode *node = query->node;
    int32_t node_weight = none_value;
    if (node != nullptr) {
        if (node->scale == scale_none) return none_result;
        node_weight = static_cast<int32_t>(node->scale) * scale_factor;
        if (node_weight == none_value) return none_result;
    }

    uint32_t weight_sum = 0;
    for (const WeightedSlot &slot : table->slots) {
        if (slot.key == query->key) weight_sum += static_cast<uint32_t>(node_weight);
    }

    int32_t carried = value;
    for (WeightedSlot &slot : table->slots) {
        if (slot.key != query->key || slot.extra <= extra_floor) continue;
        const auto total = static_cast<int32_t>(static_cast<uint32_t>(slot.extra) + static_cast<uint32_t>(carried));
        if (total < extra_floor) {
            slot.extra = extra_floor;
            carried = total;
            continue;
        }
        slot.extra = total;
        carried = static_cast<int32_t>(static_cast<uint32_t>(total) - weight_sum);
        if (carried <= extra_floor) break;
    }
    return fn_018e0720(table, query);
}
