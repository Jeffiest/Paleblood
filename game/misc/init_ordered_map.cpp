// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: sets up an ordered map's owner: zeroes its first block, allocates and initialises the head node, and zeroes its table.
#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"
#include "../engine/thread.h"
#include "ordered_map_owner.h"
#include "runtime/original.h"

namespace {

/** Bytes at the start of the owner that are zeroed first. */
constexpr uint64_t owner_head_block_size = 0xf8;

/** Bytes that one head node takes, and the alignment asked of the allocator for it. */
constexpr uint64_t head_node_size = 0x60;
constexpr uint64_t head_node_alignment = 0x08;

/** The colour value of a black node. */
constexpr uint8_t black_color = 0x01;

/** The line numbers the engine's fatal report carries for an allocator without a valid heap and for a failed node allocation. */
constexpr uint32_t allocator_invalid_line = 0x3e;
constexpr uint32_t allocation_failed_line = 0x109;

/** The value the throw helper is called with. */
constexpr uint32_t throw_helper_code = 0x1;

RT_GLOBAL(0x057e4318, thread_flag_offset, const int64_t);
RT_GLOBAL(0x057e4320, thread_throw_offset, const int64_t);
RT_GLOBAL(0x04b37dc0, allocator_invalid_message, const uint8_t);
RT_GLOBAL(0x04b37d80, allocation_failed_message, const uint8_t);

RT_ORIGINAL(0x024b55b0, fatal_report, void(void *, uint32_t, const uint8_t *));
RT_ORIGINAL(0x02fbe978, throw_helper, void(uint8_t *, uint32_t));
RT_ORIGINAL(0x02fbe688, zero_bytes, void(void *destination, int32_t value, uint64_t size));

}  // namespace

/**
 *
 * Sets up an ordered map's owner for the allocator: the owner's first block is zeroed, the allocator's information is
 * checked, and a head node is allocated and linked to itself as an empty map. The owner's table is zeroed last.
 *
 * When the allocator refuses the head node, a thread flag decides between the throw helper, which never returns,
 * and the engine's fatal report, which returns. The original leaves nothing in RAX that a caller reads, so the
 * function returns nothing.
 *
 */
extern "C" void bb_misc_init_ordered_map(misc::OrderedMapOwner *owner, engine::Allocator *allocator)
{
    zero_bytes(owner, 0, owner_head_block_size);
    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        fatal_report(nullptr, allocator_invalid_line, allocator_invalid_message.address());
    }
    owner->head = nullptr;
    owner->size = 0;
    owner->allocator = allocator;
    misc::OrderedMapHeadNode *head =
        static_cast<misc::OrderedMapHeadNode *>(allocator->allocate(head_node_size, head_node_alignment));
    if (head == nullptr) {
        if (*reinterpret_cast<const uint32_t *>(engine::thread_pointer() + thread_flag_offset.get()) != 0) {
            throw_helper(engine::thread_pointer() + thread_throw_offset.get(), throw_helper_code);
            __builtin_unreachable();
        }
        fatal_report(nullptr, allocation_failed_line, allocation_failed_message.address());
    }
    head->left = head;
    head->parent = head;
    head->right = head;
    head->color = black_color;
    head->is_nil = true;
    owner->head = head;
    owner->second_allocator = allocator;
    zero_bytes(owner->unknown_0x0120, 0, sizeof(owner->unknown_0x0120));
}
