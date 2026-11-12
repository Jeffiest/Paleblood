// SPDX-License-Identifier: GPL-2.0-or-later
// Render: takes a 0x110-byte block and a 0x1a0-byte block from the allocator and initialises both through their callees.
#include <cstdint>

#include "../engine/allocator.h"
#include "runtime/original.h"

namespace {

/** Bytes that the first block takes, and the bytes the second block takes. */
constexpr uint64_t first_block_size = 0x110;
constexpr uint64_t second_block_size = 0x1a0;

/** The alignment asked of the allocator for both blocks. */
constexpr uint64_t block_alignment = 0x10;

RT_ORIGINAL(0x01313be0, initialize_first_block, void(void *block));
RT_ORIGINAL(0x01313e50, bind_first_block, void(void *block, engine::Allocator *allocator, uint32_t first, uint32_t second));
RT_ORIGINAL(0x026fb190, initialize_second_block, void(void *block));
RT_ORIGINAL(0x026fb540, bind_second_block, void(void *block, engine::Allocator *allocator));

}  // namespace

/**
 *
 * Takes the first block from the allocator and initialises it for the two counts. When the allocator refuses it, the
 * function reports false. Otherwise it takes the second block, initialises it when it was taken, binds both to the
 * allocator, and reports true.
 *
 */
extern "C" uint8_t bb_render_create_wind_objects(engine::Allocator *allocator, uint32_t first, uint32_t second)
{
    void *block = allocator->allocate(first_block_size, block_alignment);
    if (block == nullptr) {
        return 0;
    }
    initialize_first_block(block);
    bind_first_block(block, allocator, first, second);
    void *second_block = allocator->allocate(second_block_size, block_alignment);
    if (second_block != nullptr) {
        initialize_second_block(second_block);
    }
    bind_second_block(second_block, allocator);
    return 1;
}
