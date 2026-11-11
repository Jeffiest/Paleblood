// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the instructions of misc_bounded_range_object_free_secondary, in game/misc/bounded_range_object_free_secondary.cpp, each using other addresses and constants.
// Every block below is that function's source with the addresses and constants exchanged: the
// names and comments in a block were written for that function and are carried over.
#include <cstddef>
#include <cstdint>
#include "../engine/allocator.h"
#include "../misc/thread_allocator.h"
#include "../misc/bounded_range_object.h"
#include "runtime/original.h"

// auto_bounded_range_object_free_secondary_00946ca0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00946ca0 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00946d60, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x90;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00946ca0(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_00946ca0

// auto_bounded_range_object_free_secondary_0094c060: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_0094c060 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x0094c120, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x98;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_0094c060(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_0094c060

// auto_bounded_range_object_free_secondary_00954d80: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00954d80 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00954de0, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x60;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00954d80(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_00954d80

// auto_bounded_range_object_free_secondary_00a065a0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00a065a0 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00a1c0c0, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x68;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00a065a0(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_00a065a0

// auto_bounded_range_object_free_secondary_00a8a970: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00a8a970 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00a8ab50, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x60;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00a8a970(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_00a8a970

// auto_bounded_range_object_free_secondary_00a93b30: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00a93b30 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00a93c50, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x68;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00a93b30(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_00a93b30

// auto_bounded_range_object_free_secondary_00c02b30: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00c02b30 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00c02b90, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0xd0;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00c02b30(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_00c02b30

// auto_bounded_range_object_free_secondary_00c93a00: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00c93a00 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00c93a60, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x58;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00c93a00(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_00c93a00

// auto_bounded_range_object_free_secondary_00cd4770: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00cd4770 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00cd47d0, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x80;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00cd4770(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_00cd4770

// auto_bounded_range_object_free_secondary_00d27330: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00d27330 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00d273f0, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0xf0;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00d27330(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_00d27330

// auto_bounded_range_object_free_secondary_00d27de0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00d27de0 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00d27f00, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x70;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00d27de0(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_00d27de0

// auto_bounded_range_object_free_secondary_00d29590: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00d29590 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00d296b0, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x290;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00d29590(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_00d29590

// auto_bounded_range_object_free_secondary_00d38310: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00d38310 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00d38430, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x68;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00d38310(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_00d38310

// auto_bounded_range_object_free_secondary_00e78350: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00e78350 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00e783b0, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0xa0;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00e78350(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_00e78350

// auto_bounded_range_object_free_secondary_00e97730: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00e97730 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00e977f0, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0xe8;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00e97730(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_00e97730

// auto_bounded_range_object_free_secondary_00e9dee0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00e9dee0 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00e9e060, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x110;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00e9dee0(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_00e9dee0

// auto_bounded_range_object_free_secondary_00ea2650: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00ea2650 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00ea27d0, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x90;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00ea2650(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_00ea2650

// auto_bounded_range_object_free_secondary_00ea75d0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00ea75d0 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00ea7750, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x78;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00ea75d0(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_00ea75d0

// auto_bounded_range_object_free_secondary_00eb0bf0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00eb0bf0 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00eb0d70, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x70;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00eb0bf0(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_00eb0bf0

// auto_bounded_range_object_free_secondary_00ec6c30: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00ec6c30 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00ec6c90, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x88;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00ec6c30(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_00ec6c30

// auto_bounded_range_object_free_secondary_00f3c950: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00f3c950 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00f3c9b0, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0xf0;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00f3c950(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_00f3c950

// auto_bounded_range_object_free_secondary_00f6c590: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_00f6c590 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00f6c650, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0xe0;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_00f6c590(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_00f6c590

// auto_bounded_range_object_free_secondary_0152f130: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_0152f130 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x0152f370, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0xf8;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_0152f130(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_0152f130

// auto_bounded_range_object_free_secondary_01530970: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_01530970 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x01530a90, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x68;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_01530970(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_01530970

// auto_bounded_range_object_free_secondary_015331d0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_015331d0 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x01533290, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x90;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_015331d0(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_015331d0

// auto_bounded_range_object_free_secondary_01534bc0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_01534bc0 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x01534c80, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0xf0;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_01534bc0(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_01534bc0

