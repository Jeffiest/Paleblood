// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_jump_thunk, in game/misc/jump_thunk.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstdint>
#include "runtime/original.h"

// auto_jump_thunk_00571fb0: misc_jump_thunk with other addresses.
namespace twin_00571fb0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00571fb0 (0x00571fb0) is a single jump to the function at 0x005717c0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x005717c0, fn_005717c0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00571fb0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_005717c0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00571fb0

// auto_jump_thunk_00579100: misc_jump_thunk with other addresses.
namespace twin_00579100 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00579100 (0x00579100) is a single jump to the function at 0x00579130. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00579130, fn_00579130, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00579100(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00579130(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00579100

// auto_jump_thunk_0057dcd0: misc_jump_thunk with other addresses.
namespace twin_0057dcd0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0057dcd0 (0x0057dcd0) is a single jump to the function at 0x005773d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x005773d0, fn_005773d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0057dcd0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_005773d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0057dcd0

// auto_jump_thunk_0057dcf0: misc_jump_thunk with other addresses.
namespace twin_0057dcf0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0057dcf0 (0x0057dcf0) is a single jump to the function at 0x0057c5d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0057c5d0, fn_0057c5d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0057dcf0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0057c5d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0057dcf0

// auto_jump_thunk_0057dd00: misc_jump_thunk with other addresses.
namespace twin_0057dd00 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0057dd00 (0x0057dd00) is a single jump to the function at 0x0057c5d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0057c5d0, fn_0057c5d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0057dd00(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0057c5d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0057dd00

// auto_jump_thunk_00587140: misc_jump_thunk with other addresses.
namespace twin_00587140 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00587140 (0x00587140) is a single jump to the function at 0x00587150. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00587150, fn_00587150, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00587140(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00587150(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00587140

// auto_jump_thunk_005872b0: misc_jump_thunk with other addresses.
namespace twin_005872b0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_005872b0 (0x005872b0) is a single jump to the function at 0x00587150. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00587150, fn_00587150, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_005872b0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00587150(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_005872b0

// auto_jump_thunk_00596e00: misc_jump_thunk with other addresses.
namespace twin_00596e00 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00596e00 (0x00596e00) is a single jump to the function at 0x027fe0d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x027fe0d0, fn_027fe0d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00596e00(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_027fe0d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00596e00

// auto_jump_thunk_005a7270: misc_jump_thunk with other addresses.
namespace twin_005a7270 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_005a7270 (0x005a7270) is a single jump to the function at 0x005696e0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x005696e0, fn_005696e0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_005a7270(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_005696e0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_005a7270

// auto_jump_thunk_005b9410: misc_jump_thunk with other addresses.
namespace twin_005b9410 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_005b9410 (0x005b9410) is a single jump to the function at 0x027ff190. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x027ff190, fn_027ff190, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_005b9410(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_027ff190(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_005b9410

// auto_jump_thunk_005b9420: misc_jump_thunk with other addresses.
namespace twin_005b9420 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_005b9420 (0x005b9420) is a single jump to the function at 0x00569a90. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00569a90, fn_00569a90, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_005b9420(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00569a90(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_005b9420

// auto_jump_thunk_005c8fe0: misc_jump_thunk with other addresses.
namespace twin_005c8fe0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_005c8fe0 (0x005c8fe0) is a single jump to the function at 0x00551d20. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00551d20, fn_00551d20, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_005c8fe0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00551d20(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_005c8fe0

// auto_jump_thunk_0060e7b0: misc_jump_thunk with other addresses.
namespace twin_0060e7b0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0060e7b0 (0x0060e7b0) is a single jump to the function at 0x0060e7c0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0060e7c0, fn_0060e7c0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0060e7b0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0060e7c0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0060e7b0

// auto_jump_thunk_00611f80: misc_jump_thunk with other addresses.
namespace twin_00611f80 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00611f80 (0x00611f80) is a single jump to the function at 0x006003d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x006003d0, fn_006003d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00611f80(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_006003d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00611f80

// auto_jump_thunk_00611f90: misc_jump_thunk with other addresses.
namespace twin_00611f90 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00611f90 (0x00611f90) is a single jump to the function at 0x00600520. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00600520, fn_00600520, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00611f90(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00600520(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00611f90

// auto_jump_thunk_00612010: misc_jump_thunk with other addresses.
namespace twin_00612010 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00612010 (0x00612010) is a single jump to the function at 0x00618350. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00618350, fn_00618350, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00612010(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00618350(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00612010

// auto_jump_thunk_00612020: misc_jump_thunk with other addresses.
namespace twin_00612020 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00612020 (0x00612020) is a single jump to the function at 0x00618a90. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00618a90, fn_00618a90, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00612020(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00618a90(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00612020

// auto_jump_thunk_00612070: misc_jump_thunk with other addresses.
namespace twin_00612070 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00612070 (0x00612070) is a single jump to the function at 0x00600fc0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00600fc0, fn_00600fc0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00612070(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00600fc0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00612070

// auto_jump_thunk_006120c0: misc_jump_thunk with other addresses.
namespace twin_006120c0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_006120c0 (0x006120c0) is a single jump to the function at 0x00601250. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00601250, fn_00601250, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_006120c0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00601250(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_006120c0

// auto_jump_thunk_006120e0: misc_jump_thunk with other addresses.
namespace twin_006120e0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_006120e0 (0x006120e0) is a single jump to the function at 0x00601460. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00601460, fn_00601460, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_006120e0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00601460(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_006120e0

// auto_jump_thunk_006120f0: misc_jump_thunk with other addresses.
namespace twin_006120f0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_006120f0 (0x006120f0) is a single jump to the function at 0x00618f40. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00618f40, fn_00618f40, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_006120f0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00618f40(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_006120f0

// auto_jump_thunk_00624b80: misc_jump_thunk with other addresses.
namespace twin_00624b80 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00624b80 (0x00624b80) is a single jump to the function at 0x00616e40. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00616e40, fn_00616e40, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00624b80(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00616e40(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00624b80

// auto_jump_thunk_00624b90: misc_jump_thunk with other addresses.
namespace twin_00624b90 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00624b90 (0x00624b90) is a single jump to the function at 0x00616f50. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00616f50, fn_00616f50, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00624b90(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00616f50(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00624b90

// auto_jump_thunk_0064d590: misc_jump_thunk with other addresses.
namespace twin_0064d590 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0064d590 (0x0064d590) is a single jump to the function at 0x0064d700. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0064d700, fn_0064d700, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0064d590(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0064d700(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0064d590

// auto_jump_thunk_006638e0: misc_jump_thunk with other addresses.
namespace twin_006638e0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_006638e0 (0x006638e0) is a single jump to the function at 0x007a9a40. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x007a9a40, fn_007a9a40, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_006638e0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_007a9a40(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_006638e0

// auto_jump_thunk_0067b240: misc_jump_thunk with other addresses.
namespace twin_0067b240 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0067b240 (0x0067b240) is a single jump to the function at 0x0067ab60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0067ab60, fn_0067ab60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0067b240(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0067ab60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0067b240

// auto_jump_thunk_0067b250: misc_jump_thunk with other addresses.
namespace twin_0067b250 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0067b250 (0x0067b250) is a single jump to the function at 0x0067ae00. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0067ae00, fn_0067ae00, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0067b250(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0067ae00(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0067b250

// auto_jump_thunk_0067b480: misc_jump_thunk with other addresses.
namespace twin_0067b480 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0067b480 (0x0067b480) is a single jump to the function at 0x0067a980. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0067a980, fn_0067a980, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0067b480(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0067a980(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0067b480

// auto_jump_thunk_0067ba20: misc_jump_thunk with other addresses.
namespace twin_0067ba20 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0067ba20 (0x0067ba20) is a single jump to the function at 0x0067b490. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0067b490, fn_0067b490, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0067ba20(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0067b490(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0067ba20

// auto_jump_thunk_0067cfc0: misc_jump_thunk with other addresses.
namespace twin_0067cfc0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0067cfc0 (0x0067cfc0) is a single jump to the function at 0x0067cfd0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0067cfd0, fn_0067cfd0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0067cfc0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0067cfd0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0067cfc0

// auto_jump_thunk_0067ddf0: misc_jump_thunk with other addresses.
namespace twin_0067ddf0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0067ddf0 (0x0067ddf0) is a single jump to the function at 0x0067dbb0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0067dbb0, fn_0067dbb0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0067ddf0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0067dbb0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0067ddf0

// auto_jump_thunk_00684430: misc_jump_thunk with other addresses.
namespace twin_00684430 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00684430 (0x00684430) is a single jump to the function at 0x00684320. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00684320, fn_00684320, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00684430(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00684320(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00684430

// auto_jump_thunk_00685de0: misc_jump_thunk with other addresses.
namespace twin_00685de0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00685de0 (0x00685de0) is a single jump to the function at 0x00685b70. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00685b70, fn_00685b70, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00685de0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00685b70(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00685de0

// auto_jump_thunk_00685df0: misc_jump_thunk with other addresses.
namespace twin_00685df0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00685df0 (0x00685df0) is a single jump to the function at 0x00685c60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00685c60, fn_00685c60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00685df0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00685c60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00685df0

// auto_jump_thunk_00685e00: misc_jump_thunk with other addresses.
namespace twin_00685e00 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00685e00 (0x00685e00) is a single jump to the function at 0x00685d20. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00685d20, fn_00685d20, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00685e00(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00685d20(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00685e00

// auto_jump_thunk_00686b70: misc_jump_thunk with other addresses.
namespace twin_00686b70 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00686b70 (0x00686b70) is a single jump to the function at 0x00686360. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00686360, fn_00686360, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00686b70(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00686360(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00686b70

// auto_jump_thunk_00687080: misc_jump_thunk with other addresses.
namespace twin_00687080 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00687080 (0x00687080) is a single jump to the function at 0x00685f20. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00685f20, fn_00685f20, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00687080(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00685f20(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00687080

// auto_jump_thunk_006a23f0: misc_jump_thunk with other addresses.
namespace twin_006a23f0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_006a23f0 (0x006a23f0) is a single jump to the function at 0x006a2090. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x006a2090, fn_006a2090, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_006a23f0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_006a2090(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_006a23f0

// auto_jump_thunk_006a29f0: misc_jump_thunk with other addresses.
namespace twin_006a29f0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_006a29f0 (0x006a29f0) is a single jump to the function at 0x006a2400. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x006a2400, fn_006a2400, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_006a29f0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_006a2400(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_006a29f0

// auto_jump_thunk_006a2d50: misc_jump_thunk with other addresses.
namespace twin_006a2d50 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_006a2d50 (0x006a2d50) is a single jump to the function at 0x006a2a00. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x006a2a00, fn_006a2a00, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_006a2d50(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_006a2a00(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_006a2d50

// auto_jump_thunk_006ac8c0: misc_jump_thunk with other addresses.
namespace twin_006ac8c0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_006ac8c0 (0x006ac8c0) is a single jump to the function at 0x006ac6a0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x006ac6a0, fn_006ac6a0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_006ac8c0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_006ac6a0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_006ac8c0

// auto_jump_thunk_006ad2a0: misc_jump_thunk with other addresses.
namespace twin_006ad2a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_006ad2a0 (0x006ad2a0) is a single jump to the function at 0x006fbd50. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x006fbd50, fn_006fbd50, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_006ad2a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_006fbd50(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_006ad2a0

// auto_jump_thunk_006ae750: misc_jump_thunk with other addresses.
namespace twin_006ae750 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_006ae750 (0x006ae750) is a single jump to the function at 0x006fa840. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x006fa840, fn_006fa840, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_006ae750(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_006fa840(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_006ae750

// auto_jump_thunk_006b21a0: misc_jump_thunk with other addresses.
namespace twin_006b21a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_006b21a0 (0x006b21a0) is a single jump to the function at 0x007164e0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x007164e0, fn_007164e0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_006b21a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_007164e0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_006b21a0

// auto_jump_thunk_006b2490: misc_jump_thunk with other addresses.
namespace twin_006b2490 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_006b2490 (0x006b2490) is a single jump to the function at 0x006fbd50. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x006fbd50, fn_006fbd50, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_006b2490(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_006fbd50(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_006b2490

// auto_jump_thunk_006cc2b0: misc_jump_thunk with other addresses.
namespace twin_006cc2b0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_006cc2b0 (0x006cc2b0) is a single jump to the function at 0x006bb650. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x006bb650, fn_006bb650, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_006cc2b0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_006bb650(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_006cc2b0

// auto_jump_thunk_006cc5d0: misc_jump_thunk with other addresses.
namespace twin_006cc5d0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_006cc5d0 (0x006cc5d0) is a single jump to the function at 0x006c0870. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x006c0870, fn_006c0870, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_006cc5d0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_006c0870(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_006cc5d0

// auto_jump_thunk_006d8250: misc_jump_thunk with other addresses.
namespace twin_006d8250 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_006d8250 (0x006d8250) is a single jump to the function at 0x006da0d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x006da0d0, fn_006da0d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_006d8250(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_006da0d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_006d8250

// auto_jump_thunk_006de5c0: misc_jump_thunk with other addresses.
namespace twin_006de5c0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_006de5c0 (0x006de5c0) is a single jump to the function at 0x006da0d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x006da0d0, fn_006da0d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_006de5c0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_006da0d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_006de5c0

// auto_jump_thunk_00722bb0: misc_jump_thunk with other addresses.
namespace twin_00722bb0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00722bb0 (0x00722bb0) is a single jump to the function at 0x00722bc0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00722bc0, fn_00722bc0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00722bb0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00722bc0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00722bb0

// auto_jump_thunk_00729420: misc_jump_thunk with other addresses.
namespace twin_00729420 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00729420 (0x00729420) is a single jump to the function at 0x00729430. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00729430, fn_00729430, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00729420(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00729430(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00729420

// auto_jump_thunk_00737510: misc_jump_thunk with other addresses.
namespace twin_00737510 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00737510 (0x00737510) is a single jump to the function at 0x00716a70. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00716a70, fn_00716a70, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00737510(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00716a70(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00737510

// auto_jump_thunk_0073f030: misc_jump_thunk with other addresses.
namespace twin_0073f030 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0073f030 (0x0073f030) is a single jump to the function at 0x0073f1d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0073f1d0, fn_0073f1d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0073f030(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0073f1d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0073f030

// auto_jump_thunk_007acaf0: misc_jump_thunk with other addresses.
namespace twin_007acaf0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_007acaf0 (0x007acaf0) is a single jump to the function at 0x007acb00. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x007acb00, fn_007acb00, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_007acaf0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_007acb00(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_007acaf0

// auto_jump_thunk_007acda0: misc_jump_thunk with other addresses.
namespace twin_007acda0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_007acda0 (0x007acda0) is a single jump to the function at 0x007acb00. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x007acb00, fn_007acb00, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_007acda0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_007acb00(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_007acda0

// auto_jump_thunk_007ada00: misc_jump_thunk with other addresses.
namespace twin_007ada00 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_007ada00 (0x007ada00) is a single jump to the function at 0x007b75b0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x007b75b0, fn_007b75b0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_007ada00(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_007b75b0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_007ada00

// auto_jump_thunk_007ada10: misc_jump_thunk with other addresses.
namespace twin_007ada10 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_007ada10 (0x007ada10) is a single jump to the function at 0x007b7560. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x007b7560, fn_007b7560, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_007ada10(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_007b7560(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_007ada10

// auto_jump_thunk_007c6f40: misc_jump_thunk with other addresses.
namespace twin_007c6f40 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_007c6f40 (0x007c6f40) is a single jump to the function at 0x007cc980. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x007cc980, fn_007cc980, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_007c6f40(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_007cc980(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_007c6f40

// auto_jump_thunk_00818870: misc_jump_thunk with other addresses.
namespace twin_00818870 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00818870 (0x00818870) is a single jump to the function at 0x00836830. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_00818870(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00836830(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00818870

// auto_jump_thunk_00818880: misc_jump_thunk with other addresses.
namespace twin_00818880 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00818880 (0x00818880) is a single jump to the function at 0x00836840. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_00818880(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00836840(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00818880

// auto_jump_thunk_008188d0: misc_jump_thunk with other addresses.
namespace twin_008188d0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_008188d0 (0x008188d0) is a single jump to the function at 0x00836830. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_008188d0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00836830(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_008188d0

// auto_jump_thunk_008188e0: misc_jump_thunk with other addresses.
namespace twin_008188e0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_008188e0 (0x008188e0) is a single jump to the function at 0x00836840. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_008188e0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00836840(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_008188e0

// auto_jump_thunk_00818900: misc_jump_thunk with other addresses.
namespace twin_00818900 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00818900 (0x00818900) is a single jump to the function at 0x0082b460. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0082b460, fn_0082b460, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00818900(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0082b460(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00818900

// auto_jump_thunk_00818930: misc_jump_thunk with other addresses.
namespace twin_00818930 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00818930 (0x00818930) is a single jump to the function at 0x0082b440. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0082b440, fn_0082b440, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00818930(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0082b440(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00818930

// auto_jump_thunk_0081b0a0: misc_jump_thunk with other addresses.
namespace twin_0081b0a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0081b0a0 (0x0081b0a0) is a single jump to the function at 0x0081b0c0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0081b0c0, fn_0081b0c0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0081b0a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0081b0c0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0081b0a0

// auto_jump_thunk_0081e8e0: misc_jump_thunk with other addresses.
namespace twin_0081e8e0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0081e8e0 (0x0081e8e0) is a single jump to the function at 0x00835f00. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00835f00, fn_00835f00, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0081e8e0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00835f00(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0081e8e0

// auto_jump_thunk_00829900: misc_jump_thunk with other addresses.
namespace twin_00829900 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00829900 (0x00829900) is a single jump to the function at 0x00857cb0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00857cb0, fn_00857cb0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00829900(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00857cb0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00829900

// auto_jump_thunk_00829910: misc_jump_thunk with other addresses.
namespace twin_00829910 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00829910 (0x00829910) is a single jump to the function at 0x00857cc0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00857cc0, fn_00857cc0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00829910(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00857cc0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00829910

// auto_jump_thunk_0082a280: misc_jump_thunk with other addresses.
namespace twin_0082a280 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0082a280 (0x0082a280) is a single jump to the function at 0x0082a290. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0082a290, fn_0082a290, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0082a280(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0082a290(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0082a280

// auto_jump_thunk_0082b2a0: misc_jump_thunk with other addresses.
namespace twin_0082b2a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0082b2a0 (0x0082b2a0) is a single jump to the function at 0x0084e120. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0084e120, fn_0084e120, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0082b2a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0084e120(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0082b2a0

// auto_jump_thunk_0082b2b0: misc_jump_thunk with other addresses.
namespace twin_0082b2b0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0082b2b0 (0x0082b2b0) is a single jump to the function at 0x0084e130. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0084e130, fn_0084e130, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0082b2b0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0084e130(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0082b2b0

// auto_jump_thunk_00836cf0: misc_jump_thunk with other addresses.
namespace twin_00836cf0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00836cf0 (0x00836cf0) is a single jump to the function at 0x008366b0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x008366b0, fn_008366b0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00836cf0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_008366b0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00836cf0

// auto_jump_thunk_0084acc0: misc_jump_thunk with other addresses.
namespace twin_0084acc0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0084acc0 (0x0084acc0) is a single jump to the function at 0x0085d9e0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0085d9e0, fn_0085d9e0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0084acc0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0085d9e0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0084acc0

// auto_jump_thunk_0084f990: misc_jump_thunk with other addresses.
namespace twin_0084f990 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0084f990 (0x0084f990) is a single jump to the function at 0x0084f5e0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0084f5e0, fn_0084f5e0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0084f990(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0084f5e0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0084f990

// auto_jump_thunk_0084f9b0: misc_jump_thunk with other addresses.
namespace twin_0084f9b0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0084f9b0 (0x0084f9b0) is a single jump to the function at 0x0084f5e0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0084f5e0, fn_0084f5e0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0084f9b0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0084f5e0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0084f9b0

// auto_jump_thunk_0084f9d0: misc_jump_thunk with other addresses.
namespace twin_0084f9d0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0084f9d0 (0x0084f9d0) is a single jump to the function at 0x0084f5e0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0084f5e0, fn_0084f5e0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0084f9d0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0084f5e0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0084f9d0

// auto_jump_thunk_00876720: misc_jump_thunk with other addresses.
namespace twin_00876720 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00876720 (0x00876720) is a single jump to the function at 0x008770d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x008770d0, fn_008770d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00876720(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_008770d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00876720

// auto_jump_thunk_00876de0: misc_jump_thunk with other addresses.
namespace twin_00876de0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00876de0 (0x00876de0) is a single jump to the function at 0x008770d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x008770d0, fn_008770d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00876de0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_008770d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00876de0

// auto_jump_thunk_00890840: misc_jump_thunk with other addresses.
namespace twin_00890840 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00890840 (0x00890840) is a single jump to the function at 0x00890b80. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00890b80, fn_00890b80, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00890840(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00890b80(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00890840

// auto_jump_thunk_00890850: misc_jump_thunk with other addresses.
namespace twin_00890850 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00890850 (0x00890850) is a single jump to the function at 0x00890b80. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00890b80, fn_00890b80, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00890850(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00890b80(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00890850

// auto_jump_thunk_00890860: misc_jump_thunk with other addresses.
namespace twin_00890860 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00890860 (0x00890860) is a single jump to the function at 0x00890950. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00890950, fn_00890950, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00890860(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00890950(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00890860

// auto_jump_thunk_00890870: misc_jump_thunk with other addresses.
namespace twin_00890870 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00890870 (0x00890870) is a single jump to the function at 0x00890950. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00890950, fn_00890950, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00890870(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00890950(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00890870

// auto_jump_thunk_00890880: misc_jump_thunk with other addresses.
namespace twin_00890880 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00890880 (0x00890880) is a single jump to the function at 0x00890950. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00890950, fn_00890950, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00890880(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00890950(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00890880

// auto_jump_thunk_008b8a90: misc_jump_thunk with other addresses.
namespace twin_008b8a90 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_008b8a90 (0x008b8a90) is a single jump to the function at 0x008b9e00. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x008b9e00, fn_008b9e00, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_008b8a90(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_008b9e00(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_008b8a90

// auto_jump_thunk_008b8b40: misc_jump_thunk with other addresses.
namespace twin_008b8b40 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_008b8b40 (0x008b8b40) is a single jump to the function at 0x008b9e00. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x008b9e00, fn_008b9e00, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_008b8b40(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_008b9e00(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_008b8b40

// auto_jump_thunk_008bc580: misc_jump_thunk with other addresses.
namespace twin_008bc580 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_008bc580 (0x008bc580) is a single jump to the function at 0x008bcfb0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x008bcfb0, fn_008bcfb0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_008bc580(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_008bcfb0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_008bc580

// auto_jump_thunk_008bd1a0: misc_jump_thunk with other addresses.
namespace twin_008bd1a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_008bd1a0 (0x008bd1a0) is a single jump to the function at 0x008c5bc0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x008c5bc0, fn_008c5bc0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_008bd1a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_008c5bc0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_008bd1a0

// auto_jump_thunk_008be5a0: misc_jump_thunk with other addresses.
namespace twin_008be5a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_008be5a0 (0x008be5a0) is a single jump to the function at 0x008bf8f0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x008bf8f0, fn_008bf8f0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_008be5a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_008bf8f0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_008be5a0

// auto_jump_thunk_008beaa0: misc_jump_thunk with other addresses.
namespace twin_008beaa0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_008beaa0 (0x008beaa0) is a single jump to the function at 0x008c34e0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x008c34e0, fn_008c34e0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_008beaa0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_008c34e0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_008beaa0

// auto_jump_thunk_008bef90: misc_jump_thunk with other addresses.
namespace twin_008bef90 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_008bef90 (0x008bef90) is a single jump to the function at 0x008c3c60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x008c3c60, fn_008c3c60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_008bef90(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_008c3c60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_008bef90

// auto_jump_thunk_008bf0b0: misc_jump_thunk with other addresses.
namespace twin_008bf0b0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_008bf0b0 (0x008bf0b0) is a single jump to the function at 0x008bd2f0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x008bd2f0, fn_008bd2f0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_008bf0b0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_008bd2f0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_008bf0b0

// auto_jump_thunk_008bf380: misc_jump_thunk with other addresses.
namespace twin_008bf380 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_008bf380 (0x008bf380) is a single jump to the function at 0x008cbc50. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x008cbc50, fn_008cbc50, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_008bf380(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_008cbc50(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_008bf380

// auto_jump_thunk_008c2980: misc_jump_thunk with other addresses.
namespace twin_008c2980 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_008c2980 (0x008c2980) is a single jump to the function at 0x008cca10. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x008cca10, fn_008cca10, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_008c2980(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_008cca10(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_008c2980

// auto_jump_thunk_008c2a30: misc_jump_thunk with other addresses.
namespace twin_008c2a30 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_008c2a30 (0x008c2a30) is a single jump to the function at 0x008cde20. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x008cde20, fn_008cde20, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_008c2a30(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_008cde20(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_008c2a30

// auto_jump_thunk_008c39c0: misc_jump_thunk with other addresses.
namespace twin_008c39c0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_008c39c0 (0x008c39c0) is a single jump to the function at 0x008c20d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x008c20d0, fn_008c20d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_008c39c0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_008c20d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_008c39c0

// auto_jump_thunk_008ce4f0: misc_jump_thunk with other addresses.
namespace twin_008ce4f0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_008ce4f0 (0x008ce4f0) is a single jump to the function at 0x008d3550. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x008d3550, fn_008d3550, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_008ce4f0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_008d3550(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_008ce4f0

// auto_jump_thunk_008d2150: misc_jump_thunk with other addresses.
namespace twin_008d2150 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_008d2150 (0x008d2150) is a single jump to the function at 0x008d1c40. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x008d1c40, fn_008d1c40, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_008d2150(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_008d1c40(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_008d2150

// auto_jump_thunk_00909730: misc_jump_thunk with other addresses.
namespace twin_00909730 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00909730 (0x00909730) is a single jump to the function at 0x028ed700. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x028ed700, fn_028ed700, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00909730(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_028ed700(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00909730

// auto_jump_thunk_00909750: misc_jump_thunk with other addresses.
namespace twin_00909750 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00909750 (0x00909750) is a single jump to the function at 0x0090b430. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0090b430, fn_0090b430, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00909750(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0090b430(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00909750

// auto_jump_thunk_00909ea0: misc_jump_thunk with other addresses.
namespace twin_00909ea0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00909ea0 (0x00909ea0) is a single jump to the function at 0x00836830. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_00909ea0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00836830(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00909ea0

// auto_jump_thunk_0090a370: misc_jump_thunk with other addresses.
namespace twin_0090a370 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0090a370 (0x0090a370) is a single jump to the function at 0x0090d170. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0090d170, fn_0090d170, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0090a370(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0090d170(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0090a370

// auto_jump_thunk_0090b000: misc_jump_thunk with other addresses.
namespace twin_0090b000 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0090b000 (0x0090b000) is a single jump to the function at 0x00911290. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00911290, fn_00911290, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0090b000(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00911290(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0090b000

// auto_jump_thunk_0090c6a0: misc_jump_thunk with other addresses.
namespace twin_0090c6a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0090c6a0 (0x0090c6a0) is a single jump to the function at 0x0090c7e0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0090c7e0, fn_0090c7e0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0090c6a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0090c7e0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0090c6a0

// auto_jump_thunk_0090ccb0: misc_jump_thunk with other addresses.
namespace twin_0090ccb0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0090ccb0 (0x0090ccb0) is a single jump to the function at 0x00911e00. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00911e00, fn_00911e00, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0090ccb0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00911e00(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0090ccb0

// auto_jump_thunk_0090f490: misc_jump_thunk with other addresses.
namespace twin_0090f490 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0090f490 (0x0090f490) is a single jump to the function at 0x0090d890. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0090d890, fn_0090d890, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0090f490(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0090d890(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0090f490

// auto_jump_thunk_00910460: misc_jump_thunk with other addresses.
namespace twin_00910460 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00910460 (0x00910460) is a single jump to the function at 0x00911300. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00911300, fn_00911300, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00910460(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00911300(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00910460

// auto_jump_thunk_00911e00: misc_jump_thunk with other addresses.
namespace twin_00911e00 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00911e00 (0x00911e00) is a single jump to the function at 0x00836830. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_00911e00(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00836830(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00911e00

// auto_jump_thunk_0091e300: misc_jump_thunk with other addresses.
namespace twin_0091e300 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0091e300 (0x0091e300) is a single jump to the function at 0x0091e190. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0091e190, fn_0091e190, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0091e300(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0091e190(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0091e300

// auto_jump_thunk_00924870: misc_jump_thunk with other addresses.
namespace twin_00924870 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00924870 (0x00924870) is a single jump to the function at 0x00918760. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00918760, fn_00918760, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00924870(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00918760(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00924870

// auto_jump_thunk_00924900: misc_jump_thunk with other addresses.
namespace twin_00924900 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00924900 (0x00924900) is a single jump to the function at 0x00918790. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00918790, fn_00918790, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00924900(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00918790(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00924900

// auto_jump_thunk_00924b70: misc_jump_thunk with other addresses.
namespace twin_00924b70 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00924b70 (0x00924b70) is a single jump to the function at 0x009360c0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009360c0, fn_009360c0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00924b70(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009360c0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00924b70

// auto_jump_thunk_00924c00: misc_jump_thunk with other addresses.
namespace twin_00924c00 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00924c00 (0x00924c00) is a single jump to the function at 0x009354c0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009354c0, fn_009354c0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00924c00(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009354c0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00924c00

// auto_jump_thunk_009287c0: misc_jump_thunk with other addresses.
namespace twin_009287c0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009287c0 (0x009287c0) is a single jump to the function at 0x00938b20. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00938b20, fn_00938b20, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009287c0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00938b20(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009287c0

// auto_jump_thunk_0094f960: misc_jump_thunk with other addresses.
namespace twin_0094f960 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0094f960 (0x0094f960) is a single jump to the function at 0x0094f410. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0094f410, fn_0094f410, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0094f960(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0094f410(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0094f960

// auto_jump_thunk_0095db10: misc_jump_thunk with other addresses.
namespace twin_0095db10 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0095db10 (0x0095db10) is a single jump to the function at 0x0095df10. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0095df10, fn_0095df10, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0095db10(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0095df10(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0095db10

// auto_jump_thunk_0095db20: misc_jump_thunk with other addresses.
namespace twin_0095db20 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0095db20 (0x0095db20) is a single jump to the function at 0x0095e270. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0095e270, fn_0095e270, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0095db20(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0095e270(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0095db20

// auto_jump_thunk_0095db40: misc_jump_thunk with other addresses.
namespace twin_0095db40 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0095db40 (0x0095db40) is a single jump to the function at 0x0095de70. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0095de70, fn_0095de70, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0095db40(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0095de70(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0095db40

// auto_jump_thunk_0095dd10: misc_jump_thunk with other addresses.
namespace twin_0095dd10 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0095dd10 (0x0095dd10) is a single jump to the function at 0x009834e0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009834e0, fn_009834e0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0095dd10(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009834e0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0095dd10

// auto_jump_thunk_009643d0: misc_jump_thunk with other addresses.
namespace twin_009643d0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009643d0 (0x009643d0) is a single jump to the function at 0x00964890. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00964890, fn_00964890, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009643d0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00964890(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009643d0

// auto_jump_thunk_0096b9b0: misc_jump_thunk with other addresses.
namespace twin_0096b9b0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0096b9b0 (0x0096b9b0) is a single jump to the function at 0x0098bf60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0098bf60, fn_0098bf60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0096b9b0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0098bf60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0096b9b0

// auto_jump_thunk_009735c0: misc_jump_thunk with other addresses.
namespace twin_009735c0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009735c0 (0x009735c0) is a single jump to the function at 0x00987a00. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00987a00, fn_00987a00, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009735c0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00987a00(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009735c0

// auto_jump_thunk_00973750: misc_jump_thunk with other addresses.
namespace twin_00973750 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00973750 (0x00973750) is a single jump to the function at 0x00978670. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00978670, fn_00978670, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00973750(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00978670(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00973750

// auto_jump_thunk_009739c0: misc_jump_thunk with other addresses.
namespace twin_009739c0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009739c0 (0x009739c0) is a single jump to the function at 0x00998ac0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00998ac0, fn_00998ac0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009739c0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00998ac0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009739c0

// auto_jump_thunk_009aa3b0: misc_jump_thunk with other addresses.
namespace twin_009aa3b0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009aa3b0 (0x009aa3b0) is a single jump to the function at 0x009ade00. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009ade00, fn_009ade00, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009aa3b0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009ade00(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009aa3b0

// auto_jump_thunk_009ac500: misc_jump_thunk with other addresses.
namespace twin_009ac500 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009ac500 (0x009ac500) is a single jump to the function at 0x009b1560. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009b1560, fn_009b1560, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009ac500(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009b1560(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009ac500

// auto_jump_thunk_009acf40: misc_jump_thunk with other addresses.
namespace twin_009acf40 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009acf40 (0x009acf40) is a single jump to the function at 0x009b28e0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009b28e0, fn_009b28e0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009acf40(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009b28e0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009acf40

// auto_jump_thunk_009acf50: misc_jump_thunk with other addresses.
namespace twin_009acf50 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009acf50 (0x009acf50) is a single jump to the function at 0x02918140. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x02918140, fn_02918140, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009acf50(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_02918140(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009acf50

// auto_jump_thunk_009b1420: misc_jump_thunk with other addresses.
namespace twin_009b1420 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009b1420 (0x009b1420) is a single jump to the function at 0x009b18e0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009b18e0, fn_009b18e0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009b1420(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009b18e0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009b1420

// auto_jump_thunk_009b33f0: misc_jump_thunk with other addresses.
namespace twin_009b33f0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009b33f0 (0x009b33f0) is a single jump to the function at 0x009b8240. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009b8240, fn_009b8240, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009b33f0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009b8240(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009b33f0

// auto_jump_thunk_009b36f0: misc_jump_thunk with other addresses.
namespace twin_009b36f0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009b36f0 (0x009b36f0) is a single jump to the function at 0x009c7a40. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009c7a40, fn_009c7a40, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009b36f0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009c7a40(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009b36f0

// auto_jump_thunk_009b3f20: misc_jump_thunk with other addresses.
namespace twin_009b3f20 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009b3f20 (0x009b3f20) is a single jump to the function at 0x009b9130. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009b9130, fn_009b9130, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009b3f20(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009b9130(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009b3f20

// auto_jump_thunk_009b3f50: misc_jump_thunk with other addresses.
namespace twin_009b3f50 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009b3f50 (0x009b3f50) is a single jump to the function at 0x009b9140. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009b9140, fn_009b9140, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009b3f50(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009b9140(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009b3f50

// auto_jump_thunk_009b4130: misc_jump_thunk with other addresses.
namespace twin_009b4130 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009b4130 (0x009b4130) is a single jump to the function at 0x009c7240. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009c7240, fn_009c7240, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009b4130(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009c7240(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009b4130

// auto_jump_thunk_009b4520: misc_jump_thunk with other addresses.
namespace twin_009b4520 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009b4520 (0x009b4520) is a single jump to the function at 0x009ca210. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009ca210, fn_009ca210, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009b4520(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009ca210(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009b4520

// auto_jump_thunk_009b47f0: misc_jump_thunk with other addresses.
namespace twin_009b47f0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009b47f0 (0x009b47f0) is a single jump to the function at 0x009b50a0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009b50a0, fn_009b50a0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009b47f0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009b50a0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009b47f0

// auto_jump_thunk_009b4ad0: misc_jump_thunk with other addresses.
namespace twin_009b4ad0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009b4ad0 (0x009b4ad0) is a single jump to the function at 0x009cdf40. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009cdf40, fn_009cdf40, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009b4ad0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009cdf40(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009b4ad0

// auto_jump_thunk_009b4ce0: misc_jump_thunk with other addresses.
namespace twin_009b4ce0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009b4ce0 (0x009b4ce0) is a single jump to the function at 0x009b5970. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009b5970, fn_009b5970, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009b4ce0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009b5970(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009b4ce0

// auto_jump_thunk_009b5fa0: misc_jump_thunk with other addresses.
namespace twin_009b5fa0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009b5fa0 (0x009b5fa0) is a single jump to the function at 0x009cf620. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009cf620, fn_009cf620, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009b5fa0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009cf620(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009b5fa0

// auto_jump_thunk_009b60e0: misc_jump_thunk with other addresses.
namespace twin_009b60e0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009b60e0 (0x009b60e0) is a single jump to the function at 0x009c4850. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009c4850, fn_009c4850, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009b60e0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009c4850(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009b60e0

// auto_jump_thunk_009b6110: misc_jump_thunk with other addresses.
namespace twin_009b6110 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009b6110 (0x009b6110) is a single jump to the function at 0x009c4860. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009c4860, fn_009c4860, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009b6110(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009c4860(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009b6110

// auto_jump_thunk_009b6140: misc_jump_thunk with other addresses.
namespace twin_009b6140 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009b6140 (0x009b6140) is a single jump to the function at 0x009c4870. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009c4870, fn_009c4870, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009b6140(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009c4870(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009b6140

// auto_jump_thunk_009b66b0: misc_jump_thunk with other addresses.
namespace twin_009b66b0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009b66b0 (0x009b66b0) is a single jump to the function at 0x009cc100. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009cc100, fn_009cc100, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009b66b0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009cc100(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009b66b0

// auto_jump_thunk_009b6b50: misc_jump_thunk with other addresses.
namespace twin_009b6b50 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009b6b50 (0x009b6b50) is a single jump to the function at 0x009d30a0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009d30a0, fn_009d30a0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009b6b50(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009d30a0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009b6b50

// auto_jump_thunk_009b6b70: misc_jump_thunk with other addresses.
namespace twin_009b6b70 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009b6b70 (0x009b6b70) is a single jump to the function at 0x009d0fe0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009d0fe0, fn_009d0fe0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009b6b70(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009d0fe0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009b6b70

// auto_jump_thunk_009b7770: misc_jump_thunk with other addresses.
namespace twin_009b7770 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009b7770 (0x009b7770) is a single jump to the function at 0x009c91b0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009c91b0, fn_009c91b0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009b7770(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009c91b0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009b7770

// auto_jump_thunk_009b78a0: misc_jump_thunk with other addresses.
namespace twin_009b78a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009b78a0 (0x009b78a0) is a single jump to the function at 0x009d5400. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009d5400, fn_009d5400, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009b78a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009d5400(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009b78a0

// auto_jump_thunk_009b7e70: misc_jump_thunk with other addresses.
namespace twin_009b7e70 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009b7e70 (0x009b7e70) is a single jump to the function at 0x009c8770. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009c8770, fn_009c8770, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009b7e70(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009c8770(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009b7e70

// auto_jump_thunk_009b9eb0: misc_jump_thunk with other addresses.
namespace twin_009b9eb0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009b9eb0 (0x009b9eb0) is a single jump to the function at 0x009cfc70. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009cfc70, fn_009cfc70, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009b9eb0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009cfc70(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009b9eb0

// auto_jump_thunk_009c4270: misc_jump_thunk with other addresses.
namespace twin_009c4270 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009c4270 (0x009c4270) is a single jump to the function at 0x009d9dd0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009d9dd0, fn_009d9dd0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009c4270(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009d9dd0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009c4270

// auto_jump_thunk_009c4500: misc_jump_thunk with other addresses.
namespace twin_009c4500 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009c4500 (0x009c4500) is a single jump to the function at 0x009ce460. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009ce460, fn_009ce460, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009c4500(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009ce460(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009c4500

// auto_jump_thunk_009c4620: misc_jump_thunk with other addresses.
namespace twin_009c4620 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009c4620 (0x009c4620) is a single jump to the function at 0x009cc9d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009cc9d0, fn_009cc9d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009c4620(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009cc9d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009c4620

// auto_jump_thunk_009c4740: misc_jump_thunk with other addresses.
namespace twin_009c4740 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009c4740 (0x009c4740) is a single jump to the function at 0x009d7600. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009d7600, fn_009d7600, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009c4740(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009d7600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009c4740

// auto_jump_thunk_009c62d0: misc_jump_thunk with other addresses.
namespace twin_009c62d0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009c62d0 (0x009c62d0) is a single jump to the function at 0x009db070. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009db070, fn_009db070, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009c62d0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009db070(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009c62d0

// auto_jump_thunk_009c63f0: misc_jump_thunk with other addresses.
namespace twin_009c63f0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009c63f0 (0x009c63f0) is a single jump to the function at 0x009c61f0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009c61f0, fn_009c61f0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009c63f0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009c61f0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009c63f0

// auto_jump_thunk_009c6730: misc_jump_thunk with other addresses.
namespace twin_009c6730 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009c6730 (0x009c6730) is a single jump to the function at 0x009d7b50. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009d7b50, fn_009d7b50, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009c6730(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009d7b50(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009c6730

// auto_jump_thunk_009cd5c0: misc_jump_thunk with other addresses.
namespace twin_009cd5c0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009cd5c0 (0x009cd5c0) is a single jump to the function at 0x009ceaf0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009ceaf0, fn_009ceaf0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009cd5c0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009ceaf0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009cd5c0

// auto_jump_thunk_009dec00: misc_jump_thunk with other addresses.
namespace twin_009dec00 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009dec00 (0x009dec00) is a single jump to the function at 0x009e9f20. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009e9f20, fn_009e9f20, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009dec00(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009e9f20(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009dec00

// auto_jump_thunk_009e71d0: misc_jump_thunk with other addresses.
namespace twin_009e71d0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009e71d0 (0x009e71d0) is a single jump to the function at 0x009eb390. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009eb390, fn_009eb390, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009e71d0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009eb390(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009e71d0

// auto_jump_thunk_009e8c30: misc_jump_thunk with other addresses.
namespace twin_009e8c30 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009e8c30 (0x009e8c30) is a single jump to the function at 0x009edd40. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009edd40, fn_009edd40, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009e8c30(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009edd40(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009e8c30

// auto_jump_thunk_009e9b40: misc_jump_thunk with other addresses.
namespace twin_009e9b40 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009e9b40 (0x009e9b40) is a single jump to the function at 0x009ee9f0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009ee9f0, fn_009ee9f0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009e9b40(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009ee9f0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009e9b40

// auto_jump_thunk_009f0270: misc_jump_thunk with other addresses.
namespace twin_009f0270 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009f0270 (0x009f0270) is a single jump to the function at 0x009f27c0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009f27c0, fn_009f27c0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009f0270(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009f27c0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009f0270

// auto_jump_thunk_009f0360: misc_jump_thunk with other addresses.
namespace twin_009f0360 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009f0360 (0x009f0360) is a single jump to the function at 0x009f3660. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009f3660, fn_009f3660, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009f0360(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009f3660(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009f0360

// auto_jump_thunk_009f0680: misc_jump_thunk with other addresses.
namespace twin_009f0680 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009f0680 (0x009f0680) is a single jump to the function at 0x00a22380. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00a22380, fn_00a22380, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009f0680(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00a22380(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009f0680

// auto_jump_thunk_009f07b0: misc_jump_thunk with other addresses.
namespace twin_009f07b0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009f07b0 (0x009f07b0) is a single jump to the function at 0x009f0c60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009f0c60, fn_009f0c60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009f07b0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009f0c60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009f07b0

// auto_jump_thunk_009f1580: misc_jump_thunk with other addresses.
namespace twin_009f1580 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009f1580 (0x009f1580) is a single jump to the function at 0x00a14cb0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00a14cb0, fn_00a14cb0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009f1580(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00a14cb0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009f1580

// auto_jump_thunk_009f16a0: misc_jump_thunk with other addresses.
namespace twin_009f16a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009f16a0 (0x009f16a0) is a single jump to the function at 0x009fdfb0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009fdfb0, fn_009fdfb0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009f16a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009fdfb0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009f16a0

// auto_jump_thunk_009f17c0: misc_jump_thunk with other addresses.
namespace twin_009f17c0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009f17c0 (0x009f17c0) is a single jump to the function at 0x00a2bfb0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00a2bfb0, fn_00a2bfb0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009f17c0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00a2bfb0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009f17c0

// auto_jump_thunk_009f2960: misc_jump_thunk with other addresses.
namespace twin_009f2960 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009f2960 (0x009f2960) is a single jump to the function at 0x00a3b8b0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00a3b8b0, fn_00a3b8b0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009f2960(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00a3b8b0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009f2960

// auto_jump_thunk_009f2aa0: misc_jump_thunk with other addresses.
namespace twin_009f2aa0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009f2aa0 (0x009f2aa0) is a single jump to the function at 0x00a208f0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00a208f0, fn_00a208f0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009f2aa0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00a208f0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009f2aa0

// auto_jump_thunk_009f2e60: misc_jump_thunk with other addresses.
namespace twin_009f2e60 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009f2e60 (0x009f2e60) is a single jump to the function at 0x009f2330. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009f2330, fn_009f2330, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009f2e60(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009f2330(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009f2e60

// auto_jump_thunk_009f3380: misc_jump_thunk with other addresses.
namespace twin_009f3380 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_009f3380 (0x009f3380) is a single jump to the function at 0x00a1dfb0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00a1dfb0, fn_00a1dfb0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_009f3380(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00a1dfb0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_009f3380

// auto_jump_thunk_00a06780: misc_jump_thunk with other addresses.
namespace twin_00a06780 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00a06780 (0x00a06780) is a single jump to the function at 0x00a1c0c0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00a1c0c0, fn_00a1c0c0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00a06780(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00a1c0c0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00a06780

// auto_jump_thunk_00a0cc00: misc_jump_thunk with other addresses.
namespace twin_00a0cc00 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00a0cc00 (0x00a0cc00) is a single jump to the function at 0x00a2d620. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00a2d620, fn_00a2d620, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00a0cc00(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00a2d620(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00a0cc00

// auto_jump_thunk_00a0ced0: misc_jump_thunk with other addresses.
namespace twin_00a0ced0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00a0ced0 (0x00a0ced0) is a single jump to the function at 0x00a3e2f0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00a3e2f0, fn_00a3e2f0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00a0ced0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00a3e2f0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00a0ced0

// auto_jump_thunk_00a16ac0: misc_jump_thunk with other addresses.
namespace twin_00a16ac0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00a16ac0 (0x00a16ac0) is a single jump to the function at 0x00a2a020. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00a2a020, fn_00a2a020, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00a16ac0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00a2a020(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00a16ac0

// auto_jump_thunk_00a19800: misc_jump_thunk with other addresses.
namespace twin_00a19800 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00a19800 (0x00a19800) is a single jump to the function at 0x00a3fde0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00a3fde0, fn_00a3fde0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00a19800(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00a3fde0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00a19800

// auto_jump_thunk_00a1e170: misc_jump_thunk with other addresses.
namespace twin_00a1e170 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00a1e170 (0x00a1e170) is a single jump to the function at 0x00a2ea00. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00a2ea00, fn_00a2ea00, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00a1e170(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00a2ea00(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00a1e170

// auto_jump_thunk_00a23930: misc_jump_thunk with other addresses.
namespace twin_00a23930 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00a23930 (0x00a23930) is a single jump to the function at 0x00a3d4c0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00a3d4c0, fn_00a3d4c0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00a23930(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00a3d4c0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00a23930

// auto_jump_thunk_00a379e0: misc_jump_thunk with other addresses.
namespace twin_00a379e0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00a379e0 (0x00a379e0) is a single jump to the function at 0x00a378d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00a378d0, fn_00a378d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00a379e0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00a378d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00a379e0

// auto_jump_thunk_00a37b00: misc_jump_thunk with other addresses.
namespace twin_00a37b00 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00a37b00 (0x00a37b00) is a single jump to the function at 0x00a379f0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00a379f0, fn_00a379f0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00a37b00(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00a379f0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00a37b00

// auto_jump_thunk_00a424b0: misc_jump_thunk with other addresses.
namespace twin_00a424b0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00a424b0 (0x00a424b0) is a single jump to the function at 0x00a34010. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00a34010, fn_00a34010, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00a424b0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00a34010(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00a424b0

// auto_jump_thunk_00a43e60: misc_jump_thunk with other addresses.
namespace twin_00a43e60 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00a43e60 (0x00a43e60) is a single jump to the function at 0x00a6a300. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00a6a300, fn_00a6a300, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00a43e60(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00a6a300(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00a43e60

// auto_jump_thunk_00a67960: misc_jump_thunk with other addresses.
namespace twin_00a67960 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00a67960 (0x00a67960) is a single jump to the function at 0x00a7bef0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00a7bef0, fn_00a7bef0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00a67960(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00a7bef0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00a67960

// auto_jump_thunk_00a6be00: misc_jump_thunk with other addresses.
namespace twin_00a6be00 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00a6be00 (0x00a6be00) is a single jump to the function at 0x00a6a760. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00a6a760, fn_00a6a760, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00a6be00(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00a6a760(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00a6be00

// auto_jump_thunk_00a7ba40: misc_jump_thunk with other addresses.
namespace twin_00a7ba40 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00a7ba40 (0x00a7ba40) is a single jump to the function at 0x00a89fd0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00a89fd0, fn_00a89fd0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00a7ba40(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00a89fd0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00a7ba40

// auto_jump_thunk_00a7ba60: misc_jump_thunk with other addresses.
namespace twin_00a7ba60 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00a7ba60 (0x00a7ba60) is a single jump to the function at 0x00a8a030. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00a8a030, fn_00a8a030, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00a7ba60(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00a8a030(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00a7ba60

// auto_jump_thunk_00a7ba70: misc_jump_thunk with other addresses.
namespace twin_00a7ba70 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00a7ba70 (0x00a7ba70) is a single jump to the function at 0x00a8a040. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00a8a040, fn_00a8a040, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00a7ba70(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00a8a040(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00a7ba70

// auto_jump_thunk_00a7bbe0: misc_jump_thunk with other addresses.
namespace twin_00a7bbe0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00a7bbe0 (0x00a7bbe0) is a single jump to the function at 0x009b28e0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009b28e0, fn_009b28e0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00a7bbe0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009b28e0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00a7bbe0

// auto_jump_thunk_00a815a0: misc_jump_thunk with other addresses.
namespace twin_00a815a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00a815a0 (0x00a815a0) is a single jump to the function at 0x009b28e0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x009b28e0, fn_009b28e0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00a815a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009b28e0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00a815a0

// auto_jump_thunk_00a8bb00: misc_jump_thunk with other addresses.
namespace twin_00a8bb00 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00a8bb00 (0x00a8bb00) is a single jump to the function at 0x00a8e9a0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00a8e9a0, fn_00a8e9a0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00a8bb00(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00a8e9a0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00a8bb00

// auto_jump_thunk_00a8bb30: misc_jump_thunk with other addresses.
namespace twin_00a8bb30 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00a8bb30 (0x00a8bb30) is a single jump to the function at 0x00a8e9a0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00a8e9a0, fn_00a8e9a0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00a8bb30(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00a8e9a0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00a8bb30

// auto_jump_thunk_00a90160: misc_jump_thunk with other addresses.
namespace twin_00a90160 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00a90160 (0x00a90160) is a single jump to the function at 0x00a988b0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00a988b0, fn_00a988b0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00a90160(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00a988b0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00a90160

// auto_jump_thunk_00a90f30: misc_jump_thunk with other addresses.
namespace twin_00a90f30 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00a90f30 (0x00a90f30) is a single jump to the function at 0x00a96870. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00a96870, fn_00a96870, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00a90f30(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00a96870(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00a90f30

// auto_jump_thunk_00a913a0: misc_jump_thunk with other addresses.
namespace twin_00a913a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00a913a0 (0x00a913a0) is a single jump to the function at 0x00a93220. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00a93220, fn_00a93220, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00a913a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00a93220(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00a913a0

// auto_jump_thunk_00aa08e0: misc_jump_thunk with other addresses.
namespace twin_00aa08e0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00aa08e0 (0x00aa08e0) is a single jump to the function at 0x00ac9d90. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ac9d90, fn_00ac9d90, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00aa08e0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ac9d90(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00aa08e0

// auto_jump_thunk_00aa1e60: misc_jump_thunk with other addresses.
namespace twin_00aa1e60 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00aa1e60 (0x00aa1e60) is a single jump to the function at 0x00836830. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_00aa1e60(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00836830(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00aa1e60

// auto_jump_thunk_00aa1e70: misc_jump_thunk with other addresses.
namespace twin_00aa1e70 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00aa1e70 (0x00aa1e70) is a single jump to the function at 0x00836840. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_00aa1e70(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00836840(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00aa1e70

// auto_jump_thunk_00aa5250: misc_jump_thunk with other addresses.
namespace twin_00aa5250 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00aa5250 (0x00aa5250) is a single jump to the function at 0x00aa7110. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00aa7110, fn_00aa7110, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00aa5250(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00aa7110(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00aa5250

// auto_jump_thunk_00aa8d30: misc_jump_thunk with other addresses.
namespace twin_00aa8d30 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00aa8d30 (0x00aa8d30) is a single jump to the function at 0x00aa92b0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00aa92b0, fn_00aa92b0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00aa8d30(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00aa92b0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00aa8d30

// auto_jump_thunk_00aa8f80: misc_jump_thunk with other addresses.
namespace twin_00aa8f80 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00aa8f80 (0x00aa8f80) is a single jump to the function at 0x00836830. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_00aa8f80(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00836830(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00aa8f80
