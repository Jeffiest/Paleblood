// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: sets the object's vtable, releases the block it owns, then tail-calls an identity routine and returns its result.
#include <cstdint>

#include "owned_pointer_object.h"
#include "runtime/original.h"

namespace {

RT_GLOBAL(0x057b1fb0, owned_pointer_vtable, const uint8_t);

/** Releases an owned block; its result is the routine's RAX, which the caller does not keep. */
RT_ORIGINAL(0x02450560, release_owned, uint64_t(void *block));

/** A routine that returns its RAX unchanged; the thunk tail-calls it. */
RT_ORIGINAL(0x013e5c40, identity_routine, uint64_t(misc::OwnedPointerObject *object));

}  // namespace

/**
 *
 * Sets the object's vtable to its address point, releases the block it owns when it has one, and returns the result of
 * the identity routine, which the thunk tail-calls.
 *
 */
extern "C" uint64_t bb_misc_release_owned_identity_02276da0(misc::OwnedPointerObject *object)
{
    object->vtable = owned_pointer_vtable.address();
    if (object->owned) {
        release_owned(object->owned);
        object->owned = nullptr;
    }
    return identity_routine(object);
}
