// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: calls a routine on the object, then gives the object its static vtable pointer.
#include <cstdint>

#include "runtime/original.h"

namespace {

/** An object whose first word is the vtable pointer that the static vtable block publishes. */
struct VtableHeldObject {
    const void *vtable;   /**< Set to the static vtable block after the routine returns. */
};
static_assert(sizeof(VtableHeldObject) == 8);

RT_GLOBAL(0x057225f0, static_vtable_block, uint8_t);
RT_ORIGINAL(0x01884e90, fn_01884e90, void(void *object));

}  // namespace

/**
 *
 * Calls the routine with the object, then stores the static vtable block's address as its vtable.
 *
 * The routine receives the object unchanged, and the vtable pointer is written after it returns, so
 * the stored value is the last write to the object's first word.
 */
extern "C" void bb_misc_set_vtable_after_call(VtableHeldObject *object)
{
    fn_01884e90(object);
    object->vtable = static_vtable_block.address();
}
