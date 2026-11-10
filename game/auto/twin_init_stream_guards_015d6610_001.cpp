// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_init_stream_guards_58b9d5c, in game/misc/init_stream_guards_58b9d5c.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstdint>
#include "runtime/original.h"

// auto_init_stream_guards_015d9f40: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_015d9f40 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_015d9f40 (0x015d9f40) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x058b9d74 with the library function at
// 0x02fbf348 and the wide stream guard at 0x058b9d76 with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x058b9d74, stream_guard, uint8_t);
RT_GLOBAL(0x058b9d76, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_015d9f40()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_015d9f40

// auto_init_stream_guards_015db1f0: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_015db1f0 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_015db1f0 (0x015db1f0) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x058b9d90 with the library function at
// 0x02fbf348 and the wide stream guard at 0x058b9d92 with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x058b9d90, stream_guard, uint8_t);
RT_GLOBAL(0x058b9d92, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_015db1f0()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_015db1f0

// auto_init_stream_guards_015dbb80: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_015dbb80 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_015dbb80 (0x015dbb80) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x058b9d94 with the library function at
// 0x02fbf348 and the wide stream guard at 0x058b9d96 with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x058b9d94, stream_guard, uint8_t);
RT_GLOBAL(0x058b9d96, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_015dbb80()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_015dbb80

// auto_init_stream_guards_015dc9a0: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_015dc9a0 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_015dc9a0 (0x015dc9a0) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x058b9dac with the library function at
// 0x02fbf348 and the wide stream guard at 0x058b9dae with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x058b9dac, stream_guard, uint8_t);
RT_GLOBAL(0x058b9dae, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_015dc9a0()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_015dc9a0

// auto_init_stream_guards_015dd030: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_015dd030 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_015dd030 (0x015dd030) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x058b9db0 with the library function at
// 0x02fbf348 and the wide stream guard at 0x058b9db2 with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x058b9db0, stream_guard, uint8_t);
RT_GLOBAL(0x058b9db2, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_015dd030()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_015dd030

// auto_init_stream_guards_015dd830: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_015dd830 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_015dd830 (0x015dd830) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x058b9db4 with the library function at
// 0x02fbf348 and the wide stream guard at 0x058b9db6 with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x058b9db4, stream_guard, uint8_t);
RT_GLOBAL(0x058b9db6, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_015dd830()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_015dd830

// auto_init_stream_guards_015dea30: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_015dea30 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_015dea30 (0x015dea30) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x058b9db8 with the library function at
// 0x02fbf348 and the wide stream guard at 0x058b9dba with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x058b9db8, stream_guard, uint8_t);
RT_GLOBAL(0x058b9dba, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_015dea30()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_015dea30

// auto_init_stream_guards_015df510: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_015df510 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_015df510 (0x015df510) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x058b9dbc with the library function at
// 0x02fbf348 and the wide stream guard at 0x058b9dbe with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x058b9dbc, stream_guard, uint8_t);
RT_GLOBAL(0x058b9dbe, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_015df510()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_015df510

// auto_init_stream_guards_015e16f0: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_015e16f0 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_015e16f0 (0x015e16f0) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x058b9dc0 with the library function at
// 0x02fbf348 and the wide stream guard at 0x058b9dc2 with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x058b9dc0, stream_guard, uint8_t);
RT_GLOBAL(0x058b9dc2, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_015e16f0()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_015e16f0

// auto_init_stream_guards_015e2a10: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_015e2a10 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_015e2a10 (0x015e2a10) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x058b9dc4 with the library function at
// 0x02fbf348 and the wide stream guard at 0x058b9dc6 with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x058b9dc4, stream_guard, uint8_t);
RT_GLOBAL(0x058b9dc6, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_015e2a10()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_015e2a10

// auto_init_stream_guards_015e2be0: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_015e2be0 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_015e2be0 (0x015e2be0) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x058b9dc8 with the library function at
// 0x02fbf348 and the wide stream guard at 0x058b9dca with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x058b9dc8, stream_guard, uint8_t);
RT_GLOBAL(0x058b9dca, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_015e2be0()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_015e2be0

// auto_init_stream_guards_015e36d0: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_015e36d0 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_015e36d0 (0x015e36d0) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x058b9dcc with the library function at
// 0x02fbf348 and the wide stream guard at 0x058b9dce with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x058b9dcc, stream_guard, uint8_t);
RT_GLOBAL(0x058b9dce, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_015e36d0()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_015e36d0

// auto_init_stream_guards_015e37c0: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_015e37c0 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_015e37c0 (0x015e37c0) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x058b9dd0 with the library function at
// 0x02fbf348 and the wide stream guard at 0x058b9dd2 with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x058b9dd0, stream_guard, uint8_t);
RT_GLOBAL(0x058b9dd2, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_015e37c0()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_015e37c0

// auto_init_stream_guards_015e38c0: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_015e38c0 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_015e38c0 (0x015e38c0) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x058b9dd4 with the library function at
// 0x02fbf348 and the wide stream guard at 0x058b9dd6 with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x058b9dd4, stream_guard, uint8_t);
RT_GLOBAL(0x058b9dd6, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_015e38c0()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_015e38c0

// auto_init_stream_guards_015e3bb0: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_015e3bb0 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_015e3bb0 (0x015e3bb0) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x058b9dd8 with the library function at
// 0x02fbf348 and the wide stream guard at 0x058b9dda with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x058b9dd8, stream_guard, uint8_t);
RT_GLOBAL(0x058b9dda, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_015e3bb0()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_015e3bb0

// auto_init_stream_guards_015e3ca0: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_015e3ca0 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_015e3ca0 (0x015e3ca0) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x058b9ddc with the library function at
// 0x02fbf348 and the wide stream guard at 0x058b9dde with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x058b9ddc, stream_guard, uint8_t);
RT_GLOBAL(0x058b9dde, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_015e3ca0()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_015e3ca0

// auto_init_stream_guards_015e3f30: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_015e3f30 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_015e3f30 (0x015e3f30) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x058b9de0 with the library function at
// 0x02fbf348 and the wide stream guard at 0x058b9de2 with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x058b9de0, stream_guard, uint8_t);
RT_GLOBAL(0x058b9de2, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_015e3f30()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_015e3f30

// auto_init_stream_guards_015e4020: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_015e4020 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_015e4020 (0x015e4020) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x058b9de4 with the library function at
// 0x02fbf348 and the wide stream guard at 0x058b9de6 with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x058b9de4, stream_guard, uint8_t);
RT_GLOBAL(0x058b9de6, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_015e4020()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_015e4020

// auto_init_stream_guards_015e4110: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_015e4110 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_015e4110 (0x015e4110) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x058b9de8 with the library function at
// 0x02fbf348 and the wide stream guard at 0x058b9dea with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x058b9de8, stream_guard, uint8_t);
RT_GLOBAL(0x058b9dea, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_015e4110()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_015e4110

// auto_init_stream_guards_015e4e60: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_015e4e60 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_015e4e60 (0x015e4e60) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x058b9df0 with the library function at
// 0x02fbf348 and the wide stream guard at 0x058b9df2 with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x058b9df0, stream_guard, uint8_t);
RT_GLOBAL(0x058b9df2, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_015e4e60()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_015e4e60

// auto_init_stream_guards_015e5170: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_015e5170 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_015e5170 (0x015e5170) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x058b9ea0 with the library function at
// 0x02fbf348 and the wide stream guard at 0x058b9ea2 with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x058b9ea0, stream_guard, uint8_t);
RT_GLOBAL(0x058b9ea2, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_015e5170()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_015e5170

// auto_init_stream_guards_015e53e0: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_015e53e0 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_015e53e0 (0x015e53e0) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x058b9ea4 with the library function at
// 0x02fbf348 and the wide stream guard at 0x058b9ea6 with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x058b9ea4, stream_guard, uint8_t);
RT_GLOBAL(0x058b9ea6, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_015e53e0()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_015e53e0

// auto_init_stream_guards_015e5820: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_015e5820 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_015e5820 (0x015e5820) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x058b9ea8 with the library function at
// 0x02fbf348 and the wide stream guard at 0x058b9eaa with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x058b9ea8, stream_guard, uint8_t);
RT_GLOBAL(0x058b9eaa, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_015e5820()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_015e5820

// auto_init_stream_guards_015e5c30: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_015e5c30 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_015e5c30 (0x015e5c30) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x058b9eac with the library function at
// 0x02fbf348 and the wide stream guard at 0x058b9eae with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x058b9eac, stream_guard, uint8_t);
RT_GLOBAL(0x058b9eae, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_015e5c30()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_015e5c30

// auto_init_stream_guards_015e5d20: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_015e5d20 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_015e5d20 (0x015e5d20) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x058b9eb8 with the library function at
// 0x02fbf348 and the wide stream guard at 0x058b9eba with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x058b9eb8, stream_guard, uint8_t);
RT_GLOBAL(0x058b9eba, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_015e5d20()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_015e5d20

// auto_init_stream_guards_015e71d0: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_015e71d0 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_015e71d0 (0x015e71d0) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x0593a018 with the library function at
// 0x02fbf348 and the wide stream guard at 0x0593a01a with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x0593a018, stream_guard, uint8_t);
RT_GLOBAL(0x0593a01a, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_015e71d0()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_015e71d0

// auto_init_stream_guards_015e7c30: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_015e7c30 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_015e7c30 (0x015e7c30) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x0593a01c with the library function at
// 0x02fbf348 and the wide stream guard at 0x0593a01e with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x0593a01c, stream_guard, uint8_t);
RT_GLOBAL(0x0593a01e, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_015e7c30()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_015e7c30

// auto_init_stream_guards_015ec700: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_015ec700 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_015ec700 (0x015ec700) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x0593a020 with the library function at
// 0x02fbf348 and the wide stream guard at 0x0593a022 with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x0593a020, stream_guard, uint8_t);
RT_GLOBAL(0x0593a022, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_015ec700()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_015ec700

// auto_init_stream_guards_015ece80: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_015ece80 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_015ece80 (0x015ece80) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x0593a224 with the library function at
// 0x02fbf348 and the wide stream guard at 0x0593a226 with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x0593a224, stream_guard, uint8_t);
RT_GLOBAL(0x0593a226, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_015ece80()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_015ece80

// auto_init_stream_guards_015edd50: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_015edd50 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_015edd50 (0x015edd50) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x0593a23c with the library function at
// 0x02fbf348 and the wide stream guard at 0x0593a23e with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x0593a23c, stream_guard, uint8_t);
RT_GLOBAL(0x0593a23e, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_015edd50()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_015edd50

// auto_init_stream_guards_015eeed0: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_015eeed0 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_015eeed0 (0x015eeed0) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x0593a240 with the library function at
// 0x02fbf348 and the wide stream guard at 0x0593a242 with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x0593a240, stream_guard, uint8_t);
RT_GLOBAL(0x0593a242, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_015eeed0()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_015eeed0

// auto_init_stream_guards_015ef470: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_015ef470 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_015ef470 (0x015ef470) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x0593a244 with the library function at
// 0x02fbf348 and the wide stream guard at 0x0593a246 with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x0593a244, stream_guard, uint8_t);
RT_GLOBAL(0x0593a246, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_015ef470()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_015ef470

// auto_init_stream_guards_015ef8b0: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_015ef8b0 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_015ef8b0 (0x015ef8b0) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x0593a248 with the library function at
// 0x02fbf348 and the wide stream guard at 0x0593a24a with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x0593a248, stream_guard, uint8_t);
RT_GLOBAL(0x0593a24a, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_015ef8b0()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_015ef8b0

// auto_init_stream_guards_015ef9a0: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_015ef9a0 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_015ef9a0 (0x015ef9a0) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x0593a24c with the library function at
// 0x02fbf348 and the wide stream guard at 0x0593a24e with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x0593a24c, stream_guard, uint8_t);
RT_GLOBAL(0x0593a24e, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_015ef9a0()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_015ef9a0

// auto_init_stream_guards_015efcd0: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_015efcd0 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_015efcd0 (0x015efcd0) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x0593a250 with the library function at
// 0x02fbf348 and the wide stream guard at 0x0593a252 with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x0593a250, stream_guard, uint8_t);
RT_GLOBAL(0x0593a252, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_015efcd0()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_015efcd0

// auto_init_stream_guards_015f08d0: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_015f08d0 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_015f08d0 (0x015f08d0) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x0593a254 with the library function at
// 0x02fbf348 and the wide stream guard at 0x0593a256 with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x0593a254, stream_guard, uint8_t);
RT_GLOBAL(0x0593a256, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_015f08d0()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_015f08d0

// auto_init_stream_guards_0247bb90: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_0247bb90 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_0247bb90 (0x0247bb90) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x05aa1c09 with the library function at
// 0x02fbf348 and the wide stream guard at 0x05aa1c0a with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x05aa1c09, stream_guard, uint8_t);
RT_GLOBAL(0x05aa1c0a, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_0247bb90()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_0247bb90

// auto_init_stream_guards_024df780: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_024df780 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_024df780 (0x024df780) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x05aa5479 with the library function at
// 0x02fbf348 and the wide stream guard at 0x05aa547a with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x05aa5479, stream_guard, uint8_t);
RT_GLOBAL(0x05aa547a, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_024df780()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_024df780

// auto_init_stream_guards_024df8c0: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_024df8c0 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_024df8c0 (0x024df8c0) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x05aa547c with the library function at
// 0x02fbf348 and the wide stream guard at 0x05aa547d with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x05aa547c, stream_guard, uint8_t);
RT_GLOBAL(0x05aa547d, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_024df8c0()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_024df8c0

// auto_init_stream_guards_024dfe90: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_024dfe90 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_024dfe90 (0x024dfe90) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x05aa547f with the library function at
// 0x02fbf348 and the wide stream guard at 0x05aa5480 with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x05aa547f, stream_guard, uint8_t);
RT_GLOBAL(0x05aa5480, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_024dfe90()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_024dfe90

// auto_init_stream_guards_024e24f0: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_024e24f0 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_024e24f0 (0x024e24f0) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x05aa54f1 with the library function at
// 0x02fbf348 and the wide stream guard at 0x05aa54f2 with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x05aa54f1, stream_guard, uint8_t);
RT_GLOBAL(0x05aa54f2, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_024e24f0()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_024e24f0

// auto_init_stream_guards_024e2990: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_024e2990 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_024e2990 (0x024e2990) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x05aa5709 with the library function at
// 0x02fbf348 and the wide stream guard at 0x05aa570a with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x05aa5709, stream_guard, uint8_t);
RT_GLOBAL(0x05aa570a, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_024e2990()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_024e2990

// auto_init_stream_guards_02a3c770: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_02a3c770 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_02a3c770 (0x02a3c770) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x0586a941 with the library function at
// 0x02fbf348 and the wide stream guard at 0x0586a942 with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x0586a941, stream_guard, uint8_t);
RT_GLOBAL(0x0586a942, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_02a3c770()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_02a3c770

// auto_init_stream_guards_02a3f2f0: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_02a3f2f0 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_02a3f2f0 (0x02a3f2f0) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x0586ae21 with the library function at
// 0x02fbf348 and the wide stream guard at 0x0586ae22 with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x0586ae21, stream_guard, uint8_t);
RT_GLOBAL(0x0586ae22, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_02a3f2f0()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_02a3f2f0

// auto_init_stream_guards_02a72590: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_02a72590 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_02a72590 (0x02a72590) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x0586b3dd with the library function at
// 0x02fbf348 and the wide stream guard at 0x0586b3de with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x0586b3dd, stream_guard, uint8_t);
RT_GLOBAL(0x0586b3de, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_02a72590()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_02a72590

// auto_init_stream_guards_02a74820: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_02a74820 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_02a74820 (0x02a74820) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x0586b3e1 with the library function at
// 0x02fbf348 and the wide stream guard at 0x0586b3e2 with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x0586b3e1, stream_guard, uint8_t);
RT_GLOBAL(0x0586b3e2, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_02a74820()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_02a74820

// auto_init_stream_guards_02a751f0: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_02a751f0 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_02a751f0 (0x02a751f0) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x0586b3e5 with the library function at
// 0x02fbf348 and the wide stream guard at 0x0586b3e6 with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x0586b3e5, stream_guard, uint8_t);
RT_GLOBAL(0x0586b3e6, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_02a751f0()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_02a751f0

// auto_init_stream_guards_02a75810: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_02a75810 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_02a75810 (0x02a75810) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x0586b3e9 with the library function at
// 0x02fbf348 and the wide stream guard at 0x0586b3ea with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x0586b3e9, stream_guard, uint8_t);
RT_GLOBAL(0x0586b3ea, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_02a75810()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_02a75810

// auto_init_stream_guards_02a76b30: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_02a76b30 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_02a76b30 (0x02a76b30) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x0586b3ed with the library function at
// 0x02fbf348 and the wide stream guard at 0x0586b3ee with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x0586b3ed, stream_guard, uint8_t);
RT_GLOBAL(0x0586b3ee, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_02a76b30()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_02a76b30

// auto_init_stream_guards_02a77840: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_02a77840 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_02a77840 (0x02a77840) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x0586b3f1 with the library function at
// 0x02fbf348 and the wide stream guard at 0x0586b3f2 with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x0586b3f1, stream_guard, uint8_t);
RT_GLOBAL(0x0586b3f2, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_02a77840()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_02a77840

// auto_init_stream_guards_02a78720: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_02a78720 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_02a78720 (0x02a78720) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x0586b409 with the library function at
// 0x02fbf348 and the wide stream guard at 0x0586b40a with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x0586b409, stream_guard, uint8_t);
RT_GLOBAL(0x0586b40a, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_02a78720()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_02a78720

// auto_init_stream_guards_02aa4990: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_02aa4990 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_02aa4990 (0x02aa4990) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x0586b8b9 with the library function at
// 0x02fbf348 and the wide stream guard at 0x0586b8ba with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x0586b8b9, stream_guard, uint8_t);
RT_GLOBAL(0x0586b8ba, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_02aa4990()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_02aa4990

// auto_init_stream_guards_02aa4f80: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_02aa4f80 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_02aa4f80 (0x02aa4f80) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x0586b8bd with the library function at
// 0x02fbf348 and the wide stream guard at 0x0586b8be with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x0586b8bd, stream_guard, uint8_t);
RT_GLOBAL(0x0586b8be, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_02aa4f80()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_02aa4f80

// auto_init_stream_guards_02e61220: misc_init_stream_guards_58b9d5c with other addresses.
namespace twin_02e61220 {

// Misc: start-up step of a source file that uses the standard streams: makes its two stream guards.
//
// auto_init_stream_guards_02e61220 (0x02e61220) is what the compiler writes for a file that includes
// the stream header. It constructs the narrow stream guard at 0x0593a2c1 with the library function at
// 0x02fbf348 and the wide stream guard at 0x0593a2c2 with the one at 0x02fbf358, and after each it
// registers the guard's destroy function with the library's exit list (0x02fbe548). The destroy
// functions are read from the two import slots at 0x057e4330 and 0x057e4338.


namespace {

/** A function the library calls at exit with the object it was registered for. */
using ExitFunction = void (*)(void *object);

/** Registers a function to be called at exit with an object, on behalf of a module. */
using RegisterAtExit = int(ExitFunction function, void *object, void *module);

RT_ORIGINAL(0x02fbf348, fn_02fbf348, void(void *guard));
RT_ORIGINAL(0x02fbf358, fn_02fbf358, void(void *guard));
RT_ORIGINAL(0x02fbe548, fn_02fbe548, RegisterAtExit);

RT_GLOBAL(0x0593a2c1, stream_guard, uint8_t);
RT_GLOBAL(0x0593a2c2, wide_stream_guard, uint8_t);
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
extern "C" void bb_auto_init_stream_guards_02e61220()
{
    fn_02fbf348(stream_guard.address());
    fn_02fbe548(stream_guard_destroy.get(), stream_guard.address(), module_handle.address());
    fn_02fbf358(wide_stream_guard.address());
    fn_02fbe548(wide_stream_guard_destroy.get(), wide_stream_guard.address(), module_handle.address());
}

}  // namespace twin_02e61220
