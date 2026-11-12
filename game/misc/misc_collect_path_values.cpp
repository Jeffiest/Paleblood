// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "path_node_table.h"
#include "ref_holder.h"
#include "runtime/original.h"

namespace {

RT_GLOBAL(0x058018b0, path_grow_tag, const char);
// Looks up the node that an id has in the table; a missing id gives the table's embedded sentinel node.
RT_ORIGINAL(0x00cf9310, fn_00cf9310, misc::PathNode *(misc::PathNodeTable *table, uint32_t id));
// Makes an array in a slot hold at least the capacity given, with the element size given.
RT_ORIGINAL(0x00819040, fn_00819040,
            void(const void *tag, void *array_slot, uint32_t capacity, uint32_t element_size));

// Size of one value in the id list, and the start of the depth counter for each mode.
constexpr uint32_t path_id_size = 4;
constexpr int32_t path_depth_base = -2;
constexpr int32_t path_nonzero_mode_offset = -1;
// Factor by which a full list grows before it is checked against the count it needs.
constexpr uint32_t path_growth_factor = 2;

}  // namespace

/**
 *
 * Collects the values along a path of nodes that starts at the node of an id.
 *
 * A path that starts at a terminal node gives its id alone. Otherwise the walk follows the links to the
 * next terminal node and stores the values of the nodes it passes at the end of the list, as many as the
 * limit allows. Mode zero keeps every value, and also the start node's value when its flag is set; a
 * nonzero mode keeps only the values of nodes that are not terminal. Returns whether the whole path fit.
 */
extern "C" uint32_t bb_misc_collect_path_values(misc::PathNodeTable *table, uint32_t id, uint32_t mode,
                                                misc::PathIdList *list, int32_t limit)
{
    misc::PathNode *start = fn_00cf9310(table, id);
    if ((start->flags_0x0e & misc::path_node_terminal) != 0) {
        if (mode != 0) return 1;
        if (limit <= 0) return 0;
        if ((list->capacity_0x0c & misc::list_capacity_mask) == 0)
            fn_00819040(path_grow_tag.address(), list, 1, path_id_size);
        list->count_0x08 = 1;
        list->data_0x00[0] = static_cast<int32_t>(id);
        return 1;
    }

    const bool zero_mode = mode == 0;
    const bool start_has_value = zero_mode && (start->flags_0x0e & misc::path_node_value) != 0;
    int32_t depth = (start_has_value ? 1 : 0) + (zero_mode ? 0 : path_nonzero_mode_offset) + path_depth_base;

    misc::PathNode *node = start;
    do {
        node = &table->nodes_0x00[node->link_0x0c];
        ++depth;
    } while ((node->flags_0x0e & misc::path_node_terminal) == 0);

    const int32_t wanted = depth + 2;
    const int32_t value_count = wanted < limit ? wanted : limit;
    const bool complete = wanted == value_count;

    const uint32_t capacity = list->capacity_0x0c & misc::list_capacity_mask;
    if (static_cast<int32_t>(capacity) < value_count) {
        uint32_t new_capacity = capacity * path_growth_factor;
        if (static_cast<int32_t>(new_capacity) < value_count) new_capacity = static_cast<uint32_t>(value_count);
        fn_00819040(path_grow_tag.address(), list, new_capacity, path_id_size);
    }
    list->count_0x08 = value_count;

    int32_t index = depth + 1;
    if (start_has_value) {
        if (complete) list->data_0x00[depth + 1] = start->value_0x08;
        index = depth;
    }

    misc::PathNode *current = start;
    do {
        misc::PathNode *next = current->link_0x0c == misc::path_node_no_link ? nullptr
                                                                              : &table->nodes_0x00[current->link_0x0c];
        if (index < value_count && (zero_mode || (next->flags_0x0e & misc::path_node_terminal) == 0))
            list->data_0x00[index] = next->value_0x08;
        --index;
        current = next;
    } while ((current->flags_0x0e & misc::path_node_terminal) == 0);

    return complete ? 1 : 0;
}
