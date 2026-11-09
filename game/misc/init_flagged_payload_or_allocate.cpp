// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: initializes a flagged release object, allocating its payload from the shared allocator when none is given.
#include <cstdint>

#include "../engine/allocator.h"
#include "flagged_release_object.h"
#include "runtime/original.h"

namespace {

/** The shared allocator that supplies a payload when none is given. */
RT_GLOBAL(0x05940408, shared_allocator, engine::Allocator *);
/** The vtable the object is given; its address is the object's first word. */
RT_GLOBAL(0x05722670, flagged_release_vtable, uint8_t);

}  // namespace

/**
 *
 * Gives the object the release vtable, its kind byte and its size, and sets its payload to the given word. When the
 * word is zero and a size is given, the object's flag is set and the payload is allocated from the shared allocator.
 *
 * The payload word and the payload pointer both end up holding the payload that the object keeps.
 */
extern "C" void bb_misc_init_flagged_payload_or_allocate(misc::FlaggedReleaseObject *object, uint8_t kind,
                                                         uint64_t payload_word, uint64_t size)
{
    object->vtable = flagged_release_vtable.address();
    object->kind_0x08 = kind;
    object->flag_0x09 = 0;
    object->size_0x18 = size;
    object->word_0x28 = 0;
    uint64_t payload = payload_word;
    if (payload_word == 0 && size != 0) {
        object->flag_0x09 = 1;
        engine::Allocator *allocator = shared_allocator.get();
        payload = reinterpret_cast<uint64_t>(allocator->vtable->allocate_default(allocator, size));
    }
    object->payload_0x20 = reinterpret_cast<void *>(payload);
    object->word_0x10 = payload;
}
