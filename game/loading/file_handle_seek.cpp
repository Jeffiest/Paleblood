// SPDX-License-Identifier: GPL-2.0-or-later
#include "files.h"

namespace {

/**
 *
 * Return value for a failed seek, matching the game's -1 status.
 *
 * Only a negative kernel result selects it.
 */
constexpr int32_t seek_failed = -1;

}  // namespace

/**
 *
 * Moves a FileHandle's descriptor to offset relative to origin and reports the new position.
 *
 * Origin is the lseek whence value and arrives in the second argument, offset in the third. Only the
 * low 32 bits of origin are used, zero-extended into the kernel call; offset is used in full. The open
 * flag is not checked. Returns 0 when the kernel result is not negative and -1 otherwise. On success
 * the position is stored in new_position when that pointer is not null; on failure nothing is stored.
 */
extern "C" int32_t bb_loading_file_handle_seek(const loading::files::FileHandle *handle, uint32_t origin,
                                               uint64_t offset, int64_t *new_position)
{
    const int64_t position = loading::files::kernel_seek(static_cast<uint32_t>(handle->descriptor), offset, origin);
    if (position < 0) return seek_failed;
    if (new_position != nullptr) *new_position = position;
    return 0;
}
