// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "derived_object.h"
#include "runtime/original.h"

namespace {

// The base class's destructor thunk, which runs on the object and whose result is returned.
RT_ORIGINAL(0x00cb4720, fn_00cb4720, uint64_t(misc::DerivedObject *object));

}  // namespace

/**
 *
 * Destructor of a derived object that is not freed: stores its vtable, drops its held reference, then
 * runs the base destructor on it as a tail call.
 *
 * The base destructor's result is returned as it is.
 */
extern "C" uint64_t bb_misc_release_derived_object(misc::DerivedObject *object)
{
    misc::store_derived_vtable(object);
    misc::drop_held_reference(object);
    return fn_00cb4720(object);
}
