// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"
#include "../engine/thread.h"
#include "runtime/original.h"

namespace loading::fios {

/**
 *
 * Options the file open wrappers pass to sceFiosFHOpenSync.
 */
struct OpenOptions {
    uint32_t flags;             /**< Open flags: the wrapper's mode argument, or 1, zero-extended. */
    uint8_t unknown_0x04[0x14];
};
static_assert(offsetof(OpenOptions, flags) == 0x00);
static_assert(sizeof(OpenOptions) == 0x18);

/**
 *
 * A heap object describing one open Fios file.
 */
struct FileObject {
    const void *vtable; /**< Vtable address point of the file object's class. */
    uint32_t tag;       /**< Size tag, see object_tag_default. */
    int32_t handle;     /**< Fios file handle from sceFiosFHOpenSync. */
    bool valid;         /**< Whether the object's handle is usable; set by each wrapper. */
    uint8_t unknown_0x11[7];
};
static_assert(offsetof(FileObject, tag) == 0x08);
static_assert(offsetof(FileObject, handle) == 0x0c);
static_assert(offsetof(FileObject, valid) == 0x10);
static_assert(sizeof(FileObject) == 0x18);

/**
 *
 * A heap object for one open Fios directory.
 */
struct FileDirectory {
    const void *vtable;           /**< The directory class's vtable, stored as is (no address point). */
    uint32_t tag;                 /**< Size tag: the high 16 bits are the object's size, 0xffff for the default. */
    uint8_t unknown_0x0c[0x0c];
    uint64_t tagged_pointer_0x18; /**< A tagged pointer, released by tagged_slot_release. */
    uint64_t tagged_pointer_0x20; /**< A tagged pointer, released by tagged_slot_release. */
    int32_t directory;            /**< Fios directory handle, zero once closed. */
    uint8_t unknown_0x2c[4];
    void *block;                  /**< Heap block freed with the object's allocator, or null. */
};
static_assert(offsetof(FileDirectory, tag) == 0x08);
static_assert(offsetof(FileDirectory, tagged_pointer_0x18) == 0x18);
static_assert(offsetof(FileDirectory, tagged_pointer_0x20) == 0x20);
static_assert(offsetof(FileDirectory, directory) == 0x28);
static_assert(offsetof(FileDirectory, block) == 0x30);
static_assert(sizeof(FileDirectory) == 0x38);

// The tag word the file wrappers store: the high half is the default size (0xffff), the low half 1.
constexpr uint32_t object_tag_default = 0xffff0001;
// The size tag's high half when the object has its default size.
constexpr uint32_t tag_size_default = 0xffff;
// How far the size sits in a tag word.
constexpr int tag_size_shift = 16;
// The size a directory object is freed with when its tag says default.
constexpr uint32_t directory_default_size = 0x38;
// Operation argument of the Fios calls: the wrappers always pass 0.
constexpr uint32_t fios_op_default = 0;

/**
 *
 * Opens a file for synchronous access (sceFiosFHOpenSync).
 *
 * Returns 0 and writes the handle to `handle` on success.
 */
RT_ORIGINAL(0x02fbee78, fh_open_sync, int32_t(uint32_t op, int32_t *handle, const char *path, OpenOptions *options));

/**
 *
 * Closes a Fios directory (sceFiosDHCloseSync).
 */
RT_ORIGINAL(0x02fbece8, dh_close_sync, int32_t(uint32_t op, int32_t directory));

/**
 *
 * Frees a heap block that has a 16-byte header before it, through the allocator's sized free slot.
 *
 * A null block is ignored.
 */
RT_ORIGINAL(0x00829a90, heap_block_free, void(engine::Allocator *allocator, void *block));

/**
 *
 * Releases a tagged pointer slot.
 *
 * A value above 1 whose low bit is set is freed at value - 1, and the slot is then cleared.
 */
RT_ORIGINAL(0x00836840, tagged_slot_release, void(uint64_t *slot));

// The thread-local offset of the thread's allocator holder.
RT_GLOBAL(0x057e40f8, thread_allocator_offset, const int64_t);

/**
 *
 * The thread's allocator holder, reached from the thread pointer.
 */
struct ThreadAllocatorHolder {
    uint8_t unknown_0x00[0x58];
    engine::Allocator *allocator;
};
static_assert(offsetof(ThreadAllocatorHolder, allocator) == 0x58);

/**
 *
 * The thread's allocator, read again on each call as the originals do.
 */
inline engine::Allocator *thread_allocator()
{
    auto *holder = *reinterpret_cast<ThreadAllocatorHolder **>(engine::thread_pointer() + thread_allocator_offset.get());
    return holder->allocator;
}

}  // namespace loading::fios
