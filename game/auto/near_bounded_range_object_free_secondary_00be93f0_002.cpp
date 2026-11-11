// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the instructions of misc_bounded_range_object_free_secondary, in game/misc/bounded_range_object_free_secondary.cpp, each using other addresses and constants.
// Every block below is one source text with the addresses and constants exchanged.
#include <cstddef>
#include <cstdint>
#include "../engine/allocator.h"
#include "../misc/thread_allocator.h"
#include "runtime/original.h"

// auto_bounded_range_object_free_secondary_00946d00: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00946d00 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00946d60, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x18;
constexpr size_t count_word_before_secondary = 0x10;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x90;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00946d00(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_00946d00

// auto_bounded_range_object_free_secondary_0094c0c0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_0094c0c0 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x0094c120, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x40;
constexpr size_t count_word_before_secondary = 0x38;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x98;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_0094c0c0(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_0094c0c0

// auto_bounded_range_object_free_secondary_009b92a0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_009b92a0 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x009b9300, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x18;
constexpr size_t count_word_before_secondary = 0x10;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x90;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_009b92a0(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_009b92a0

// auto_bounded_range_object_free_secondary_009c4ad0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_009c4ad0 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x009c4b30, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x18;
constexpr size_t count_word_before_secondary = 0x10;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x160;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_009c4ad0(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_009c4ad0

// auto_bounded_range_object_free_secondary_009d0d70: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_009d0d70 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x009d0dd0, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x18;
constexpr size_t count_word_before_secondary = 0x10;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x140;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_009d0d70(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_009d0d70

// auto_bounded_range_object_free_secondary_00a06600: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00a06600 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00a1c0c0, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x18;
constexpr size_t count_word_before_secondary = 0x10;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x68;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00a06600(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_00a06600

// auto_bounded_range_object_free_secondary_00a06660: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00a06660 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00a1c0c0, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x20;
constexpr size_t count_word_before_secondary = 0x18;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x68;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00a06660(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_00a06660

// auto_bounded_range_object_free_secondary_00a066c0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00a066c0 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00a1c0c0, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x28;
constexpr size_t count_word_before_secondary = 0x20;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x68;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00a066c0(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_00a066c0

// auto_bounded_range_object_free_secondary_00a06720: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00a06720 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00a1c0c0, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x60;
constexpr size_t count_word_before_secondary = 0x58;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x68;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00a06720(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_00a06720

// auto_bounded_range_object_free_secondary_00a6a390: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00a6a390 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00a6a3f0, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x20;
constexpr size_t count_word_before_secondary = 0x18;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x100;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00a6a390(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_00a6a390

// auto_bounded_range_object_free_secondary_00a7bfb0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00a7bfb0 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00a7c010, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x20;
constexpr size_t count_word_before_secondary = 0x18;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x90;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00a7bfb0(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_00a7bfb0

// auto_bounded_range_object_free_secondary_00a8a9d0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00a8a9d0 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00a8ab50, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x18;
constexpr size_t count_word_before_secondary = 0x10;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x60;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00a8a9d0(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_00a8a9d0

// auto_bounded_range_object_free_secondary_00a8aa30: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00a8aa30 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00a8ab50, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x20;
constexpr size_t count_word_before_secondary = 0x18;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x60;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00a8aa30(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_00a8aa30

// auto_bounded_range_object_free_secondary_00a8aa90: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00a8aa90 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00a8ab50, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x28;
constexpr size_t count_word_before_secondary = 0x20;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x60;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00a8aa90(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_00a8aa90

// auto_bounded_range_object_free_secondary_00a8aaf0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00a8aaf0 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00a8ab50, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x48;
constexpr size_t count_word_before_secondary = 0x40;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x60;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00a8aaf0(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_00a8aaf0

// auto_bounded_range_object_free_secondary_00a93b90: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00a93b90 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00a93c50, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x18;
constexpr size_t count_word_before_secondary = 0x10;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x68;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00a93b90(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_00a93b90

// auto_bounded_range_object_free_secondary_00a93bf0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00a93bf0 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00a93c50, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x20;
constexpr size_t count_word_before_secondary = 0x18;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x68;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00a93bf0(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_00a93bf0

// auto_bounded_range_object_free_secondary_00d27390: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00d27390 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00d273f0, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0xa0;
constexpr size_t count_word_before_secondary = 0x98;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0xf0;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00d27390(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_00d27390

// auto_bounded_range_object_free_secondary_00d27e40: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00d27e40 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00d27f00, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x40;
constexpr size_t count_word_before_secondary = 0x38;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x70;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00d27e40(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_00d27e40

// auto_bounded_range_object_free_secondary_00d27ea0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00d27ea0 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00d27f00, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x50;
constexpr size_t count_word_before_secondary = 0x48;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x70;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00d27ea0(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_00d27ea0

// auto_bounded_range_object_free_secondary_00d295f0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00d295f0 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00d296b0, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x40;
constexpr size_t count_word_before_secondary = 0x38;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x290;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00d295f0(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_00d295f0

// auto_bounded_range_object_free_secondary_00d29650: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00d29650 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00d296b0, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x50;
constexpr size_t count_word_before_secondary = 0x48;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x290;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00d29650(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_00d29650

// auto_bounded_range_object_free_secondary_00d38370: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00d38370 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00d38430, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x40;
constexpr size_t count_word_before_secondary = 0x38;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x68;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00d38370(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_00d38370

// auto_bounded_range_object_free_secondary_00d383d0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00d383d0 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00d38430, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x50;
constexpr size_t count_word_before_secondary = 0x48;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x68;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00d383d0(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_00d383d0

// auto_bounded_range_object_free_secondary_00e97790: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00e97790 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00e977f0, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x18;
constexpr size_t count_word_before_secondary = 0x10;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0xe8;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00e97790(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_00e97790

// auto_bounded_range_object_free_secondary_00e9df40: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00e9df40 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00e9e060, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x40;
constexpr size_t count_word_before_secondary = 0x38;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x110;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00e9df40(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_00e9df40

// auto_bounded_range_object_free_secondary_00e9dfa0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00e9dfa0 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00e9e060, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x48;
constexpr size_t count_word_before_secondary = 0x40;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x110;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00e9dfa0(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_00e9dfa0

// auto_bounded_range_object_free_secondary_00e9e000: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00e9e000 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00e9e060, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x50;
constexpr size_t count_word_before_secondary = 0x48;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x110;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00e9e000(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_00e9e000

// auto_bounded_range_object_free_secondary_00ea26b0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00ea26b0 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00ea27d0, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x40;
constexpr size_t count_word_before_secondary = 0x38;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x90;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00ea26b0(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_00ea26b0

// auto_bounded_range_object_free_secondary_00ea2710: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00ea2710 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00ea27d0, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x48;
constexpr size_t count_word_before_secondary = 0x40;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x90;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00ea2710(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_00ea2710

// auto_bounded_range_object_free_secondary_00ea2770: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00ea2770 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00ea27d0, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x50;
constexpr size_t count_word_before_secondary = 0x48;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x90;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00ea2770(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_00ea2770

// auto_bounded_range_object_free_secondary_00ea7630: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00ea7630 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00ea7750, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x40;
constexpr size_t count_word_before_secondary = 0x38;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x78;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00ea7630(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_00ea7630

// auto_bounded_range_object_free_secondary_00ea7690: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00ea7690 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00ea7750, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x48;
constexpr size_t count_word_before_secondary = 0x40;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x78;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00ea7690(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_00ea7690

// auto_bounded_range_object_free_secondary_00ea76f0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00ea76f0 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00ea7750, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x50;
constexpr size_t count_word_before_secondary = 0x48;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x78;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00ea76f0(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_00ea76f0

// auto_bounded_range_object_free_secondary_00eb0c50: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00eb0c50 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00eb0d70, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x40;
constexpr size_t count_word_before_secondary = 0x38;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x70;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00eb0c50(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_00eb0c50

// auto_bounded_range_object_free_secondary_00eb0cb0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00eb0cb0 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00eb0d70, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x48;
constexpr size_t count_word_before_secondary = 0x40;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x70;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00eb0cb0(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_00eb0cb0

// auto_bounded_range_object_free_secondary_00eb0d10: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00eb0d10 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00eb0d70, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x50;
constexpr size_t count_word_before_secondary = 0x48;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x70;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00eb0d10(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_00eb0d10

// auto_bounded_range_object_free_secondary_00f6c5f0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00f6c5f0 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00f6c650, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x40;
constexpr size_t count_word_before_secondary = 0x38;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0xe0;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00f6c5f0(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_00f6c5f0

// auto_bounded_range_object_free_secondary_0152f190: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_0152f190 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x0152f370, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0xa0;
constexpr size_t count_word_before_secondary = 0x98;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0xf8;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_0152f190(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_0152f190

// auto_bounded_range_object_free_secondary_0152f1f0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_0152f1f0 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x0152f370, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0xa8;
constexpr size_t count_word_before_secondary = 0xa0;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0xf8;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_0152f1f0(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_0152f1f0

// auto_bounded_range_object_free_secondary_0152f250: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_0152f250 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x0152f370, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0xb0;
constexpr size_t count_word_before_secondary = 0xa8;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0xf8;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_0152f250(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_0152f250

// auto_bounded_range_object_free_secondary_0152f2b0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_0152f2b0 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x0152f370, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0xb8;
constexpr size_t count_word_before_secondary = 0xb0;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0xf8;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_0152f2b0(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_0152f2b0

// auto_bounded_range_object_free_secondary_0152f310: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_0152f310 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x0152f370, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0xc0;
constexpr size_t count_word_before_secondary = 0xb8;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0xf8;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_0152f310(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_0152f310

// auto_bounded_range_object_free_secondary_015309d0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_015309d0 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x01530a90, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x40;
constexpr size_t count_word_before_secondary = 0x38;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x68;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_015309d0(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_015309d0

// auto_bounded_range_object_free_secondary_01530a30: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_01530a30 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x01530a90, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x50;
constexpr size_t count_word_before_secondary = 0x48;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x68;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_01530a30(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_01530a30

// auto_bounded_range_object_free_secondary_01533230: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_01533230 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x01533290, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x18;
constexpr size_t count_word_before_secondary = 0x10;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x90;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_01533230(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_01533230

// auto_bounded_range_object_free_secondary_01534c20: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_01534c20 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x01534c80, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x18;
constexpr size_t count_word_before_secondary = 0x10;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0xf0;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_01534c20(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_01534c20

// auto_bounded_range_object_free_secondary_0153d3b0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_0153d3b0 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x0153d470, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x40;
constexpr size_t count_word_before_secondary = 0x38;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x80;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_0153d3b0(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_0153d3b0

// auto_bounded_range_object_free_secondary_0153d410: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_0153d410 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x0153d470, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x50;
constexpr size_t count_word_before_secondary = 0x48;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x80;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_0153d410(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_0153d410

// auto_bounded_range_object_free_secondary_015403a0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_015403a0 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x015404c0, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x40;
constexpr size_t count_word_before_secondary = 0x38;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x78;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_015403a0(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_015403a0

// auto_bounded_range_object_free_secondary_01540400: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_01540400 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x015404c0, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x50;
constexpr size_t count_word_before_secondary = 0x48;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x78;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_01540400(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_01540400

// auto_bounded_range_object_free_secondary_01540460: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_01540460 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x015404c0, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x58;
constexpr size_t count_word_before_secondary = 0x50;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x78;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_01540460(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_01540460

// auto_bounded_range_object_free_secondary_01548050: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_01548050 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x01548170, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x40;
constexpr size_t count_word_before_secondary = 0x38;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0xd0;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_01548050(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_01548050

// auto_bounded_range_object_free_secondary_015480b0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_015480b0 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x01548170, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x50;
constexpr size_t count_word_before_secondary = 0x48;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0xd0;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_015480b0(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_015480b0

// auto_bounded_range_object_free_secondary_01548110: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_01548110 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x01548170, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x58;
constexpr size_t count_word_before_secondary = 0x50;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0xd0;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_01548110(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_01548110

// auto_bounded_range_object_free_secondary_0154a020: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_0154a020 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x0154a0e0, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x40;
constexpr size_t count_word_before_secondary = 0x38;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x68;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_0154a020(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_0154a020

// auto_bounded_range_object_free_secondary_0154a080: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_0154a080 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x0154a0e0, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x50;
constexpr size_t count_word_before_secondary = 0x48;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x68;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_0154a080(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_0154a080

// auto_bounded_range_object_free_secondary_0154a650: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_0154a650 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x0154a770, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x40;
constexpr size_t count_word_before_secondary = 0x38;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x80;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_0154a650(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_0154a650

// auto_bounded_range_object_free_secondary_0154a6b0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_0154a6b0 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x0154a770, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x50;
constexpr size_t count_word_before_secondary = 0x48;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x80;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_0154a6b0(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_0154a6b0

// auto_bounded_range_object_free_secondary_0154a710: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_0154a710 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x0154a770, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x58;
constexpr size_t count_word_before_secondary = 0x50;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x80;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_0154a710(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_0154a710

// auto_bounded_range_object_free_secondary_0154e6b0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_0154e6b0 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x0154e7d0, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x40;
constexpr size_t count_word_before_secondary = 0x38;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x70;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_0154e6b0(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_0154e6b0

// auto_bounded_range_object_free_secondary_0154e710: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_0154e710 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x0154e7d0, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x50;
constexpr size_t count_word_before_secondary = 0x48;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x70;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_0154e710(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_0154e710

// auto_bounded_range_object_free_secondary_0154e770: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_0154e770 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x0154e7d0, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x58;
constexpr size_t count_word_before_secondary = 0x50;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x70;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_0154e770(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_0154e770

// auto_bounded_range_object_free_secondary_01550650: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_01550650 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x01550770, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x40;
constexpr size_t count_word_before_secondary = 0x38;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x80;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_01550650(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_01550650

// auto_bounded_range_object_free_secondary_015506b0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_015506b0 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x01550770, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x50;
constexpr size_t count_word_before_secondary = 0x48;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x80;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_015506b0(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_015506b0

// auto_bounded_range_object_free_secondary_01550710: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_01550710 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x01550770, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x58;
constexpr size_t count_word_before_secondary = 0x50;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x80;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_01550710(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_01550710

// auto_bounded_range_object_free_secondary_015618a0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_015618a0 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x01561960, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x18;
constexpr size_t count_word_before_secondary = 0x10;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x78;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_015618a0(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_015618a0

// auto_bounded_range_object_free_secondary_01561900: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_01561900 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x01561960, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x20;
constexpr size_t count_word_before_secondary = 0x18;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x78;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_01561900(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_01561900

// auto_bounded_range_object_free_secondary_0292adf0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_0292adf0 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x0292ae50, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x18;
constexpr size_t count_word_before_secondary = 0x10;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x120;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_0292adf0(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_0292adf0

// auto_bounded_range_object_free_secondary_029bb3b0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_029bb3b0 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00d296b0, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x40;
constexpr size_t count_word_before_secondary = 0x38;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x290;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_029bb3b0(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_029bb3b0

// auto_bounded_range_object_free_secondary_029bb420: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_029bb420 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00d296b0, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x50;
constexpr size_t count_word_before_secondary = 0x48;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x290;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_029bb420(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_029bb420

// auto_bounded_range_object_free_secondary_029bb580: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_029bb580 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00d296b0, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x40;
constexpr size_t count_word_before_secondary = 0x38;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x290;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_029bb580(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_029bb580

// auto_bounded_range_object_free_secondary_029bb5f0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_029bb5f0 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00d296b0, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x50;
constexpr size_t count_word_before_secondary = 0x48;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x290;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_029bb5f0(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_029bb5f0

// auto_bounded_range_object_free_secondary_029bb750: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_029bb750 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00d296b0, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x40;
constexpr size_t count_word_before_secondary = 0x38;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x290;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_029bb750(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_029bb750

// auto_bounded_range_object_free_secondary_029bb7c0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_029bb7c0 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00d296b0, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x50;
constexpr size_t count_word_before_secondary = 0x48;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x290;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_029bb7c0(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_029bb7c0

// auto_bounded_range_object_free_secondary_029bb920: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_029bb920 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00d296b0, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x40;
constexpr size_t count_word_before_secondary = 0x38;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x290;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_029bb920(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_029bb920

// auto_bounded_range_object_free_secondary_029bb990: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_029bb990 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00d296b0, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x50;
constexpr size_t count_word_before_secondary = 0x48;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x290;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_029bb990(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_029bb990

// auto_bounded_range_object_free_secondary_029bbaf0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_029bbaf0 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00d296b0, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x40;
constexpr size_t count_word_before_secondary = 0x38;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x290;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_029bbaf0(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_029bbaf0

// auto_bounded_range_object_free_secondary_029bbb60: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_029bbb60 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00d296b0, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x50;
constexpr size_t count_word_before_secondary = 0x48;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x290;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_029bbb60(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_029bbb60

// auto_bounded_range_object_free_secondary_029bbcc0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_029bbcc0 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00d296b0, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x40;
constexpr size_t count_word_before_secondary = 0x38;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x290;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_029bbcc0(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_029bbcc0

// auto_bounded_range_object_free_secondary_029bbd30: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_029bbd30 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00d296b0, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x50;
constexpr size_t count_word_before_secondary = 0x48;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x290;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_029bbd30(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_029bbd30

// auto_bounded_range_object_free_secondary_02a06500: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_02a06500 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00f43940, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x40;
constexpr size_t count_word_before_secondary = 0x38;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x68;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_02a06500(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_02a06500

// auto_bounded_range_object_free_secondary_02a0ac00: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_02a0ac00 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00f43940, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x40;
constexpr size_t count_word_before_secondary = 0x38;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x60;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_02a0ac00(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_02a0ac00

// auto_bounded_range_object_free_secondary_02a0b4a0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_02a0b4a0 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00f43940, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x40;
constexpr size_t count_word_before_secondary = 0x38;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x60;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_02a0b4a0(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_02a0b4a0

// auto_bounded_range_object_free_secondary_02a0b900: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_02a0b900 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00f43940, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x40;
constexpr size_t count_word_before_secondary = 0x38;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x60;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_02a0b900(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_02a0b900

// auto_bounded_range_object_free_secondary_02a0cf30: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_02a0cf30 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00f43940, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x40;
constexpr size_t count_word_before_secondary = 0x38;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x60;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_02a0cf30(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_02a0cf30

// auto_bounded_range_object_free_secondary_02a0d090: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_02a0d090 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00f43940, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x40;
constexpr size_t count_word_before_secondary = 0x38;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x68;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_02a0d090(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_02a0d090

// auto_bounded_range_object_free_secondary_02a0f190: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_02a0f190 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00f43940, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x40;
constexpr size_t count_word_before_secondary = 0x38;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x68;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_02a0f190(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_02a0f190

// auto_bounded_range_object_free_secondary_02de1810: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_02de1810 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00a2cb10, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x18;
constexpr size_t count_word_before_secondary = 0x10;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x78;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_02de1810(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_02de1810

// auto_bounded_range_object_free_secondary_02de1880: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_02de1880 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00a2cb10, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x20;
constexpr size_t count_word_before_secondary = 0x18;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x78;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_02de1880(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_02de1880

// auto_bounded_range_object_free_secondary_02e0e2d0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_02e0e2d0 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x01553f30, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x40;
constexpr size_t count_word_before_secondary = 0x38;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x60;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_02e0e2d0(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_02e0e2d0

// auto_bounded_range_object_free_secondary_02e0e340: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_02e0e340 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x01553f30, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x50;
constexpr size_t count_word_before_secondary = 0x48;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x60;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_02e0e340(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_02e0e340

// auto_bounded_range_object_free_secondary_02e0e6d0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_02e0e6d0 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x01553f30, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x40;
constexpr size_t count_word_before_secondary = 0x38;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x60;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_02e0e6d0(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_02e0e6d0

// auto_bounded_range_object_free_secondary_02e0e740: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_02e0e740 {

namespace {

/** The thread allocator's sized free slot, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x01553f30, release_object, void(void *object));

// Where the secondary base lies in the object, and how far before that base the count word is.
constexpr size_t secondary_base_offset = 0x50;
constexpr size_t count_word_before_secondary = 0x48;

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x60;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const uint8_t *secondary)
{
    const uint32_t count_word = *reinterpret_cast<const uint32_t *>(secondary - count_word_before_secondary);
    const uint32_t size = count_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_02e0e740(uint8_t *secondary)
{
    uint8_t *const object = secondary - secondary_base_offset;
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(secondary));
}

}  // namespace near_02e0e740
