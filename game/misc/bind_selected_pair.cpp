// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: resolves the key's two selectors to nodes, takes each node's value and stores both in the record.
#include <algorithm>

#include "pair_context.h"
#include "pair_handle.h"
#include "pair_key.h"
#include "pair_node.h"
#include "pair_owner.h"
#include "pair_record.h"
#include "root_state.h"

#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x0261eaa0, fn_0261eaa0, misc::PairHandle *(misc::PairService *service, misc::PairSelector *selector));
RT_GLOBAL(0x05940dd8, root_state_instance, misc::RootState *);

}  // namespace

/**
 *
 * Takes the value of the node each selector picks, falling back to the owner's primary node or its
 * fallback node when a selector is absent, and stores both values in the record, with its clamped
 * counts and the context's flags.
 *
 * The second selector's node is read only when it is set; otherwise the first node is read again.
 */
extern "C" void bb_misc_bind_selected_pair(misc::PairOwner *owner, misc::PairKey *key, misc::PairRecord *record)
{
    misc::PairService *service = root_state_instance.get()->pair_service_0x5948;
    misc::PairHandle *first_handle = fn_0261eaa0(service, &key->first_0x2d0);
    misc::PairHandle *second_handle = fn_0261eaa0(service, &key->second_0x2d8);

    misc::PairNode *first_node = owner->primary_0x158;
    if (key->first_0x2d0.index_0x0004 != misc::pair_selector_absent) {
        first_node = first_handle->node_0x48;
    }
    misc::PairNode *second_node = owner->primary_0x158;
    if (key->second_0x2d8.index_0x0004 != misc::pair_selector_absent) {
        second_node = second_handle->node_0x48;
    }

    uint64_t first_value = 0;
    uint64_t second_value = 0;
    if (first_node == nullptr) {
        misc::PairNode *fallback = owner->primary_0x158;
        if (fallback == nullptr) {
            fallback = owner->fallback_0x150;
        }
        first_value = fallback->vtable->value_0x18(fallback);
        second_value = first_value;
    } else {
        first_value = first_node->vtable->value_0x18(first_node);
        if (second_node == nullptr) {
            second_value = first_node->vtable->value_0x18(first_node);
        } else {
            second_value = second_node->vtable->value_0x18(second_node);
        }
    }

    record->first_value_0x878 = first_value;
    record->second_value_0x880 = second_value;
    record->count_0x960 = std::min(record->count_0x960, misc::pair_count_cap);
    record->count_0x964 = std::max(record->count_0x964, misc::pair_count_floor);

    misc::PairContext *context = record->context_0x08;
    context->flags_0x1968 |= misc::pair_context_flag_bits;
    context->first_value_0xd218 = first_value;
    context->second_value_0xd220 = second_value;
}
