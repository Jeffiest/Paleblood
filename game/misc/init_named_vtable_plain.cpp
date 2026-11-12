// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: sets up a named object with the base routine and the class vtable, then stores the default name.
#include <cstddef>
#include <cstdint>

#include "named_vtable_object.h"
#include "runtime/original.h"

namespace {

using misc::NamedVtableObject;

RT_ORIGINAL(0x013914a0, fn_013914a0, void(void *object, uint64_t second, uint64_t third, uint64_t fourth));
RT_ORIGINAL(0x01392a80, fn_01392a80, void(NamedVtableObject *object, const void *name));

/** The class vtable of this named object, pointed at the address point. */
RT_GLOBAL(0x056f37d0, plain_named_vtable, const uint8_t);
/** The default name stored into the object, read from the executable's read-only data. */
RT_GLOBAL(0x04cbbd70, plain_default_name, const uint8_t);

}  // namespace

/**
 *
 * Runs the base set-up routine on the object, stores the class vtable and the default name. The result is the vtable
 * address, which the name routine leaves in the return register.
 *
 */
extern "C" uint64_t bb_misc_init_named_vtable_plain_013b5440(NamedVtableObject *object, uint64_t second,
                                                             uint64_t third, uint64_t fourth)
{
    fn_013914a0(object, second, third, fourth);
    object->vtable = plain_named_vtable.address();
    fn_01392a80(object, plain_default_name.address());
    return reinterpret_cast<uint64_t>(plain_named_vtable.address());
}
