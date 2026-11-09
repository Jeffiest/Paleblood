// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: resets an object, then hands it to the library routine whose result is returned.
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x026ebd10, fn_026ebd10, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Resets the object, then passes it to the library routine and returns that routine's result.
 *
 * The object is the same argument for both calls: the reset is made first and the library's result is
 * the function's result.
 */
extern "C" uint64_t bb_misc_reset_then_release(void *object)
{
    fn_026ebd10(object);
    return fn_02fbe588(object);
}
