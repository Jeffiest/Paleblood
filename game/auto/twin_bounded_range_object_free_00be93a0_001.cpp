// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_bounded_range_object_free, in game/misc/bounded_range_object_free.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "../engine/allocator.h"
#include "../loading/fios.h"
#include "../misc/bounded_range_object.h"
#include "runtime/original.h"

// auto_bounded_range_object_free_00be2a80: misc_bounded_range_object_free with other addresses.
namespace twin_00be2a80 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00be2ad0, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0xc0;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const misc::BoundedRangeObject *object)
{
    const uint32_t size = object->refcount_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor of a bounded range object: releases it, then frees its block through the thread's
 * allocator with the block size and returns the free's result.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_00be2a80(misc::BoundedRangeObject *object)
{
    release_object(object);
    engine::Allocator *allocator = loading::fios::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace twin_00be2a80

// auto_bounded_range_object_free_00f47140: misc_bounded_range_object_free with other addresses.
namespace twin_00f47140 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00f47190, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0xc0;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const misc::BoundedRangeObject *object)
{
    const uint32_t size = object->refcount_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor of a bounded range object: releases it, then frees its block through the thread's
 * allocator with the block size and returns the free's result.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_00f47140(misc::BoundedRangeObject *object)
{
    release_object(object);
    engine::Allocator *allocator = loading::fios::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace twin_00f47140

// auto_bounded_range_object_free_01c44e60: misc_bounded_range_object_free with other addresses.
namespace twin_01c44e60 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00aa6180, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0xc0;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const misc::BoundedRangeObject *object)
{
    const uint32_t size = object->refcount_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor of a bounded range object: releases it, then frees its block through the thread's
 * allocator with the block size and returns the free's result.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_01c44e60(misc::BoundedRangeObject *object)
{
    release_object(object);
    engine::Allocator *allocator = loading::fios::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace twin_01c44e60

// auto_bounded_range_object_free_0295d4e0: misc_bounded_range_object_free with other addresses.
namespace twin_0295d4e0 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x0295d530, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0xc0;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const misc::BoundedRangeObject *object)
{
    const uint32_t size = object->refcount_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor of a bounded range object: releases it, then frees its block through the thread's
 * allocator with the block size and returns the free's result.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_0295d4e0(misc::BoundedRangeObject *object)
{
    release_object(object);
    engine::Allocator *allocator = loading::fios::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace twin_0295d4e0

// auto_bounded_range_object_free_029e31b0: misc_bounded_range_object_free with other addresses.
namespace twin_029e31b0 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00f25de0, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0xc0;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const misc::BoundedRangeObject *object)
{
    const uint32_t size = object->refcount_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor of a bounded range object: releases it, then frees its block through the thread's
 * allocator with the block size and returns the free's result.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_029e31b0(misc::BoundedRangeObject *object)
{
    release_object(object);
    engine::Allocator *allocator = loading::fios::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace twin_029e31b0

// auto_bounded_range_object_free_02dabe40: misc_bounded_range_object_free with other addresses.
namespace twin_02dabe40 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x02dabf20, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0xc0;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const misc::BoundedRangeObject *object)
{
    const uint32_t size = object->refcount_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor of a bounded range object: releases it, then frees its block through the thread's
 * allocator with the block size and returns the free's result.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_02dabe40(misc::BoundedRangeObject *object)
{
    release_object(object);
    engine::Allocator *allocator = loading::fios::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace twin_02dabe40
