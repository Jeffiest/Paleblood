// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: grows a list of 8-byte words to a new block for the requested count, moves the stored words across and frees the old block.
#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"
#include "../engine/thread.h"
#include "runtime/original.h"

namespace {

/** Bytes that one stored word takes. */
constexpr uint64_t word_size = 0x08;

/** The alignment asked of the allocator for the word block. */
constexpr uint64_t word_alignment = 0x08;

/** The line number the engine's fatal report carries for a failed word allocation. */
constexpr uint32_t allocation_failed_line = 0x109;

/** A list whose storage is the block from begin to the end of its capacity, taken from an allocator. */
struct WordList {
    uint8_t unknown_0x0000[0x08];
    uint64_t *begin;               /**< The first stored word. */
    uint64_t *end;                 /**< One past the last stored word. */
    uint64_t *capacity_end;        /**< One past the last reserved word. */
    engine::Allocator *allocator;  /**< The allocator the storage comes from. */
};
static_assert(offsetof(WordList, begin) == 0x08);
static_assert(offsetof(WordList, end) == 0x10);
static_assert(offsetof(WordList, capacity_end) == 0x18);
static_assert(offsetof(WordList, allocator) == 0x20);

RT_GLOBAL(0x057e4318, thread_flag_offset, const int64_t);
RT_GLOBAL(0x057e4320, thread_throw_offset, const int64_t);
RT_GLOBAL(0x04b37d80, allocation_failed_message, const uint8_t);

RT_ORIGINAL(0x024b55b0, fatal_report, void(void *, uint32_t, const uint8_t *));
RT_ORIGINAL(0x02fbe978, throw_helper, void(uint8_t *, uint32_t));

}  // namespace

/**
 *
 * Grows the list's storage to hold the requested number of words, moves the stored words into it and frees the old block.
 *
 * When the allocator refuses the block, a thread flag decides between the throw helper, which never returns,
 * and the engine's fatal report, which returns and leaves the stored words in place without a copy.
 */
extern "C" void bb_misc_grow_word_block(WordList *list, uint64_t count)
{
    engine::Allocator *allocator = list->allocator;
    uint64_t *block = static_cast<uint64_t *>(allocator->allocate(count * word_size, word_alignment));
    if (block == nullptr) {
        if (*reinterpret_cast<const uint32_t *>(engine::thread_pointer() + thread_flag_offset.get()) != 0) {
            throw_helper(engine::thread_pointer() + thread_throw_offset.get(), 1);
            __builtin_unreachable();
        }
        fatal_report(nullptr, allocation_failed_line, allocation_failed_message.address());
    }
    uint64_t *old_begin = list->begin;
    uint64_t *old_end = list->end;
    uint64_t old_count = static_cast<uint64_t>(old_end - old_begin);
    if (block != nullptr) {
        for (uint64_t index = 0; index < old_count; ++index) {
            block[index] = old_begin[index];
        }
    }
    if (old_begin != nullptr) {
        allocator->free(old_begin);
    }
    list->capacity_end = reinterpret_cast<uint64_t *>(reinterpret_cast<uintptr_t>(block) + count * word_size);
    list->end = reinterpret_cast<uint64_t *>(reinterpret_cast<uintptr_t>(block) + old_count * word_size);
    list->begin = block;
}
