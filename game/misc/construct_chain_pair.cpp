// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: builds an owner of two empty chain lists, each sentinel a self-linked node from the shared allocator.
#include <cstdint>

#include "../engine/allocator.h"
#include "../engine/block_holder.h"
#include "../engine/engine.h"
#include "../engine/thread.h"
#include "chain_list_node.h"
#include "chain_pair_owner.h"
#include "runtime/original.h"

namespace {

RT_GLOBAL(0x057248a0, chain_pair_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, allocator_invalid_message, const char);
RT_GLOBAL(0x04b37d80, node_allocation_failed_message, const char);
RT_GLOBAL(0x057e4318, thread_flag_offset, const int64_t);
RT_GLOBAL(0x057e4320, thread_throw_offset, const int64_t);

RT_ORIGINAL(0x02fbe978, throw_helper, void(uint8_t *, uint32_t));

/** The line the engine's fatal report carries for an allocator that reports itself invalid. */
constexpr int32_t allocator_invalid_line = 0x3e;
/** The line the engine's fatal report carries for a failed node allocation. */
constexpr int32_t node_allocation_failed_line = 0x109;
/** The bytes a chain node takes from the allocator. */
constexpr uint64_t node_size = 0x18;
/** The alignment asked of the allocator for a chain node. */
constexpr uint64_t node_alignment = 0x08;

/** Checks that the allocator reports itself valid, and reports a fatal error when it does not, then carries on. */
void require_valid_allocator(engine::Allocator *allocator)
{
    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, allocator_invalid_line, allocator_invalid_message.address());
    }
}

/**
 *
 * Takes a node from the allocator and links it to itself. A failed allocation throws through the thread's throw slot
 * when the thread flag is set; otherwise it reports the fatal error and goes on to store through the null node.
 *
 */
misc::ChainListNode *allocate_self_linked_node(engine::Allocator *allocator)
{
    auto *node = static_cast<misc::ChainListNode *>(allocator->allocate(node_size, node_alignment));
    if (node == nullptr) {
        if (*reinterpret_cast<const uint32_t *>(engine::thread_pointer() + thread_flag_offset.get()) != 0) {
            throw_helper(engine::thread_pointer() + thread_throw_offset.get(), 1);
            __builtin_unreachable();
        }
        engine::fatal_error(nullptr, node_allocation_failed_line, node_allocation_failed_message.address());
    }
    node->next = node;
    node->link_0x08 = node;
    return node;
}

}  // namespace

/**
 *
 * Builds the owner: stores its virtual table, then builds two chain lists, each with a fresh self-linked sentinel from
 * the shared allocator (checked for validity before each list), and zeroes the flag word and the zero word.
 *
 */
extern "C" void bb_misc_construct_chain_pair(misc::ChainPairOwner *owner)
{
    owner->vtable = chain_pair_vtable.address();

    engine::Allocator *allocator = engine::shared_allocator.get();
    require_valid_allocator(allocator);
    misc::ChainListOwner &first = owner->first_list;
    first.count_0x10 = 0;
    first.sentinel = nullptr;
    first.node_allocator = allocator;
    first.sentinel = allocate_self_linked_node(allocator);

    allocator = engine::shared_allocator.get();
    require_valid_allocator(allocator);
    misc::ChainListOwner &second = owner->second_list;
    second.count_0x10 = 0;
    second.sentinel = nullptr;
    second.node_allocator = allocator;
    second.sentinel = allocate_self_linked_node(allocator);

    owner->flag_0x48 = 0;
    owner->zero_0x50 = 0;
}
