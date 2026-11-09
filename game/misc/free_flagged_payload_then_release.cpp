// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: sets the release vtable, frees a flagged payload through the shared allocator, then tail-calls the release.
#include <cstdint>

#include "../engine/allocator.h"
#include "flagged_release_object.h"
#include "runtime/original.h"

namespace {

/** The shared allocator whose free slot releases a flagged payload. */
RT_GLOBAL(0x05940408, shared_allocator, engine::Allocator *);
/** The vtable the object is given; its address is the object's first word. */
RT_GLOBAL(0x05722670, flagged_release_vtable, uint8_t);

RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *object));

}  // namespace

/**
 *
 * Gives the object the release vtable, frees its payload through the shared allocator when the flag byte is
 * nonzero and the payload is set, then tail-calls the library release with the object and returns its result.
 *
 * The flag is read after the vtable is written, and the payload is not cleared by this routine.
 */
extern "C" uint64_t bb_misc_free_flagged_payload_then_release(misc::FlaggedReleaseObject *object)
{
    object->vtable = flagged_release_vtable.address();
    if (object->flag_0x09 != 0 && object->payload_0x20 != nullptr) {
        engine::Allocator *allocator = shared_allocator.get();
        allocator->free(object->payload_0x20);
    }
    return fn_02fbe588(object);
}
