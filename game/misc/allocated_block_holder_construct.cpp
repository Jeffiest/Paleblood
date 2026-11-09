// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: constructs an allocated block holder: stores its vtable and words, then a new state block when the heap can make one.
#include <cstdint>

#include "../engine/allocator.h"
#include "allocated_block_holder.h"
#include "allocated_holder_state.h"
#include "runtime/original.h"

namespace {

RT_GLOBAL(0x05940408, heap_allocator, engine::Allocator *);
RT_GLOBAL(0x0597c578, initial_word, uint64_t);

/** The size in bytes of the state block the holder allocates. */
constexpr uint64_t state_size = 0x60;
/** The alignment of the state block the holder allocates. */
constexpr uint64_t state_alignment = 0x10;
/** The value of the all-ones words. */
constexpr uint32_t all_ones = 0xffffffff;
/** The threshold the state starts with: minus one tenth. */
constexpr float state_threshold = -0.1f;

/** Clears the state block's words and sets its threshold and limit. */
void initialize_state(misc::AllocatedHolderState *state)
{
    state->link_0x00 = nullptr;
    state->count_0x08 = 0;
    state->flag_0x0c = 0;
    state->word_0x10 = 0;
    state->word_0x18 = 0;
    state->threshold_0x20 = state_threshold;
    state->zero_0x24 = 0;
    state->limit_0x28 = all_ones;
    state->flag_0x2c = 0;
    state->word_0x30 = 0;
    state->word_0x38 = 0;
    state->word_0x40 = 0;
    state->word_0x48 = 0;
    state->word_0x50 = 0;
}

}  // namespace

/**
 *
 * Constructs the holder from the source word: stores the vtable, the source, the initial words and the all-ones limit,
 * then allocates a state block from the heap and initializes it. The holder keeps the block when the allocation succeeds
 * and is left without one when it fails.
 *
 */
extern "C" void bb_misc_allocated_block_holder_construct(misc::AllocatedBlockHolder *holder, uint64_t source)
{
    holder->source_0x08 = source;
    holder->vtable = misc::allocated_block_holder_vtable.address();
    holder->limit_0x20 = all_ones;
    holder->block_0x28 = nullptr;
    holder->word_0x10 = initial_word.get();
    holder->word_0x18 = initial_word.get();
    auto *state = static_cast<misc::AllocatedHolderState *>(
        heap_allocator.get()->allocate(state_size, state_alignment));
    if (state == nullptr) return;
    initialize_state(state);
    holder->block_0x28 = state;
}
