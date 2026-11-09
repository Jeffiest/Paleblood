// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: calls an empty routine, then hands the same object to the library release routine.
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x01401600, fn_01401600, void(void));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *object));

}  // namespace

/**
 *
 * Calls the empty routine, then tail-calls the library release routine with the same object.
 *
 * The object is not changed by the empty call, so the release receives the caller's argument and its
 * result is returned as it is.
 */
extern "C" uint64_t bb_misc_release_after_empty_call(void *object)
{
    fn_01401600();
    return fn_02fbe588(object);
}
