// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: runs the object's destruction routine, then hands the object to the library release.
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x0139b630, fn_0139b630, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_misc_destroy_then_release(void *object)
{
    fn_0139b630(object);
    return fn_02fbe588(object);
}
