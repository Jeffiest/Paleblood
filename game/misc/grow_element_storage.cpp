// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: grows a list of 16-byte elements to a new block for the requested count, moves the stored elements across and frees the old block.
#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"
#include "../engine/thread.h"
#include "runtime/original.h"

namespace {

/** Bytes that one list element takes. */
constexpr uint64_t element_size = 0x10;

/** The alignment asked of the allocator for the element block. */
constexpr uint64_t element_alignment = 0x08;

/** The line number the engine's fatal report carries for a failed element allocation. */
constexpr uint32_t allocation_failed_line = 0x109;

/** A list element: two words, copied as a unit. */
struct ListElement {
    uint64_t first_0x00;     /**< The element's first word. */
    uint64_t second_0x08;    /**< The element's second word. */
};
static_assert(sizeof(ListElement) == element_size);

/** A list whose storage is the block from begin to the end of its capacity, taken from an allocator. */
struct ElementList {
    uint8_t unknown_0x0000[0x08];
    ListElement *begin;            /**< The first stored element. */
    ListElement *end;              /**< One past the last stored element. */
    ListElement *capacity_end;     /**< One past the last reserved element. */
    engine::Allocator *allocator;  /**< The allocator the storage comes from. */
};
static_assert(offsetof(ElementList, begin) == 0x08);
static_assert(offsetof(ElementList, end) == 0x10);
static_assert(offsetof(ElementList, capacity_end) == 0x18);
static_assert(offsetof(ElementList, allocator) == 0x20);

RT_GLOBAL(0x057e4318, thread_flag_offset, const int64_t);
RT_GLOBAL(0x057e4320, thread_throw_offset, const int64_t);
RT_GLOBAL(0x04b37d80, allocation_failed_message, const uint8_t);

RT_ORIGINAL(0x024b55b0, fatal_report, void(void *, uint32_t, const uint8_t *));
RT_ORIGINAL(0x02fbe978, throw_helper, void(uint8_t *, uint32_t));

}  // namespace

/**
 *
 * Grows the list's storage to hold the requested number of elements, moves the stored elements into it and frees the old block.
 *
 * When the allocator refuses the block, a thread flag decides between the throw helper, which never returns,
 * and the engine's fatal report, which returns and leaves the stored elements in place without a copy.
 */
extern "C" void bb_misc_grow_element_storage(ElementList *list, uint64_t count)
{
    engine::Allocator *allocator = list->allocator;
    ListElement *block = static_cast<ListElement *>(allocator->allocate(count * element_size, element_alignment));
    if (block == nullptr) {
        if (*reinterpret_cast<const uint32_t *>(engine::thread_pointer() + thread_flag_offset.get()) != 0) {
            throw_helper(engine::thread_pointer() + thread_throw_offset.get(), 1);
            __builtin_unreachable();
        }
        fatal_report(nullptr, allocation_failed_line, allocation_failed_message.address());
    }
    ListElement *old_begin = list->begin;
    ListElement *old_end = list->end;
    uint64_t old_count = static_cast<uint64_t>(old_end - old_begin);
    if (block != nullptr) {
        for (uint64_t index = 0; index < old_count; ++index) {
            block[index] = old_begin[index];
        }
    }
    if (old_begin != nullptr) {
        allocator->free(old_begin);
    }
    list->capacity_end = reinterpret_cast<ListElement *>(reinterpret_cast<uintptr_t>(block) + count * element_size);
    list->end = reinterpret_cast<ListElement *>(reinterpret_cast<uintptr_t>(block) + old_count * element_size);
    list->begin = block;
}
