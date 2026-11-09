// SPDX-License-Identifier: GPL-2.0-or-later
#include "object_block.h"
#include "virtual_object.h"
#include "runtime/original.h"

#include <cstdint>

namespace {

/** The size and the alignment of the block this routine allocates. */
constexpr uint32_t object_block_size = 0x140;
constexpr uint32_t object_block_alignment = 8;

/** The allocator routine that makes the block, from the context pointer it is given. */
RT_ORIGINAL(0x0247c4e0, allocate_block, void *(uint32_t size, uint32_t alignment, void *context));

/** The routine that fills the new block from the context, the word, the extra value, the answer and the flag. */
RT_ORIGINAL(0x02b3f280, fill_block, void(misc::ObjectBlock *block, void *context, uint64_t word,
                                         uint64_t extra, uint64_t answer, uint64_t flag));

/** The routine that finishes the block once it is filled. */
RT_ORIGINAL(0x02b3f5c0, finish_block, void(misc::ObjectBlock *block));

}  // namespace

/**
 *
 * Builds a block for a reference's object: asks the object for an answer through its slot at +0x28
 * with a 32-bit argument, and if that answer is non-zero allocates a 0x140-byte block, fills it from
 * the context, the word, the extra value, the answer and the flag, and stores the value that the
 * answer's routine at +0x10 gives into the block at +0x20.
 *
 * A zero answer or a failed allocation gives zero. Otherwise the block is returned.
 */
extern "C" misc::ObjectBlock *bb_misc_build_object_block(misc::VirtualObjectRef *reference, uint64_t word,
                                                         uint32_t value, uint64_t extra, uint8_t flag)
{
    misc::VirtualObject *object = reference->object;
    const uint64_t answer = object->vtable->slot_28_value(object, value);
    if (answer == 0) {
        return nullptr;
    }
    auto *block = static_cast<misc::ObjectBlock *>(
        allocate_block(object_block_size, object_block_alignment, reference->context));
    if (block == nullptr) {
        return nullptr;
    }
    fill_block(block, reference->context, word, extra, answer, flag);
    misc::VirtualObject *answer_object = reinterpret_cast<misc::VirtualObject *>(answer);
    const uint64_t routine_result = answer_object->vtable->slot_10(answer_object);
    finish_block(block);
    block->slot_10_result = routine_result;
    return block;
}
