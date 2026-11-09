// SPDX-License-Identifier: GPL-2.0-or-later
#include "virtual_object.h"

#include <cstdint>

namespace {

/** The result when the object's slot at +0x30 gives no object: thirty-two bits of ones. */
constexpr uint64_t no_object_result = 0xffffffff;

}  // namespace

/**
 *
 * Asks a reference's object for another object through its slot at +0x30, and if it gives one,
 * forwards that object to the routine in its slot at +0x28.
 *
 * When the first slot gives no object the result is thirty-two bits of ones. Otherwise the second
 * routine's result is returned as it is, so this is a tail call.
 */
extern "C" uint64_t bb_misc_forward_object_slot_30_result(misc::VirtualObjectRef *reference)
{
    misc::VirtualObject *object = reference->object;
    misc::VirtualObject *target = object->vtable->slot_30(object);
    if (target == nullptr) {
        return no_object_result;
    }
    return target->vtable->slot_28(target);
}
