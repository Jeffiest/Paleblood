// SPDX-License-Identifier: GPL-2.0-or-later
#include "fios.h"

#include "../engine/engine.h"

namespace {

using loading::fios::FileObject;
using loading::fios::OpenOptions;

// The FileObject class's vtable: new objects store its address point.
RT_GLOBAL(0x055c1df0, file_object_vtable, const uint8_t);

}  // namespace

/**
 *
 * Opens a file with the caller's open flags and returns a new file object for it, or null.
 *
 * The flags are the low 16 bits of the third argument, copied into the Fios options unchanged.
 * The second argument is never read. The object is allocated from the thread's allocator only
 * after the open succeeds, and it is not checked for a null allocation, as the original does not
 * check it either.
 */
extern "C" FileObject *bb_loading_fios_open_with_mode(const char *path, [[maybe_unused]] uint64_t ignored_argument,
                                                      uint16_t mode)
{
    OpenOptions options{};
    options.flags = mode;
    int32_t handle = -1;   // set before the open; the open overwrites it on success
    if (loading::fios::fh_open_sync(loading::fios::fios_op_default, &handle, path, &options) != 0) return nullptr;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    auto *object = static_cast<FileObject *>(allocator->vtable->allocate_small(allocator, sizeof(FileObject)));
    object->tag = loading::fios::object_tag_default;
    object->vtable = file_object_vtable.address() + engine::vtable_address_point;
    object->handle = handle;
    object->valid = true;
    return object;
}
