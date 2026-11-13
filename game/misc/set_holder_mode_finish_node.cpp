// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: sets a holder's mode word, then finishes the node the holder points at, when it has one.
#include <cstdint>

#include "node_build_holder.h"
#include "node_build_state.h"
#include "runtime/original.h"

namespace {

using misc::NodeBuildHolder;
using misc::NodeBuildNode;

RT_ORIGINAL(0x004658d0, fn_004658d0, void(void *inner));
RT_ORIGINAL(0x00465ec0, fn_00465ec0, void(void *link));
RT_ORIGINAL(0x00465930, fn_00465930, uint64_t(void *inner));

/** The result when the holder has no node: the original leaves the result register alone. */
constexpr uint64_t no_node_result = 0;

}  // namespace

/**
 *
 * Sets the holder's mode word. When the holder has a node, the node's inner object goes to one call after the
 * mode is stored, the link goes to a second call, and the inner object's tail call result is returned. A holder
 * with no node returns nothing of its own.
 *
 */
extern "C" uint64_t bb_misc_set_holder_mode_finish_node(NodeBuildHolder *holder, uint32_t mode)
{
    NodeBuildNode *node = holder->node;
    if (node == nullptr) {
        holder->mode = mode;
        return no_node_result;
    }
    fn_004658d0(node->inner_0x0010);
    holder->mode = mode;
    fn_00465ec0(holder->node->link_0x0038);
    return fn_00465930(node->inner_0x0010);
}