// auto_bounded_range_object_free_secondary_0153d350: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_0153d350 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x0153d470, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x80;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_0153d350(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_0153d350

// auto_bounded_range_object_free_secondary_01540340: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_01540340 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x015404c0, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x78;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_01540340(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_01540340

// auto_bounded_range_object_free_secondary_01547ff0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_01547ff0 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x01548170, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0xd0;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_01547ff0(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_01547ff0

// auto_bounded_range_object_free_secondary_01549fc0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_01549fc0 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x0154a0e0, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x68;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_01549fc0(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_01549fc0

// auto_bounded_range_object_free_secondary_0154a5f0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_0154a5f0 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x0154a770, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x80;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_0154a5f0(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_0154a5f0

// auto_bounded_range_object_free_secondary_0154e650: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_0154e650 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x0154e7d0, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x70;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_0154e650(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_0154e650

// auto_bounded_range_object_free_secondary_015505f0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_015505f0 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x01550770, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x80;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_015505f0(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_015505f0

// auto_bounded_range_object_free_secondary_01561840: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_01561840 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x01561960, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x78;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_01561840(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_01561840

// auto_bounded_range_object_free_secondary_022174c0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_022174c0 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00e783b0, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0xa0;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_022174c0(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_022174c0

// auto_bounded_range_object_free_secondary_029aba10: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_029aba10 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x029aba70, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0xa0;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_029aba10(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_029aba10

// auto_bounded_range_object_free_secondary_029bb330: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_029bb330 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00d296b0, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x290;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_029bb330(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_029bb330

// auto_bounded_range_object_free_secondary_029bb500: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_029bb500 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00d296b0, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x290;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_029bb500(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_029bb500

// auto_bounded_range_object_free_secondary_029bb6d0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_029bb6d0 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00d296b0, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x290;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_029bb6d0(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_029bb6d0

// auto_bounded_range_object_free_secondary_029bb8a0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_029bb8a0 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00d296b0, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x290;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_029bb8a0(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_029bb8a0

// auto_bounded_range_object_free_secondary_029bba70: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_029bba70 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00d296b0, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x290;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_029bba70(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_029bba70

// auto_bounded_range_object_free_secondary_029bbc40: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_029bbc40 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00d296b0, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x290;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_029bbc40(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_029bbc40

// auto_bounded_range_object_free_secondary_02a06460: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_02a06460 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00f43940, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x68;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_02a06460(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_02a06460

// auto_bounded_range_object_free_secondary_02a0ab80: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_02a0ab80 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00f43940, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x60;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_02a0ab80(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_02a0ab80

// auto_bounded_range_object_free_secondary_02a0b420: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_02a0b420 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00f43940, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x60;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_02a0b420(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_02a0b420

// auto_bounded_range_object_free_secondary_02a0b880: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_02a0b880 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00f43940, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x60;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_02a0b880(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_02a0b880

// auto_bounded_range_object_free_secondary_02a0ceb0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_02a0ceb0 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00f43940, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x60;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_02a0ceb0(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_02a0ceb0

// auto_bounded_range_object_free_secondary_02a0d010: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_02a0d010 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00f43940, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x68;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_02a0d010(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_02a0d010

// auto_bounded_range_object_free_secondary_02a0f110: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_02a0f110 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00f43940, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x68;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_02a0f110(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_02a0f110

// auto_bounded_range_object_free_secondary_02de17a0: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_02de17a0 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00a2cb10, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x78;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_02de17a0(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_02de17a0

// auto_bounded_range_object_free_secondary_02e0e250: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_02e0e250 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x01553f30, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x60;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_02e0e250(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_02e0e250

// auto_bounded_range_object_free_secondary_02e0e650: misc_bounded_range_object_free_secondary with other addresses and constants.
namespace near_02e0e650 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x01553f30, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x60;
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
 * Deleting destructor entered through the object's secondary base: the argument is the secondary base
 * subobject, so the whole object is found by stepping back to its start. The object is released, then
 * its block is freed through the thread's allocator with the block size, and the free's result is returned.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_bounded_range_object_free_secondary_02e0e650(misc::BoundedRangeObject *secondary)
{
    misc::BoundedRangeObject *object = reinterpret_cast<misc::BoundedRangeObject *>(
        reinterpret_cast<uint8_t *>(secondary) - misc::secondary_base_offset);
    release_object(object);
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace near_02e0e650
