// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: runs the base construction routine on an object, then sets the object's vtable to the derived class's table.
#include <cstdint>

#include "runtime/original.h"

namespace {

/** The derived class's vtable block, entered past its base class header. */
RT_GLOBAL(0x056f3d20, derived_vtable, uint8_t);

RT_ORIGINAL(0x013e5c10, fn_013e5c10, void(void **object));

}  // namespace

/**
 *
 * Runs the base construction routine on the object, then stores the derived vtable in the object's first word.
 *
 * Nothing is returned; the caller does not read the register this leaves.
 */
extern "C" void bb_misc_construct_base_set_vtable(void **object)
{
    fn_013e5c10(object);
    *object = derived_vtable.address();
}
