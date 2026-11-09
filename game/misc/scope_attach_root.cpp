// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: attaches the owner's root node to the scope state, clamps its counters and marks the nodes.
#include <algorithm>

#include "flag_node.h"
#include "scope_child.h"
#include "scope_owner.h"
#include "scope_state.h"

#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x02568a20, fn_02568a20,
            void(misc::ScopeChild *, void *, misc::FlagNode *, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t));

}  // namespace

/**
 *
 * Hands the owner's root node to the scope's child, stores it in the scope state, clamps the two
 * counters, and sets the attach bits on the child and on the root node.
 *
 * The ignored second argument is not read by the original; the fourth is passed on to the child call.
 */
extern "C" void bb_misc_scope_attach_root(misc::ScopeOwner *owner, [[maybe_unused]] uint64_t ignored_second_argument,
                                          misc::ScopeState *state, uint64_t extra_argument)
{
    misc::FlagNode *root = owner->root_0x2a0;
    misc::ScopeChild *child = state->child_0x08;
    fn_02568a20(child, &child->table_0xb730, root, 0, 0, extra_argument, 0, 0);

    state->root_0x9c0 = root;
    state->counter_0x9d8 = std::min(state->counter_0x9d8, misc::scope_counter_cap);
    state->counter_0x9dc = std::max(state->counter_0x9dc, misc::scope_counter_floor);

    child->flags_0x1978 |= misc::scope_child_attach_flag;
    if (root != nullptr && (root->flags_0x44 & misc::scope_root_flag_bits) != misc::scope_root_flag_bits) {
        root->flags_0x44 |= misc::scope_root_flag_bits;
    }
    child->root_0xd580 = root;
}
