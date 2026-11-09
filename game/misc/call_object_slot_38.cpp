// SPDX-License-Identifier: GPL-2.0-or-later
#include "virtual_object.h"

#include <cstdint>

/**
 *
 * Forwards a reference's object to the virtual routine in the object's slot at +0x38.
 *
 * The routine receives only the object, and its result is returned as it is, so this is a tail call.
 */
extern "C" uint64_t bb_misc_call_object_slot_38(misc::VirtualObjectRef *reference)
{
    misc::VirtualObject *object = reference->object;
    return object->vtable->slot_38(object);
}
