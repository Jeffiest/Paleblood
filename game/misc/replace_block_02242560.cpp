// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"
#include "../engine/engine.h"
#include "runtime/original.h"
#include "thread_allocator_cache.h"

namespace {

using engine::Allocator;

/** The request: a 30-bit value whose scaled count sets how many entries the block holds. */
struct Source {
    uint8_t unknown_0x00[0x1c];
    uint32_t value_0x1c; /**< Only the low 30 bits are used. */
};
static_assert(offsetof(Source, value_0x1c) == 0x1c);

/** The owner: the entry count and the block that holds the entries. */
struct Owner {
    uint8_t unknown_0x00[0x40];
    uint32_t entry_count; /**< Number of entries in the block. */
    uint8_t unknown_0x44[0x04];
    void *block; /**< Block of entries, or null. */
};
static_assert(offsetof(Owner, entry_count) == 0x40 && offsetof(Owner, block) == 0x48);

/** Mask that keeps the request's low 30 bits. */
constexpr uint32_t value_mask = 0x3fffffff;
/** Size of one entry in bytes. */
constexpr uint64_t entry_size = 0x90;
/** Line number the fatal report gives. */
constexpr int32_t fatal_line = 100;

RT_GLOBAL(0x05940410, default_allocator, Allocator *);
RT_GLOBAL(0x04d2a1b0, count_scale, const double);
RT_GLOBAL(0x04d3bac3, cache_miss_file, const char);
RT_GLOBAL(0x04d40207, cache_miss_message, const char);

RT_ORIGINAL(0x00f2b990, fill_entries, void(Source *source, void *block, uint32_t count));
RT_ORIGINAL(0x0247b720, allocator_of, Allocator *(void *block));

}  // namespace

/**
 *
 * Replaces an owner's block of entries with a new one sized from the request. The entry count is the
 * request's low 30 bits scaled by a constant; the new block is allocated, filled from the request, and
 * the old block is freed through the thread's cached allocator or the block's own allocator.
 *
 * The owner keeps the new count and block afterwards.
 *
 */
extern "C" void bb_misc_replace_block_02242560(Owner *owner, void *, Source *source)
{
    const uint32_t request = source->value_0x1c & value_mask;
    const int64_t scaled = static_cast<int64_t>(static_cast<double>(request) * count_scale.get());
    const uint32_t count = static_cast<uint32_t>(scaled);

    Allocator *allocator = default_allocator.get();
    void *block = allocator->vtable->allocate_default(allocator, static_cast<uint64_t>(count) * entry_size);
    fill_entries(source, block, count);

    if (owner->block != nullptr) {
        Allocator *cached = misc::take_cached_allocator();
        if (cached == nullptr) {
            cached = allocator_of(owner->block);
            if (cached == nullptr) {
                engine::fatal_error(cache_miss_file.address(), fatal_line, cache_miss_message.address());
            }
        }
        cached->free(owner->block);
        owner->block = nullptr;
    }

    owner->entry_count = count;
    owner->block = block;
}
