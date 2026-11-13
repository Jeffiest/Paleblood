// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: sets the object's vtable, then tail-calls a library routine with the object's 32-bit value.
#include <cstdint>

#include "runtime/original.h"
#include "value_tail_object.h"

namespace {

RT_GLOBAL(0x05750330, value_tail_vtable, const uint8_t);

/** The library routine the thunk jumps to; its result is the thunk's RAX. */
RT_ORIGINAL(0x02fc0af8, tail_value_call,
            uint64_t(uint32_t value, uint64_t rsi, uint64_t rdx, uint64_t rcx, uint64_t r8, uint64_t r9));

}  // namespace

/**
 *
 * Sets the object's vtable to its address point, then passes its 32-bit value, and the other argument registers
 * unchanged, to the library routine, and returns its result.
 *
 */
extern "C" uint64_t bb_misc_tail_value_vtable_call_02276d50(misc::ValueTailObject *object, uint64_t rsi, uint64_t rdx,
                                                            uint64_t rcx, uint64_t r8, uint64_t r9)
{
    object->vtable = value_tail_vtable.address();
    return tail_value_call(object->value, rsi, rdx, rcx, r8, r9);
}
