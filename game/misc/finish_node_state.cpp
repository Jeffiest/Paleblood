// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: finishes the node a state points at: its inner object is handed to one call, its link to a
// second, and the inner object's tail call result is returned. A state with no node is left alone.
#include <cstdint>

#include "node_build_state.h"
#include "runtime/original.h"

namespace {

using misc::NodeBuildNode;
using misc::NodeBuildState;

RT_ORIGINAL(0x004658d0, fn_004658d0, void(void *inner));
RT_ORIGINAL(0x00465ec0, fn_00465ec0, void(void *link));
RT_ORIGINAL(0x00465930, fn_00465930, uint64_t(void *inner));

/** The result when the state has no node: the original leaves the result register alone. */
constexpr uint64_t no_node_result = 0;

}  // namespace

/**
 *
 * Finishes the state's node when it has one: the inner object goes to one call, then the link goes to a
 * second call read from the state again, and the inner object's tail call result is returned. A state
 * with no node returns nothing of its own.
 *
 */
extern "C" uint64_t bb_misc_finish_node_state(NodeBuildState *state)
{
    NodeBuildNode *node = state->node_0x00f8;
    if (node == nullptr) return no_node_result;

    fn_004658d0(node->inner_0x0010);
    fn_00465ec0(state->node_0x00f8->link_0x0038);
    return fn_00465930(node->inner_0x0010);
}
