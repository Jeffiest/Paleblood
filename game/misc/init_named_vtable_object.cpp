// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: sets up a named object: the base set-up routine, the class vtable, a cleared word, and the default name.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"
#include "named_vtable_object.h"

namespace {

using misc::NamedVtableObject;

RT_ORIGINAL(0x013914a0, fn_013914a0, void(void *object, uint64_t second, uint64_t third, uint64_t fourth));
RT_ORIGINAL(0x01392a80, fn_01392a80, void(NamedVtableObject *object, const void *name));

/** The class vtable of the named object, pointed at the address point. */
RT_GLOBAL(0x056f3780, named_object_vtable, const uint8_t);
/** The default name stored into the object, read from the executable's read-only data. */
RT_GLOBAL(0x04cbbcb0, default_name, const uint8_t);

}  // namespace

/**
 *
 * Runs the base set-up routine on the object, stores the class vtable, clears the word at 0x90 and stores the default
 * name. The result is the vtable address, which the name routine leaves in the return register.
 *
 */
extern "C" uint64_t bb_misc_init_named_vtable_object_013b5080(NamedVtableObject *object, uint64_t second,
                                                              uint64_t third, uint64_t fourth)
{
    fn_013914a0(object, second, third, fourth);
    object->vtable = named_object_vtable.address();
    object->cleared_0x90 = 0;
    fn_01392a80(object, default_name.address());
    return reinterpret_cast<uint64_t>(named_object_vtable.address());
}
