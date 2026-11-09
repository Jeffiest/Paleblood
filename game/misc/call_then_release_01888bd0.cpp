// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: calls a routine on the object, then tail-calls the library release routine with it.
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *object));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *object));

}  // namespace

/**
 *
 * Calls the routine with the object, then tail-calls the library release routine with the same object.
 *
 * The object is passed unchanged to both calls, and the release routine's result is returned as it is.
 */
extern "C" uint64_t bb_misc_call_then_release_01888bd0(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}
