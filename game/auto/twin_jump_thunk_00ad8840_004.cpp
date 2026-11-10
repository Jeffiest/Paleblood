// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_jump_thunk, in game/misc/jump_thunk.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstdint>
#include "runtime/original.h"

// auto_jump_thunk_00dc75c0: misc_jump_thunk with other addresses.
namespace twin_00dc75c0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00dc75c0 (0x00dc75c0) is a single jump to the function at 0x00dcc810. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00dcc810, fn_00dcc810, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00dc75c0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00dcc810(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00dc75c0

// auto_jump_thunk_00dfbc50: misc_jump_thunk with other addresses.
namespace twin_00dfbc50 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00dfbc50 (0x00dfbc50) is a single jump to the function at 0x00df08b0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00df08b0, fn_00df08b0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00dfbc50(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00df08b0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00dfbc50

// auto_jump_thunk_00dfe400: misc_jump_thunk with other addresses.
namespace twin_00dfe400 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00dfe400 (0x00dfe400) is a single jump to the function at 0x00de6970. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00de6970, fn_00de6970, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00dfe400(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00de6970(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00dfe400

// auto_jump_thunk_00dfe720: misc_jump_thunk with other addresses.
namespace twin_00dfe720 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00dfe720 (0x00dfe720) is a single jump to the function at 0x00e372e0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e372e0, fn_00e372e0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00dfe720(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e372e0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00dfe720

// auto_jump_thunk_00e00310: misc_jump_thunk with other addresses.
namespace twin_00e00310 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e00310 (0x00e00310) is a single jump to the function at 0x029c7140. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x029c7140, fn_029c7140, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e00310(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_029c7140(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e00310

// auto_jump_thunk_00e00320: misc_jump_thunk with other addresses.
namespace twin_00e00320 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e00320 (0x00e00320) is a single jump to the function at 0x029c7310. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x029c7310, fn_029c7310, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e00320(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_029c7310(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e00320

// auto_jump_thunk_00e00330: misc_jump_thunk with other addresses.
namespace twin_00e00330 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e00330 (0x00e00330) is a single jump to the function at 0x029c74c0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x029c74c0, fn_029c74c0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e00330(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_029c74c0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e00330

// auto_jump_thunk_00e00340: misc_jump_thunk with other addresses.
namespace twin_00e00340 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e00340 (0x00e00340) is a single jump to the function at 0x029c7670. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x029c7670, fn_029c7670, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e00340(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_029c7670(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e00340

// auto_jump_thunk_00e00350: misc_jump_thunk with other addresses.
namespace twin_00e00350 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e00350 (0x00e00350) is a single jump to the function at 0x029c7830. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x029c7830, fn_029c7830, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e00350(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_029c7830(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e00350

// auto_jump_thunk_00e00360: misc_jump_thunk with other addresses.
namespace twin_00e00360 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e00360 (0x00e00360) is a single jump to the function at 0x029c79d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x029c79d0, fn_029c79d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e00360(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_029c79d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e00360

// auto_jump_thunk_00e00460: misc_jump_thunk with other addresses.
namespace twin_00e00460 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e00460 (0x00e00460) is a single jump to the function at 0x029c6700. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x029c6700, fn_029c6700, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e00460(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_029c6700(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e00460

// auto_jump_thunk_00e00470: misc_jump_thunk with other addresses.
namespace twin_00e00470 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e00470 (0x00e00470) is a single jump to the function at 0x029c68d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x029c68d0, fn_029c68d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e00470(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_029c68d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e00470

// auto_jump_thunk_00e00480: misc_jump_thunk with other addresses.
namespace twin_00e00480 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e00480 (0x00e00480) is a single jump to the function at 0x029c6a80. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x029c6a80, fn_029c6a80, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e00480(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_029c6a80(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e00480

// auto_jump_thunk_00e00490: misc_jump_thunk with other addresses.
namespace twin_00e00490 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e00490 (0x00e00490) is a single jump to the function at 0x029c8590. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x029c8590, fn_029c8590, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e00490(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_029c8590(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e00490

// auto_jump_thunk_00e004a0: misc_jump_thunk with other addresses.
namespace twin_00e004a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e004a0 (0x00e004a0) is a single jump to the function at 0x029c8770. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x029c8770, fn_029c8770, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e004a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_029c8770(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e004a0

// auto_jump_thunk_00e004b0: misc_jump_thunk with other addresses.
namespace twin_00e004b0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e004b0 (0x00e004b0) is a single jump to the function at 0x029c8940. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x029c8940, fn_029c8940, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e004b0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_029c8940(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e004b0

// auto_jump_thunk_00e00ab0: misc_jump_thunk with other addresses.
namespace twin_00e00ab0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e00ab0 (0x00e00ab0) is a single jump to the function at 0x00e40880. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e40880, fn_00e40880, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e00ab0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e40880(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e00ab0

// auto_jump_thunk_00e00f20: misc_jump_thunk with other addresses.
namespace twin_00e00f20 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e00f20 (0x00e00f20) is a single jump to the function at 0x00dfafe0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00dfafe0, fn_00dfafe0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e00f20(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00dfafe0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e00f20

// auto_jump_thunk_00e01090: misc_jump_thunk with other addresses.
namespace twin_00e01090 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e01090 (0x00e01090) is a single jump to the function at 0x00e59f30. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e59f30, fn_00e59f30, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e01090(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e59f30(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e01090

// auto_jump_thunk_00e012b0: misc_jump_thunk with other addresses.
namespace twin_00e012b0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e012b0 (0x00e012b0) is a single jump to the function at 0x00e012c0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e012c0, fn_00e012c0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e012b0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e012c0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e012b0

// auto_jump_thunk_00e016b0: misc_jump_thunk with other addresses.
namespace twin_00e016b0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e016b0 (0x00e016b0) is a single jump to the function at 0x00e55860. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e55860, fn_00e55860, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e016b0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e55860(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e016b0

// auto_jump_thunk_00e01a40: misc_jump_thunk with other addresses.
namespace twin_00e01a40 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e01a40 (0x00e01a40) is a single jump to the function at 0x00e55570. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e55570, fn_00e55570, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e01a40(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e55570(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e01a40

// auto_jump_thunk_00e01a50: misc_jump_thunk with other addresses.
namespace twin_00e01a50 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e01a50 (0x00e01a50) is a single jump to the function at 0x00dfc3c0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00dfc3c0, fn_00dfc3c0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e01a50(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00dfc3c0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e01a50

// auto_jump_thunk_00e03490: misc_jump_thunk with other addresses.
namespace twin_00e03490 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e03490 (0x00e03490) is a single jump to the function at 0x00deac90. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00deac90, fn_00deac90, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e03490(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00deac90(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e03490

// auto_jump_thunk_00e08e90: misc_jump_thunk with other addresses.
namespace twin_00e08e90 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e08e90 (0x00e08e90) is a single jump to the function at 0x029cce10. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x029cce10, fn_029cce10, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e08e90(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_029cce10(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e08e90

// auto_jump_thunk_00e096a0: misc_jump_thunk with other addresses.
namespace twin_00e096a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e096a0 (0x00e096a0) is a single jump to the function at 0x029ccc10. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x029ccc10, fn_029ccc10, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e096a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_029ccc10(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e096a0

// auto_jump_thunk_00e1a830: misc_jump_thunk with other addresses.
namespace twin_00e1a830 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e1a830 (0x00e1a830) is a single jump to the function at 0x00e1a840. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e1a840, fn_00e1a840, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e1a830(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e1a840(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e1a830

// auto_jump_thunk_00e24a90: misc_jump_thunk with other addresses.
namespace twin_00e24a90 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e24a90 (0x00e24a90) is a single jump to the function at 0x00e24790. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e24790, fn_00e24790, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e24a90(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e24790(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e24a90

// auto_jump_thunk_00e28be0: misc_jump_thunk with other addresses.
namespace twin_00e28be0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e28be0 (0x00e28be0) is a single jump to the function at 0x00e24790. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e24790, fn_00e24790, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e28be0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e24790(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e28be0

// auto_jump_thunk_00e2e640: misc_jump_thunk with other addresses.
namespace twin_00e2e640 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e2e640 (0x00e2e640) is a single jump to the function at 0x00df55b0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00df55b0, fn_00df55b0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e2e640(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00df55b0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e2e640

// auto_jump_thunk_00e2e660: misc_jump_thunk with other addresses.
namespace twin_00e2e660 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e2e660 (0x00e2e660) is a single jump to the function at 0x00deab20. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00deab20, fn_00deab20, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e2e660(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00deab20(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e2e660

// auto_jump_thunk_00e2e670: misc_jump_thunk with other addresses.
namespace twin_00e2e670 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e2e670 (0x00e2e670) is a single jump to the function at 0x00df57c0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00df57c0, fn_00df57c0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e2e670(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00df57c0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e2e670

// auto_jump_thunk_00e2e8a0: misc_jump_thunk with other addresses.
namespace twin_00e2e8a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e2e8a0 (0x00e2e8a0) is a single jump to the function at 0x00e2e680. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e2e680, fn_00e2e680, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e2e8a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e2e680(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e2e8a0

// auto_jump_thunk_00e2ed20: misc_jump_thunk with other addresses.
namespace twin_00e2ed20 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e2ed20 (0x00e2ed20) is a single jump to the function at 0x00e2e8b0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e2e8b0, fn_00e2e8b0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e2ed20(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e2e8b0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e2ed20

// auto_jump_thunk_00e2f3f0: misc_jump_thunk with other addresses.
namespace twin_00e2f3f0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e2f3f0 (0x00e2f3f0) is a single jump to the function at 0x00e2ed30. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e2ed30, fn_00e2ed30, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e2f3f0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e2ed30(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e2f3f0

// auto_jump_thunk_00e2f770: misc_jump_thunk with other addresses.
namespace twin_00e2f770 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e2f770 (0x00e2f770) is a single jump to the function at 0x00e2f400. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e2f400, fn_00e2f400, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e2f770(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e2f400(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e2f770

// auto_jump_thunk_00e2fb80: misc_jump_thunk with other addresses.
namespace twin_00e2fb80 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e2fb80 (0x00e2fb80) is a single jump to the function at 0x00e2f780. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e2f780, fn_00e2f780, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e2fb80(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e2f780(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e2fb80

// auto_jump_thunk_00e43150: misc_jump_thunk with other addresses.
namespace twin_00e43150 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e43150 (0x00e43150) is a single jump to the function at 0x029cca00. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x029cca00, fn_029cca00, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e43150(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_029cca00(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e43150

// auto_jump_thunk_00e43bf0: misc_jump_thunk with other addresses.
namespace twin_00e43bf0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e43bf0 (0x00e43bf0) is a single jump to the function at 0x029cd030. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x029cd030, fn_029cd030, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e43bf0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_029cd030(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e43bf0

// auto_jump_thunk_00e43f60: misc_jump_thunk with other addresses.
namespace twin_00e43f60 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e43f60 (0x00e43f60) is a single jump to the function at 0x029cb140. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x029cb140, fn_029cb140, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e43f60(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_029cb140(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e43f60

// auto_jump_thunk_00e4cc00: misc_jump_thunk with other addresses.
namespace twin_00e4cc00 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e4cc00 (0x00e4cc00) is a single jump to the function at 0x00e543a0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e543a0, fn_00e543a0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e4cc00(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e543a0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e4cc00

// auto_jump_thunk_00e4cc70: misc_jump_thunk with other addresses.
namespace twin_00e4cc70 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e4cc70 (0x00e4cc70) is a single jump to the function at 0x00df4800. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00df4800, fn_00df4800, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e4cc70(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00df4800(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e4cc70

// auto_jump_thunk_00e4ce10: misc_jump_thunk with other addresses.
namespace twin_00e4ce10 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e4ce10 (0x00e4ce10) is a single jump to the function at 0x00e57250. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e57250, fn_00e57250, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e4ce10(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e57250(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e4ce10

// auto_jump_thunk_00e4d210: misc_jump_thunk with other addresses.
namespace twin_00e4d210 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e4d210 (0x00e4d210) is a single jump to the function at 0x00e53b50. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e53b50, fn_00e53b50, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e4d210(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e53b50(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e4d210

// auto_jump_thunk_00e50c10: misc_jump_thunk with other addresses.
namespace twin_00e50c10 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e50c10 (0x00e50c10) is a single jump to the function at 0x00e5ba90. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e5ba90, fn_00e5ba90, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e50c10(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e5ba90(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e50c10

// auto_jump_thunk_00e53710: misc_jump_thunk with other addresses.
namespace twin_00e53710 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e53710 (0x00e53710) is a single jump to the function at 0x00df49b0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00df49b0, fn_00df49b0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e53710(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00df49b0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e53710

// auto_jump_thunk_00e53b40: misc_jump_thunk with other addresses.
namespace twin_00e53b40 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e53b40 (0x00e53b40) is a single jump to the function at 0x00e53720. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e53720, fn_00e53720, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e53b40(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e53720(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e53b40

// auto_jump_thunk_00e54250: misc_jump_thunk with other addresses.
namespace twin_00e54250 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e54250 (0x00e54250) is a single jump to the function at 0x00df3820. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00df3820, fn_00df3820, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e54250(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00df3820(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e54250

// auto_jump_thunk_00e54390: misc_jump_thunk with other addresses.
namespace twin_00e54390 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e54390 (0x00e54390) is a single jump to the function at 0x00e54520. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e54520, fn_00e54520, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e54390(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e54520(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e54390

// auto_jump_thunk_00e54b80: misc_jump_thunk with other addresses.
namespace twin_00e54b80 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e54b80 (0x00e54b80) is a single jump to the function at 0x00e54970. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e54970, fn_00e54970, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e54b80(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e54970(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e54b80

// auto_jump_thunk_00e54e10: misc_jump_thunk with other addresses.
namespace twin_00e54e10 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e54e10 (0x00e54e10) is a single jump to the function at 0x00e54b90. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e54b90, fn_00e54b90, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e54e10(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e54b90(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e54e10

// auto_jump_thunk_00e55cc0: misc_jump_thunk with other addresses.
namespace twin_00e55cc0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e55cc0 (0x00e55cc0) is a single jump to the function at 0x00e554c0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e554c0, fn_00e554c0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e55cc0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e554c0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e55cc0

// auto_jump_thunk_00e56820: misc_jump_thunk with other addresses.
namespace twin_00e56820 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e56820 (0x00e56820) is a single jump to the function at 0x00e40080. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e40080, fn_00e40080, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e56820(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e40080(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e56820

// auto_jump_thunk_00e56be0: misc_jump_thunk with other addresses.
namespace twin_00e56be0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e56be0 (0x00e56be0) is a single jump to the function at 0x00e56bf0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e56bf0, fn_00e56bf0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e56be0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e56bf0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e56be0

// auto_jump_thunk_00e57990: misc_jump_thunk with other addresses.
namespace twin_00e57990 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e57990 (0x00e57990) is a single jump to the function at 0x00de6af0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00de6af0, fn_00de6af0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e57990(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00de6af0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e57990

// auto_jump_thunk_00e579a0: misc_jump_thunk with other addresses.
namespace twin_00e579a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e579a0 (0x00e579a0) is a single jump to the function at 0x00de7350. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00de7350, fn_00de7350, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e579a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00de7350(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e579a0

// auto_jump_thunk_00e58420: misc_jump_thunk with other addresses.
namespace twin_00e58420 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e58420 (0x00e58420) is a single jump to the function at 0x00e58230. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e58230, fn_00e58230, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e58420(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e58230(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e58420

// auto_jump_thunk_00e585a0: misc_jump_thunk with other addresses.
namespace twin_00e585a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e585a0 (0x00e585a0) is a single jump to the function at 0x00e58430. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e58430, fn_00e58430, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e585a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e58430(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e585a0

// auto_jump_thunk_00e59940: misc_jump_thunk with other addresses.
namespace twin_00e59940 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e59940 (0x00e59940) is a single jump to the function at 0x00e593d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e593d0, fn_00e593d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e59940(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e593d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e59940

// auto_jump_thunk_00e59950: misc_jump_thunk with other addresses.
namespace twin_00e59950 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e59950 (0x00e59950) is a single jump to the function at 0x00e41800. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e41800, fn_00e41800, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e59950(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e41800(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e59950

// auto_jump_thunk_00e59960: misc_jump_thunk with other addresses.
namespace twin_00e59960 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e59960 (0x00e59960) is a single jump to the function at 0x00df5f80. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00df5f80, fn_00df5f80, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e59960(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00df5f80(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e59960

// auto_jump_thunk_00e5ad20: misc_jump_thunk with other addresses.
namespace twin_00e5ad20 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e5ad20 (0x00e5ad20) is a single jump to the function at 0x00e5abf0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e5abf0, fn_00e5abf0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e5ad20(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e5abf0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e5ad20

// auto_jump_thunk_00e5b8f0: misc_jump_thunk with other addresses.
namespace twin_00e5b8f0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e5b8f0 (0x00e5b8f0) is a single jump to the function at 0x00df8170. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00df8170, fn_00df8170, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e5b8f0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00df8170(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e5b8f0

// auto_jump_thunk_00e5bda0: misc_jump_thunk with other addresses.
namespace twin_00e5bda0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e5bda0 (0x00e5bda0) is a single jump to the function at 0x00e5b900. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e5b900, fn_00e5b900, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e5bda0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e5b900(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e5bda0

// auto_jump_thunk_00e5bdb0: misc_jump_thunk with other addresses.
namespace twin_00e5bdb0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e5bdb0 (0x00e5bdb0) is a single jump to the function at 0x00e5a6f0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e5a6f0, fn_00e5a6f0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e5bdb0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e5a6f0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e5bdb0

// auto_jump_thunk_00e5c150: misc_jump_thunk with other addresses.
namespace twin_00e5c150 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e5c150 (0x00e5c150) is a single jump to the function at 0x00e5bdc0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e5bdc0, fn_00e5bdc0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e5c150(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e5bdc0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e5c150

// auto_jump_thunk_00e5c270: misc_jump_thunk with other addresses.
namespace twin_00e5c270 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e5c270 (0x00e5c270) is a single jump to the function at 0x00e2b370. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e2b370, fn_00e2b370, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e5c270(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e2b370(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e5c270

// auto_jump_thunk_00e5d020: misc_jump_thunk with other addresses.
namespace twin_00e5d020 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e5d020 (0x00e5d020) is a single jump to the function at 0x00e5cde0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e5cde0, fn_00e5cde0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e5d020(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e5cde0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e5d020

// auto_jump_thunk_00e5d420: misc_jump_thunk with other addresses.
namespace twin_00e5d420 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e5d420 (0x00e5d420) is a single jump to the function at 0x00e5d320. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e5d320, fn_00e5d320, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e5d420(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e5d320(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e5d420

// auto_jump_thunk_00e5de90: misc_jump_thunk with other addresses.
namespace twin_00e5de90 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e5de90 (0x00e5de90) is a single jump to the function at 0x00e5d8f0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e5d8f0, fn_00e5d8f0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e5de90(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e5d8f0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e5de90

// auto_jump_thunk_00e5e040: misc_jump_thunk with other addresses.
namespace twin_00e5e040 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e5e040 (0x00e5e040) is a single jump to the function at 0x00e5dea0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e5dea0, fn_00e5dea0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e5e040(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e5dea0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e5e040

// auto_jump_thunk_00e5e580: misc_jump_thunk with other addresses.
namespace twin_00e5e580 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e5e580 (0x00e5e580) is a single jump to the function at 0x00e5e050. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e5e050, fn_00e5e050, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e5e580(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e5e050(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e5e580

// auto_jump_thunk_00e5e760: misc_jump_thunk with other addresses.
namespace twin_00e5e760 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e5e760 (0x00e5e760) is a single jump to the function at 0x00e5e590. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e5e590, fn_00e5e590, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e5e760(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e5e590(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e5e760

// auto_jump_thunk_00e77780: misc_jump_thunk with other addresses.
namespace twin_00e77780 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e77780 (0x00e77780) is a single jump to the function at 0x00e78230. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e78230, fn_00e78230, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e77780(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e78230(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e77780

// auto_jump_thunk_00e778a0: misc_jump_thunk with other addresses.
namespace twin_00e778a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e778a0 (0x00e778a0) is a single jump to the function at 0x00e7d890. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e7d890, fn_00e7d890, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e778a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e7d890(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e778a0

// auto_jump_thunk_00e7f330: misc_jump_thunk with other addresses.
namespace twin_00e7f330 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e7f330 (0x00e7f330) is a single jump to the function at 0x00e837d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e837d0, fn_00e837d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e7f330(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e837d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e7f330

// auto_jump_thunk_00e7f450: misc_jump_thunk with other addresses.
namespace twin_00e7f450 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e7f450 (0x00e7f450) is a single jump to the function at 0x00e82dd0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e82dd0, fn_00e82dd0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e7f450(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e82dd0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e7f450

// auto_jump_thunk_00e7f660: misc_jump_thunk with other addresses.
namespace twin_00e7f660 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e7f660 (0x00e7f660) is a single jump to the function at 0x00e81160. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e81160, fn_00e81160, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e7f660(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e81160(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e7f660

// auto_jump_thunk_00e7f790: misc_jump_thunk with other addresses.
namespace twin_00e7f790 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e7f790 (0x00e7f790) is a single jump to the function at 0x00e7fd70. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e7fd70, fn_00e7fd70, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e7f790(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e7fd70(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e7f790

// auto_jump_thunk_00e80fd0: misc_jump_thunk with other addresses.
namespace twin_00e80fd0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e80fd0 (0x00e80fd0) is a single jump to the function at 0x00e90790. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e90790, fn_00e90790, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e80fd0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e90790(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e80fd0

// auto_jump_thunk_00e818b0: misc_jump_thunk with other addresses.
namespace twin_00e818b0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e818b0 (0x00e818b0) is a single jump to the function at 0x00e90010. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e90010, fn_00e90010, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e818b0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e90010(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e818b0

// auto_jump_thunk_00e81a00: misc_jump_thunk with other addresses.
namespace twin_00e81a00 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e81a00 (0x00e81a00) is a single jump to the function at 0x00e85920. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e85920, fn_00e85920, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e81a00(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e85920(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e81a00

// auto_jump_thunk_00e81dd0: misc_jump_thunk with other addresses.
namespace twin_00e81dd0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e81dd0 (0x00e81dd0) is a single jump to the function at 0x00e8ea80. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e8ea80, fn_00e8ea80, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e81dd0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e8ea80(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e81dd0

// auto_jump_thunk_00e82f10: misc_jump_thunk with other addresses.
namespace twin_00e82f10 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e82f10 (0x00e82f10) is a single jump to the function at 0x00d629f0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d629f0, fn_00d629f0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e82f10(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d629f0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e82f10

// auto_jump_thunk_00e82f60: misc_jump_thunk with other addresses.
namespace twin_00e82f60 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e82f60 (0x00e82f60) is a single jump to the function at 0x00e92150. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e92150, fn_00e92150, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e82f60(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e92150(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e82f60

// auto_jump_thunk_00e862e0: misc_jump_thunk with other addresses.
namespace twin_00e862e0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e862e0 (0x00e862e0) is a single jump to the function at 0x00e897b0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e897b0, fn_00e897b0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e862e0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e897b0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e862e0

// auto_jump_thunk_00e86920: misc_jump_thunk with other addresses.
namespace twin_00e86920 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e86920 (0x00e86920) is a single jump to the function at 0x00e86eb0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e86eb0, fn_00e86eb0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e86920(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e86eb0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e86920

// auto_jump_thunk_00e87000: misc_jump_thunk with other addresses.
namespace twin_00e87000 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e87000 (0x00e87000) is a single jump to the function at 0x00e87010. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e87010, fn_00e87010, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e87000(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e87010(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e87000

// auto_jump_thunk_00e877b0: misc_jump_thunk with other addresses.
namespace twin_00e877b0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e877b0 (0x00e877b0) is a single jump to the function at 0x00e8d340. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e8d340, fn_00e8d340, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e877b0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e8d340(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e877b0

// auto_jump_thunk_00e87e60: misc_jump_thunk with other addresses.
namespace twin_00e87e60 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e87e60 (0x00e87e60) is a single jump to the function at 0x00e8cd20. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e8cd20, fn_00e8cd20, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e87e60(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e8cd20(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e87e60

// auto_jump_thunk_00e88da0: misc_jump_thunk with other addresses.
namespace twin_00e88da0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e88da0 (0x00e88da0) is a single jump to the function at 0x00e90e50. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e90e50, fn_00e90e50, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e88da0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e90e50(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e88da0

// auto_jump_thunk_00e890e0: misc_jump_thunk with other addresses.
namespace twin_00e890e0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e890e0 (0x00e890e0) is a single jump to the function at 0x00e94510. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00e94510, fn_00e94510, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e890e0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00e94510(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e890e0

// auto_jump_thunk_00e971c0: misc_jump_thunk with other addresses.
namespace twin_00e971c0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e971c0 (0x00e971c0) is a single jump to the function at 0x00ea9400. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ea9400, fn_00ea9400, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e971c0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ea9400(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e971c0

// auto_jump_thunk_00e98450: misc_jump_thunk with other addresses.
namespace twin_00e98450 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e98450 (0x00e98450) is a single jump to the function at 0x00ec4750. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ec4750, fn_00ec4750, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e98450(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ec4750(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e98450

// auto_jump_thunk_00e98480: misc_jump_thunk with other addresses.
namespace twin_00e98480 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e98480 (0x00e98480) is a single jump to the function at 0x00ec4630. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ec4630, fn_00ec4630, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e98480(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ec4630(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e98480

// auto_jump_thunk_00e984b0: misc_jump_thunk with other addresses.
namespace twin_00e984b0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e984b0 (0x00e984b0) is a single jump to the function at 0x00ec4470. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ec4470, fn_00ec4470, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e984b0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ec4470(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e984b0

// auto_jump_thunk_00e984e0: misc_jump_thunk with other addresses.
namespace twin_00e984e0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e984e0 (0x00e984e0) is a single jump to the function at 0x00ec2040. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ec2040, fn_00ec2040, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e984e0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ec2040(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e984e0

// auto_jump_thunk_00e98510: misc_jump_thunk with other addresses.
namespace twin_00e98510 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e98510 (0x00e98510) is a single jump to the function at 0x00ec1e50. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ec1e50, fn_00ec1e50, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e98510(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ec1e50(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e98510

// auto_jump_thunk_00e98540: misc_jump_thunk with other addresses.
namespace twin_00e98540 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e98540 (0x00e98540) is a single jump to the function at 0x00ec3dc0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ec3dc0, fn_00ec3dc0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e98540(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ec3dc0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e98540

// auto_jump_thunk_00e98570: misc_jump_thunk with other addresses.
namespace twin_00e98570 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e98570 (0x00e98570) is a single jump to the function at 0x00ec3b90. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ec3b90, fn_00ec3b90, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e98570(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ec3b90(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e98570

// auto_jump_thunk_00e985a0: misc_jump_thunk with other addresses.
namespace twin_00e985a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e985a0 (0x00e985a0) is a single jump to the function at 0x00ec1f00. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ec1f00, fn_00ec1f00, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e985a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ec1f00(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e985a0

// auto_jump_thunk_00e9f260: misc_jump_thunk with other addresses.
namespace twin_00e9f260 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e9f260 (0x00e9f260) is a single jump to the function at 0x00ecaf90. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ecaf90, fn_00ecaf90, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e9f260(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ecaf90(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e9f260

// auto_jump_thunk_00e9f720: misc_jump_thunk with other addresses.
namespace twin_00e9f720 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00e9f720 (0x00e9f720) is a single jump to the function at 0x00ec58b0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ec58b0, fn_00ec58b0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00e9f720(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ec58b0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00e9f720

// auto_jump_thunk_00ea8f30: misc_jump_thunk with other addresses.
namespace twin_00ea8f30 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00ea8f30 (0x00ea8f30) is a single jump to the function at 0x00ecb140. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ecb140, fn_00ecb140, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00ea8f30(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ecb140(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00ea8f30

// auto_jump_thunk_00eaa420: misc_jump_thunk with other addresses.
namespace twin_00eaa420 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00eaa420 (0x00eaa420) is a single jump to the function at 0x00ec4a30. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ec4a30, fn_00ec4a30, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00eaa420(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ec4a30(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00eaa420

// auto_jump_thunk_00eaccb0: misc_jump_thunk with other addresses.
namespace twin_00eaccb0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00eaccb0 (0x00eaccb0) is a single jump to the function at 0x00836830. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_00eaccb0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00836830(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00eaccb0

// auto_jump_thunk_00eb52e0: misc_jump_thunk with other addresses.
namespace twin_00eb52e0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00eb52e0 (0x00eb52e0) is a single jump to the function at 0x00ecbf30. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ecbf30, fn_00ecbf30, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00eb52e0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ecbf30(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00eb52e0

// auto_jump_thunk_00eb5430: misc_jump_thunk with other addresses.
namespace twin_00eb5430 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00eb5430 (0x00eb5430) is a single jump to the function at 0x00836830. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_00eb5430(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00836830(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00eb5430

// auto_jump_thunk_00eb5440: misc_jump_thunk with other addresses.
namespace twin_00eb5440 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00eb5440 (0x00eb5440) is a single jump to the function at 0x00836840. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_00eb5440(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00836840(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00eb5440

// auto_jump_thunk_00eb5460: misc_jump_thunk with other addresses.
namespace twin_00eb5460 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00eb5460 (0x00eb5460) is a single jump to the function at 0x00836830. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_00eb5460(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00836830(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00eb5460

// auto_jump_thunk_00eb5470: misc_jump_thunk with other addresses.
namespace twin_00eb5470 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00eb5470 (0x00eb5470) is a single jump to the function at 0x00836840. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_00eb5470(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00836840(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00eb5470

// auto_jump_thunk_00eb5490: misc_jump_thunk with other addresses.
namespace twin_00eb5490 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00eb5490 (0x00eb5490) is a single jump to the function at 0x00836830. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_00eb5490(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00836830(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00eb5490

// auto_jump_thunk_00eb54a0: misc_jump_thunk with other addresses.
namespace twin_00eb54a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00eb54a0 (0x00eb54a0) is a single jump to the function at 0x00836840. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_00eb54a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00836840(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00eb54a0

// auto_jump_thunk_00eb54c0: misc_jump_thunk with other addresses.
namespace twin_00eb54c0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00eb54c0 (0x00eb54c0) is a single jump to the function at 0x00836830. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_00eb54c0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00836830(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00eb54c0

// auto_jump_thunk_00eb54d0: misc_jump_thunk with other addresses.
namespace twin_00eb54d0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00eb54d0 (0x00eb54d0) is a single jump to the function at 0x00836840. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_00eb54d0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00836840(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00eb54d0

// auto_jump_thunk_00eb54f0: misc_jump_thunk with other addresses.
namespace twin_00eb54f0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00eb54f0 (0x00eb54f0) is a single jump to the function at 0x00eb8b00. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00eb8b00, fn_00eb8b00, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00eb54f0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00eb8b00(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00eb54f0

// auto_jump_thunk_00eb5500: misc_jump_thunk with other addresses.
namespace twin_00eb5500 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00eb5500 (0x00eb5500) is a single jump to the function at 0x00eb9170. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00eb9170, fn_00eb9170, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00eb5500(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00eb9170(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00eb5500

// auto_jump_thunk_00eb5860: misc_jump_thunk with other addresses.
namespace twin_00eb5860 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00eb5860 (0x00eb5860) is a single jump to the function at 0x00ec1ac0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ec1ac0, fn_00ec1ac0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00eb5860(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ec1ac0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00eb5860

// auto_jump_thunk_00ec4830: misc_jump_thunk with other addresses.
namespace twin_00ec4830 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00ec4830 (0x00ec4830) is a single jump to the function at 0x00ec66b0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ec66b0, fn_00ec66b0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00ec4830(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ec66b0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00ec4830

// auto_jump_thunk_00ecb170: misc_jump_thunk with other addresses.
namespace twin_00ecb170 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00ecb170 (0x00ecb170) is a single jump to the function at 0x00d629f0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d629f0, fn_00d629f0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00ecb170(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d629f0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00ecb170

// auto_jump_thunk_00ecc0a0: misc_jump_thunk with other addresses.
namespace twin_00ecc0a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00ecc0a0 (0x00ecc0a0) is a single jump to the function at 0x00eccdf0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00eccdf0, fn_00eccdf0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00ecc0a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00eccdf0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00ecc0a0

// auto_jump_thunk_00ed0bf0: misc_jump_thunk with other addresses.
namespace twin_00ed0bf0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00ed0bf0 (0x00ed0bf0) is a single jump to the function at 0x00ed2d70. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ed2d70, fn_00ed2d70, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00ed0bf0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ed2d70(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00ed0bf0

// auto_jump_thunk_00ed0de0: misc_jump_thunk with other addresses.
namespace twin_00ed0de0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00ed0de0 (0x00ed0de0) is a single jump to the function at 0x00ed3910. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ed3910, fn_00ed3910, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00ed0de0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ed3910(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00ed0de0

// auto_jump_thunk_00ed1690: misc_jump_thunk with other addresses.
namespace twin_00ed1690 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00ed1690 (0x00ed1690) is a single jump to the function at 0x00ed5310. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ed5310, fn_00ed5310, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00ed1690(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ed5310(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00ed1690

// auto_jump_thunk_00ed1f90: misc_jump_thunk with other addresses.
namespace twin_00ed1f90 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00ed1f90 (0x00ed1f90) is a single jump to the function at 0x00ed6e00. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ed6e00, fn_00ed6e00, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00ed1f90(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ed6e00(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00ed1f90

// auto_jump_thunk_00ed2640: misc_jump_thunk with other addresses.
namespace twin_00ed2640 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00ed2640 (0x00ed2640) is a single jump to the function at 0x00ed78b0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ed78b0, fn_00ed78b0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00ed2640(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ed78b0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00ed2640

// auto_jump_thunk_00ed2ba0: misc_jump_thunk with other addresses.
namespace twin_00ed2ba0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00ed2ba0 (0x00ed2ba0) is a single jump to the function at 0x00ed7f80. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00ed7f80, fn_00ed7f80, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00ed2ba0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00ed7f80(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00ed2ba0

// auto_jump_thunk_00ed30e0: misc_jump_thunk with other addresses.
namespace twin_00ed30e0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00ed30e0 (0x00ed30e0) is a single jump to the function at 0x00d629e0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d629e0, fn_00d629e0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00ed30e0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d629e0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00ed30e0

// auto_jump_thunk_00ed8350: misc_jump_thunk with other addresses.
namespace twin_00ed8350 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00ed8350 (0x00ed8350) is a single jump to the function at 0x00d93bf0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d93bf0, fn_00d93bf0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00ed8350(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d93bf0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00ed8350

// auto_jump_thunk_00ed8370: misc_jump_thunk with other addresses.
namespace twin_00ed8370 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00ed8370 (0x00ed8370) is a single jump to the function at 0x00d93c10. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d93c10, fn_00d93c10, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00ed8370(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d93c10(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00ed8370

// auto_jump_thunk_00ed83f0: misc_jump_thunk with other addresses.
namespace twin_00ed83f0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00ed83f0 (0x00ed83f0) is a single jump to the function at 0x00d93df0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d93df0, fn_00d93df0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00ed83f0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d93df0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00ed83f0

// auto_jump_thunk_00ed8400: misc_jump_thunk with other addresses.
namespace twin_00ed8400 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00ed8400 (0x00ed8400) is a single jump to the function at 0x00d93f30. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d93f30, fn_00d93f30, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00ed8400(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d93f30(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00ed8400

// auto_jump_thunk_00ed8410: misc_jump_thunk with other addresses.
namespace twin_00ed8410 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00ed8410 (0x00ed8410) is a single jump to the function at 0x00d93f40. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00d93f40, fn_00d93f40, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00ed8410(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00d93f40(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00ed8410

// auto_jump_thunk_00efeed0: misc_jump_thunk with other addresses.
namespace twin_00efeed0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00efeed0 (0x00efeed0) is a single jump to the function at 0x009b28e0. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_00efeed0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009b28e0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00efeed0

// auto_jump_thunk_00f20d40: misc_jump_thunk with other addresses.
namespace twin_00f20d40 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f20d40 (0x00f20d40) is a single jump to the function at 0x009b28e0. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_00f20d40(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_009b28e0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f20d40

// auto_jump_thunk_00f21090: misc_jump_thunk with other addresses.
namespace twin_00f21090 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f21090 (0x00f21090) is a single jump to the function at 0x00f4dde0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f4dde0, fn_00f4dde0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f21090(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f4dde0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f21090

// auto_jump_thunk_00f24080: misc_jump_thunk with other addresses.
namespace twin_00f24080 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f24080 (0x00f24080) is a single jump to the function at 0x00f259a0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f259a0, fn_00f259a0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f24080(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f259a0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f24080

// auto_jump_thunk_00f240b0: misc_jump_thunk with other addresses.
namespace twin_00f240b0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f240b0 (0x00f240b0) is a single jump to the function at 0x00f25350. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f25350, fn_00f25350, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f240b0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f25350(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f240b0

// auto_jump_thunk_00f26200: misc_jump_thunk with other addresses.
namespace twin_00f26200 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f26200 (0x00f26200) is a single jump to the function at 0x00f36e00. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f36e00, fn_00f36e00, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f26200(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f36e00(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f26200

// auto_jump_thunk_00f26320: misc_jump_thunk with other addresses.
namespace twin_00f26320 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f26320 (0x00f26320) is a single jump to the function at 0x00f24560. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f24560, fn_00f24560, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f26320(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f24560(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f26320

// auto_jump_thunk_00f26440: misc_jump_thunk with other addresses.
namespace twin_00f26440 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f26440 (0x00f26440) is a single jump to the function at 0x00f84200. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f84200, fn_00f84200, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f26440(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f84200(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f26440

// auto_jump_thunk_00f26470: misc_jump_thunk with other addresses.
namespace twin_00f26470 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f26470 (0x00f26470) is a single jump to the function at 0x00f841f0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f841f0, fn_00f841f0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f26470(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f841f0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f26470

// auto_jump_thunk_00f26810: misc_jump_thunk with other addresses.
namespace twin_00f26810 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f26810 (0x00f26810) is a single jump to the function at 0x00f4d420. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f4d420, fn_00f4d420, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f26810(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f4d420(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f26810

// auto_jump_thunk_00f28010: misc_jump_thunk with other addresses.
namespace twin_00f28010 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f28010 (0x00f28010) is a single jump to the function at 0x00f86c20. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f86c20, fn_00f86c20, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f28010(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f86c20(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f28010

// auto_jump_thunk_00f28130: misc_jump_thunk with other addresses.
namespace twin_00f28130 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f28130 (0x00f28130) is a single jump to the function at 0x00f288f0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f288f0, fn_00f288f0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f28130(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f288f0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f28130

// auto_jump_thunk_00f2aec0: misc_jump_thunk with other addresses.
namespace twin_00f2aec0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f2aec0 (0x00f2aec0) is a single jump to the function at 0x00f21f00. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f21f00, fn_00f21f00, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f2aec0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f21f00(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f2aec0

// auto_jump_thunk_00f2b4d0: misc_jump_thunk with other addresses.
namespace twin_00f2b4d0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f2b4d0 (0x00f2b4d0) is a single jump to the function at 0x00f983b0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f983b0, fn_00f983b0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f2b4d0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f983b0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f2b4d0

// auto_jump_thunk_00f36bb0: misc_jump_thunk with other addresses.
namespace twin_00f36bb0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f36bb0 (0x00f36bb0) is a single jump to the function at 0x00f3fe30. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f3fe30, fn_00f3fe30, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f36bb0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f3fe30(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f36bb0

// auto_jump_thunk_00f36be0: misc_jump_thunk with other addresses.
namespace twin_00f36be0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f36be0 (0x00f36be0) is a single jump to the function at 0x00f3d410. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f3d410, fn_00f3d410, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f36be0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f3d410(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f36be0

// auto_jump_thunk_00f38ee0: misc_jump_thunk with other addresses.
namespace twin_00f38ee0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f38ee0 (0x00f38ee0) is a single jump to the function at 0x00f42d20. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f42d20, fn_00f42d20, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f38ee0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f42d20(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f38ee0

// auto_jump_thunk_00f40c70: misc_jump_thunk with other addresses.
namespace twin_00f40c70 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f40c70 (0x00f40c70) is a single jump to the function at 0x00f934a0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f934a0, fn_00f934a0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f40c70(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f934a0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f40c70

// auto_jump_thunk_00f40fe0: misc_jump_thunk with other addresses.
namespace twin_00f40fe0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f40fe0 (0x00f40fe0) is a single jump to the function at 0x00f327a0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f327a0, fn_00f327a0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f40fe0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f327a0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f40fe0

// auto_jump_thunk_00f41130: misc_jump_thunk with other addresses.
namespace twin_00f41130 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f41130 (0x00f41130) is a single jump to the function at 0x00f91b20. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f91b20, fn_00f91b20, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f41130(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f91b20(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f41130

// auto_jump_thunk_00f41360: misc_jump_thunk with other addresses.
namespace twin_00f41360 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f41360 (0x00f41360) is a single jump to the function at 0x00f28d90. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f28d90, fn_00f28d90, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f41360(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f28d90(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f41360

// auto_jump_thunk_00f41760: misc_jump_thunk with other addresses.
namespace twin_00f41760 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f41760 (0x00f41760) is a single jump to the function at 0x00f770a0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f770a0, fn_00f770a0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f41760(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f770a0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f41760

// auto_jump_thunk_00f42220: misc_jump_thunk with other addresses.
namespace twin_00f42220 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f42220 (0x00f42220) is a single jump to the function at 0x00f299c0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f299c0, fn_00f299c0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f42220(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f299c0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f42220

// auto_jump_thunk_00f43400: misc_jump_thunk with other addresses.
namespace twin_00f43400 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f43400 (0x00f43400) is a single jump to the function at 0x00f8cfe0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f8cfe0, fn_00f8cfe0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f43400(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f8cfe0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f43400

// auto_jump_thunk_00f44d30: misc_jump_thunk with other addresses.
namespace twin_00f44d30 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f44d30 (0x00f44d30) is a single jump to the function at 0x00f44640. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f44640, fn_00f44640, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f44d30(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f44640(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f44d30

// auto_jump_thunk_00f44e00: misc_jump_thunk with other addresses.
namespace twin_00f44e00 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f44e00 (0x00f44e00) is a single jump to the function at 0x00f44890. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f44890, fn_00f44890, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f44e00(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f44890(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f44e00

// auto_jump_thunk_00f485c0: misc_jump_thunk with other addresses.
namespace twin_00f485c0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f485c0 (0x00f485c0) is a single jump to the function at 0x00f37a70. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f37a70, fn_00f37a70, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f485c0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f37a70(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f485c0

// auto_jump_thunk_00f4ec00: misc_jump_thunk with other addresses.
namespace twin_00f4ec00 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f4ec00 (0x00f4ec00) is a single jump to the function at 0x00f387f0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f387f0, fn_00f387f0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f4ec00(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f387f0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f4ec00

// auto_jump_thunk_00f4ec10: misc_jump_thunk with other addresses.
namespace twin_00f4ec10 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f4ec10 (0x00f4ec10) is a single jump to the function at 0x00f38800. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f38800, fn_00f38800, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f4ec10(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f38800(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f4ec10

// auto_jump_thunk_00f5b500: misc_jump_thunk with other addresses.
namespace twin_00f5b500 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f5b500 (0x00f5b500) is a single jump to the function at 0x00f95c60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f95c60, fn_00f95c60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f5b500(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f95c60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f5b500

// auto_jump_thunk_00f5b510: misc_jump_thunk with other addresses.
namespace twin_00f5b510 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f5b510 (0x00f5b510) is a single jump to the function at 0x00f96150. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f96150, fn_00f96150, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f5b510(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f96150(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f5b510

// auto_jump_thunk_00f6c070: misc_jump_thunk with other addresses.
namespace twin_00f6c070 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f6c070 (0x00f6c070) is a single jump to the function at 0x00f767b0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f767b0, fn_00f767b0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f6c070(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f767b0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f6c070

// auto_jump_thunk_00f6d030: misc_jump_thunk with other addresses.
namespace twin_00f6d030 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f6d030 (0x00f6d030) is a single jump to the function at 0x00f6d080. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f6d080, fn_00f6d080, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f6d030(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f6d080(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f6d030

// auto_jump_thunk_00f6d5c0: misc_jump_thunk with other addresses.
namespace twin_00f6d5c0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f6d5c0 (0x00f6d5c0) is a single jump to the function at 0x00f6ca80. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f6ca80, fn_00f6ca80, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f6d5c0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f6ca80(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f6d5c0

// auto_jump_thunk_00f6d5e0: misc_jump_thunk with other addresses.
namespace twin_00f6d5e0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f6d5e0 (0x00f6d5e0) is a single jump to the function at 0x00f6c830. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f6c830, fn_00f6c830, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f6d5e0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f6c830(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f6d5e0

// auto_jump_thunk_00f6f5d0: misc_jump_thunk with other addresses.
namespace twin_00f6f5d0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f6f5d0 (0x00f6f5d0) is a single jump to the function at 0x00f48970. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f48970, fn_00f48970, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f6f5d0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f48970(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f6f5d0

// auto_jump_thunk_00f6fc60: misc_jump_thunk with other addresses.
namespace twin_00f6fc60 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f6fc60 (0x00f6fc60) is a single jump to the function at 0x00f85360. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f85360, fn_00f85360, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f6fc60(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f85360(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f6fc60

// auto_jump_thunk_00f75c60: misc_jump_thunk with other addresses.
namespace twin_00f75c60 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f75c60 (0x00f75c60) is a single jump to the function at 0x00f7ef50. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f7ef50, fn_00f7ef50, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f75c60(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f7ef50(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f75c60

// auto_jump_thunk_00f75c70: misc_jump_thunk with other addresses.
namespace twin_00f75c70 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f75c70 (0x00f75c70) is a single jump to the function at 0x00836840. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_00f75c70(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00836840(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f75c70

// auto_jump_thunk_00f75c90: misc_jump_thunk with other addresses.
namespace twin_00f75c90 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f75c90 (0x00f75c90) is a single jump to the function at 0x00f7f3c0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f7f3c0, fn_00f7f3c0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f75c90(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f7f3c0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f75c90

// auto_jump_thunk_00f75d10: misc_jump_thunk with other addresses.
namespace twin_00f75d10 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f75d10 (0x00f75d10) is a single jump to the function at 0x00f7f3a0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f7f3a0, fn_00f7f3a0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f75d10(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f7f3a0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f75d10

// auto_jump_thunk_00f77890: misc_jump_thunk with other addresses.
namespace twin_00f77890 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f77890 (0x00f77890) is a single jump to the function at 0x00f96ac0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f96ac0, fn_00f96ac0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f77890(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f96ac0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f77890

// auto_jump_thunk_00f790d0: misc_jump_thunk with other addresses.
namespace twin_00f790d0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f790d0 (0x00f790d0) is a single jump to the function at 0x00f9e570. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f9e570, fn_00f9e570, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f790d0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f9e570(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f790d0

// auto_jump_thunk_00f79690: misc_jump_thunk with other addresses.
namespace twin_00f79690 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f79690 (0x00f79690) is a single jump to the function at 0x00f3c170. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f3c170, fn_00f3c170, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f79690(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f3c170(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f79690

// auto_jump_thunk_00f7cbc0: misc_jump_thunk with other addresses.
namespace twin_00f7cbc0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f7cbc0 (0x00f7cbc0) is a single jump to the function at 0x00facb00. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00facb00, fn_00facb00, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f7cbc0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00facb00(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f7cbc0

// auto_jump_thunk_00f7cce0: misc_jump_thunk with other addresses.
namespace twin_00f7cce0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f7cce0 (0x00f7cce0) is a single jump to the function at 0x00f97490. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f97490, fn_00f97490, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f7cce0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f97490(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f7cce0

// auto_jump_thunk_00f7e2b0: misc_jump_thunk with other addresses.
namespace twin_00f7e2b0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f7e2b0 (0x00f7e2b0) is a single jump to the function at 0x00f3c2a0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f3c2a0, fn_00f3c2a0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f7e2b0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f3c2a0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f7e2b0

// auto_jump_thunk_00f7ebf0: misc_jump_thunk with other addresses.
namespace twin_00f7ebf0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f7ebf0 (0x00f7ebf0) is a single jump to the function at 0x00f25cf0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f25cf0, fn_00f25cf0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f7ebf0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f25cf0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f7ebf0

// auto_jump_thunk_00f7ed20: misc_jump_thunk with other addresses.
namespace twin_00f7ed20 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f7ed20 (0x00f7ed20) is a single jump to the function at 0x00f37260. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00f37260, fn_00f37260, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00f7ed20(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00f37260(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f7ed20

// auto_jump_thunk_00f7ef50: misc_jump_thunk with other addresses.
namespace twin_00f7ef50 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f7ef50 (0x00f7ef50) is a single jump to the function at 0x00836830. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_00f7ef50(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00836830(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f7ef50

// auto_jump_thunk_00f7f3c0: misc_jump_thunk with other addresses.
namespace twin_00f7f3c0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00f7f3c0 (0x00f7f3c0) is a single jump to the function at 0x00836830. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_00f7f3c0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00836830(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00f7f3c0

// auto_jump_thunk_00fb1be0: misc_jump_thunk with other addresses.
namespace twin_00fb1be0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00fb1be0 (0x00fb1be0) is a single jump to the function at 0x00fc6780. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00fc6780, fn_00fc6780, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00fb1be0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00fc6780(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00fb1be0

// auto_jump_thunk_00fb1bf0: misc_jump_thunk with other addresses.
namespace twin_00fb1bf0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00fb1bf0 (0x00fb1bf0) is a single jump to the function at 0x00fc67b0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00fc67b0, fn_00fc67b0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00fb1bf0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00fc67b0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00fb1bf0

// auto_jump_thunk_00fb1c00: misc_jump_thunk with other addresses.
namespace twin_00fb1c00 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00fb1c00 (0x00fb1c00) is a single jump to the function at 0x00fc67d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00fc67d0, fn_00fc67d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00fb1c00(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00fc67d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00fb1c00

// auto_jump_thunk_00fb1c10: misc_jump_thunk with other addresses.
namespace twin_00fb1c10 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00fb1c10 (0x00fb1c10) is a single jump to the function at 0x00fc68c0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00fc68c0, fn_00fc68c0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00fb1c10(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00fc68c0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00fb1c10

// auto_jump_thunk_00fb4870: misc_jump_thunk with other addresses.
namespace twin_00fb4870 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00fb4870 (0x00fb4870) is a single jump to the function at 0x00fc69f0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x00fc69f0, fn_00fc69f0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00fb4870(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_00fc69f0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00fb4870

// auto_jump_thunk_00fc69e0: misc_jump_thunk with other addresses.
namespace twin_00fc69e0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_00fc69e0 (0x00fc69e0) is a single jump to the function at 0x0104f560. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0104f560, fn_0104f560, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_00fc69e0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0104f560(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_00fc69e0

// auto_jump_thunk_01007f80: misc_jump_thunk with other addresses.
namespace twin_01007f80 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01007f80 (0x01007f80) is a single jump to the function at 0x01007f90. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01007f90, fn_01007f90, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01007f80(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01007f90(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01007f80

// auto_jump_thunk_01009a90: misc_jump_thunk with other addresses.
namespace twin_01009a90 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01009a90 (0x01009a90) is a single jump to the function at 0x01009ad0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01009ad0, fn_01009ad0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01009a90(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01009ad0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01009a90

// auto_jump_thunk_01009ac0: misc_jump_thunk with other addresses.
namespace twin_01009ac0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01009ac0 (0x01009ac0) is a single jump to the function at 0x01009ad0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01009ad0, fn_01009ad0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01009ac0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01009ad0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01009ac0

// auto_jump_thunk_01053c80: misc_jump_thunk with other addresses.
namespace twin_01053c80 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01053c80 (0x01053c80) is a single jump to the function at 0x01050c10. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01050c10, fn_01050c10, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01053c80(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01050c10(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01053c80

// auto_jump_thunk_01083050: misc_jump_thunk with other addresses.
namespace twin_01083050 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01083050 (0x01083050) is a single jump to the function at 0x01077230. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01077230, fn_01077230, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01083050(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01077230(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01083050

// auto_jump_thunk_010830b0: misc_jump_thunk with other addresses.
namespace twin_010830b0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_010830b0 (0x010830b0) is a single jump to the function at 0x010772a0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x010772a0, fn_010772a0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_010830b0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_010772a0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_010830b0

// auto_jump_thunk_01084610: misc_jump_thunk with other addresses.
namespace twin_01084610 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01084610 (0x01084610) is a single jump to the function at 0x01083eb0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01083eb0, fn_01083eb0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01084610(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01083eb0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01084610

// auto_jump_thunk_01084620: misc_jump_thunk with other addresses.
namespace twin_01084620 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01084620 (0x01084620) is a single jump to the function at 0x01084030. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01084030, fn_01084030, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01084620(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01084030(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01084620

// auto_jump_thunk_0108c010: misc_jump_thunk with other addresses.
namespace twin_0108c010 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0108c010 (0x0108c010) is a single jump to the function at 0x010bc900. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x010bc900, fn_010bc900, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0108c010(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_010bc900(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0108c010

// auto_jump_thunk_0108c020: misc_jump_thunk with other addresses.
namespace twin_0108c020 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0108c020 (0x0108c020) is a single jump to the function at 0x010bc980. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x010bc980, fn_010bc980, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0108c020(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_010bc980(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0108c020
