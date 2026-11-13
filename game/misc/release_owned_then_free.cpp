// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: sets the object's vtable, releases the block it owns, runs an identity routine, then frees the object.
#include <cstdint>

#include "owned_pointer_object.h"
#include "runtime/original.h"

namespace {

RT_GLOBAL(0x057b1fb0, owned_pointer_vtable, const uint8_t);

/** Releases an owned block; its result is not kept. */
RT_ORIGINAL(0x02450560, release_owned, uint64_t(void *block));

/** A routine that takes the object and leaves RAX as it found it; its result is not used. */
RT_ORIGINAL(0x013e5c40, identity_routine, void(misc::OwnedPointerObject *object));

/** Frees a block; its result is the routine's RAX. */
RT_ORIGINAL(0x02fbe588, free_block, uint64_t(void *block));

}  // namespace

/**
 *
 * Sets the object's vtable to its address point, releases the block it owns when it has one, runs the identity routine on
 * the object, then frees the object and returns the free's result.
 *
 */
extern "C" uint64_t bb_misc_release_owned_then_free_02276de0(misc::OwnedPointerObject *object)
{
    object->vtable = owned_pointer_vtable.address();
    if (object->owned) {
        release_owned(object->owned);
        object->owned = nullptr;
    }
    identity_routine(object);
    return free_block(object);
}
