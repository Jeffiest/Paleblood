// SPDX-License-Identifier: GPL-2.0-or-later
#include "virtual_object.h"
#include "runtime/original.h"

#include <cstdint>

namespace {

/** The size and the alignment of the block this routine allocates. */
constexpr uint32_t block_size = 0x30;
constexpr uint32_t block_alignment = 8;

/** The allocator routine that makes the block, from the context pointer it is given. */
RT_ORIGINAL(0x0247c4e0, allocate_block, void *(uint32_t size, uint32_t alignment, void *context));

/** The routine that fills the new block from the slot result, the word and the context. */
RT_ORIGINAL(0x02b40850, fill_block, void(void *block, uint64_t slot_result, void *context, uint64_t word));

}  // namespace

/**
 *
 * Asks the reference's object for a value through its slot at +0x28 with a 32-bit argument. If the
 * value is zero the result is zero. Otherwise a block is allocated with the context pointer, filled
 * from the value, the word and the context, and the block is returned. A failed allocation gives zero.
 */
extern "C" void *bb_misc_alloc_block_with_value(misc::VirtualObjectRef *reference, uint64_t word,
                                                uint32_t value)
{
    misc::VirtualObject *object = reference->object;
    const uint64_t slot_result = object->vtable->slot_28_value(object, value);
    if (slot_result == 0) {
        return nullptr;
    }
    void *block = allocate_block(block_size, block_alignment, reference->context);
    if (block == nullptr) {
        return nullptr;
    }
    fill_block(block, slot_result, reference->context, word);
    return block;
}
