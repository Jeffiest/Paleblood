// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: reserves room for 128 words in a word list under the thread lock, when it holds at most 127 words.
#include <cstddef>
#include <cstdint>

#include "../engine/thread.h"
#include "runtime/original.h"

namespace {

/** The most words the list may hold for the reservation to be made. */
constexpr uint64_t largest_count_reserved = 0x7f;

/** The word count the list is reserved for. */
constexpr uint32_t reserved_word_count = 0x80;

/** The thread flag value that marks the reservation in progress, and the value that clears it. */
constexpr uint32_t flag_in_progress = 0x1;
constexpr uint32_t flag_clear = 0x0;

/** A list whose storage is the block from begin to the end of its capacity. */
struct WordList {
    uint8_t unknown_0x0000[0x08];
    uint64_t *begin;               /**< The first stored word. */
    uint64_t *end;                 /**< One past the last stored word. */
    uint64_t *capacity_end;        /**< One past the last reserved word. */
};
static_assert(offsetof(WordList, begin) == 0x08);
static_assert(offsetof(WordList, end) == 0x10);
static_assert(offsetof(WordList, capacity_end) == 0x18);

RT_GLOBAL(0x057e4318, thread_flag_offset, const int64_t);
RT_GLOBAL(0x057e4320, thread_lock_offset, const int64_t);

RT_ORIGINAL(0x02fbe8f8, lock_attempt, int32_t(uint8_t *lock));
RT_ORIGINAL(0x027077a0, reserve_words, void(WordList *list, uint32_t count));

/** The thread's flag word, which is set while the reservation is in progress. */
uint32_t *thread_flag()
{
    return reinterpret_cast<uint32_t *>(engine::thread_pointer() + thread_flag_offset.get());
}

}  // namespace

/**
 *
 * Reserves room for the reserved word count in the list, under the thread lock, when the list holds at most
 * the largest count reserved. When the lock is taken by someone else, nothing changes.
 *
 * The original leaves the thread's flag address in RAX on return, so the function returns nothing.
 *
 */
extern "C" void bb_misc_reserve_words_locked(WordList *list)
{
    *thread_flag() = flag_in_progress;
    if (lock_attempt(engine::thread_pointer() + thread_lock_offset.get()) == 0) {
        const uint64_t stored_count = static_cast<uint64_t>(list->capacity_end - list->begin);
        if (stored_count <= largest_count_reserved) reserve_words(list, reserved_word_count);
    }
    *thread_flag() = flag_clear;
}
