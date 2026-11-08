// SPDX-License-Identifier: GPL-2.0-or-later
#include "files.h"

namespace {

/**
 * The game's own file open mode bits. Bits 0x04 and 0x20 are never read.
 */
enum OpenMode : uint32_t {
    open_mode_read = 0x01,             /**< Open for reading. */
    open_mode_write = 0x02,            /**< Open for writing. */
    open_mode_create_exclusive = 0x08, /**< Create the file; fail if it exists. */
    open_mode_create_truncate = 0x10,  /**< Create the file, or empty it if it exists. */
    open_mode_create = 0x40,           /**< Create the file if it is missing. */
    open_mode_truncate = 0x80,         /**< Empty an existing file. */
};

/**
 * FreeBSD open(2) flags used by the translation.
 */
enum KernelOpenFlag : uint32_t {
    kernel_open_read_only = 0x000,  /**< O_RDONLY. */
    kernel_open_write_only = 0x001, /**< O_WRONLY. */
    kernel_open_read_write = 0x002, /**< O_RDWR. */
    kernel_open_create = 0x200,     /**< O_CREAT. */
    kernel_open_truncate = 0x400,   /**< O_TRUNC. */
    kernel_open_exclusive = 0x800,  /**< O_EXCL. */
};

/**
 * Permission bits given to a file the open creates.
 */
enum CreatePermissions : uint32_t {
    create_permissions_none = 0,           /**< No access. */
    create_permissions_read_execute = 0555, /**< r-x for everyone. */
    create_permissions_all = 0777,          /**< rwx for everyone. */
};

/** Value returned when the kernel refuses the open. */
constexpr int32_t open_failed = -1;

/**
 * Picks the read/write access flags for an open mode.
 */
uint32_t access_flags(uint32_t mode)
{
    const bool read = mode & open_mode_read, write = mode & open_mode_write;
    if (read) return write ? kernel_open_read_write : kernel_open_read_only;
    return write ? kernel_open_write_only : kernel_open_read_only;
}

/**
 * Picks the permissions for a file the open may create.
 *
 * A read-only mode still asks for r-x and a mode with neither access bit asks for none,
 * though the kernel uses them only when the file is created.
 */
uint32_t creation_permissions(uint32_t mode)
{
    if (mode & open_mode_write) return create_permissions_all;
    return (mode & open_mode_read) ? create_permissions_read_execute : create_permissions_none;
}

/**
 * Picks the create and truncate flags for an open mode.
 *
 * Only the first creation bit set counts, in this order of precedence.
 */
uint32_t creation_flags(uint32_t mode)
{
    if (mode & open_mode_create_exclusive) return kernel_open_create | kernel_open_exclusive;
    if (mode & open_mode_create_truncate) return kernel_open_create | kernel_open_truncate;
    if (mode & open_mode_create) return kernel_open_create;
    if (mode & open_mode_truncate) return kernel_open_truncate;
    return 0;
}

}  // namespace

/**
 * Opens a file into a FileHandle using the game's own open mode bits.
 *
 * Its one caller opens the start-up cache file temp:/cache.bin with read, write and
 * create_truncate. Returns 0 and marks the handle open, or -1 with the handle untouched.
 */
extern "C" int32_t bb_loading_file_handle_open(loading::files::FileHandle *handle, const char *path, uint32_t mode)
{
    const int32_t descriptor = loading::files::kernel_open(
        path, access_flags(mode) | creation_flags(mode), creation_permissions(mode));
    if (descriptor < 0) return open_failed;
    handle->descriptor = descriptor;
    handle->flags |= loading::files::file_handle_open;
    return 0;
}
