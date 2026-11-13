// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: clears a holder's two locked words, sets its flag for a small mode, then finishes the node its context's state points at.
#include <cstdint>

#include "node_build_holder.h"
#include "node_build_state.h"
#include "runtime/original.h"

namespace {

using misc::NodeBuildHolder;
using misc::NodeBuildNode;

RT_ORIGINAL(0x02fbe598, lock_holder, void(void *lock));
RT_ORIGINAL(0x02fbe5a8, unlock_holder, void(void *lock));
RT_ORIGINAL(0x004658d0, fn_004658d0, void(void *inner));
RT_ORIGINAL(0x00465ec0, fn_00465ec0, void(void *link));
RT_ORIGINAL(0x00465930, fn_00465930, uint64_t(void *inner));

}  // namespace

/**
 *
 * Clears the holder's word under the first lock and its value under the second lock, and sets the flag when the
 * masked mode is below the limit. The node the holder's state points at, when there is one, is finished by
 * the two calls and the tail call, whose result is the function's result. Without a node the result is the
 * holder's context address, which the original leaves in the result register.
 *
 */
extern "C" uint64_t bb_misc_clear_holder_finish_node(NodeBuildHolder *holder)
{
    lock_holder(holder->first_lock);
    holder->word = 0;
    unlock_holder(holder->first_lock);
    lock_holder(holder->second_lock);
    holder->value = 0;
    unlock_holder(holder->second_lock);
    if ((holder->mode & misc::holder_mode_mask) < misc::holder_mode_limit) {
        holder->flag = true;
    }
    NodeBuildNode *node = holder->context->state->node_0x00f8;
    if (node == nullptr) {
        return reinterpret_cast<uint64_t>(holder->context);
    }
    fn_004658d0(node->inner_0x0010);
    fn_00465ec0(node->link_0x0038);
    return fn_00465930(node->inner_0x0010);
}
