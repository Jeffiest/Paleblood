// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: links a new node holding a value in front of a chain list's first node, growing the count, and reports whether it did.
#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"
#include "../engine/thread.h"
#include "chain_list_node.h"
#include "chain_list_owner.h"
#include "runtime/original.h"

namespace {

/** Bytes that one chain node takes, and the alignment asked of the allocator for it. */
constexpr uint64_t node_size = 0x18;
constexpr uint64_t node_alignment = 0x08;

/** The count at which the list cannot grow any further. */
constexpr uint64_t max_list_count = 0x0aaaaaaaaaaaaaa9;

/** The line number the engine's fatal report carries for a failed node allocation. */
constexpr uint32_t allocation_failed_line = 0x109;

RT_GLOBAL(0x057e4318, thread_flag_offset, const int64_t);
RT_GLOBAL(0x057e4320, thread_throw_offset, const int64_t);
RT_GLOBAL(0x04b37d80, allocation_failed_message, const uint8_t);
RT_GLOBAL(0x04cbcd50, length_error_message, const uint8_t);

RT_ORIGINAL(0x024b55b0, fatal_report, void(void *, uint32_t, const uint8_t *));
RT_ORIGINAL(0x02fbe978, throw_helper, void(uint8_t *, uint32_t));
RT_ORIGINAL(0x02fbf1b8, length_error_throw, void(const uint8_t *));

}  // namespace

/**
 *
 * Returns false without touching the list when the value is null. Otherwise a node is allocated, its links are set so it
 * precedes the old first node, the count grows by one and the new node becomes the list's first node.
 *
 * When the allocator refuses the node, a thread flag decides between the throw helper, which never returns, and the
 * engine's fatal report, which returns and leaves the list without the node. A count at its limit reaches the length
 * error throw, which never returns. Returns true when the node was linked.
 */
extern "C" bool bb_misc_insert_value_node(misc::ChainListOwner *list, void *value)
{
    if (value == nullptr) return false;

    misc::ChainListNode *const head = list->sentinel;
    misc::ChainListNode *const old_first = head->link_0x08;
    engine::Allocator *const allocator = list->node_allocator;
    misc::ChainListNode *node = static_cast<misc::ChainListNode *>(allocator->allocate(node_size, node_alignment));
    if (node == nullptr) {
        if (*reinterpret_cast<const uint32_t *>(engine::thread_pointer() + thread_flag_offset.get()) != 0) {
            throw_helper(engine::thread_pointer() + thread_throw_offset.get(), 1);
            __builtin_unreachable();
        }
        fatal_report(nullptr, allocation_failed_line, allocation_failed_message.address());
    }

    node->next = head;
    node->link_0x08 = old_first;
    node->left = reinterpret_cast<misc::ChainListNode *>(value);

    if (list->count_0x10 == max_list_count) {
        length_error_throw(length_error_message.address());
        __builtin_unreachable();
    }
    list->count_0x10 += 1;
    head->link_0x08 = node;
    node->link_0x08->next = node;
    return true;
}
