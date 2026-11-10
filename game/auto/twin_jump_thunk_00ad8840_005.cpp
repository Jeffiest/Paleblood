// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_jump_thunk, in game/misc/jump_thunk.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstdint>
#include "runtime/original.h"

// auto_jump_thunk_0108fae0: misc_jump_thunk with other addresses.
namespace twin_0108fae0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0108fae0 (0x0108fae0) is a single jump to the function at 0x0109f870. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0109f870, fn_0109f870, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0108fae0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0109f870(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0108fae0

// auto_jump_thunk_0108faf0: misc_jump_thunk with other addresses.
namespace twin_0108faf0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0108faf0 (0x0108faf0) is a single jump to the function at 0x010b0dd0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x010b0dd0, fn_010b0dd0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0108faf0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_010b0dd0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0108faf0

// auto_jump_thunk_0108fb00: misc_jump_thunk with other addresses.
namespace twin_0108fb00 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0108fb00 (0x0108fb00) is a single jump to the function at 0x0109faa0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0109faa0, fn_0109faa0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0108fb00(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0109faa0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0108fb00

// auto_jump_thunk_010a05e0: misc_jump_thunk with other addresses.
namespace twin_010a05e0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_010a05e0 (0x010a05e0) is a single jump to the function at 0x010baad0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x010baad0, fn_010baad0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_010a05e0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_010baad0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_010a05e0

// auto_jump_thunk_010a3280: misc_jump_thunk with other addresses.
namespace twin_010a3280 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_010a3280 (0x010a3280) is a single jump to the function at 0x010cbfc0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x010cbfc0, fn_010cbfc0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_010a3280(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_010cbfc0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_010a3280

// auto_jump_thunk_010a5870: misc_jump_thunk with other addresses.
namespace twin_010a5870 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_010a5870 (0x010a5870) is a single jump to the function at 0x010a8260. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x010a8260, fn_010a8260, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_010a5870(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_010a8260(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_010a5870

// auto_jump_thunk_010a5880: misc_jump_thunk with other addresses.
namespace twin_010a5880 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_010a5880 (0x010a5880) is a single jump to the function at 0x010a8300. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x010a8300, fn_010a8300, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_010a5880(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_010a8300(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_010a5880

// auto_jump_thunk_010b41a0: misc_jump_thunk with other addresses.
namespace twin_010b41a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_010b41a0 (0x010b41a0) is a single jump to the function at 0x010b9710. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x010b9710, fn_010b9710, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_010b41a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_010b9710(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_010b41a0

// auto_jump_thunk_010b41c0: misc_jump_thunk with other addresses.
namespace twin_010b41c0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_010b41c0 (0x010b41c0) is a single jump to the function at 0x010b9790. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x010b9790, fn_010b9790, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_010b41c0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_010b9790(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_010b41c0

// auto_jump_thunk_010b41d0: misc_jump_thunk with other addresses.
namespace twin_010b41d0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_010b41d0 (0x010b41d0) is a single jump to the function at 0x010b9820. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x010b9820, fn_010b9820, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_010b41d0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_010b9820(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_010b41d0

// auto_jump_thunk_010baac0: misc_jump_thunk with other addresses.
namespace twin_010baac0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_010baac0 (0x010baac0) is a single jump to the function at 0x010ba890. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x010ba890, fn_010ba890, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_010baac0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_010ba890(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_010baac0

// auto_jump_thunk_010c6de0: misc_jump_thunk with other addresses.
namespace twin_010c6de0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_010c6de0 (0x010c6de0) is a single jump to the function at 0x010a04b0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x010a04b0, fn_010a04b0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_010c6de0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_010a04b0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_010c6de0

// auto_jump_thunk_010cc750: misc_jump_thunk with other addresses.
namespace twin_010cc750 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_010cc750 (0x010cc750) is a single jump to the function at 0x010dafc0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x010dafc0, fn_010dafc0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_010cc750(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_010dafc0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_010cc750

// auto_jump_thunk_010da1e0: misc_jump_thunk with other addresses.
namespace twin_010da1e0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_010da1e0 (0x010da1e0) is a single jump to the function at 0x010d8bb0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x010d8bb0, fn_010d8bb0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_010da1e0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_010d8bb0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_010da1e0

// auto_jump_thunk_010e7b60: misc_jump_thunk with other addresses.
namespace twin_010e7b60 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_010e7b60 (0x010e7b60) is a single jump to the function at 0x02bc37c0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02bc37c0, fn_02bc37c0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_010e7b60(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02bc37c0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_010e7b60

// auto_jump_thunk_010e7b70: misc_jump_thunk with other addresses.
namespace twin_010e7b70 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_010e7b70 (0x010e7b70) is a single jump to the function at 0x02bc37c0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02bc37c0, fn_02bc37c0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_010e7b70(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02bc37c0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_010e7b70

// auto_jump_thunk_010ee2d0: misc_jump_thunk with other addresses.
namespace twin_010ee2d0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_010ee2d0 (0x010ee2d0) is a single jump to the function at 0x02bc50b0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02bc50b0, fn_02bc50b0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_010ee2d0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02bc50b0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_010ee2d0

// auto_jump_thunk_010ee2e0: misc_jump_thunk with other addresses.
namespace twin_010ee2e0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_010ee2e0 (0x010ee2e0) is a single jump to the function at 0x02bc50b0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02bc50b0, fn_02bc50b0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_010ee2e0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02bc50b0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_010ee2e0

// auto_jump_thunk_010f1ea0: misc_jump_thunk with other addresses.
namespace twin_010f1ea0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_010f1ea0 (0x010f1ea0) is a single jump to the function at 0x010df1c0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x010df1c0, fn_010df1c0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_010f1ea0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_010df1c0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_010f1ea0

// auto_jump_thunk_010f9e20: misc_jump_thunk with other addresses.
namespace twin_010f9e20 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_010f9e20 (0x010f9e20) is a single jump to the function at 0x02b351f0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02b351f0, fn_02b351f0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_010f9e20(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02b351f0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_010f9e20

// auto_jump_thunk_011009c0: misc_jump_thunk with other addresses.
namespace twin_011009c0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_011009c0 (0x011009c0) is a single jump to the function at 0x010f1ea0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x010f1ea0, fn_010f1ea0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_011009c0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_010f1ea0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_011009c0

// auto_jump_thunk_011009f0: misc_jump_thunk with other addresses.
namespace twin_011009f0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_011009f0 (0x011009f0) is a single jump to the function at 0x010e5d20. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x010e5d20, fn_010e5d20, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_011009f0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_010e5d20(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_011009f0

// auto_jump_thunk_01100a00: misc_jump_thunk with other addresses.
namespace twin_01100a00 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01100a00 (0x01100a00) is a single jump to the function at 0x010e5cc0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x010e5cc0, fn_010e5cc0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01100a00(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_010e5cc0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01100a00

// auto_jump_thunk_01100e00: misc_jump_thunk with other addresses.
namespace twin_01100e00 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01100e00 (0x01100e00) is a single jump to the function at 0x01104e80. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01104e80, fn_01104e80, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01100e00(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01104e80(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01100e00

// auto_jump_thunk_011055c0: misc_jump_thunk with other addresses.
namespace twin_011055c0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_011055c0 (0x011055c0) is a single jump to the function at 0x02b351f0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02b351f0, fn_02b351f0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_011055c0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02b351f0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_011055c0

// auto_jump_thunk_01108da0: misc_jump_thunk with other addresses.
namespace twin_01108da0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01108da0 (0x01108da0) is a single jump to the function at 0x01108db0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01108db0, fn_01108db0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01108da0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01108db0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01108da0

// auto_jump_thunk_0111b3a0: misc_jump_thunk with other addresses.
namespace twin_0111b3a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0111b3a0 (0x0111b3a0) is a single jump to the function at 0x0111bd50. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0111bd50, fn_0111bd50, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0111b3a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0111bd50(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0111b3a0

// auto_jump_thunk_0111b910: misc_jump_thunk with other addresses.
namespace twin_0111b910 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0111b910 (0x0111b910) is a single jump to the function at 0x0111ba60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0111ba60, fn_0111ba60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0111b910(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0111ba60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0111b910

// auto_jump_thunk_0111be80: misc_jump_thunk with other addresses.
namespace twin_0111be80 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0111be80 (0x0111be80) is a single jump to the function at 0x0111be90. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0111be90, fn_0111be90, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0111be80(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0111be90(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0111be80

// auto_jump_thunk_0112d730: misc_jump_thunk with other addresses.
namespace twin_0112d730 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0112d730 (0x0112d730) is a single jump to the function at 0x011065d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x011065d0, fn_011065d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0112d730(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_011065d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0112d730

// auto_jump_thunk_01130480: misc_jump_thunk with other addresses.
namespace twin_01130480 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01130480 (0x01130480) is a single jump to the function at 0x01130490. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01130490, fn_01130490, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01130480(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01130490(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01130480

// auto_jump_thunk_011a2140: misc_jump_thunk with other addresses.
namespace twin_011a2140 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_011a2140 (0x011a2140) is a single jump to the function at 0x011a2150. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x011a2150, fn_011a2150, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_011a2140(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_011a2150(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_011a2140

// auto_jump_thunk_011a44a0: misc_jump_thunk with other addresses.
namespace twin_011a44a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_011a44a0 (0x011a44a0) is a single jump to the function at 0x011c7980. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x011c7980, fn_011c7980, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_011a44a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_011c7980(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_011a44a0

// auto_jump_thunk_011a44b0: misc_jump_thunk with other addresses.
namespace twin_011a44b0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_011a44b0 (0x011a44b0) is a single jump to the function at 0x011c79c0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x011c79c0, fn_011c79c0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_011a44b0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_011c79c0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_011a44b0

// auto_jump_thunk_011ab550: misc_jump_thunk with other addresses.
namespace twin_011ab550 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_011ab550 (0x011ab550) is a single jump to the function at 0x0111a5f0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0111a5f0, fn_0111a5f0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_011ab550(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0111a5f0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_011ab550

// auto_jump_thunk_011ab560: misc_jump_thunk with other addresses.
namespace twin_011ab560 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_011ab560 (0x011ab560) is a single jump to the function at 0x0111a600. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0111a600, fn_0111a600, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_011ab560(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0111a600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_011ab560

// auto_jump_thunk_011ba930: misc_jump_thunk with other addresses.
namespace twin_011ba930 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_011ba930 (0x011ba930) is a single jump to the function at 0x011ba170. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x011ba170, fn_011ba170, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_011ba930(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_011ba170(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_011ba930

// auto_jump_thunk_011cfad0: misc_jump_thunk with other addresses.
namespace twin_011cfad0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_011cfad0 (0x011cfad0) is a single jump to the function at 0x011cfae0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x011cfae0, fn_011cfae0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_011cfad0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_011cfae0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_011cfad0

// auto_jump_thunk_011d2490: misc_jump_thunk with other addresses.
namespace twin_011d2490 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_011d2490 (0x011d2490) is a single jump to the function at 0x011e2c30. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x011e2c30, fn_011e2c30, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_011d2490(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_011e2c30(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_011d2490

// auto_jump_thunk_011f5be0: misc_jump_thunk with other addresses.
namespace twin_011f5be0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_011f5be0 (0x011f5be0) is a single jump to the function at 0x01127f00. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01127f00, fn_01127f00, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_011f5be0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01127f00(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_011f5be0

// auto_jump_thunk_012026a0: misc_jump_thunk with other addresses.
namespace twin_012026a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_012026a0 (0x012026a0) is a single jump to the function at 0x012026b0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x012026b0, fn_012026b0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_012026a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_012026b0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_012026a0

// auto_jump_thunk_01202850: misc_jump_thunk with other addresses.
namespace twin_01202850 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01202850 (0x01202850) is a single jump to the function at 0x01202860. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01202860, fn_01202860, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01202850(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01202860(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01202850

// auto_jump_thunk_01243980: misc_jump_thunk with other addresses.
namespace twin_01243980 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01243980 (0x01243980) is a single jump to the function at 0x01242160. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01242160, fn_01242160, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01243980(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01242160(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01243980

// auto_jump_thunk_01249790: misc_jump_thunk with other addresses.
namespace twin_01249790 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01249790 (0x01249790) is a single jump to the function at 0x012d9e60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x012d9e60, fn_012d9e60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01249790(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_012d9e60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01249790

// auto_jump_thunk_0124c9f0: misc_jump_thunk with other addresses.
namespace twin_0124c9f0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0124c9f0 (0x0124c9f0) is a single jump to the function at 0x0124c440. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0124c440, fn_0124c440, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0124c9f0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0124c440(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0124c9f0

// auto_jump_thunk_01264410: misc_jump_thunk with other addresses.
namespace twin_01264410 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01264410 (0x01264410) is a single jump to the function at 0x02670fe0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02670fe0, fn_02670fe0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01264410(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02670fe0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01264410

// auto_jump_thunk_012c5390: misc_jump_thunk with other addresses.
namespace twin_012c5390 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_012c5390 (0x012c5390) is a single jump to the function at 0x026830f0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x026830f0, fn_026830f0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_012c5390(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_026830f0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_012c5390

// auto_jump_thunk_012c95f0: misc_jump_thunk with other addresses.
namespace twin_012c95f0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_012c95f0 (0x012c95f0) is a single jump to the function at 0x02d4a500. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02d4a500, fn_02d4a500, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_012c95f0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02d4a500(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_012c95f0

// auto_jump_thunk_012c9910: misc_jump_thunk with other addresses.
namespace twin_012c9910 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_012c9910 (0x012c9910) is a single jump to the function at 0x02d4a500. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02d4a500, fn_02d4a500, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_012c9910(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02d4a500(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_012c9910

// auto_jump_thunk_01312e00: misc_jump_thunk with other addresses.
namespace twin_01312e00 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01312e00 (0x01312e00) is a single jump to the function at 0x01312e10. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01312e10, fn_01312e10, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01312e00(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01312e10(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01312e00

// auto_jump_thunk_013161f0: misc_jump_thunk with other addresses.
namespace twin_013161f0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_013161f0 (0x013161f0) is a single jump to the function at 0x02e82cd0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02e82cd0, fn_02e82cd0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_013161f0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02e82cd0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_013161f0

// auto_jump_thunk_01316380: misc_jump_thunk with other addresses.
namespace twin_01316380 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01316380 (0x01316380) is a single jump to the function at 0x02e85690. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02e85690, fn_02e85690, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01316380(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02e85690(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01316380

// auto_jump_thunk_01316480: misc_jump_thunk with other addresses.
namespace twin_01316480 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01316480 (0x01316480) is a single jump to the function at 0x02cf8e50. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02cf8e50, fn_02cf8e50, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01316480(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02cf8e50(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01316480

// auto_jump_thunk_01316e70: misc_jump_thunk with other addresses.
namespace twin_01316e70 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01316e70 (0x01316e70) is a single jump to the function at 0x02f7f7d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02f7f7d0, fn_02f7f7d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01316e70(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02f7f7d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01316e70

// auto_jump_thunk_0131d980: misc_jump_thunk with other addresses.
namespace twin_0131d980 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0131d980 (0x0131d980) is a single jump to the function at 0x02c50ce0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02c50ce0, fn_02c50ce0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0131d980(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02c50ce0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0131d980

// auto_jump_thunk_01336e40: misc_jump_thunk with other addresses.
namespace twin_01336e40 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01336e40 (0x01336e40) is a single jump to the function at 0x01336e50. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01336e50, fn_01336e50, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01336e40(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01336e50(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01336e40

// auto_jump_thunk_01340de0: misc_jump_thunk with other addresses.
namespace twin_01340de0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01340de0 (0x01340de0) is a single jump to the function at 0x02d55890. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02d55890, fn_02d55890, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01340de0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02d55890(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01340de0

// auto_jump_thunk_01341350: misc_jump_thunk with other addresses.
namespace twin_01341350 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01341350 (0x01341350) is a single jump to the function at 0x01341360. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01341360, fn_01341360, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01341350(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01341360(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01341350

// auto_jump_thunk_01346470: misc_jump_thunk with other addresses.
namespace twin_01346470 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01346470 (0x01346470) is a single jump to the function at 0x02728bf0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02728bf0, fn_02728bf0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01346470(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02728bf0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01346470

// auto_jump_thunk_01346e20: misc_jump_thunk with other addresses.
namespace twin_01346e20 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01346e20 (0x01346e20) is a single jump to the function at 0x01346470. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01346470, fn_01346470, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01346e20(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01346470(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01346e20

// auto_jump_thunk_01349850: misc_jump_thunk with other addresses.
namespace twin_01349850 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01349850 (0x01349850) is a single jump to the function at 0x0134a5d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0134a5d0, fn_0134a5d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01349850(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0134a5d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01349850

// auto_jump_thunk_0134cbb0: misc_jump_thunk with other addresses.
namespace twin_0134cbb0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0134cbb0 (0x0134cbb0) is a single jump to the function at 0x02728bf0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02728bf0, fn_02728bf0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0134cbb0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02728bf0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0134cbb0

// auto_jump_thunk_0135e440: misc_jump_thunk with other addresses.
namespace twin_0135e440 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0135e440 (0x0135e440) is a single jump to the function at 0x01364230. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01364230, fn_01364230, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0135e440(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01364230(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0135e440

// auto_jump_thunk_0136d700: misc_jump_thunk with other addresses.
namespace twin_0136d700 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0136d700 (0x0136d700) is a single jump to the function at 0x027822a0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x027822a0, fn_027822a0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0136d700(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_027822a0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0136d700

// auto_jump_thunk_013781d0: misc_jump_thunk with other addresses.
namespace twin_013781d0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_013781d0 (0x013781d0) is a single jump to the function at 0x01376630. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01376630, fn_01376630, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_013781d0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01376630(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_013781d0

// auto_jump_thunk_01378240: misc_jump_thunk with other addresses.
namespace twin_01378240 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01378240 (0x01378240) is a single jump to the function at 0x01376760. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01376760, fn_01376760, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01378240(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01376760(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01378240

// auto_jump_thunk_01378250: misc_jump_thunk with other addresses.
namespace twin_01378250 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01378250 (0x01378250) is a single jump to the function at 0x01376980. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01376980, fn_01376980, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01378250(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01376980(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01378250

// auto_jump_thunk_01378310: misc_jump_thunk with other addresses.
namespace twin_01378310 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01378310 (0x01378310) is a single jump to the function at 0x01376a80. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01376a80, fn_01376a80, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01378310(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01376a80(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01378310

// auto_jump_thunk_01378320: misc_jump_thunk with other addresses.
namespace twin_01378320 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01378320 (0x01378320) is a single jump to the function at 0x01376c10. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01376c10, fn_01376c10, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01378320(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01376c10(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01378320

// auto_jump_thunk_01381070: misc_jump_thunk with other addresses.
namespace twin_01381070 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01381070 (0x01381070) is a single jump to the function at 0x01381080. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01381080, fn_01381080, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01381070(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01381080(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01381070

// auto_jump_thunk_01381b40: misc_jump_thunk with other addresses.
namespace twin_01381b40 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01381b40 (0x01381b40) is a single jump to the function at 0x01381a20. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01381a20, fn_01381a20, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01381b40(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01381a20(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01381b40

// auto_jump_thunk_01382c20: misc_jump_thunk with other addresses.
namespace twin_01382c20 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01382c20 (0x01382c20) is a single jump to the function at 0x013e7090. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x013e7090, fn_013e7090, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01382c20(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_013e7090(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01382c20

// auto_jump_thunk_013832b0: misc_jump_thunk with other addresses.
namespace twin_013832b0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_013832b0 (0x013832b0) is a single jump to the function at 0x01382c20. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01382c20, fn_01382c20, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_013832b0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01382c20(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_013832b0

// auto_jump_thunk_01384750: misc_jump_thunk with other addresses.
namespace twin_01384750 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01384750 (0x01384750) is a single jump to the function at 0x01383d50. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01383d50, fn_01383d50, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01384750(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01383d50(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01384750

// auto_jump_thunk_013855f0: misc_jump_thunk with other addresses.
namespace twin_013855f0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_013855f0 (0x013855f0) is a single jump to the function at 0x01385970. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01385970, fn_01385970, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_013855f0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01385970(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_013855f0

// auto_jump_thunk_01385970: misc_jump_thunk with other addresses.
namespace twin_01385970 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01385970 (0x01385970) is a single jump to the function at 0x013e5c40. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x013e5c40, fn_013e5c40, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01385970(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_013e5c40(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01385970

// auto_jump_thunk_013864d0: misc_jump_thunk with other addresses.
namespace twin_013864d0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_013864d0 (0x013864d0) is a single jump to the function at 0x01386840. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01386840, fn_01386840, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_013864d0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01386840(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_013864d0

// auto_jump_thunk_01386600: misc_jump_thunk with other addresses.
namespace twin_01386600 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01386600 (0x01386600) is a single jump to the function at 0x01386840. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01386840, fn_01386840, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01386600(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01386840(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01386600

// auto_jump_thunk_01386730: misc_jump_thunk with other addresses.
namespace twin_01386730 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01386730 (0x01386730) is a single jump to the function at 0x01386840. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01386840, fn_01386840, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01386730(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01386840(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01386730

// auto_jump_thunk_01387620: misc_jump_thunk with other addresses.
namespace twin_01387620 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01387620 (0x01387620) is a single jump to the function at 0x0135bf50. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0135bf50, fn_0135bf50, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01387620(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0135bf50(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01387620

// auto_jump_thunk_0138a050: misc_jump_thunk with other addresses.
namespace twin_0138a050 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0138a050 (0x0138a050) is a single jump to the function at 0x01389900. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01389900, fn_01389900, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0138a050(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01389900(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0138a050

// auto_jump_thunk_0138a330: misc_jump_thunk with other addresses.
namespace twin_0138a330 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0138a330 (0x0138a330) is a single jump to the function at 0x01389950. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01389950, fn_01389950, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0138a330(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01389950(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0138a330

// auto_jump_thunk_0139c750: misc_jump_thunk with other addresses.
namespace twin_0139c750 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0139c750 (0x0139c750) is a single jump to the function at 0x0139c960. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0139c960, fn_0139c960, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0139c750(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0139c960(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0139c750

// auto_jump_thunk_0139c760: misc_jump_thunk with other addresses.
namespace twin_0139c760 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0139c760 (0x0139c760) is a single jump to the function at 0x0139c2f0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0139c2f0, fn_0139c2f0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0139c760(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0139c2f0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0139c760

// auto_jump_thunk_0139dc80: misc_jump_thunk with other addresses.
namespace twin_0139dc80 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0139dc80 (0x0139dc80) is a single jump to the function at 0x02d866d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02d866d0, fn_02d866d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0139dc80(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02d866d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0139dc80

// auto_jump_thunk_0139dc90: misc_jump_thunk with other addresses.
namespace twin_0139dc90 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0139dc90 (0x0139dc90) is a single jump to the function at 0x02d867b0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02d867b0, fn_02d867b0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0139dc90(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02d867b0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0139dc90

// auto_jump_thunk_0139dca0: misc_jump_thunk with other addresses.
namespace twin_0139dca0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0139dca0 (0x0139dca0) is a single jump to the function at 0x02d86890. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02d86890, fn_02d86890, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0139dca0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02d86890(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0139dca0

// auto_jump_thunk_0139dcb0: misc_jump_thunk with other addresses.
namespace twin_0139dcb0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0139dcb0 (0x0139dcb0) is a single jump to the function at 0x02d86970. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02d86970, fn_02d86970, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0139dcb0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02d86970(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0139dcb0

// auto_jump_thunk_0139dcc0: misc_jump_thunk with other addresses.
namespace twin_0139dcc0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0139dcc0 (0x0139dcc0) is a single jump to the function at 0x02d86a50. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02d86a50, fn_02d86a50, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0139dcc0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02d86a50(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0139dcc0

// auto_jump_thunk_0139dcd0: misc_jump_thunk with other addresses.
namespace twin_0139dcd0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0139dcd0 (0x0139dcd0) is a single jump to the function at 0x02d86b30. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02d86b30, fn_02d86b30, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0139dcd0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02d86b30(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0139dcd0

// auto_jump_thunk_0139dce0: misc_jump_thunk with other addresses.
namespace twin_0139dce0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0139dce0 (0x0139dce0) is a single jump to the function at 0x02d86c10. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02d86c10, fn_02d86c10, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0139dce0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02d86c10(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0139dce0

// auto_jump_thunk_0139dcf0: misc_jump_thunk with other addresses.
namespace twin_0139dcf0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0139dcf0 (0x0139dcf0) is a single jump to the function at 0x02d86cf0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02d86cf0, fn_02d86cf0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0139dcf0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02d86cf0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0139dcf0

// auto_jump_thunk_0139e120: misc_jump_thunk with other addresses.
namespace twin_0139e120 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0139e120 (0x0139e120) is a single jump to the function at 0x02d87910. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02d87910, fn_02d87910, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0139e120(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02d87910(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0139e120

// auto_jump_thunk_0139e130: misc_jump_thunk with other addresses.
namespace twin_0139e130 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0139e130 (0x0139e130) is a single jump to the function at 0x02d87a20. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02d87a20, fn_02d87a20, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0139e130(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02d87a20(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0139e130

// auto_jump_thunk_0139e140: misc_jump_thunk with other addresses.
namespace twin_0139e140 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0139e140 (0x0139e140) is a single jump to the function at 0x02d87b30. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02d87b30, fn_02d87b30, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0139e140(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02d87b30(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0139e140

// auto_jump_thunk_0139e150: misc_jump_thunk with other addresses.
namespace twin_0139e150 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0139e150 (0x0139e150) is a single jump to the function at 0x02d87c40. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02d87c40, fn_02d87c40, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0139e150(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02d87c40(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0139e150

// auto_jump_thunk_0139ed70: misc_jump_thunk with other addresses.
namespace twin_0139ed70 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0139ed70 (0x0139ed70) is a single jump to the function at 0x02d87d50. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02d87d50, fn_02d87d50, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0139ed70(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02d87d50(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0139ed70

// auto_jump_thunk_0139ed80: misc_jump_thunk with other addresses.
namespace twin_0139ed80 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0139ed80 (0x0139ed80) is a single jump to the function at 0x02d87e40. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02d87e40, fn_02d87e40, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0139ed80(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02d87e40(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0139ed80

// auto_jump_thunk_0139ed90: misc_jump_thunk with other addresses.
namespace twin_0139ed90 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0139ed90 (0x0139ed90) is a single jump to the function at 0x02d87f30. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02d87f30, fn_02d87f30, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0139ed90(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02d87f30(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0139ed90

// auto_jump_thunk_0139eda0: misc_jump_thunk with other addresses.
namespace twin_0139eda0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0139eda0 (0x0139eda0) is a single jump to the function at 0x02d88020. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02d88020, fn_02d88020, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0139eda0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02d88020(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0139eda0

// auto_jump_thunk_0139edb0: misc_jump_thunk with other addresses.
namespace twin_0139edb0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0139edb0 (0x0139edb0) is a single jump to the function at 0x02d88110. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02d88110, fn_02d88110, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0139edb0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02d88110(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0139edb0

// auto_jump_thunk_0139edc0: misc_jump_thunk with other addresses.
namespace twin_0139edc0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0139edc0 (0x0139edc0) is a single jump to the function at 0x02d88200. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02d88200, fn_02d88200, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0139edc0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02d88200(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0139edc0

// auto_jump_thunk_0139edd0: misc_jump_thunk with other addresses.
namespace twin_0139edd0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0139edd0 (0x0139edd0) is a single jump to the function at 0x02d882f0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02d882f0, fn_02d882f0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0139edd0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02d882f0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0139edd0

// auto_jump_thunk_0139ede0: misc_jump_thunk with other addresses.
namespace twin_0139ede0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0139ede0 (0x0139ede0) is a single jump to the function at 0x02d883e0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02d883e0, fn_02d883e0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0139ede0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02d883e0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0139ede0

// auto_jump_thunk_0139edf0: misc_jump_thunk with other addresses.
namespace twin_0139edf0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0139edf0 (0x0139edf0) is a single jump to the function at 0x02d884d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02d884d0, fn_02d884d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0139edf0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02d884d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0139edf0

// auto_jump_thunk_0139ee00: misc_jump_thunk with other addresses.
namespace twin_0139ee00 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0139ee00 (0x0139ee00) is a single jump to the function at 0x02d885c0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02d885c0, fn_02d885c0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0139ee00(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02d885c0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0139ee00

// auto_jump_thunk_0139f660: misc_jump_thunk with other addresses.
namespace twin_0139f660 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0139f660 (0x0139f660) is a single jump to the function at 0x02d88f30. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02d88f30, fn_02d88f30, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0139f660(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02d88f30(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0139f660

// auto_jump_thunk_0139f670: misc_jump_thunk with other addresses.
namespace twin_0139f670 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0139f670 (0x0139f670) is a single jump to the function at 0x02d89040. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02d89040, fn_02d89040, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0139f670(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02d89040(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0139f670

// auto_jump_thunk_0139f680: misc_jump_thunk with other addresses.
namespace twin_0139f680 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0139f680 (0x0139f680) is a single jump to the function at 0x02d89150. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02d89150, fn_02d89150, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0139f680(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02d89150(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0139f680

// auto_jump_thunk_0139f690: misc_jump_thunk with other addresses.
namespace twin_0139f690 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0139f690 (0x0139f690) is a single jump to the function at 0x02d89260. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02d89260, fn_02d89260, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0139f690(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02d89260(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0139f690

// auto_jump_thunk_013a6210: misc_jump_thunk with other addresses.
namespace twin_013a6210 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_013a6210 (0x013a6210) is a single jump to the function at 0x013a6220. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x013a6220, fn_013a6220, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_013a6210(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_013a6220(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_013a6210

// auto_jump_thunk_013a75d0: misc_jump_thunk with other addresses.
namespace twin_013a75d0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_013a75d0 (0x013a75d0) is a single jump to the function at 0x01400850. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01400850, fn_01400850, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_013a75d0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01400850(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_013a75d0

// auto_jump_thunk_013af110: misc_jump_thunk with other addresses.
namespace twin_013af110 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_013af110 (0x013af110) is a single jump to the function at 0x013af120. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x013af120, fn_013af120, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_013af110(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_013af120(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_013af110

// auto_jump_thunk_013b50e0: misc_jump_thunk with other addresses.
namespace twin_013b50e0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_013b50e0 (0x013b50e0) is a single jump to the function at 0x013915e0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x013915e0, fn_013915e0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_013b50e0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_013915e0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_013b50e0

// auto_jump_thunk_013b54a0: misc_jump_thunk with other addresses.
namespace twin_013b54a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_013b54a0 (0x013b54a0) is a single jump to the function at 0x013915e0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x013915e0, fn_013915e0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_013b54a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_013915e0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_013b54a0

// auto_jump_thunk_013b8a50: misc_jump_thunk with other addresses.
namespace twin_013b8a50 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_013b8a50 (0x013b8a50) is a single jump to the function at 0x0139b630. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0139b630, fn_0139b630, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_013b8a50(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0139b630(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_013b8a50

// auto_jump_thunk_013bf8d0: misc_jump_thunk with other addresses.
namespace twin_013bf8d0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_013bf8d0 (0x013bf8d0) is a single jump to the function at 0x02e5c2c0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02e5c2c0, fn_02e5c2c0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_013bf8d0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02e5c2c0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_013bf8d0

// auto_jump_thunk_013c00c0: misc_jump_thunk with other addresses.
namespace twin_013c00c0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_013c00c0 (0x013c00c0) is a single jump to the function at 0x02da2740. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02da2740, fn_02da2740, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_013c00c0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02da2740(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_013c00c0

// auto_jump_thunk_013c00d0: misc_jump_thunk with other addresses.
namespace twin_013c00d0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_013c00d0 (0x013c00d0) is a single jump to the function at 0x02da2740. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02da2740, fn_02da2740, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_013c00d0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02da2740(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_013c00d0

// auto_jump_thunk_013c7000: misc_jump_thunk with other addresses.
namespace twin_013c7000 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_013c7000 (0x013c7000) is a single jump to the function at 0x02da60d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02da60d0, fn_02da60d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_013c7000(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02da60d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_013c7000

// auto_jump_thunk_013c7010: misc_jump_thunk with other addresses.
namespace twin_013c7010 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_013c7010 (0x013c7010) is a single jump to the function at 0x02da60d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02da60d0, fn_02da60d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_013c7010(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02da60d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_013c7010

// auto_jump_thunk_013c7990: misc_jump_thunk with other addresses.
namespace twin_013c7990 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_013c7990 (0x013c7990) is a single jump to the function at 0x013c7ec0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x013c7ec0, fn_013c7ec0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_013c7990(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_013c7ec0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_013c7990

// auto_jump_thunk_013e3c60: misc_jump_thunk with other addresses.
namespace twin_013e3c60 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_013e3c60 (0x013e3c60) is a single jump to the function at 0x01386bc0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01386bc0, fn_01386bc0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_013e3c60(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01386bc0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_013e3c60

// auto_jump_thunk_013e8250: misc_jump_thunk with other addresses.
namespace twin_013e8250 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_013e8250 (0x013e8250) is a single jump to the function at 0x01384750. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01384750, fn_01384750, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_013e8250(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01384750(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_013e8250

// auto_jump_thunk_013f6080: misc_jump_thunk with other addresses.
namespace twin_013f6080 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_013f6080 (0x013f6080) is a single jump to the function at 0x013f6090. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x013f6090, fn_013f6090, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_013f6080(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_013f6090(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_013f6080

// auto_jump_thunk_013f9340: misc_jump_thunk with other addresses.
namespace twin_013f9340 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_013f9340 (0x013f9340) is a single jump to the function at 0x013f9350. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x013f9350, fn_013f9350, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_013f9340(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_013f9350(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_013f9340

// auto_jump_thunk_013febd0: misc_jump_thunk with other addresses.
namespace twin_013febd0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_013febd0 (0x013febd0) is a single jump to the function at 0x013febe0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x013febe0, fn_013febe0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_013febd0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_013febe0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_013febd0

// auto_jump_thunk_01401f80: misc_jump_thunk with other addresses.
namespace twin_01401f80 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01401f80 (0x01401f80) is a single jump to the function at 0x01401600. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01401600, fn_01401600, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01401f80(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01401f80

// auto_jump_thunk_01403930: misc_jump_thunk with other addresses.
namespace twin_01403930 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01403930 (0x01403930) is a single jump to the function at 0x01401600. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01401600, fn_01401600, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01403930(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01403930

// auto_jump_thunk_0140b940: misc_jump_thunk with other addresses.
namespace twin_0140b940 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0140b940 (0x0140b940) is a single jump to the function at 0x01400850. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01400850, fn_01400850, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0140b940(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01400850(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0140b940

// auto_jump_thunk_0140ce70: misc_jump_thunk with other addresses.
namespace twin_0140ce70 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0140ce70 (0x0140ce70) is a single jump to the function at 0x014014c0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x014014c0, fn_014014c0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0140ce70(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_014014c0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0140ce70

// auto_jump_thunk_0140ce80: misc_jump_thunk with other addresses.
namespace twin_0140ce80 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0140ce80 (0x0140ce80) is a single jump to the function at 0x014014e0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x014014e0, fn_014014e0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0140ce80(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_014014e0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0140ce80

// auto_jump_thunk_014207a0: misc_jump_thunk with other addresses.
namespace twin_014207a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_014207a0 (0x014207a0) is a single jump to the function at 0x014207b0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x014207b0, fn_014207b0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_014207a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_014207b0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_014207a0

// auto_jump_thunk_01421590: misc_jump_thunk with other addresses.
namespace twin_01421590 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01421590 (0x01421590) is a single jump to the function at 0x014207b0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x014207b0, fn_014207b0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01421590(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_014207b0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01421590

// auto_jump_thunk_01438d20: misc_jump_thunk with other addresses.
namespace twin_01438d20 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01438d20 (0x01438d20) is a single jump to the function at 0x014395e0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x014395e0, fn_014395e0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01438d20(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_014395e0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01438d20

// auto_jump_thunk_01439330: misc_jump_thunk with other addresses.
namespace twin_01439330 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01439330 (0x01439330) is a single jump to the function at 0x01466d70. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01466d70, fn_01466d70, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01439330(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01466d70(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01439330

// auto_jump_thunk_0143b820: misc_jump_thunk with other addresses.
namespace twin_0143b820 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0143b820 (0x0143b820) is a single jump to the function at 0x02dd3e50. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02dd3e50, fn_02dd3e50, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0143b820(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02dd3e50(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0143b820

// auto_jump_thunk_0143b830: misc_jump_thunk with other addresses.
namespace twin_0143b830 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0143b830 (0x0143b830) is a single jump to the function at 0x02dd3e50. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02dd3e50, fn_02dd3e50, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0143b830(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02dd3e50(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0143b830

// auto_jump_thunk_0143b840: misc_jump_thunk with other addresses.
namespace twin_0143b840 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0143b840 (0x0143b840) is a single jump to the function at 0x02dd40d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02dd40d0, fn_02dd40d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0143b840(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02dd40d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0143b840

// auto_jump_thunk_0143b850: misc_jump_thunk with other addresses.
namespace twin_0143b850 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0143b850 (0x0143b850) is a single jump to the function at 0x02dd40d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02dd40d0, fn_02dd40d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0143b850(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02dd40d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0143b850

// auto_jump_thunk_0143b900: misc_jump_thunk with other addresses.
namespace twin_0143b900 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0143b900 (0x0143b900) is a single jump to the function at 0x02dd4240. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02dd4240, fn_02dd4240, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0143b900(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02dd4240(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0143b900

// auto_jump_thunk_0143b940: misc_jump_thunk with other addresses.
namespace twin_0143b940 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0143b940 (0x0143b940) is a single jump to the function at 0x02dd4240. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02dd4240, fn_02dd4240, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0143b940(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02dd4240(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0143b940

// auto_jump_thunk_01440090: misc_jump_thunk with other addresses.
namespace twin_01440090 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01440090 (0x01440090) is a single jump to the function at 0x014400a0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x014400a0, fn_014400a0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01440090(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_014400a0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01440090

// auto_jump_thunk_01440160: misc_jump_thunk with other addresses.
namespace twin_01440160 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01440160 (0x01440160) is a single jump to the function at 0x014400a0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x014400a0, fn_014400a0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01440160(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_014400a0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01440160

// auto_jump_thunk_014413e0: misc_jump_thunk with other addresses.
namespace twin_014413e0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_014413e0 (0x014413e0) is a single jump to the function at 0x0139b630. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0139b630, fn_0139b630, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_014413e0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0139b630(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_014413e0

// auto_jump_thunk_01444b60: misc_jump_thunk with other addresses.
namespace twin_01444b60 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01444b60 (0x01444b60) is a single jump to the function at 0x01400080. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01400080, fn_01400080, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01444b60(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01400080(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01444b60

// auto_jump_thunk_01444ef0: misc_jump_thunk with other addresses.
namespace twin_01444ef0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01444ef0 (0x01444ef0) is a single jump to the function at 0x01400850. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01400850, fn_01400850, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01444ef0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01400850(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01444ef0

// auto_jump_thunk_01448e70: misc_jump_thunk with other addresses.
namespace twin_01448e70 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01448e70 (0x01448e70) is a single jump to the function at 0x00b69c60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00b69c60, fn_00b69c60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01448e70(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00b69c60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01448e70

// auto_jump_thunk_01448e80: misc_jump_thunk with other addresses.
namespace twin_01448e80 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01448e80 (0x01448e80) is a single jump to the function at 0x00b69d40. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00b69d40, fn_00b69d40, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01448e80(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00b69d40(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01448e80

// auto_jump_thunk_0144a9e0: misc_jump_thunk with other addresses.
namespace twin_0144a9e0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0144a9e0 (0x0144a9e0) is a single jump to the function at 0x0136cf90. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0136cf90, fn_0136cf90, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0144a9e0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0136cf90(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0144a9e0

// auto_jump_thunk_01457720: misc_jump_thunk with other addresses.
namespace twin_01457720 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01457720 (0x01457720) is a single jump to the function at 0x014575c0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x014575c0, fn_014575c0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01457720(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_014575c0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01457720

// auto_jump_thunk_0145c8b0: misc_jump_thunk with other addresses.
namespace twin_0145c8b0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0145c8b0 (0x0145c8b0) is a single jump to the function at 0x0145bc70. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0145bc70, fn_0145bc70, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0145c8b0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0145bc70(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0145c8b0

// auto_jump_thunk_0145cca0: misc_jump_thunk with other addresses.
namespace twin_0145cca0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0145cca0 (0x0145cca0) is a single jump to the function at 0x01401600. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01401600, fn_01401600, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0145cca0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0145cca0

// auto_jump_thunk_0145d160: misc_jump_thunk with other addresses.
namespace twin_0145d160 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0145d160 (0x0145d160) is a single jump to the function at 0x01401600. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01401600, fn_01401600, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0145d160(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0145d160

// auto_jump_thunk_0145ee80: misc_jump_thunk with other addresses.
namespace twin_0145ee80 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0145ee80 (0x0145ee80) is a single jump to the function at 0x02de2580. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02de2580, fn_02de2580, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0145ee80(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02de2580(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0145ee80

// auto_jump_thunk_0145ee90: misc_jump_thunk with other addresses.
namespace twin_0145ee90 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0145ee90 (0x0145ee90) is a single jump to the function at 0x02de2580. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02de2580, fn_02de2580, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0145ee90(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02de2580(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0145ee90

// auto_jump_thunk_0145f440: misc_jump_thunk with other addresses.
namespace twin_0145f440 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0145f440 (0x0145f440) is a single jump to the function at 0x02de29a0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02de29a0, fn_02de29a0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0145f440(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02de29a0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0145f440

// auto_jump_thunk_0145f450: misc_jump_thunk with other addresses.
namespace twin_0145f450 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0145f450 (0x0145f450) is a single jump to the function at 0x02de29a0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02de29a0, fn_02de29a0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0145f450(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02de29a0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0145f450

// auto_jump_thunk_0148c360: misc_jump_thunk with other addresses.
namespace twin_0148c360 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0148c360 (0x0148c360) is a single jump to the function at 0x01475af0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01475af0, fn_01475af0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0148c360(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01475af0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0148c360

// auto_jump_thunk_0148ca70: misc_jump_thunk with other addresses.
namespace twin_0148ca70 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0148ca70 (0x0148ca70) is a single jump to the function at 0x01492e80. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01492e80, fn_01492e80, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0148ca70(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01492e80(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0148ca70

// auto_jump_thunk_0148ca80: misc_jump_thunk with other addresses.
namespace twin_0148ca80 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0148ca80 (0x0148ca80) is a single jump to the function at 0x01493150. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01493150, fn_01493150, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0148ca80(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01493150(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0148ca80

// auto_jump_thunk_0148ca90: misc_jump_thunk with other addresses.
namespace twin_0148ca90 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0148ca90 (0x0148ca90) is a single jump to the function at 0x01493180. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01493180, fn_01493180, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0148ca90(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01493180(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0148ca90

// auto_jump_thunk_0148caa0: misc_jump_thunk with other addresses.
namespace twin_0148caa0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0148caa0 (0x0148caa0) is a single jump to the function at 0x014932f0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x014932f0, fn_014932f0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0148caa0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_014932f0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0148caa0

// auto_jump_thunk_0148caf0: misc_jump_thunk with other addresses.
namespace twin_0148caf0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0148caf0 (0x0148caf0) is a single jump to the function at 0x0148d050. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0148d050, fn_0148d050, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0148caf0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0148d050(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0148caf0

// auto_jump_thunk_0149edf0: misc_jump_thunk with other addresses.
namespace twin_0149edf0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0149edf0 (0x0149edf0) is a single jump to the function at 0x0149ee00. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0149ee00, fn_0149ee00, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0149edf0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0149ee00(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0149edf0

// auto_jump_thunk_014a0d00: misc_jump_thunk with other addresses.
namespace twin_014a0d00 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_014a0d00 (0x014a0d00) is a single jump to the function at 0x014a0d10. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x014a0d10, fn_014a0d10, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_014a0d00(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_014a0d10(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_014a0d00

// auto_jump_thunk_014a4480: misc_jump_thunk with other addresses.
namespace twin_014a4480 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_014a4480 (0x014a4480) is a single jump to the function at 0x014a3e00. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x014a3e00, fn_014a3e00, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_014a4480(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_014a3e00(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_014a4480

// auto_jump_thunk_014a6be0: misc_jump_thunk with other addresses.
namespace twin_014a6be0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_014a6be0 (0x014a6be0) is a single jump to the function at 0x014a6a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x014a6a60, fn_014a6a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_014a6be0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_014a6a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_014a6be0

// auto_jump_thunk_014b4a20: misc_jump_thunk with other addresses.
namespace twin_014b4a20 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_014b4a20 (0x014b4a20) is a single jump to the function at 0x014b4860. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x014b4860, fn_014b4860, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_014b4a20(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_014b4860(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_014b4a20

// auto_jump_thunk_014c5520: misc_jump_thunk with other addresses.
namespace twin_014c5520 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_014c5520 (0x014c5520) is a single jump to the function at 0x014cb680. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x014cb680, fn_014cb680, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_014c5520(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_014cb680(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_014c5520

// auto_jump_thunk_014c5a10: misc_jump_thunk with other addresses.
namespace twin_014c5a10 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_014c5a10 (0x014c5a10) is a single jump to the function at 0x014cb600. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x014cb600, fn_014cb600, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_014c5a10(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_014cb600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_014c5a10

// auto_jump_thunk_014f5df0: misc_jump_thunk with other addresses.
namespace twin_014f5df0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_014f5df0 (0x014f5df0) is a single jump to the function at 0x014fba90. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x014fba90, fn_014fba90, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_014f5df0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_014fba90(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_014f5df0

// auto_jump_thunk_0153ac60: misc_jump_thunk with other addresses.
namespace twin_0153ac60 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0153ac60 (0x0153ac60) is a single jump to the function at 0x0153a980. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0153a980, fn_0153a980, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0153ac60(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0153a980(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0153ac60

// auto_jump_thunk_015407b0: misc_jump_thunk with other addresses.
namespace twin_015407b0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_015407b0 (0x015407b0) is a single jump to the function at 0x015400e0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x015400e0, fn_015400e0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_015407b0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_015400e0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_015407b0

// auto_jump_thunk_015484b0: misc_jump_thunk with other addresses.
namespace twin_015484b0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_015484b0 (0x015484b0) is a single jump to the function at 0x01547d90. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01547d90, fn_01547d90, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_015484b0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01547d90(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_015484b0

// auto_jump_thunk_0154aa20: misc_jump_thunk with other addresses.
namespace twin_0154aa20 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0154aa20 (0x0154aa20) is a single jump to the function at 0x0154a8f0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0154a8f0, fn_0154a8f0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0154aa20(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0154a8f0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0154aa20

// auto_jump_thunk_0154aa40: misc_jump_thunk with other addresses.
namespace twin_0154aa40 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0154aa40 (0x0154aa40) is a single jump to the function at 0x0154a3f0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0154a3f0, fn_0154a3f0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0154aa40(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0154a3f0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0154aa40

// auto_jump_thunk_01550a60: misc_jump_thunk with other addresses.
namespace twin_01550a60 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01550a60 (0x01550a60) is a single jump to the function at 0x01550390. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01550390, fn_01550390, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01550a60(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01550390(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01550a60

// auto_jump_thunk_01551eb0: misc_jump_thunk with other addresses.
namespace twin_01551eb0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01551eb0 (0x01551eb0) is a single jump to the function at 0x01551d80. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01551d80, fn_01551d80, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01551eb0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01551d80(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01551eb0

// auto_jump_thunk_01551ed0: misc_jump_thunk with other addresses.
namespace twin_01551ed0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01551ed0 (0x01551ed0) is a single jump to the function at 0x015516a0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x015516a0, fn_015516a0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01551ed0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_015516a0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01551ed0

// auto_jump_thunk_015663c0: misc_jump_thunk with other addresses.
namespace twin_015663c0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_015663c0 (0x015663c0) is a single jump to the function at 0x00b68050. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00b68050, fn_00b68050, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_015663c0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00b68050(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_015663c0

// auto_jump_thunk_0157c6b0: misc_jump_thunk with other addresses.
namespace twin_0157c6b0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0157c6b0 (0x0157c6b0) is a single jump to the function at 0x0157c6c0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0157c6c0, fn_0157c6c0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0157c6b0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0157c6c0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0157c6b0

// auto_jump_thunk_01591590: misc_jump_thunk with other addresses.
namespace twin_01591590 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01591590 (0x01591590) is a single jump to the function at 0x00cbc660. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00cbc660, fn_00cbc660, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01591590(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00cbc660(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01591590

// auto_jump_thunk_015d71d0: misc_jump_thunk with other addresses.
namespace twin_015d71d0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_015d71d0 (0x015d71d0) is a single jump to the function at 0x015e61f0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x015e61f0, fn_015e61f0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_015d71d0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_015e61f0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_015d71d0

// auto_jump_thunk_015e3820: misc_jump_thunk with other addresses.
namespace twin_015e3820 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_015e3820 (0x015e3820) is a single jump to the function at 0x015eddb0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x015eddb0, fn_015eddb0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_015e3820(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_015eddb0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_015e3820

// auto_jump_thunk_015e3b10: misc_jump_thunk with other addresses.
namespace twin_015e3b10 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_015e3b10 (0x015e3b10) is a single jump to the function at 0x015e3920. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x015e3920, fn_015e3920, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_015e3b10(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_015e3920(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_015e3b10

// auto_jump_thunk_015e42d0: misc_jump_thunk with other addresses.
namespace twin_015e42d0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_015e42d0 (0x015e42d0) is a single jump to the function at 0x015e42e0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x015e42e0, fn_015e42e0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_015e42d0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_015e42e0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_015e42d0

// auto_jump_thunk_015fec50: misc_jump_thunk with other addresses.
namespace twin_015fec50 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_015fec50 (0x015fec50) is a single jump to the function at 0x015fec60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x015fec60, fn_015fec60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_015fec50(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_015fec60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_015fec50

// auto_jump_thunk_015ff3e0: misc_jump_thunk with other addresses.
namespace twin_015ff3e0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_015ff3e0 (0x015ff3e0) is a single jump to the function at 0x015ffd50. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x015ffd50, fn_015ffd50, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_015ff3e0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_015ffd50(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_015ff3e0

// auto_jump_thunk_01609c00: misc_jump_thunk with other addresses.
namespace twin_01609c00 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01609c00 (0x01609c00) is a single jump to the function at 0x009da410. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009da410, fn_009da410, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01609c00(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009da410(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01609c00

// auto_jump_thunk_0163a560: misc_jump_thunk with other addresses.
namespace twin_0163a560 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0163a560 (0x0163a560) is a single jump to the function at 0x01638ad0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01638ad0, fn_01638ad0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0163a560(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01638ad0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0163a560

// auto_jump_thunk_0163f3f0: misc_jump_thunk with other addresses.
namespace twin_0163f3f0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0163f3f0 (0x0163f3f0) is a single jump to the function at 0x0163e840. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0163e840, fn_0163e840, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0163f3f0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0163e840(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0163f3f0

// auto_jump_thunk_0163f400: misc_jump_thunk with other addresses.
namespace twin_0163f400 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0163f400 (0x0163f400) is a single jump to the function at 0x0163ec50. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0163ec50, fn_0163ec50, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0163f400(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0163ec50(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0163f400

// auto_jump_thunk_0163fac0: misc_jump_thunk with other addresses.
namespace twin_0163fac0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0163fac0 (0x0163fac0) is a single jump to the function at 0x01640e70. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01640e70, fn_01640e70, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0163fac0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01640e70(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0163fac0

// auto_jump_thunk_01640030: misc_jump_thunk with other addresses.
namespace twin_01640030 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01640030 (0x01640030) is a single jump to the function at 0x01640e70. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01640e70, fn_01640e70, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01640030(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01640e70(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01640030

// auto_jump_thunk_016402c0: misc_jump_thunk with other addresses.
namespace twin_016402c0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_016402c0 (0x016402c0) is a single jump to the function at 0x01640e70. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01640e70, fn_01640e70, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_016402c0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01640e70(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_016402c0

// auto_jump_thunk_016408e0: misc_jump_thunk with other addresses.
namespace twin_016408e0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_016408e0 (0x016408e0) is a single jump to the function at 0x01640e70. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01640e70, fn_01640e70, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_016408e0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01640e70(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_016408e0

// auto_jump_thunk_01641e70: misc_jump_thunk with other addresses.
namespace twin_01641e70 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01641e70 (0x01641e70) is a single jump to the function at 0x01641c60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01641c60, fn_01641c60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01641e70(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01641c60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01641e70

// auto_jump_thunk_01643360: misc_jump_thunk with other addresses.
namespace twin_01643360 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01643360 (0x01643360) is a single jump to the function at 0x01640e70. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01640e70, fn_01640e70, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01643360(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01640e70(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01643360

// auto_jump_thunk_01643770: misc_jump_thunk with other addresses.
namespace twin_01643770 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01643770 (0x01643770) is a single jump to the function at 0x01640e70. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01640e70, fn_01640e70, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01643770(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01640e70(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01643770
