// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: disarms a callback object and points it at the callback vtable.
#include "callback_object.h"

#include "runtime/original.h"

namespace {

/** The callback vtable; the object's first word is set to its address. */
RT_GLOBAL(0x057b93b0, callback_table, const uint8_t);

}  // namespace

/**
 *
 * Gives the callback the callback vtable and clears its armed bit, so it no longer invokes its target.
 *
 * The other flags, the target and the argument are left as they are.
 */
extern "C" void bb_misc_disarm_callback(misc::CallbackObject *callback)
{
    callback->vtable = static_cast<const uint8_t *>(callback_table.address());
    callback->flags_0x08 &= ~misc::callback_armed_bit;
}
