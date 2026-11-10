// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: invokes an armed callback's target on its adjusted object, directly or through a vtable slot.
#include "callback_object.h"

namespace {

/** Signature of a target: the object it is called on and the callback's argument. */
using CallbackTarget = void (*)(uint8_t *object, int32_t argument);

}  // namespace

/**
 *
 * Calls the callback's target on the object it acts on. Nothing is returned.
 *
 * An unarmed callback calls nothing. The object is the base plus the adjustment. When
 * the target's low bit is set, the function is read from the object's vtable at the target minus the
 * bias; otherwise the target is the function. The argument is passed as the second argument.
 */
extern "C" void bb_misc_invoke_callback(misc::CallbackObject *callback)
{
    if ((callback->flags_0x08 & misc::callback_armed_bit) == 0) return;

    uint8_t *object = callback->base_0x10 + callback->adjustment_0x28;
    uintptr_t function = static_cast<uintptr_t>(callback->target_0x20);
    if (callback->target_0x20 & misc::callback_virtual_bit) {
        const uint8_t *vtable = *reinterpret_cast<const uint8_t *const *>(object);
        const uint64_t slot_offset = callback->target_0x20 - misc::callback_virtual_bias;
        function = *reinterpret_cast<const uintptr_t *>(vtable + slot_offset);
    }
    const auto target = reinterpret_cast<CallbackTarget>(function);
    target(object, callback->argument_0x18);
}
