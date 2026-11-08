// SPDX-License-Identifier: GPL-2.0-or-later
#include "fios.h"

#include "../engine/engine.h"

namespace {

using loading::fios::FileDirectory;

// The directory class's vtable, stored as is in the object (no address point).
RT_GLOBAL(0x055c1230, directory_vtable, const uint8_t);

}  // namespace

/**
 *
 * Closes an open Fios directory and frees its object, as the class's deleting destructor does.
 *
 * The directory handle is closed and cleared when it is set, then the heap block and the two
 * tagged pointer slots are released, and the object is freed with the size its tag gives. A tag
 * whose size is the default 0xffff frees the object as the default directory size.
 */
extern "C" void bb_loading_fios_directory_delete(FileDirectory *directory)
{
    directory->vtable = directory_vtable.address();
    if (directory->directory != 0) {
        loading::fios::dh_close_sync(loading::fios::fios_op_default, directory->directory);
        directory->directory = 0;
    }
    if (directory->block != nullptr) loading::fios::heap_block_free(loading::fios::thread_allocator(), directory->block);
    loading::fios::tagged_slot_release(&directory->tagged_pointer_0x20);
    loading::fios::tagged_slot_release(&directory->tagged_pointer_0x18);

    const uint32_t size_tag = directory->tag >> loading::fios::tag_size_shift;
    const uint32_t size = size_tag == loading::fios::tag_size_default ? loading::fios::directory_default_size : size_tag;
    engine::Allocator *allocator = loading::fios::thread_allocator();
    reinterpret_cast<const loading::fios::AllocatorSizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, directory, size);
}
