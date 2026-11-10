// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_jump_thunk, in game/misc/jump_thunk.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstdint>
#include "runtime/original.h"

// auto_jump_thunk_00aa8f90: misc_jump_thunk with other addresses.
namespace twin_00aa8f90 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00aa8f90 (0x00aa8f90) is a single jump to the function at 0x00836840. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00836840, fn_00836840, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00aa8f90(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00836840(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00aa8f90

// auto_jump_thunk_00aa9510: misc_jump_thunk with other addresses.
namespace twin_00aa9510 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00aa9510 (0x00aa9510) is a single jump to the function at 0x00ad0870. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ad0870, fn_00ad0870, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00aa9510(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ad0870(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00aa9510

// auto_jump_thunk_00aaf380: misc_jump_thunk with other addresses.
namespace twin_00aaf380 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00aaf380 (0x00aaf380) is a single jump to the function at 0x00acfa00. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00acfa00, fn_00acfa00, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00aaf380(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00acfa00(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00aaf380

// auto_jump_thunk_00aba030: misc_jump_thunk with other addresses.
namespace twin_00aba030 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00aba030 (0x00aba030) is a single jump to the function at 0x00aab2d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00aab2d0, fn_00aab2d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00aba030(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00aab2d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00aba030

// auto_jump_thunk_00aba040: misc_jump_thunk with other addresses.
namespace twin_00aba040 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00aba040 (0x00aba040) is a single jump to the function at 0x00aab2e0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00aab2e0, fn_00aab2e0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00aba040(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00aab2e0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00aba040

// auto_jump_thunk_00abc8d0: misc_jump_thunk with other addresses.
namespace twin_00abc8d0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00abc8d0 (0x00abc8d0) is a single jump to the function at 0x00836830. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00836830, fn_00836830, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00abc8d0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00836830(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00abc8d0

// auto_jump_thunk_00ad7d90: misc_jump_thunk with other addresses.
namespace twin_00ad7d90 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00ad7d90 (0x00ad7d90) is a single jump to the function at 0x00ad7da0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ad7da0, fn_00ad7da0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00ad7d90(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ad7da0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00ad7d90

// auto_jump_thunk_00ad9470: misc_jump_thunk with other addresses.
namespace twin_00ad9470 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00ad9470 (0x00ad9470) is a single jump to the function at 0x00ad9480. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ad9480, fn_00ad9480, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00ad9470(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ad9480(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00ad9470

// auto_jump_thunk_00ad9e80: misc_jump_thunk with other addresses.
namespace twin_00ad9e80 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00ad9e80 (0x00ad9e80) is a single jump to the function at 0x00ad9e90. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ad9e90, fn_00ad9e90, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00ad9e80(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ad9e90(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00ad9e80

// auto_jump_thunk_00ae9820: misc_jump_thunk with other addresses.
namespace twin_00ae9820 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00ae9820 (0x00ae9820) is a single jump to the function at 0x00ae7560. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ae7560, fn_00ae7560, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00ae9820(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ae7560(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00ae9820

// auto_jump_thunk_00aeb320: misc_jump_thunk with other addresses.
namespace twin_00aeb320 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00aeb320 (0x00aeb320) is a single jump to the function at 0x00aeba60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00aeba60, fn_00aeba60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00aeb320(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00aeba60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00aeb320

// auto_jump_thunk_00af12f0: misc_jump_thunk with other addresses.
namespace twin_00af12f0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00af12f0 (0x00af12f0) is a single jump to the function at 0x00af6350. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00af6350, fn_00af6350, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00af12f0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00af6350(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00af12f0

// auto_jump_thunk_00af3230: misc_jump_thunk with other addresses.
namespace twin_00af3230 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00af3230 (0x00af3230) is a single jump to the function at 0x00af89b0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00af89b0, fn_00af89b0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00af3230(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00af89b0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00af3230

// auto_jump_thunk_00af3270: misc_jump_thunk with other addresses.
namespace twin_00af3270 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00af3270 (0x00af3270) is a single jump to the function at 0x02952300. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02952300, fn_02952300, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00af3270(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02952300(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00af3270

// auto_jump_thunk_00afbb00: misc_jump_thunk with other addresses.
namespace twin_00afbb00 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00afbb00 (0x00afbb00) is a single jump to the function at 0x00b6d540. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00b6d540, fn_00b6d540, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00afbb00(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00b6d540(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00afbb00

// auto_jump_thunk_00b00910: misc_jump_thunk with other addresses.
namespace twin_00b00910 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00b00910 (0x00b00910) is a single jump to the function at 0x00b2b010. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00b2b010, fn_00b2b010, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00b00910(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00b2b010(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00b00910

// auto_jump_thunk_00b07190: misc_jump_thunk with other addresses.
namespace twin_00b07190 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00b07190 (0x00b07190) is a single jump to the function at 0x00b6c340. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00b6c340, fn_00b6c340, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00b07190(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00b6c340(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00b07190

// auto_jump_thunk_00b0e890: misc_jump_thunk with other addresses.
namespace twin_00b0e890 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00b0e890 (0x00b0e890) is a single jump to the function at 0x029542a0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x029542a0, fn_029542a0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00b0e890(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_029542a0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00b0e890

// auto_jump_thunk_00b11340: misc_jump_thunk with other addresses.
namespace twin_00b11340 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00b11340 (0x00b11340) is a single jump to the function at 0x00b6d540. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00b6d540, fn_00b6d540, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00b11340(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00b6d540(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00b11340

// auto_jump_thunk_00b18d60: misc_jump_thunk with other addresses.
namespace twin_00b18d60 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00b18d60 (0x00b18d60) is a single jump to the function at 0x00b6d540. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00b6d540, fn_00b6d540, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00b18d60(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00b6d540(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00b18d60

// auto_jump_thunk_00b1b880: misc_jump_thunk with other addresses.
namespace twin_00b1b880 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00b1b880 (0x00b1b880) is a single jump to the function at 0x00b6c340. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00b6c340, fn_00b6c340, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00b1b880(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00b6c340(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00b1b880

// auto_jump_thunk_00b20340: misc_jump_thunk with other addresses.
namespace twin_00b20340 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00b20340 (0x00b20340) is a single jump to the function at 0x00b1f2c0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00b1f2c0, fn_00b1f2c0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00b20340(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00b1f2c0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00b20340

// auto_jump_thunk_00b20c50: misc_jump_thunk with other addresses.
namespace twin_00b20c50 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00b20c50 (0x00b20c50) is a single jump to the function at 0x00b1f2c0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00b1f2c0, fn_00b1f2c0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00b20c50(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00b1f2c0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00b20c50

// auto_jump_thunk_00b278a0: misc_jump_thunk with other addresses.
namespace twin_00b278a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00b278a0 (0x00b278a0) is a single jump to the function at 0x02956ab0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02956ab0, fn_02956ab0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00b278a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02956ab0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00b278a0

// auto_jump_thunk_00b30d30: misc_jump_thunk with other addresses.
namespace twin_00b30d30 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00b30d30 (0x00b30d30) is a single jump to the function at 0x02958630. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02958630, fn_02958630, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00b30d30(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02958630(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00b30d30

// auto_jump_thunk_00b31aa0: misc_jump_thunk with other addresses.
namespace twin_00b31aa0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00b31aa0 (0x00b31aa0) is a single jump to the function at 0x00b6c340. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00b6c340, fn_00b6c340, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00b31aa0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00b6c340(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00b31aa0

// auto_jump_thunk_00b43ca0: misc_jump_thunk with other addresses.
namespace twin_00b43ca0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00b43ca0 (0x00b43ca0) is a single jump to the function at 0x00b6c340. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00b6c340, fn_00b6c340, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00b43ca0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00b6c340(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00b43ca0

// auto_jump_thunk_00b50f20: misc_jump_thunk with other addresses.
namespace twin_00b50f20 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00b50f20 (0x00b50f20) is a single jump to the function at 0x00b6d540. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00b6d540, fn_00b6d540, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00b50f20(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00b6d540(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00b50f20

// auto_jump_thunk_00bd9e90: misc_jump_thunk with other addresses.
namespace twin_00bd9e90 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00bd9e90 (0x00bd9e90) is a single jump to the function at 0x00836830. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00836830, fn_00836830, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00bd9e90(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00836830(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00bd9e90

// auto_jump_thunk_00bd9ea0: misc_jump_thunk with other addresses.
namespace twin_00bd9ea0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00bd9ea0 (0x00bd9ea0) is a single jump to the function at 0x00836840. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00836840, fn_00836840, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00bd9ea0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00836840(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00bd9ea0

// auto_jump_thunk_00bd9ec0: misc_jump_thunk with other addresses.
namespace twin_00bd9ec0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00bd9ec0 (0x00bd9ec0) is a single jump to the function at 0x00836830. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00836830, fn_00836830, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00bd9ec0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00836830(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00bd9ec0

// auto_jump_thunk_00bd9ed0: misc_jump_thunk with other addresses.
namespace twin_00bd9ed0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00bd9ed0 (0x00bd9ed0) is a single jump to the function at 0x00836840. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00836840, fn_00836840, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00bd9ed0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00836840(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00bd9ed0

// auto_jump_thunk_00bd9ef0: misc_jump_thunk with other addresses.
namespace twin_00bd9ef0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00bd9ef0 (0x00bd9ef0) is a single jump to the function at 0x00836830. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00836830, fn_00836830, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00bd9ef0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00836830(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00bd9ef0

// auto_jump_thunk_00bd9f00: misc_jump_thunk with other addresses.
namespace twin_00bd9f00 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00bd9f00 (0x00bd9f00) is a single jump to the function at 0x00836840. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00836840, fn_00836840, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00bd9f00(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00836840(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00bd9f00

// auto_jump_thunk_00bd9f20: misc_jump_thunk with other addresses.
namespace twin_00bd9f20 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00bd9f20 (0x00bd9f20) is a single jump to the function at 0x00836830. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00836830, fn_00836830, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00bd9f20(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00836830(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00bd9f20

// auto_jump_thunk_00bd9f30: misc_jump_thunk with other addresses.
namespace twin_00bd9f30 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00bd9f30 (0x00bd9f30) is a single jump to the function at 0x00836840. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00836840, fn_00836840, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00bd9f30(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00836840(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00bd9f30

// auto_jump_thunk_00bdb640: misc_jump_thunk with other addresses.
namespace twin_00bdb640 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00bdb640 (0x00bdb640) is a single jump to the function at 0x00bf15b0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00bf15b0, fn_00bf15b0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00bdb640(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00bf15b0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00bdb640

// auto_jump_thunk_00bdb6d0: misc_jump_thunk with other addresses.
namespace twin_00bdb6d0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00bdb6d0 (0x00bdb6d0) is a single jump to the function at 0x00bf13b0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00bf13b0, fn_00bf13b0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00bdb6d0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00bf13b0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00bdb6d0

// auto_jump_thunk_00bdb720: misc_jump_thunk with other addresses.
namespace twin_00bdb720 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00bdb720 (0x00bdb720) is a single jump to the function at 0x02981440. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02981440, fn_02981440, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00bdb720(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02981440(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00bdb720

// auto_jump_thunk_00bdc840: misc_jump_thunk with other addresses.
namespace twin_00bdc840 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00bdc840 (0x00bdc840) is a single jump to the function at 0x00c04e60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00c04e60, fn_00c04e60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00bdc840(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00c04e60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00bdc840

// auto_jump_thunk_00bdc8a0: misc_jump_thunk with other addresses.
namespace twin_00bdc8a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00bdc8a0 (0x00bdc8a0) is a single jump to the function at 0x00c04f20. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00c04f20, fn_00c04f20, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00bdc8a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00c04f20(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00bdc8a0

// auto_jump_thunk_00bdc900: misc_jump_thunk with other addresses.
namespace twin_00bdc900 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00bdc900 (0x00bdc900) is a single jump to the function at 0x00c05030. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00c05030, fn_00c05030, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00bdc900(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00c05030(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00bdc900

// auto_jump_thunk_00bdf8d0: misc_jump_thunk with other addresses.
namespace twin_00bdf8d0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00bdf8d0 (0x00bdf8d0) is a single jump to the function at 0x029817e0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x029817e0, fn_029817e0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00bdf8d0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_029817e0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00bdf8d0

// auto_jump_thunk_00bdf8e0: misc_jump_thunk with other addresses.
namespace twin_00bdf8e0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00bdf8e0 (0x00bdf8e0) is a single jump to the function at 0x02982530. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02982530, fn_02982530, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00bdf8e0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02982530(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00bdf8e0

// auto_jump_thunk_00c10440: misc_jump_thunk with other addresses.
namespace twin_00c10440 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00c10440 (0x00c10440) is a single jump to the function at 0x00bfcd80. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00bfcd80, fn_00bfcd80, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00c10440(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00bfcd80(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00c10440

// auto_jump_thunk_00c1c5a0: misc_jump_thunk with other addresses.
namespace twin_00c1c5a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00c1c5a0 (0x00c1c5a0) is a single jump to the function at 0x00c1c820. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00c1c820, fn_00c1c820, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00c1c5a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00c1c820(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00c1c5a0

// auto_jump_thunk_00c1c6c0: misc_jump_thunk with other addresses.
namespace twin_00c1c6c0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00c1c6c0 (0x00c1c6c0) is a single jump to the function at 0x00c1dff0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00c1dff0, fn_00c1dff0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00c1c6c0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00c1dff0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00c1c6c0

// auto_jump_thunk_00c1cb70: misc_jump_thunk with other addresses.
namespace twin_00c1cb70 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00c1cb70 (0x00c1cb70) is a single jump to the function at 0x00c1cee0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00c1cee0, fn_00c1cee0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00c1cb70(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00c1cee0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00c1cb70

// auto_jump_thunk_00c23440: misc_jump_thunk with other addresses.
namespace twin_00c23440 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00c23440 (0x00c23440) is a single jump to the function at 0x00c23910. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00c23910, fn_00c23910, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00c23440(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00c23910(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00c23440

// auto_jump_thunk_00c24110: misc_jump_thunk with other addresses.
namespace twin_00c24110 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00c24110 (0x00c24110) is a single jump to the function at 0x00c244a0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00c244a0, fn_00c244a0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00c24110(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00c244a0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00c24110

// auto_jump_thunk_00c25730: misc_jump_thunk with other addresses.
namespace twin_00c25730 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00c25730 (0x00c25730) is a single jump to the function at 0x00c258d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00c258d0, fn_00c258d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00c25730(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00c258d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00c25730

// auto_jump_thunk_00c25d90: misc_jump_thunk with other addresses.
namespace twin_00c25d90 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00c25d90 (0x00c25d90) is a single jump to the function at 0x00c2ae90. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00c2ae90, fn_00c2ae90, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00c25d90(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00c2ae90(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00c25d90

// auto_jump_thunk_00c25e20: misc_jump_thunk with other addresses.
namespace twin_00c25e20 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00c25e20 (0x00c25e20) is a single jump to the function at 0x00c2b070. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00c2b070, fn_00c2b070, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00c25e20(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00c2b070(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00c25e20

// auto_jump_thunk_00c26c40: misc_jump_thunk with other addresses.
namespace twin_00c26c40 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00c26c40 (0x00c26c40) is a single jump to the function at 0x00c29620. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00c29620, fn_00c29620, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00c26c40(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00c29620(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00c26c40

// auto_jump_thunk_00c26c50: misc_jump_thunk with other addresses.
namespace twin_00c26c50 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00c26c50 (0x00c26c50) is a single jump to the function at 0x00c29700. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00c29700, fn_00c29700, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00c26c50(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00c29700(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00c26c50

// auto_jump_thunk_00c26d10: misc_jump_thunk with other addresses.
namespace twin_00c26d10 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00c26d10 (0x00c26d10) is a single jump to the function at 0x00c299e0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00c299e0, fn_00c299e0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00c26d10(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00c299e0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00c26d10

// auto_jump_thunk_00c28ca0: misc_jump_thunk with other addresses.
namespace twin_00c28ca0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00c28ca0 (0x00c28ca0) is a single jump to the function at 0x00c341d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00c341d0, fn_00c341d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00c28ca0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00c341d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00c28ca0

// auto_jump_thunk_00c60740: misc_jump_thunk with other addresses.
namespace twin_00c60740 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00c60740 (0x00c60740) is a single jump to the function at 0x00c60750. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00c60750, fn_00c60750, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00c60740(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00c60750(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00c60740

// auto_jump_thunk_00c60d30: misc_jump_thunk with other addresses.
namespace twin_00c60d30 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00c60d30 (0x00c60d30) is a single jump to the function at 0x00c60b00. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00c60b00, fn_00c60b00, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00c60d30(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00c60b00(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00c60d30

// auto_jump_thunk_00c60f80: misc_jump_thunk with other addresses.
namespace twin_00c60f80 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00c60f80 (0x00c60f80) is a single jump to the function at 0x00c60d60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00c60d60, fn_00c60d60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00c60f80(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00c60d60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00c60f80

// auto_jump_thunk_00c61000: misc_jump_thunk with other addresses.
namespace twin_00c61000 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00c61000 (0x00c61000) is a single jump to the function at 0x00c61010. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00c61010, fn_00c61010, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00c61000(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00c61010(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00c61000

// auto_jump_thunk_00c92170: misc_jump_thunk with other addresses.
namespace twin_00c92170 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00c92170 (0x00c92170) is a single jump to the function at 0x00cb74e0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00cb74e0, fn_00cb74e0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00c92170(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00cb74e0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00c92170

// auto_jump_thunk_00c92300: misc_jump_thunk with other addresses.
namespace twin_00c92300 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00c92300 (0x00c92300) is a single jump to the function at 0x00cf7060. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00cf7060, fn_00cf7060, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00c92300(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00cf7060(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00c92300

// auto_jump_thunk_00c92c50: misc_jump_thunk with other addresses.
namespace twin_00c92c50 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00c92c50 (0x00c92c50) is a single jump to the function at 0x00cf94d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00cf94d0, fn_00cf94d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00c92c50(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00cf94d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00c92c50

// auto_jump_thunk_00c935c0: misc_jump_thunk with other addresses.
namespace twin_00c935c0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00c935c0 (0x00c935c0) is a single jump to the function at 0x00cbc710. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00cbc710, fn_00cbc710, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00c935c0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00cbc710(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00c935c0

// auto_jump_thunk_00c99790: misc_jump_thunk with other addresses.
namespace twin_00c99790 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00c99790 (0x00c99790) is a single jump to the function at 0x00cd33c0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00cd33c0, fn_00cd33c0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00c99790(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00cd33c0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00c99790

// auto_jump_thunk_00c9ef20: misc_jump_thunk with other addresses.
namespace twin_00c9ef20 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00c9ef20 (0x00c9ef20) is a single jump to the function at 0x00cbad20. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00cbad20, fn_00cbad20, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00c9ef20(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00cbad20(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00c9ef20

// auto_jump_thunk_00c9f040: misc_jump_thunk with other addresses.
namespace twin_00c9f040 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00c9f040 (0x00c9f040) is a single jump to the function at 0x00cd2730. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00cd2730, fn_00cd2730, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00c9f040(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00cd2730(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00c9f040

// auto_jump_thunk_00ca0010: misc_jump_thunk with other addresses.
namespace twin_00ca0010 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00ca0010 (0x00ca0010) is a single jump to the function at 0x00cb3cc0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00cb3cc0, fn_00cb3cc0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00ca0010(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00cb3cc0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00ca0010

// auto_jump_thunk_00ca0210: misc_jump_thunk with other addresses.
namespace twin_00ca0210 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00ca0210 (0x00ca0210) is a single jump to the function at 0x00cd4650. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00cd4650, fn_00cd4650, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00ca0210(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00cd4650(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00ca0210

// auto_jump_thunk_00ca0290: misc_jump_thunk with other addresses.
namespace twin_00ca0290 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00ca0290 (0x00ca0290) is a single jump to the function at 0x00cd8e10. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00cd8e10, fn_00cd8e10, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00ca0290(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00cd8e10(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00ca0290

// auto_jump_thunk_00ca0500: misc_jump_thunk with other addresses.
namespace twin_00ca0500 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00ca0500 (0x00ca0500) is a single jump to the function at 0x00ce2c50. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ce2c50, fn_00ce2c50, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00ca0500(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ce2c50(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00ca0500

// auto_jump_thunk_00ca3a80: misc_jump_thunk with other addresses.
namespace twin_00ca3a80 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00ca3a80 (0x00ca3a80) is a single jump to the function at 0x00cc16c0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00cc16c0, fn_00cc16c0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00ca3a80(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00cc16c0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00ca3a80

// auto_jump_thunk_00ca3b10: misc_jump_thunk with other addresses.
namespace twin_00ca3b10 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00ca3b10 (0x00ca3b10) is a single jump to the function at 0x00cc1400. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00cc1400, fn_00cc1400, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00ca3b10(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00cc1400(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00ca3b10

// auto_jump_thunk_00ca4480: misc_jump_thunk with other addresses.
namespace twin_00ca4480 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00ca4480 (0x00ca4480) is a single jump to the function at 0x00cbc050. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00cbc050, fn_00cbc050, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00ca4480(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00cbc050(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00ca4480

// auto_jump_thunk_00ca6c50: misc_jump_thunk with other addresses.
namespace twin_00ca6c50 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00ca6c50 (0x00ca6c50) is a single jump to the function at 0x029acef0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x029acef0, fn_029acef0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00ca6c50(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_029acef0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00ca6c50

// auto_jump_thunk_00ca6c60: misc_jump_thunk with other addresses.
namespace twin_00ca6c60 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00ca6c60 (0x00ca6c60) is a single jump to the function at 0x029ad3f0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x029ad3f0, fn_029ad3f0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00ca6c60(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_029ad3f0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00ca6c60

// auto_jump_thunk_00caa310: misc_jump_thunk with other addresses.
namespace twin_00caa310 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00caa310 (0x00caa310) is a single jump to the function at 0x00ca62b0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ca62b0, fn_00ca62b0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00caa310(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ca62b0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00caa310

// auto_jump_thunk_00cb4720: misc_jump_thunk with other addresses.
namespace twin_00cb4720 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00cb4720 (0x00cb4720) is a single jump to the function at 0x00cbdf50. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00cbdf50, fn_00cbdf50, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00cb4720(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00cbdf50(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00cb4720

// auto_jump_thunk_00cb5740: misc_jump_thunk with other addresses.
namespace twin_00cb5740 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00cb5740 (0x00cb5740) is a single jump to the function at 0x00ca48b0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ca48b0, fn_00ca48b0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00cb5740(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ca48b0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00cb5740

// auto_jump_thunk_00cb6d90: misc_jump_thunk with other addresses.
namespace twin_00cb6d90 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00cb6d90 (0x00cb6d90) is a single jump to the function at 0x00ce7690. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ce7690, fn_00ce7690, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00cb6d90(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ce7690(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00cb6d90

// auto_jump_thunk_00cb6dc0: misc_jump_thunk with other addresses.
namespace twin_00cb6dc0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00cb6dc0 (0x00cb6dc0) is a single jump to the function at 0x00ce76d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ce76d0, fn_00ce76d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00cb6dc0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ce76d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00cb6dc0

// auto_jump_thunk_00cb6df0: misc_jump_thunk with other addresses.
namespace twin_00cb6df0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00cb6df0 (0x00cb6df0) is a single jump to the function at 0x00ce7800. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ce7800, fn_00ce7800, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00cb6df0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ce7800(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00cb6df0

// auto_jump_thunk_00cbbf40: misc_jump_thunk with other addresses.
namespace twin_00cbbf40 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00cbbf40 (0x00cbbf40) is a single jump to the function at 0x00d0f050. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d0f050, fn_00d0f050, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00cbbf40(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d0f050(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00cbbf40

// auto_jump_thunk_00cbdb00: misc_jump_thunk with other addresses.
namespace twin_00cbdb00 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00cbdb00 (0x00cbdb00) is a single jump to the function at 0x00cfb590. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00cfb590, fn_00cfb590, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00cbdb00(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00cfb590(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00cbdb00

// auto_jump_thunk_00cbdb30: misc_jump_thunk with other addresses.
namespace twin_00cbdb30 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00cbdb30 (0x00cbdb30) is a single jump to the function at 0x00cfb5c0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00cfb5c0, fn_00cfb5c0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00cbdb30(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00cfb5c0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00cbdb30

// auto_jump_thunk_00cbedd0: misc_jump_thunk with other addresses.
namespace twin_00cbedd0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00cbedd0 (0x00cbedd0) is a single jump to the function at 0x00ccd810. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ccd810, fn_00ccd810, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00cbedd0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ccd810(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00cbedd0

// auto_jump_thunk_00cbee00: misc_jump_thunk with other addresses.
namespace twin_00cbee00 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00cbee00 (0x00cbee00) is a single jump to the function at 0x00ccd890. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ccd890, fn_00ccd890, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00cbee00(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ccd890(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00cbee00

// auto_jump_thunk_00cbee30: misc_jump_thunk with other addresses.
namespace twin_00cbee30 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00cbee30 (0x00cbee30) is a single jump to the function at 0x00ccd910. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ccd910, fn_00ccd910, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00cbee30(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ccd910(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00cbee30

// auto_jump_thunk_00cbee60: misc_jump_thunk with other addresses.
namespace twin_00cbee60 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00cbee60 (0x00cbee60) is a single jump to the function at 0x00ccd990. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ccd990, fn_00ccd990, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00cbee60(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ccd990(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00cbee60

// auto_jump_thunk_00cbf870: misc_jump_thunk with other addresses.
namespace twin_00cbf870 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00cbf870 (0x00cbf870) is a single jump to the function at 0x00d0e630. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d0e630, fn_00d0e630, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00cbf870(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d0e630(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00cbf870

// auto_jump_thunk_00cd3800: misc_jump_thunk with other addresses.
namespace twin_00cd3800 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00cd3800 (0x00cd3800) is a single jump to the function at 0x00cd1b90. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00cd1b90, fn_00cd1b90, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00cd3800(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00cd1b90(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00cd3800

// auto_jump_thunk_00ce2e90: misc_jump_thunk with other addresses.
namespace twin_00ce2e90 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00ce2e90 (0x00ce2e90) is a single jump to the function at 0x00d162d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d162d0, fn_00d162d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00ce2e90(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d162d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00ce2e90

// auto_jump_thunk_00ce3870: misc_jump_thunk with other addresses.
namespace twin_00ce3870 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00ce3870 (0x00ce3870) is a single jump to the function at 0x00c926c0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00c926c0, fn_00c926c0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00ce3870(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00c926c0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00ce3870

// auto_jump_thunk_00ce3880: misc_jump_thunk with other addresses.
namespace twin_00ce3880 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00ce3880 (0x00ce3880) is a single jump to the function at 0x00c92520. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00c92520, fn_00c92520, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00ce3880(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00c92520(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00ce3880

// auto_jump_thunk_00ce3980: misc_jump_thunk with other addresses.
namespace twin_00ce3980 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00ce3980 (0x00ce3980) is a single jump to the function at 0x00cd4000. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00cd4000, fn_00cd4000, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00ce3980(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00cd4000(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00ce3980

// auto_jump_thunk_00ce4420: misc_jump_thunk with other addresses.
namespace twin_00ce4420 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00ce4420 (0x00ce4420) is a single jump to the function at 0x00cf8890. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00cf8890, fn_00cf8890, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00ce4420(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00cf8890(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00ce4420

// auto_jump_thunk_00ce4ca0: misc_jump_thunk with other addresses.
namespace twin_00ce4ca0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00ce4ca0 (0x00ce4ca0) is a single jump to the function at 0x00d16200. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d16200, fn_00d16200, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00ce4ca0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d16200(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00ce4ca0

// auto_jump_thunk_00cebcc0: misc_jump_thunk with other addresses.
namespace twin_00cebcc0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00cebcc0 (0x00cebcc0) is a single jump to the function at 0x00ca2d10. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ca2d10, fn_00ca2d10, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00cebcc0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ca2d10(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00cebcc0

// auto_jump_thunk_00cebcf0: misc_jump_thunk with other addresses.
namespace twin_00cebcf0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00cebcf0 (0x00cebcf0) is a single jump to the function at 0x00cdd6b0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00cdd6b0, fn_00cdd6b0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00cebcf0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00cdd6b0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00cebcf0

// auto_jump_thunk_00cec250: misc_jump_thunk with other addresses.
namespace twin_00cec250 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00cec250 (0x00cec250) is a single jump to the function at 0x00d11d90. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d11d90, fn_00d11d90, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00cec250(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d11d90(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00cec250

// auto_jump_thunk_00cfb0e0: misc_jump_thunk with other addresses.
namespace twin_00cfb0e0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00cfb0e0 (0x00cfb0e0) is a single jump to the function at 0x00cbde50. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00cbde50, fn_00cbde50, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00cfb0e0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00cbde50(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00cfb0e0

// auto_jump_thunk_00cfc740: misc_jump_thunk with other addresses.
namespace twin_00cfc740 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00cfc740 (0x00cfc740) is a single jump to the function at 0x00c8f500. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00c8f500, fn_00c8f500, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00cfc740(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00c8f500(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00cfc740

// auto_jump_thunk_00d109a0: misc_jump_thunk with other addresses.
namespace twin_00d109a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d109a0 (0x00d109a0) is a single jump to the function at 0x029b6840. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x029b6840, fn_029b6840, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d109a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_029b6840(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d109a0

// auto_jump_thunk_00d109b0: misc_jump_thunk with other addresses.
namespace twin_00d109b0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d109b0 (0x00d109b0) is a single jump to the function at 0x029b69c0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x029b69c0, fn_029b69c0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d109b0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_029b69c0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d109b0

// auto_jump_thunk_00d11aa0: misc_jump_thunk with other addresses.
namespace twin_00d11aa0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d11aa0 (0x00d11aa0) is a single jump to the function at 0x00d11ab0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d11ab0, fn_00d11ab0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d11aa0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d11ab0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d11aa0

// auto_jump_thunk_00d267a0: misc_jump_thunk with other addresses.
namespace twin_00d267a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d267a0 (0x00d267a0) is a single jump to the function at 0x00d37fe0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d37fe0, fn_00d37fe0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d267a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d37fe0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d267a0

// auto_jump_thunk_00d267d0: misc_jump_thunk with other addresses.
namespace twin_00d267d0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d267d0 (0x00d267d0) is a single jump to the function at 0x00d37880. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d37880, fn_00d37880, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d267d0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d37880(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d267d0

// auto_jump_thunk_00d26800: misc_jump_thunk with other addresses.
namespace twin_00d26800 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d26800 (0x00d26800) is a single jump to the function at 0x00d37a70. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d37a70, fn_00d37a70, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d26800(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d37a70(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d26800

// auto_jump_thunk_00d26860: misc_jump_thunk with other addresses.
namespace twin_00d26860 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d26860 (0x00d26860) is a single jump to the function at 0x00d37ca0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d37ca0, fn_00d37ca0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d26860(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d37ca0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d26860

// auto_jump_thunk_00d268c0: misc_jump_thunk with other addresses.
namespace twin_00d268c0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d268c0 (0x00d268c0) is a single jump to the function at 0x00d37e90. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d37e90, fn_00d37e90, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d268c0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d37e90(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d268c0

// auto_jump_thunk_00d27c70: misc_jump_thunk with other addresses.
namespace twin_00d27c70 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d27c70 (0x00d27c70) is a single jump to the function at 0x00d275d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d275d0, fn_00d275d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d27c70(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d275d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d27c70

// auto_jump_thunk_00d38b20: misc_jump_thunk with other addresses.
namespace twin_00d38b20 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d38b20 (0x00d38b20) is a single jump to the function at 0x00d6ee40. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d6ee40, fn_00d6ee40, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d38b20(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d6ee40(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d38b20

// auto_jump_thunk_00d38b30: misc_jump_thunk with other addresses.
namespace twin_00d38b30 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d38b30 (0x00d38b30) is a single jump to the function at 0x00d6eea0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d6eea0, fn_00d6eea0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d38b30(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d6eea0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d38b30

// auto_jump_thunk_00d38b40: misc_jump_thunk with other addresses.
namespace twin_00d38b40 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d38b40 (0x00d38b40) is a single jump to the function at 0x00da5320. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00da5320, fn_00da5320, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d38b40(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00da5320(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d38b40

// auto_jump_thunk_00d38b50: misc_jump_thunk with other addresses.
namespace twin_00d38b50 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d38b50 (0x00d38b50) is a single jump to the function at 0x00da5330. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00da5330, fn_00da5330, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d38b50(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00da5330(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d38b50

// auto_jump_thunk_00d38b60: misc_jump_thunk with other addresses.
namespace twin_00d38b60 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d38b60 (0x00d38b60) is a single jump to the function at 0x00d6f030. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d6f030, fn_00d6f030, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d38b60(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d6f030(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d38b60

// auto_jump_thunk_00d38b70: misc_jump_thunk with other addresses.
namespace twin_00d38b70 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d38b70 (0x00d38b70) is a single jump to the function at 0x00d700c0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d700c0, fn_00d700c0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d38b70(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d700c0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d38b70

// auto_jump_thunk_00d38b80: misc_jump_thunk with other addresses.
namespace twin_00d38b80 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d38b80 (0x00d38b80) is a single jump to the function at 0x00d6ff10. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d6ff10, fn_00d6ff10, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d38b80(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d6ff10(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d38b80

// auto_jump_thunk_00d38b90: misc_jump_thunk with other addresses.
namespace twin_00d38b90 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d38b90 (0x00d38b90) is a single jump to the function at 0x00da5340. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00da5340, fn_00da5340, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d38b90(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00da5340(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d38b90

// auto_jump_thunk_00d38ba0: misc_jump_thunk with other addresses.
namespace twin_00d38ba0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d38ba0 (0x00d38ba0) is a single jump to the function at 0x00da5350. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00da5350, fn_00da5350, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d38ba0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00da5350(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d38ba0

// auto_jump_thunk_00d38bf0: misc_jump_thunk with other addresses.
namespace twin_00d38bf0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d38bf0 (0x00d38bf0) is a single jump to the function at 0x00d91a70. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d91a70, fn_00d91a70, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d38bf0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d91a70(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d38bf0

// auto_jump_thunk_00d38fa0: misc_jump_thunk with other addresses.
namespace twin_00d38fa0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d38fa0 (0x00d38fa0) is a single jump to the function at 0x00d888d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d888d0, fn_00d888d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d38fa0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d888d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d38fa0

// auto_jump_thunk_00d39200: misc_jump_thunk with other addresses.
namespace twin_00d39200 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d39200 (0x00d39200) is a single jump to the function at 0x00d52c00. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d52c00, fn_00d52c00, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d39200(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d52c00(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d39200

// auto_jump_thunk_00d43940: misc_jump_thunk with other addresses.
namespace twin_00d43940 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d43940 (0x00d43940) is a single jump to the function at 0x00d477e0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d477e0, fn_00d477e0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d43940(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d477e0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d43940

// auto_jump_thunk_00d447c0: misc_jump_thunk with other addresses.
namespace twin_00d447c0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d447c0 (0x00d447c0) is a single jump to the function at 0x00da3540. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00da3540, fn_00da3540, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d447c0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00da3540(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d447c0

// auto_jump_thunk_00d44d80: misc_jump_thunk with other addresses.
namespace twin_00d44d80 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d44d80 (0x00d44d80) is a single jump to the function at 0x00d7feb0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d7feb0, fn_00d7feb0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d44d80(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d7feb0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d44d80

// auto_jump_thunk_00d44ec0: misc_jump_thunk with other addresses.
namespace twin_00d44ec0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d44ec0 (0x00d44ec0) is a single jump to the function at 0x00d6e980. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d6e980, fn_00d6e980, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d44ec0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d6e980(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d44ec0

// auto_jump_thunk_00d45100: misc_jump_thunk with other addresses.
namespace twin_00d45100 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d45100 (0x00d45100) is a single jump to the function at 0x00d43c80. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d43c80, fn_00d43c80, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d45100(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d43c80(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d45100

// auto_jump_thunk_00d48280: misc_jump_thunk with other addresses.
namespace twin_00d48280 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d48280 (0x00d48280) is a single jump to the function at 0x00d8e300. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d8e300, fn_00d8e300, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d48280(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d8e300(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d48280

// auto_jump_thunk_00d4f6e0: misc_jump_thunk with other addresses.
namespace twin_00d4f6e0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d4f6e0 (0x00d4f6e0) is a single jump to the function at 0x00d6c6f0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d6c6f0, fn_00d6c6f0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d4f6e0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d6c6f0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d4f6e0

// auto_jump_thunk_00d53a80: misc_jump_thunk with other addresses.
namespace twin_00d53a80 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d53a80 (0x00d53a80) is a single jump to the function at 0x00dbbad0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00dbbad0, fn_00dbbad0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d53a80(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00dbbad0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d53a80

// auto_jump_thunk_00d53c90: misc_jump_thunk with other addresses.
namespace twin_00d53c90 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d53c90 (0x00d53c90) is a single jump to the function at 0x00d57d80. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d57d80, fn_00d57d80, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d53c90(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d57d80(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d53c90

// auto_jump_thunk_00d58020: misc_jump_thunk with other addresses.
namespace twin_00d58020 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d58020 (0x00d58020) is a single jump to the function at 0x00dc8630. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00dc8630, fn_00dc8630, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d58020(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00dc8630(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d58020

// auto_jump_thunk_00d5a880: misc_jump_thunk with other addresses.
namespace twin_00d5a880 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d5a880 (0x00d5a880) is a single jump to the function at 0x00dbc290. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00dbc290, fn_00dbc290, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d5a880(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00dbc290(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d5a880

// auto_jump_thunk_00d5ae60: misc_jump_thunk with other addresses.
namespace twin_00d5ae60 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d5ae60 (0x00d5ae60) is a single jump to the function at 0x00d438e0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d438e0, fn_00d438e0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d5ae60(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d438e0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d5ae60

// auto_jump_thunk_00d5aeb0: misc_jump_thunk with other addresses.
namespace twin_00d5aeb0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d5aeb0 (0x00d5aeb0) is a single jump to the function at 0x00d39390. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d39390, fn_00d39390, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d5aeb0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d39390(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d5aeb0

// auto_jump_thunk_00d5afb0: misc_jump_thunk with other addresses.
namespace twin_00d5afb0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d5afb0 (0x00d5afb0) is a single jump to the function at 0x00d43670. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d43670, fn_00d43670, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d5afb0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d43670(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d5afb0

// auto_jump_thunk_00d5e890: misc_jump_thunk with other addresses.
namespace twin_00d5e890 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d5e890 (0x00d5e890) is a single jump to the function at 0x00db20a0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00db20a0, fn_00db20a0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d5e890(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00db20a0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d5e890

// auto_jump_thunk_00d5e8c0: misc_jump_thunk with other addresses.
namespace twin_00d5e8c0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d5e8c0 (0x00d5e8c0) is a single jump to the function at 0x00836830. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00836830, fn_00836830, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d5e8c0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00836830(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d5e8c0

// auto_jump_thunk_00d5e8d0: misc_jump_thunk with other addresses.
namespace twin_00d5e8d0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d5e8d0 (0x00d5e8d0) is a single jump to the function at 0x00836840. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00836840, fn_00836840, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d5e8d0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00836840(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d5e8d0

// auto_jump_thunk_00d5f7a0: misc_jump_thunk with other addresses.
namespace twin_00d5f7a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d5f7a0 (0x00d5f7a0) is a single jump to the function at 0x00d6be90. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d6be90, fn_00d6be90, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d5f7a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d6be90(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d5f7a0

// auto_jump_thunk_00d5f8f0: misc_jump_thunk with other addresses.
namespace twin_00d5f8f0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d5f8f0 (0x00d5f8f0) is a single jump to the function at 0x00db0ab0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00db0ab0, fn_00db0ab0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d5f8f0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00db0ab0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d5f8f0

// auto_jump_thunk_00d5fa30: misc_jump_thunk with other addresses.
namespace twin_00d5fa30 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d5fa30 (0x00d5fa30) is a single jump to the function at 0x00da4160. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00da4160, fn_00da4160, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d5fa30(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00da4160(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d5fa30

// auto_jump_thunk_00d5fb00: misc_jump_thunk with other addresses.
namespace twin_00d5fb00 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d5fb00 (0x00d5fb00) is a single jump to the function at 0x00dc0da0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00dc0da0, fn_00dc0da0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d5fb00(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00dc0da0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d5fb00

// auto_jump_thunk_00d5fde0: misc_jump_thunk with other addresses.
namespace twin_00d5fde0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d5fde0 (0x00d5fde0) is a single jump to the function at 0x00d912c0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d912c0, fn_00d912c0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d5fde0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d912c0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d5fde0

// auto_jump_thunk_00d605b0: misc_jump_thunk with other addresses.
namespace twin_00d605b0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d605b0 (0x00d605b0) is a single jump to the function at 0x00da5be0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00da5be0, fn_00da5be0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d605b0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00da5be0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d605b0

// auto_jump_thunk_00d60c90: misc_jump_thunk with other addresses.
namespace twin_00d60c90 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d60c90 (0x00d60c90) is a single jump to the function at 0x00d86030. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d86030, fn_00d86030, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d60c90(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d86030(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d60c90

// auto_jump_thunk_00d610d0: misc_jump_thunk with other addresses.
namespace twin_00d610d0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d610d0 (0x00d610d0) is a single jump to the function at 0x00dae740. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00dae740, fn_00dae740, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d610d0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00dae740(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d610d0

// auto_jump_thunk_00d62240: misc_jump_thunk with other addresses.
namespace twin_00d62240 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d62240 (0x00d62240) is a single jump to the function at 0x00d953d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d953d0, fn_00d953d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d62240(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d953d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d62240

// auto_jump_thunk_00d62650: misc_jump_thunk with other addresses.
namespace twin_00d62650 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d62650 (0x00d62650) is a single jump to the function at 0x00dcfa60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00dcfa60, fn_00dcfa60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d62650(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00dcfa60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d62650

// auto_jump_thunk_00d62e30: misc_jump_thunk with other addresses.
namespace twin_00d62e30 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d62e30 (0x00d62e30) is a single jump to the function at 0x00d897a0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d897a0, fn_00d897a0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d62e30(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d897a0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d62e30

// auto_jump_thunk_00d63060: misc_jump_thunk with other addresses.
namespace twin_00d63060 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d63060 (0x00d63060) is a single jump to the function at 0x00d92a10. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d92a10, fn_00d92a10, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d63060(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d92a10(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d63060

// auto_jump_thunk_00d63af0: misc_jump_thunk with other addresses.
namespace twin_00d63af0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d63af0 (0x00d63af0) is a single jump to the function at 0x00dbeab0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00dbeab0, fn_00dbeab0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d63af0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00dbeab0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d63af0

// auto_jump_thunk_00d63c50: misc_jump_thunk with other addresses.
namespace twin_00d63c50 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d63c50 (0x00d63c50) is a single jump to the function at 0x00db6c30. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00db6c30, fn_00db6c30, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d63c50(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00db6c30(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d63c50

// auto_jump_thunk_00d641b0: misc_jump_thunk with other addresses.
namespace twin_00d641b0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d641b0 (0x00d641b0) is a single jump to the function at 0x00d85290. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d85290, fn_00d85290, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d641b0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d85290(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d641b0

// auto_jump_thunk_00d641e0: misc_jump_thunk with other addresses.
namespace twin_00d641e0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d641e0 (0x00d641e0) is a single jump to the function at 0x00d85280. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d85280, fn_00d85280, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d641e0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d85280(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d641e0

// auto_jump_thunk_00d64f00: misc_jump_thunk with other addresses.
namespace twin_00d64f00 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d64f00 (0x00d64f00) is a single jump to the function at 0x00836830. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00836830, fn_00836830, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d64f00(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00836830(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d64f00

// auto_jump_thunk_00d64f10: misc_jump_thunk with other addresses.
namespace twin_00d64f10 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d64f10 (0x00d64f10) is a single jump to the function at 0x00836840. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00836840, fn_00836840, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d64f10(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00836840(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d64f10

// auto_jump_thunk_00d65440: misc_jump_thunk with other addresses.
namespace twin_00d65440 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d65440 (0x00d65440) is a single jump to the function at 0x00d529c0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d529c0, fn_00d529c0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d65440(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d529c0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d65440

// auto_jump_thunk_00d65610: misc_jump_thunk with other addresses.
namespace twin_00d65610 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d65610 (0x00d65610) is a single jump to the function at 0x00dc2a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00dc2a60, fn_00dc2a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d65610(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00dc2a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d65610

// auto_jump_thunk_00d66260: misc_jump_thunk with other addresses.
namespace twin_00d66260 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d66260 (0x00d66260) is a single jump to the function at 0x00d62990. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d62990, fn_00d62990, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d66260(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d62990(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d66260

// auto_jump_thunk_00d6c0e0: misc_jump_thunk with other addresses.
namespace twin_00d6c0e0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d6c0e0 (0x00d6c0e0) is a single jump to the function at 0x00dad7d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00dad7d0, fn_00dad7d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d6c0e0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00dad7d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d6c0e0

// auto_jump_thunk_00d6c950: misc_jump_thunk with other addresses.
namespace twin_00d6c950 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d6c950 (0x00d6c950) is a single jump to the function at 0x00d86b20. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d86b20, fn_00d86b20, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d6c950(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d86b20(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d6c950

// auto_jump_thunk_00d6cef0: misc_jump_thunk with other addresses.
namespace twin_00d6cef0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d6cef0 (0x00d6cef0) is a single jump to the function at 0x00da8cb0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00da8cb0, fn_00da8cb0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d6cef0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00da8cb0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d6cef0

// auto_jump_thunk_00d6d5b0: misc_jump_thunk with other addresses.
namespace twin_00d6d5b0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d6d5b0 (0x00d6d5b0) is a single jump to the function at 0x00dbfe70. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00dbfe70, fn_00dbfe70, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d6d5b0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00dbfe70(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d6d5b0

// auto_jump_thunk_00d6d860: misc_jump_thunk with other addresses.
namespace twin_00d6d860 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d6d860 (0x00d6d860) is a single jump to the function at 0x00da9850. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00da9850, fn_00da9850, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d6d860(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00da9850(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d6d860

// auto_jump_thunk_00d6eea0: misc_jump_thunk with other addresses.
namespace twin_00d6eea0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d6eea0 (0x00d6eea0) is a single jump to the function at 0x00e4eb20. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e4eb20, fn_00e4eb20, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d6eea0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e4eb20(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d6eea0

// auto_jump_thunk_00d6eee0: misc_jump_thunk with other addresses.
namespace twin_00d6eee0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d6eee0 (0x00d6eee0) is a single jump to the function at 0x00e4f030. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e4f030, fn_00e4f030, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d6eee0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e4f030(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d6eee0

// auto_jump_thunk_00d76aa0: misc_jump_thunk with other addresses.
namespace twin_00d76aa0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d76aa0 (0x00d76aa0) is a single jump to the function at 0x00e57070. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e57070, fn_00e57070, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d76aa0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e57070(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d76aa0

// auto_jump_thunk_00d7cd10: misc_jump_thunk with other addresses.
namespace twin_00d7cd10 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d7cd10 (0x00d7cd10) is a single jump to the function at 0x00e5bdb0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e5bdb0, fn_00e5bdb0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d7cd10(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e5bdb0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d7cd10

// auto_jump_thunk_00d7ce40: misc_jump_thunk with other addresses.
namespace twin_00d7ce40 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d7ce40 (0x00d7ce40) is a single jump to the function at 0x00d7a400. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d7a400, fn_00d7a400, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d7ce40(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d7a400(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d7ce40

// auto_jump_thunk_00d7ce80: misc_jump_thunk with other addresses.
namespace twin_00d7ce80 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d7ce80 (0x00d7ce80) is a single jump to the function at 0x00da3e50. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00da3e50, fn_00da3e50, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d7ce80(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00da3e50(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d7ce80

// auto_jump_thunk_00d7dc90: misc_jump_thunk with other addresses.
namespace twin_00d7dc90 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d7dc90 (0x00d7dc90) is a single jump to the function at 0x00da9ce0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00da9ce0, fn_00da9ce0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d7dc90(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00da9ce0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d7dc90

// auto_jump_thunk_00d7ed80: misc_jump_thunk with other addresses.
namespace twin_00d7ed80 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d7ed80 (0x00d7ed80) is a single jump to the function at 0x00dad360. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00dad360, fn_00dad360, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d7ed80(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00dad360(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d7ed80

// auto_jump_thunk_00d7f1b0: misc_jump_thunk with other addresses.
namespace twin_00d7f1b0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d7f1b0 (0x00d7f1b0) is a single jump to the function at 0x00d98b30. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d98b30, fn_00d98b30, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d7f1b0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d98b30(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d7f1b0

// auto_jump_thunk_00d80b90: misc_jump_thunk with other addresses.
namespace twin_00d80b90 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d80b90 (0x00d80b90) is a single jump to the function at 0x00da38f0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00da38f0, fn_00da38f0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d80b90(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00da38f0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d80b90

// auto_jump_thunk_00d85780: misc_jump_thunk with other addresses.
namespace twin_00d85780 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d85780 (0x00d85780) is a single jump to the function at 0x00d971e0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d971e0, fn_00d971e0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d85780(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d971e0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d85780

// auto_jump_thunk_00d86820: misc_jump_thunk with other addresses.
namespace twin_00d86820 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d86820 (0x00d86820) is a single jump to the function at 0x00ddbf90. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ddbf90, fn_00ddbf90, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d86820(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ddbf90(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d86820

// auto_jump_thunk_00d87710: misc_jump_thunk with other addresses.
namespace twin_00d87710 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d87710 (0x00d87710) is a single jump to the function at 0x00db4f00. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00db4f00, fn_00db4f00, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d87710(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00db4f00(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d87710

// auto_jump_thunk_00d87d80: misc_jump_thunk with other addresses.
namespace twin_00d87d80 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d87d80 (0x00d87d80) is a single jump to the function at 0x00dcef70. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00dcef70, fn_00dcef70, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d87d80(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00dcef70(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d87d80

// auto_jump_thunk_00d88010: misc_jump_thunk with other addresses.
namespace twin_00d88010 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d88010 (0x00d88010) is a single jump to the function at 0x00dc1550. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00dc1550, fn_00dc1550, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d88010(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00dc1550(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d88010

// auto_jump_thunk_00d88160: misc_jump_thunk with other addresses.
namespace twin_00d88160 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d88160 (0x00d88160) is a single jump to the function at 0x00dc68b0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00dc68b0, fn_00dc68b0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d88160(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00dc68b0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d88160

// auto_jump_thunk_00d92440: misc_jump_thunk with other addresses.
namespace twin_00d92440 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d92440 (0x00d92440) is a single jump to the function at 0x00d47e90. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d47e90, fn_00d47e90, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d92440(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d47e90(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d92440

// auto_jump_thunk_00d96960: misc_jump_thunk with other addresses.
namespace twin_00d96960 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d96960 (0x00d96960) is a single jump to the function at 0x00dacd90. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00dacd90, fn_00dacd90, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d96960(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00dacd90(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d96960

// auto_jump_thunk_00d96990: misc_jump_thunk with other addresses.
namespace twin_00d96990 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d96990 (0x00d96990) is a single jump to the function at 0x00dace10. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00dace10, fn_00dace10, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d96990(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00dace10(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d96990

// auto_jump_thunk_00d96ca0: misc_jump_thunk with other addresses.
namespace twin_00d96ca0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d96ca0 (0x00d96ca0) is a single jump to the function at 0x00dcc990. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00dcc990, fn_00dcc990, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d96ca0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00dcc990(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d96ca0

// auto_jump_thunk_00d96f90: misc_jump_thunk with other addresses.
namespace twin_00d96f90 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d96f90 (0x00d96f90) is a single jump to the function at 0x00dc08d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00dc08d0, fn_00dc08d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d96f90(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00dc08d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d96f90

// auto_jump_thunk_00d97a40: misc_jump_thunk with other addresses.
namespace twin_00d97a40 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00d97a40 (0x00d97a40) is a single jump to the function at 0x00dc8c00. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00dc8c00, fn_00dc8c00, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00d97a40(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00dc8c00(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00d97a40

// auto_jump_thunk_00da3330: misc_jump_thunk with other addresses.
namespace twin_00da3330 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00da3330 (0x00da3330) is a single jump to the function at 0x00d7dc60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d7dc60, fn_00d7dc60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00da3330(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d7dc60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00da3330

// auto_jump_thunk_00da3ff0: misc_jump_thunk with other addresses.
namespace twin_00da3ff0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00da3ff0 (0x00da3ff0) is a single jump to the function at 0x00dbef80. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00dbef80, fn_00dbef80, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00da3ff0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00dbef80(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00da3ff0

// auto_jump_thunk_00da4a80: misc_jump_thunk with other addresses.
namespace twin_00da4a80 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00da4a80 (0x00da4a80) is a single jump to the function at 0x00ddcf20. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ddcf20, fn_00ddcf20, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00da4a80(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ddcf20(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00da4a80

// auto_jump_thunk_00da5320: misc_jump_thunk with other addresses.
namespace twin_00da5320 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00da5320 (0x00da5320) is a single jump to the function at 0x00e4f030. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e4f030, fn_00e4f030, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00da5320(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e4f030(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00da5320

// auto_jump_thunk_00da8a50: misc_jump_thunk with other addresses.
namespace twin_00da8a50 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00da8a50 (0x00da8a50) is a single jump to the function at 0x00dbd280. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00dbd280, fn_00dbd280, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00da8a50(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00dbd280(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00da8a50

// auto_jump_thunk_00da8dd0: misc_jump_thunk with other addresses.
namespace twin_00da8dd0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00da8dd0 (0x00da8dd0) is a single jump to the function at 0x00dc1110. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00dc1110, fn_00dc1110, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00da8dd0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00dc1110(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00da8dd0

// auto_jump_thunk_00da93e0: misc_jump_thunk with other addresses.
namespace twin_00da93e0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00da93e0 (0x00da93e0) is a single jump to the function at 0x00dc7490. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00dc7490, fn_00dc7490, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00da93e0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00dc7490(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00da93e0

// auto_jump_thunk_00da9670: misc_jump_thunk with other addresses.
namespace twin_00da9670 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00da9670 (0x00da9670) is a single jump to the function at 0x00dc87d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00dc87d0, fn_00dc87d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00da9670(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00dc87d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00da9670

// auto_jump_thunk_00daa260: misc_jump_thunk with other addresses.
namespace twin_00daa260 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00daa260 (0x00daa260) is a single jump to the function at 0x00ddab10. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ddab10, fn_00ddab10, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00daa260(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ddab10(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00daa260

// auto_jump_thunk_00daae30: misc_jump_thunk with other addresses.
namespace twin_00daae30 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00daae30 (0x00daae30) is a single jump to the function at 0x00daa610. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00daa610, fn_00daa610, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00daae30(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00daa610(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00daae30

// auto_jump_thunk_00dad4a0: misc_jump_thunk with other addresses.
namespace twin_00dad4a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00dad4a0 (0x00dad4a0) is a single jump to the function at 0x00dc2390. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00dc2390, fn_00dc2390, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00dad4a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00dc2390(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00dad4a0
