// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x02b3f430, fn_02b3f430, void(void *object));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *object));

}  // namespace

/**
 *
 * Runs the object's teardown routine, then tail-calls the library release routine with the same object.
 *
 * The teardown receives the caller's argument unchanged and returns nothing here. The release receives
 * the same object, and its result is returned as it is.
 */
extern "C" uint64_t bb_misc_run_teardown_then_release(void *object)
{
    fn_02b3f430(object);
    return fn_02fbe588(object);
}
