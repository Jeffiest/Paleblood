// SPDX-License-Identifier: GPL-2.0-or-later
#include "base_object.h"

namespace {

// The vtable of the other class this object belongs to, stored as is (no address point).
RT_GLOBAL(0x057a7960, other_vtable, const uint8_t);

// Runs the first step of the object's setup from the setup values it is given.
RT_ORIGINAL(0x00f2d8b0, fn_00f2d8b0, void(misc::BaseObject *, const void *setup_values));

}  // namespace

/**
 *
 * Runs the setup step on the object, then stores the other class's vtable in it.
 *
 */
extern "C" void bb_misc_base_init_02242b90(misc::BaseObject *self, const void *setup_values)
{
    fn_00f2d8b0(self, setup_values);
    self->vtable = other_vtable.address();
}
