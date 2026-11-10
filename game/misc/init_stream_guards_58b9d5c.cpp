// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// misc_init_stream_guards_58b9d5c (0x015d6610) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x058b9d5c with the library function at
// 0x02fbf348 and the wide stream guard at 0x058b9d5e with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.
#include <cstdint>

#include "runtime/original.h"

namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x058b9d5c, stream_guard, uint8_t);
RT_GLOBAL(0x058b9d5e, wide_stream_guard, uint8_t);
RT_GLOBAL(0x057e4330, stream_guard_destroy, ExitFunction);
RT_GLOBAL(0x057e4338, wide_stream_guard_destroy, ExitFunction);
RT_GLOBAL(0x0553b490, module_handle, uint8_t);

}  // namespace

/**
 *
 * Constructs the narrow stream guard and registers its destroy function, then does the same for the
 * wide stream guard.
 *
 * The order is fixed: construct, register, construct, register. Both registrations name the same
 * module handle. What the registrations return is not looked at, and the function takes no arguments.
 */
extern "C" void bb_misc_init_stream_guards_58b9d5c()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}
