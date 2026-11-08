// SPDX-License-Identifier: GPL-2.0-or-later
#include "files.h"

namespace {

/**
 *
 * Return value for a failed transfer, matching the game's -1 status.
 *
 * Only a negative kernel result selects it.
 */
constexpr int32_t transfer_failed = -1;

}  // namespace

/**
 *
 * Reads up to size bytes from a FileHandle's descriptor into buffer and reports the byte count.
 *
 * The open flag is not checked, so a handle whose flag is clear is still read. Only the low 32 bits
 * of the descriptor are used, zero-extended into the kernel call. Returns 0 when the kernel result
 * is not negative and -1 otherwise. On success the count is stored in transferred when that pointer
 * is not null; on failure nothing is stored.
 */
extern "C" int32_t bb_loading_file_handle_read(const loading::files::FileHandle *handle, void *buffer,
                                               uint64_t size, int64_t *transferred)
{
    const int64_t count = loading::files::kernel_read(static_cast<uint32_t>(handle->descriptor), buffer, size);
    if (count < 0) return transfer_failed;
    if (transferred != nullptr) *transferred = count;
    return 0;
}
