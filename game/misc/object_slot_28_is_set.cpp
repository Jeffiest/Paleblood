// SPDX-License-Identifier: GPL-2.0-or-later
#include "virtual_object.h"

#include <cstdint>

/**
 *
 * Reports whether the virtual routine in a reference's object's slot at +0x28 returns a non-zero
 * value when it is called with the object.
 *
 * Only the low byte of the answer is meaningful, so the result is a boolean.
 */
extern "C" bool bb_misc_object_slot_28_is_set(misc::VirtualObjectRef *reference)
{
    misc::VirtualObject *object = reference->object;
    return object->vtable->slot_28(object) != 0;
}
