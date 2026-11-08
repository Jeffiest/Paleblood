// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace loading::files {

/**
 * A C stdio stream from the game's libc, only ever passed back to libc.
 */
struct Stream;

/** Number of streams in a StreamSet. */
constexpr int stream_set_size = 3;

/**
 * Three stdio streams owned and closed together by one object.
 */
struct StreamSet {
    Stream *streams[stream_set_size]; /**< Open streams, or null for a slot that is closed. */
};
static_assert(offsetof(StreamSet, streams) == 0x00);
static_assert(sizeof(StreamSet) == 0x18);

/**
 * Bits of FileHandle::flags.
 */
enum FileHandleFlag : uint8_t {
    file_handle_open = 0x01, /**< The descriptor refers to an open file. */
};

/**
 * A kernel file descriptor together with its state.
 */
struct FileHandle {
    int32_t descriptor; /**< Kernel descriptor, valid while file_handle_open is set. */
    uint8_t flags;      /**< FileHandleFlag bits; the other bits are kept as they are. */
};
static_assert(offsetof(FileHandle, descriptor) == 0x00);
static_assert(offsetof(FileHandle, flags) == 0x04);

/**
 * Closes a stdio stream (libc fclose).
 */
RT_ORIGINAL(0x02fbe7b8, close_stream, int32_t(Stream *));

/**
 * Opens a file by path (sceKernelOpen, FreeBSD open(2)).
 */
RT_ORIGINAL(0x02fbf3f8, kernel_open, int32_t(const char *path, uint32_t flags, uint32_t permissions));

/**
 *
 * Reads from a kernel descriptor (sceKernelRead, FreeBSD read(2)).
 *
 * The buffer receives up to size bytes and the result is the byte count, or negative on failure.
 */
RT_ORIGINAL(0x02fbf408, kernel_read, int64_t(uint32_t descriptor, void *buffer, uint64_t size));

/**
 *
 * Writes to a kernel descriptor (sceKernelWrite, FreeBSD write(2)).
 *
 * The result is the byte count written, or negative on failure.
 */
RT_ORIGINAL(0x02fbf418, kernel_write, int64_t(uint32_t descriptor, const void *buffer, uint64_t size));

}  // namespace loading::files
