// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_dual_held_member_object_free, in game/misc/dual_held_member_object_free.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "../engine/allocator.h"
#include "../loading/fios.h"
#include "../misc/dual_held_member_object.h"
#include "runtime/original.h"

// auto_dual_held_member_object_free_00aa4ce0: misc_dual_held_member_object_free with other addresses.
namespace twin_00aa4ce0 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's members and its held references, as the release function does.
RT_ORIGINAL(0x00aa4d30, release_object, void(misc::DualHeldMemberObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x58;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const misc::DualHeldMemberObject *object)
{
    const uint32_t size = object->refcount_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor of a dual held member object: releases it, then frees its block through the
 * thread's allocator with the block size and returns the free's result.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_dual_held_member_object_free_00aa4ce0(misc::DualHeldMemberObject *object)
{
    release_object(object);
    engine::Allocator *allocator = loading::fios::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace twin_00aa4ce0

// auto_dual_held_member_object_free_00c11530: misc_dual_held_member_object_free with other addresses.
namespace twin_00c11530 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's members and its held references, as the release function does.
RT_ORIGINAL(0x00c11580, release_object, void(misc::DualHeldMemberObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x58;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const misc::DualHeldMemberObject *object)
{
    const uint32_t size = object->refcount_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor of a dual held member object: releases it, then frees its block through the
 * thread's allocator with the block size and returns the free's result.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_dual_held_member_object_free_00c11530(misc::DualHeldMemberObject *object)
{
    release_object(object);
    engine::Allocator *allocator = loading::fios::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace twin_00c11530

// auto_dual_held_member_object_free_00c939b0: misc_dual_held_member_object_free with other addresses.
namespace twin_00c939b0 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's members and its held references, as the release function does.
RT_ORIGINAL(0x00c93a60, release_object, void(misc::DualHeldMemberObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x58;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const misc::DualHeldMemberObject *object)
{
    const uint32_t size = object->refcount_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor of a dual held member object: releases it, then frees its block through the
 * thread's allocator with the block size and returns the free's result.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_dual_held_member_object_free_00c939b0(misc::DualHeldMemberObject *object)
{
    release_object(object);
    engine::Allocator *allocator = loading::fios::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace twin_00c939b0

// auto_dual_held_member_object_free_00ecf1a0: misc_dual_held_member_object_free with other addresses.
namespace twin_00ecf1a0 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's members and its held references, as the release function does.
RT_ORIGINAL(0x00ecf1f0, release_object, void(misc::DualHeldMemberObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x58;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const misc::DualHeldMemberObject *object)
{
    const uint32_t size = object->refcount_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor of a dual held member object: releases it, then frees its block through the
 * thread's allocator with the block size and returns the free's result.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_dual_held_member_object_free_00ecf1a0(misc::DualHeldMemberObject *object)
{
    release_object(object);
    engine::Allocator *allocator = loading::fios::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace twin_00ecf1a0

// auto_dual_held_member_object_free_00f983f0: misc_dual_held_member_object_free with other addresses.
namespace twin_00f983f0 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's members and its held references, as the release function does.
RT_ORIGINAL(0x00f98440, release_object, void(misc::DualHeldMemberObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x58;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const misc::DualHeldMemberObject *object)
{
    const uint32_t size = object->refcount_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor of a dual held member object: releases it, then frees its block through the
 * thread's allocator with the block size and returns the free's result.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_dual_held_member_object_free_00f983f0(misc::DualHeldMemberObject *object)
{
    release_object(object);
    engine::Allocator *allocator = loading::fios::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace twin_00f983f0

// auto_dual_held_member_object_free_028ce490: misc_dual_held_member_object_free with other addresses.
namespace twin_028ce490 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's members and its held references, as the release function does.
RT_ORIGINAL(0x028ce720, release_object, void(misc::DualHeldMemberObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x58;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const misc::DualHeldMemberObject *object)
{
    const uint32_t size = object->refcount_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor of a dual held member object: releases it, then frees its block through the
 * thread's allocator with the block size and returns the free's result.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_dual_held_member_object_free_028ce490(misc::DualHeldMemberObject *object)
{
    release_object(object);
    engine::Allocator *allocator = loading::fios::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace twin_028ce490

// auto_dual_held_member_object_free_0294ceb0: misc_dual_held_member_object_free with other addresses.
namespace twin_0294ceb0 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's members and its held references, as the release function does.
RT_ORIGINAL(0x0294cf00, release_object, void(misc::DualHeldMemberObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x58;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const misc::DualHeldMemberObject *object)
{
    const uint32_t size = object->refcount_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor of a dual held member object: releases it, then frees its block through the
 * thread's allocator with the block size and returns the free's result.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_dual_held_member_object_free_0294ceb0(misc::DualHeldMemberObject *object)
{
    release_object(object);
    engine::Allocator *allocator = loading::fios::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace twin_0294ceb0

// auto_dual_held_member_object_free_02956190: misc_dual_held_member_object_free with other addresses.
namespace twin_02956190 {

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's members and its held references, as the release function does.
RT_ORIGINAL(0x029561e0, release_object, void(misc::DualHeldMemberObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x58;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const misc::DualHeldMemberObject *object)
{
    const uint32_t size = object->refcount_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor of a dual held member object: releases it, then frees its block through the
 * thread's allocator with the block size and returns the free's result.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_auto_dual_held_member_object_free_02956190(misc::DualHeldMemberObject *object)
{
    release_object(object);
    engine::Allocator *allocator = loading::fios::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}

}  // namespace twin_02956190
