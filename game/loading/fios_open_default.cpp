// SPDX-License-Identifier: GPL-2.0-or-later
#include "fios.h"

#include "../engine/engine.h"

namespace {

using loading::fios::FileObject;
using loading::fios::OpenOptions;

// The default file object class's vtable: new objects store its address point.
RT_GLOBAL(0x055c2180, default_file_object_vtable, const uint8_t);

// The open flags this wrapper always passes.
constexpr uint32_t default_open_flags = 1;

}  // namespace

/**
 *
 * Opens a file with the fixed default flags and returns a new file object for it, or null.
 *
 * The object is allocated from the thread's allocator only after the open succeeds, and it is not
 * checked for a null allocation, as the original does not check it either. Its valid flag is set
 * when the handle is not negative, so a handle the kernel returns as a negative value is recorded
 * as not usable.
 */
extern "C" FileObject *bb_loading_fios_open_default(const char *path)
{
    OpenOptions options{};
    options.flags = default_open_flags;
    // Not initialised: the open writes it on success, and only a successful open reads it.
    int32_t handle;
    if (loading::fios::fh_open_sync(loading::fios::fios_op_default, &handle, path, &options) != 0) return nullptr;

    engine::Allocator *allocator = loading::fios::thread_allocator();
    auto *object = static_cast<FileObject *>(allocator->vtable->allocate_small(allocator, sizeof(FileObject)));
    object->tag = loading::fios::object_tag_default;
    object->vtable = default_file_object_vtable.address() + engine::vtable_address_point;
    object->handle = handle;
    object->valid = handle >= 0;
    return object;
}
