// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: sets the release vtable, frees a flagged payload through the shared allocator and clears the payload.
#include <cstdint>

#include "../engine/allocator.h"
#include "flagged_release_object.h"
#include "runtime/original.h"

namespace {

/** The shared allocator whose free slot releases a flagged payload. */
RT_GLOBAL(0x05940408, shared_allocator, engine::Allocator *);
/** The vtable the object is given; its address is the object's first word. */
RT_GLOBAL(0x05722670, flagged_release_vtable, uint8_t);

}  // namespace

/**
 *
 * Gives the object the release vtable, then frees its payload through the shared allocator when the flag byte is
 * nonzero and the payload is set, and clears the payload pointer after the free.
 *
 * With the flag clear or no payload the object's payload is left alone.
 */
extern "C" void bb_misc_free_flagged_payload_and_clear(misc::FlaggedReleaseObject *object)
{
    object->vtable = flagged_release_vtable.address();
    if (object->flag_0x09 == 0 || object->payload_0x20 == nullptr) return;
    engine::Allocator *allocator = shared_allocator.get();
    allocator->free(object->payload_0x20);
    object->payload_0x20 = nullptr;
}
