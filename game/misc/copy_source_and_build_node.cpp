// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: copies a source into a node build state and runs the slot builder on the state. A state
// that points at a node also finishes the node: its inner object and link are passed on, and the
// result of the node's last call is the result.
#include <cstdint>

#include "node_build_state.h"
#include "runtime/original.h"

namespace {

using misc::NodeBuildNode;
using misc::NodeBuildSlot;
using misc::NodeBuildSource;
using misc::NodeBuildState;

RT_ORIGINAL(0x004102b0, build_slot, uint64_t(NodeBuildSlot *slot, uint16_t half, uint32_t first_dword,
                                             uint64_t first_word, uint64_t second_word, uint32_t second_dword,
                                             uint64_t stack_word));
RT_ORIGINAL(0x004658d0, fn_004658d0, void(void *inner));
RT_ORIGINAL(0x00465ec0, fn_00465ec0, void(void *link));
RT_ORIGINAL(0x00465930, fn_00465930, uint64_t(void *inner));

/** The stack argument the builder is given: none. */
constexpr uint64_t no_stack_argument = 0;
/** The flag the build sets once it has finished a state that has a node. */
constexpr int32_t node_finished_flag = 1;

}  // namespace

/**
 *
 * Copies the source's words and block into the state, runs the slot builder on the state's slot and
 * keeps the state's count. When the state has no node the builder's result is returned after the
 * flag is set; otherwise the node's inner object is handed to its call, the count and flag are set,
 * the node's link is handed to its call, and the inner object's tail call result is returned.
 *
 */
extern "C" uint64_t bb_misc_copy_source_and_build_node(NodeBuildState *state, const NodeBuildSource *source)
{
    state->word_0x50 = source->word_0x00;
    state->low_0x60 = source->low_0x10;
    state->high_0x68 = source->high_0x18;
    state->word_0x70 = source->word_0x20;
    state->dword_0x78 = source->dword_0x28;

    const uint64_t built = build_slot(&state->slot_0x0080, source->half_0x48, source->dword_0x30,
                                      source->word_0x40, source->word_0x38, source->dword_0x4c,
                                      no_stack_argument);
    const uint32_t count = state->count_0x00e8;

    NodeBuildNode *node = state->node_0x00f8;
    if (node == nullptr) {
        state->count_0x00e8 = count;
        state->flag_0x00e4 = node_finished_flag;
        return built;
    }

    fn_004658d0(node->inner_0x0010);
    state->count_0x00e8 = count;
    state->flag_0x00e4 = node_finished_flag;
    fn_00465ec0(state->node_0x00f8->link_0x0038);
    return fn_00465930(node->inner_0x0010);
}
