// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: runs a routine on an object, then forwards the object to the library routine and returns its result.
#include <cstdint>

#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x026f4330, run_on_object, void(void *object));
RT_ORIGINAL(0x02fbe588, forward_object, uint64_t(void *object));

}  // namespace

/**
 *
 * Runs the object routine on the object, then tail-forwards the same object to the library routine.
 *
 * The forwarded call is a tail call in the original, so its result is the result of this routine.
 * The object is not read or changed here.
 */
extern "C" uint64_t bb_misc_call_then_forward(void *object)
{
    run_on_object(object);
    return forward_object(object);
}
