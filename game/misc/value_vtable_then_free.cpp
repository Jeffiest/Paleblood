// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: sets the object's vtable, passes its value to a library routine, then frees the object and returns the free's result.
#include <cstdint>

#include "runtime/original.h"
#include "value_tail_object.h"

namespace {

RT_GLOBAL(0x05750330, value_tail_vtable, const uint8_t);

/** The library routine that takes the value; its result is not used. */
RT_ORIGINAL(0x02fc0af8, take_value, void(uint32_t value));

/** Frees a block; its result is the routine's RAX. */
RT_ORIGINAL(0x02fbe588, free_block, uint64_t(void *block));

}  // namespace

/**
 *
 * Sets the object's vtable to its address point, passes its 32-bit value to the library routine, then frees the object
 * and returns the free's result.
 *
 */
extern "C" uint64_t bb_misc_value_vtable_then_free_02276d70(misc::ValueTailObject *object)
{
    object->vtable = value_tail_vtable.address();
    take_value(object->value);
    return free_block(object);
}
