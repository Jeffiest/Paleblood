// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "../engine/thread.h"
#include "block_releaser.h"
#include "dual_base_object.h"
#include "runtime/original.h"
#include "thread_block.h"

namespace {

// Where the thread's block record sits, from the thread pointer.
RT_GLOBAL(0x057e40f8, thread_block_offset, const int64_t);

// The high half of the size word holds the block size, or this marker for the default size.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x40;
constexpr int size_high_half_shift = 16;

// The size the object's block is released with: the size word's high half, or the default size.
uint32_t block_size_of(const misc::DualBaseObject *object)
{
    const uint32_t size = object->size_word_0x08 >> size_high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Releases a two-base object: it sets both base vtables, releases the item it holds, and hands the
 * object's block to the thread's releaser with the block size.
 *
 * The releaser's result is returned as it is.
 */
extern "C" uint64_t bb_misc_delete_dual_base(misc::DualBaseObject *object)
{
    misc::release_dual_base_object(object);

    misc::ThreadBlock *block =
        *reinterpret_cast<misc::ThreadBlock **>(engine::thread_pointer() + thread_block_offset.get());
    misc::BlockReleaser *releaser = block->releaser;
    return releaser->vtable->release(releaser, object, block_size_of(object));
}
