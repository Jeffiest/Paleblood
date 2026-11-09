// SPDX-License-Identifier: GPL-2.0-or-later
#include "virtual_object.h"

#include <cstdint>

/**
 *
 * Forwards a reference's object to the virtual routine in the object's slot at +0x28, passing
 * nothing else, and returns that routine's result.
 *
 * The routine is called as a tail call with only the object as its argument.
 */
extern "C" uint64_t bb_misc_forward_object_slot_28(misc::VirtualObjectRef *reference)
{
    misc::VirtualObject *object = reference->object;
    return object->vtable->slot_28(object);
}
