// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_jump_thunk, in game/misc/jump_thunk.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstdint>
#include "runtime/original.h"

// auto_jump_thunk_01852ec0: misc_jump_thunk with other addresses.
namespace twin_01852ec0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01852ec0 (0x01852ec0) is a single jump to the function at 0x01402180. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01402180, fn_01402180, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01852ec0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01402180(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01852ec0

// auto_jump_thunk_01853ac0: misc_jump_thunk with other addresses.
namespace twin_01853ac0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01853ac0 (0x01853ac0) is a single jump to the function at 0x01402180. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01402180, fn_01402180, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01853ac0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01402180(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01853ac0

// auto_jump_thunk_01854550: misc_jump_thunk with other addresses.
namespace twin_01854550 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01854550 (0x01854550) is a single jump to the function at 0x01402180. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01402180, fn_01402180, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01854550(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01402180(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01854550

// auto_jump_thunk_01855150: misc_jump_thunk with other addresses.
namespace twin_01855150 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01855150 (0x01855150) is a single jump to the function at 0x01402180. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01402180, fn_01402180, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01855150(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01402180(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01855150

// auto_jump_thunk_018567c0: misc_jump_thunk with other addresses.
namespace twin_018567c0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018567c0 (0x018567c0) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_018567c0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018567c0

// auto_jump_thunk_01858f30: misc_jump_thunk with other addresses.
namespace twin_01858f30 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01858f30 (0x01858f30) is a single jump to the function at 0x01402180. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01402180, fn_01402180, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01858f30(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01402180(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01858f30

// auto_jump_thunk_0185d2f0: misc_jump_thunk with other addresses.
namespace twin_0185d2f0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0185d2f0 (0x0185d2f0) is a single jump to the function at 0x01859e30. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01859e30, fn_01859e30, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0185d2f0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01859e30(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0185d2f0

// auto_jump_thunk_0185d300: misc_jump_thunk with other addresses.
namespace twin_0185d300 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0185d300 (0x0185d300) is a single jump to the function at 0x01859e30. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01859e30, fn_01859e30, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0185d300(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01859e30(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0185d300

// auto_jump_thunk_0185d310: misc_jump_thunk with other addresses.
namespace twin_0185d310 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0185d310 (0x0185d310) is a single jump to the function at 0x01859e30. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01859e30, fn_01859e30, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0185d310(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01859e30(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0185d310

// auto_jump_thunk_01860260: misc_jump_thunk with other addresses.
namespace twin_01860260 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01860260 (0x01860260) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_01860260(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01860260

// auto_jump_thunk_01860720: misc_jump_thunk with other addresses.
namespace twin_01860720 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01860720 (0x01860720) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_01860720(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01860720

// auto_jump_thunk_01862070: misc_jump_thunk with other addresses.
namespace twin_01862070 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01862070 (0x01862070) is a single jump to the function at 0x01885070. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01885070, fn_01885070, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01862070(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01885070(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01862070

// auto_jump_thunk_01867840: misc_jump_thunk with other addresses.
namespace twin_01867840 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01867840 (0x01867840) is a single jump to the function at 0x01864720. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01864720, fn_01864720, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01867840(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01864720(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01867840

// auto_jump_thunk_01867850: misc_jump_thunk with other addresses.
namespace twin_01867850 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01867850 (0x01867850) is a single jump to the function at 0x01864720. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01864720, fn_01864720, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01867850(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01864720(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01867850

// auto_jump_thunk_01867860: misc_jump_thunk with other addresses.
namespace twin_01867860 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01867860 (0x01867860) is a single jump to the function at 0x01864720. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01864720, fn_01864720, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01867860(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01864720(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01867860

// auto_jump_thunk_01868920: misc_jump_thunk with other addresses.
namespace twin_01868920 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01868920 (0x01868920) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_01868920(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01868920

// auto_jump_thunk_01869210: misc_jump_thunk with other addresses.
namespace twin_01869210 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01869210 (0x01869210) is a single jump to the function at 0x01885070. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01885070, fn_01885070, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01869210(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01885070(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01869210

// auto_jump_thunk_0186b230: misc_jump_thunk with other addresses.
namespace twin_0186b230 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0186b230 (0x0186b230) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_0186b230(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0186b230

// auto_jump_thunk_0186b280: misc_jump_thunk with other addresses.
namespace twin_0186b280 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0186b280 (0x0186b280) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_0186b280(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0186b280

// auto_jump_thunk_0186b320: misc_jump_thunk with other addresses.
namespace twin_0186b320 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0186b320 (0x0186b320) is a single jump to the function at 0x01402180. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01402180, fn_01402180, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0186b320(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01402180(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0186b320

// auto_jump_thunk_0186d2a0: misc_jump_thunk with other addresses.
namespace twin_0186d2a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0186d2a0 (0x0186d2a0) is a single jump to the function at 0x0186d2b0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0186d2b0, fn_0186d2b0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0186d2a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0186d2b0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0186d2a0

// auto_jump_thunk_0186d3b0: misc_jump_thunk with other addresses.
namespace twin_0186d3b0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0186d3b0 (0x0186d3b0) is a single jump to the function at 0x0186d2b0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0186d2b0, fn_0186d2b0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0186d3b0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0186d2b0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0186d3b0

// auto_jump_thunk_0186d3c0: misc_jump_thunk with other addresses.
namespace twin_0186d3c0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0186d3c0 (0x0186d3c0) is a single jump to the function at 0x0186d2b0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0186d2b0, fn_0186d2b0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0186d3c0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0186d2b0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0186d3c0

// auto_jump_thunk_0186f3d0: misc_jump_thunk with other addresses.
namespace twin_0186f3d0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0186f3d0 (0x0186f3d0) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_0186f3d0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0186f3d0

// auto_jump_thunk_01870110: misc_jump_thunk with other addresses.
namespace twin_01870110 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01870110 (0x01870110) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_01870110(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01870110

// auto_jump_thunk_01870cc0: misc_jump_thunk with other addresses.
namespace twin_01870cc0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01870cc0 (0x01870cc0) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_01870cc0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01870cc0

// auto_jump_thunk_01871860: misc_jump_thunk with other addresses.
namespace twin_01871860 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01871860 (0x01871860) is a single jump to the function at 0x01885070. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01885070, fn_01885070, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01871860(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01885070(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01871860

// auto_jump_thunk_01872970: misc_jump_thunk with other addresses.
namespace twin_01872970 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01872970 (0x01872970) is a single jump to the function at 0x01402180. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01402180, fn_01402180, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01872970(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01402180(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01872970

// auto_jump_thunk_01874230: misc_jump_thunk with other addresses.
namespace twin_01874230 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01874230 (0x01874230) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_01874230(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01874230

// auto_jump_thunk_01874da0: misc_jump_thunk with other addresses.
namespace twin_01874da0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01874da0 (0x01874da0) is a single jump to the function at 0x01402180. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01402180, fn_01402180, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01874da0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01402180(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01874da0

// auto_jump_thunk_018764f0: misc_jump_thunk with other addresses.
namespace twin_018764f0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018764f0 (0x018764f0) is a single jump to the function at 0x01885070. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01885070, fn_01885070, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_018764f0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01885070(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018764f0

// auto_jump_thunk_018770d0: misc_jump_thunk with other addresses.
namespace twin_018770d0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018770d0 (0x018770d0) is a single jump to the function at 0x01402180. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01402180, fn_01402180, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_018770d0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01402180(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018770d0

// auto_jump_thunk_01878760: misc_jump_thunk with other addresses.
namespace twin_01878760 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01878760 (0x01878760) is a single jump to the function at 0x01402180. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01402180, fn_01402180, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01878760(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01402180(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01878760

// auto_jump_thunk_01879880: misc_jump_thunk with other addresses.
namespace twin_01879880 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01879880 (0x01879880) is a single jump to the function at 0x01402180. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01402180, fn_01402180, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01879880(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01402180(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01879880

// auto_jump_thunk_0187d800: misc_jump_thunk with other addresses.
namespace twin_0187d800 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0187d800 (0x0187d800) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0187d800(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0187d800

// auto_jump_thunk_0187db20: misc_jump_thunk with other addresses.
namespace twin_0187db20 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0187db20 (0x0187db20) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0187db20(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0187db20

// auto_jump_thunk_0187f9b0: misc_jump_thunk with other addresses.
namespace twin_0187f9b0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0187f9b0 (0x0187f9b0) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_0187f9b0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0187f9b0

// auto_jump_thunk_0187fa50: misc_jump_thunk with other addresses.
namespace twin_0187fa50 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0187fa50 (0x0187fa50) is a single jump to the function at 0x01402180. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01402180, fn_01402180, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0187fa50(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01402180(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0187fa50

// auto_jump_thunk_018839b0: misc_jump_thunk with other addresses.
namespace twin_018839b0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018839b0 (0x018839b0) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_018839b0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018839b0

// auto_jump_thunk_01883a50: misc_jump_thunk with other addresses.
namespace twin_01883a50 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01883a50 (0x01883a50) is a single jump to the function at 0x01402180. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01402180, fn_01402180, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01883a50(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01402180(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01883a50

// auto_jump_thunk_01883c00: misc_jump_thunk with other addresses.
namespace twin_01883c00 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01883c00 (0x01883c00) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01883c00(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01883c00

// auto_jump_thunk_01883f20: misc_jump_thunk with other addresses.
namespace twin_01883f20 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01883f20 (0x01883f20) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01883f20(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01883f20

// auto_jump_thunk_01887f10: misc_jump_thunk with other addresses.
namespace twin_01887f10 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01887f10 (0x01887f10) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_01887f10(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01887f10

// auto_jump_thunk_018881f0: misc_jump_thunk with other addresses.
namespace twin_018881f0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018881f0 (0x018881f0) is a single jump to the function at 0x01885070. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01885070, fn_01885070, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_018881f0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01885070(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018881f0

// auto_jump_thunk_01888b70: misc_jump_thunk with other addresses.
namespace twin_01888b70 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01888b70 (0x01888b70) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_01888b70(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01888b70

// auto_jump_thunk_01888bc0: misc_jump_thunk with other addresses.
namespace twin_01888bc0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01888bc0 (0x01888bc0) is a single jump to the function at 0x01402180. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01402180, fn_01402180, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01888bc0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01402180(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01888bc0

// auto_jump_thunk_0188e430: misc_jump_thunk with other addresses.
namespace twin_0188e430 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0188e430 (0x0188e430) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_0188e430(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0188e430

// auto_jump_thunk_01892d10: misc_jump_thunk with other addresses.
namespace twin_01892d10 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01892d10 (0x01892d10) is a single jump to the function at 0x010b4320. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x010b4320, fn_010b4320, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01892d10(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_010b4320(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01892d10

// auto_jump_thunk_01894310: misc_jump_thunk with other addresses.
namespace twin_01894310 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01894310 (0x01894310) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01894310(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01894310

// auto_jump_thunk_01894630: misc_jump_thunk with other addresses.
namespace twin_01894630 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01894630 (0x01894630) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01894630(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01894630

// auto_jump_thunk_018994d0: misc_jump_thunk with other addresses.
namespace twin_018994d0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018994d0 (0x018994d0) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_018994d0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018994d0

// auto_jump_thunk_018997f0: misc_jump_thunk with other addresses.
namespace twin_018997f0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018997f0 (0x018997f0) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_018997f0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018997f0

// auto_jump_thunk_0189e400: misc_jump_thunk with other addresses.
namespace twin_0189e400 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0189e400 (0x0189e400) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_0189e400(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0189e400

// auto_jump_thunk_0189e9d0: misc_jump_thunk with other addresses.
namespace twin_0189e9d0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0189e9d0 (0x0189e9d0) is a single jump to the function at 0x01885070. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01885070, fn_01885070, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0189e9d0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01885070(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0189e9d0

// auto_jump_thunk_018a0270: misc_jump_thunk with other addresses.
namespace twin_018a0270 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018a0270 (0x018a0270) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_018a0270(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018a0270

// auto_jump_thunk_018a0310: misc_jump_thunk with other addresses.
namespace twin_018a0310 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018a0310 (0x018a0310) is a single jump to the function at 0x01402180. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01402180, fn_01402180, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_018a0310(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01402180(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018a0310

// auto_jump_thunk_018a2fd0: misc_jump_thunk with other addresses.
namespace twin_018a2fd0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018a2fd0 (0x018a2fd0) is a single jump to the function at 0x018ac020. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x018ac020, fn_018ac020, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_018a2fd0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_018ac020(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018a2fd0

// auto_jump_thunk_018a36a0: misc_jump_thunk with other addresses.
namespace twin_018a36a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018a36a0 (0x018a36a0) is a single jump to the function at 0x01885070. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01885070, fn_01885070, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_018a36a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01885070(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018a36a0

// auto_jump_thunk_018a4020: misc_jump_thunk with other addresses.
namespace twin_018a4020 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018a4020 (0x018a4020) is a single jump to the function at 0x01402180. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01402180, fn_01402180, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_018a4020(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01402180(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018a4020

// auto_jump_thunk_018aa510: misc_jump_thunk with other addresses.
namespace twin_018aa510 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018aa510 (0x018aa510) is a single jump to the function at 0x01402180. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01402180, fn_01402180, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_018aa510(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01402180(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018aa510

// auto_jump_thunk_018aa6f0: misc_jump_thunk with other addresses.
namespace twin_018aa6f0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018aa6f0 (0x018aa6f0) is a single jump to the function at 0x010a4a70. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x010a4a70, fn_010a4a70, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_018aa6f0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_010a4a70(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018aa6f0

// auto_jump_thunk_018ad5c0: misc_jump_thunk with other addresses.
namespace twin_018ad5c0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018ad5c0 (0x018ad5c0) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_018ad5c0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018ad5c0

// auto_jump_thunk_018ad660: misc_jump_thunk with other addresses.
namespace twin_018ad660 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018ad660 (0x018ad660) is a single jump to the function at 0x01402180. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01402180, fn_01402180, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_018ad660(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01402180(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018ad660

// auto_jump_thunk_018ae440: misc_jump_thunk with other addresses.
namespace twin_018ae440 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018ae440 (0x018ae440) is a single jump to the function at 0x01402180. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01402180, fn_01402180, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_018ae440(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01402180(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018ae440

// auto_jump_thunk_018afe20: misc_jump_thunk with other addresses.
namespace twin_018afe20 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018afe20 (0x018afe20) is a single jump to the function at 0x01402180. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01402180, fn_01402180, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_018afe20(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01402180(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018afe20

// auto_jump_thunk_018affd0: misc_jump_thunk with other addresses.
namespace twin_018affd0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018affd0 (0x018affd0) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_018affd0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018affd0

// auto_jump_thunk_018b1780: misc_jump_thunk with other addresses.
namespace twin_018b1780 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018b1780 (0x018b1780) is a single jump to the function at 0x01885070. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01885070, fn_01885070, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_018b1780(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01885070(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018b1780

// auto_jump_thunk_018b2370: misc_jump_thunk with other addresses.
namespace twin_018b2370 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018b2370 (0x018b2370) is a single jump to the function at 0x01402180. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01402180, fn_01402180, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_018b2370(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01402180(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018b2370

// auto_jump_thunk_018b34b0: misc_jump_thunk with other addresses.
namespace twin_018b34b0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018b34b0 (0x018b34b0) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_018b34b0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018b34b0

// auto_jump_thunk_018b4050: misc_jump_thunk with other addresses.
namespace twin_018b4050 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018b4050 (0x018b4050) is a single jump to the function at 0x01402180. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01402180, fn_01402180, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_018b4050(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01402180(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018b4050

// auto_jump_thunk_018bcde0: misc_jump_thunk with other addresses.
namespace twin_018bcde0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018bcde0 (0x018bcde0) is a single jump to the function at 0x018bd790. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x018bd790, fn_018bd790, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_018bcde0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_018bd790(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018bcde0

// auto_jump_thunk_018bdad0: misc_jump_thunk with other addresses.
namespace twin_018bdad0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018bdad0 (0x018bdad0) is a single jump to the function at 0x018bd790. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x018bd790, fn_018bd790, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_018bdad0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_018bd790(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018bdad0

// auto_jump_thunk_018bdae0: misc_jump_thunk with other addresses.
namespace twin_018bdae0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018bdae0 (0x018bdae0) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_018bdae0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018bdae0

// auto_jump_thunk_018bdcb0: misc_jump_thunk with other addresses.
namespace twin_018bdcb0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018bdcb0 (0x018bdcb0) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_018bdcb0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018bdcb0

// auto_jump_thunk_018be310: misc_jump_thunk with other addresses.
namespace twin_018be310 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018be310 (0x018be310) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_018be310(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018be310

// auto_jump_thunk_018be630: misc_jump_thunk with other addresses.
namespace twin_018be630 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018be630 (0x018be630) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_018be630(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018be630

// auto_jump_thunk_018be950: misc_jump_thunk with other addresses.
namespace twin_018be950 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018be950 (0x018be950) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_018be950(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018be950

// auto_jump_thunk_018bec70: misc_jump_thunk with other addresses.
namespace twin_018bec70 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018bec70 (0x018bec70) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_018bec70(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018bec70

// auto_jump_thunk_018bfa40: misc_jump_thunk with other addresses.
namespace twin_018bfa40 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018bfa40 (0x018bfa40) is a single jump to the function at 0x01885070. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01885070, fn_01885070, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_018bfa40(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01885070(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018bfa40

// auto_jump_thunk_018c1220: misc_jump_thunk with other addresses.
namespace twin_018c1220 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018c1220 (0x018c1220) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_018c1220(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018c1220

// auto_jump_thunk_018c12c0: misc_jump_thunk with other addresses.
namespace twin_018c12c0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018c12c0 (0x018c12c0) is a single jump to the function at 0x01402180. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01402180, fn_01402180, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_018c12c0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01402180(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018c12c0

// auto_jump_thunk_018c6600: misc_jump_thunk with other addresses.
namespace twin_018c6600 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018c6600 (0x018c6600) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_018c6600(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018c6600

// auto_jump_thunk_018c67d0: misc_jump_thunk with other addresses.
namespace twin_018c67d0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018c67d0 (0x018c67d0) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_018c67d0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018c67d0

// auto_jump_thunk_018c6f20: misc_jump_thunk with other addresses.
namespace twin_018c6f20 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018c6f20 (0x018c6f20) is a single jump to the function at 0x01885070. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01885070, fn_01885070, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_018c6f20(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01885070(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018c6f20

// auto_jump_thunk_018c8280: misc_jump_thunk with other addresses.
namespace twin_018c8280 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018c8280 (0x018c8280) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_018c8280(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018c8280

// auto_jump_thunk_018c8320: misc_jump_thunk with other addresses.
namespace twin_018c8320 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018c8320 (0x018c8320) is a single jump to the function at 0x01402180. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01402180, fn_01402180, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_018c8320(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01402180(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018c8320

// auto_jump_thunk_018ca850: misc_jump_thunk with other addresses.
namespace twin_018ca850 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018ca850 (0x018ca850) is a single jump to the function at 0x01885070. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01885070, fn_01885070, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_018ca850(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01885070(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018ca850

// auto_jump_thunk_018cc200: misc_jump_thunk with other addresses.
namespace twin_018cc200 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018cc200 (0x018cc200) is a single jump to the function at 0x01402180. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01402180, fn_01402180, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_018cc200(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01402180(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018cc200

// auto_jump_thunk_018f5ee0: misc_jump_thunk with other addresses.
namespace twin_018f5ee0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_018f5ee0 (0x018f5ee0) is a single jump to the function at 0x0139c4f0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0139c4f0, fn_0139c4f0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_018f5ee0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0139c4f0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_018f5ee0

// auto_jump_thunk_0190cf10: misc_jump_thunk with other addresses.
namespace twin_0190cf10 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0190cf10 (0x0190cf10) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0190cf10(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0190cf10

// auto_jump_thunk_0190ff10: misc_jump_thunk with other addresses.
namespace twin_0190ff10 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0190ff10 (0x0190ff10) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0190ff10(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0190ff10

// auto_jump_thunk_01918980: misc_jump_thunk with other addresses.
namespace twin_01918980 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01918980 (0x01918980) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01918980(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01918980

// auto_jump_thunk_01919ef0: misc_jump_thunk with other addresses.
namespace twin_01919ef0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01919ef0 (0x01919ef0) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01919ef0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01919ef0

// auto_jump_thunk_0191d3e0: misc_jump_thunk with other addresses.
namespace twin_0191d3e0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0191d3e0 (0x0191d3e0) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0191d3e0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0191d3e0

// auto_jump_thunk_0191ebd0: misc_jump_thunk with other addresses.
namespace twin_0191ebd0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0191ebd0 (0x0191ebd0) is a single jump to the function at 0x019173d0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x019173d0, fn_019173d0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0191ebd0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_019173d0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0191ebd0

// auto_jump_thunk_0191f150: misc_jump_thunk with other addresses.
namespace twin_0191f150 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0191f150 (0x0191f150) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0191f150(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0191f150

// auto_jump_thunk_01923f30: misc_jump_thunk with other addresses.
namespace twin_01923f30 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01923f30 (0x01923f30) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01923f30(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01923f30

// auto_jump_thunk_01925f10: misc_jump_thunk with other addresses.
namespace twin_01925f10 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01925f10 (0x01925f10) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01925f10(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01925f10

// auto_jump_thunk_0192a2f0: misc_jump_thunk with other addresses.
namespace twin_0192a2f0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0192a2f0 (0x0192a2f0) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0192a2f0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0192a2f0

// auto_jump_thunk_0192bc70: misc_jump_thunk with other addresses.
namespace twin_0192bc70 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0192bc70 (0x0192bc70) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0192bc70(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0192bc70

// auto_jump_thunk_0192cff0: misc_jump_thunk with other addresses.
namespace twin_0192cff0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0192cff0 (0x0192cff0) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0192cff0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0192cff0

// auto_jump_thunk_01937220: misc_jump_thunk with other addresses.
namespace twin_01937220 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01937220 (0x01937220) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_01937220(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01937220

// auto_jump_thunk_01942cd0: misc_jump_thunk with other addresses.
namespace twin_01942cd0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01942cd0 (0x01942cd0) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_01942cd0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01942cd0

// auto_jump_thunk_01942e40: misc_jump_thunk with other addresses.
namespace twin_01942e40 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01942e40 (0x01942e40) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_01942e40(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01942e40

// auto_jump_thunk_01943f10: misc_jump_thunk with other addresses.
namespace twin_01943f10 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01943f10 (0x01943f10) is a single jump to the function at 0x0139c4f0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0139c4f0, fn_0139c4f0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01943f10(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0139c4f0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01943f10

// auto_jump_thunk_01943f70: misc_jump_thunk with other addresses.
namespace twin_01943f70 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01943f70 (0x01943f70) is a single jump to the function at 0x01401dc0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01401dc0, fn_01401dc0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01943f70(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401dc0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01943f70

// auto_jump_thunk_01943fd0: misc_jump_thunk with other addresses.
namespace twin_01943fd0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01943fd0 (0x01943fd0) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_01943fd0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01943fd0

// auto_jump_thunk_01944ec0: misc_jump_thunk with other addresses.
namespace twin_01944ec0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01944ec0 (0x01944ec0) is a single jump to the function at 0x01d0b9b0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01d0b9b0, fn_01d0b9b0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01944ec0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01d0b9b0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01944ec0

// auto_jump_thunk_01944ed0: misc_jump_thunk with other addresses.
namespace twin_01944ed0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01944ed0 (0x01944ed0) is a single jump to the function at 0x01d0b9b0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01d0b9b0, fn_01d0b9b0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01944ed0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01d0b9b0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01944ed0

// auto_jump_thunk_01947510: misc_jump_thunk with other addresses.
namespace twin_01947510 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01947510 (0x01947510) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01947510(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01947510

// auto_jump_thunk_019486a0: misc_jump_thunk with other addresses.
namespace twin_019486a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019486a0 (0x019486a0) is a single jump to the function at 0x01bf0fc0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01bf0fc0, fn_01bf0fc0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019486a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01bf0fc0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019486a0

// auto_jump_thunk_0194c5e0: misc_jump_thunk with other addresses.
namespace twin_0194c5e0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0194c5e0 (0x0194c5e0) is a single jump to the function at 0x01dec030. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01dec030, fn_01dec030, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0194c5e0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01dec030(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0194c5e0

// auto_jump_thunk_019503c0: misc_jump_thunk with other addresses.
namespace twin_019503c0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019503c0 (0x019503c0) is a single jump to the function at 0x01402180. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01402180, fn_01402180, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019503c0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01402180(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019503c0

// auto_jump_thunk_019570c0: misc_jump_thunk with other addresses.
namespace twin_019570c0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019570c0 (0x019570c0) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_019570c0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019570c0

// auto_jump_thunk_01958820: misc_jump_thunk with other addresses.
namespace twin_01958820 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01958820 (0x01958820) is a single jump to the function at 0x01402180. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01402180, fn_01402180, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01958820(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01402180(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01958820

// auto_jump_thunk_019630f0: misc_jump_thunk with other addresses.
namespace twin_019630f0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019630f0 (0x019630f0) is a single jump to the function at 0x01402180. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01402180, fn_01402180, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019630f0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01402180(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019630f0

// auto_jump_thunk_0196cc80: misc_jump_thunk with other addresses.
namespace twin_0196cc80 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0196cc80 (0x0196cc80) is a single jump to the function at 0x018e7870. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x018e7870, fn_018e7870, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0196cc80(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_018e7870(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0196cc80

// auto_jump_thunk_0196f580: misc_jump_thunk with other addresses.
namespace twin_0196f580 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0196f580 (0x0196f580) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_0196f580(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0196f580

// auto_jump_thunk_01986820: misc_jump_thunk with other addresses.
namespace twin_01986820 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01986820 (0x01986820) is a single jump to the function at 0x022fbfe0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x022fbfe0, fn_022fbfe0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01986820(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_022fbfe0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01986820

// auto_jump_thunk_01989480: misc_jump_thunk with other addresses.
namespace twin_01989480 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01989480 (0x01989480) is a single jump to the function at 0x01988780. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01988780, fn_01988780, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01989480(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01988780(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01989480

// auto_jump_thunk_0198ea90: misc_jump_thunk with other addresses.
namespace twin_0198ea90 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0198ea90 (0x0198ea90) is a single jump to the function at 0x0198f550. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0198f550, fn_0198f550, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0198ea90(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0198f550(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0198ea90

// auto_jump_thunk_0198f890: misc_jump_thunk with other addresses.
namespace twin_0198f890 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0198f890 (0x0198f890) is a single jump to the function at 0x0198f550. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0198f550, fn_0198f550, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0198f890(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0198f550(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0198f890

// auto_jump_thunk_0198f8a0: misc_jump_thunk with other addresses.
namespace twin_0198f8a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0198f8a0 (0x0198f8a0) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_0198f8a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0198f8a0

// auto_jump_thunk_0198fb40: misc_jump_thunk with other addresses.
namespace twin_0198fb40 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0198fb40 (0x0198fb40) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0198fb40(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0198fb40

// auto_jump_thunk_0198fe60: misc_jump_thunk with other addresses.
namespace twin_0198fe60 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0198fe60 (0x0198fe60) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0198fe60(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0198fe60

// auto_jump_thunk_01990180: misc_jump_thunk with other addresses.
namespace twin_01990180 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01990180 (0x01990180) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01990180(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01990180

// auto_jump_thunk_019904a0: misc_jump_thunk with other addresses.
namespace twin_019904a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019904a0 (0x019904a0) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019904a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019904a0

// auto_jump_thunk_0199c9d0: misc_jump_thunk with other addresses.
namespace twin_0199c9d0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0199c9d0 (0x0199c9d0) is a single jump to the function at 0x0199d470. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0199d470, fn_0199d470, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0199c9d0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0199d470(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0199c9d0

// auto_jump_thunk_0199d7b0: misc_jump_thunk with other addresses.
namespace twin_0199d7b0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0199d7b0 (0x0199d7b0) is a single jump to the function at 0x0199d470. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x0199d470, fn_0199d470, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0199d7b0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_0199d470(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0199d7b0

// auto_jump_thunk_0199d7c0: misc_jump_thunk with other addresses.
namespace twin_0199d7c0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0199d7c0 (0x0199d7c0) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_0199d7c0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0199d7c0

// auto_jump_thunk_0199dbd0: misc_jump_thunk with other addresses.
namespace twin_0199dbd0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0199dbd0 (0x0199dbd0) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0199dbd0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0199dbd0

// auto_jump_thunk_0199def0: misc_jump_thunk with other addresses.
namespace twin_0199def0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0199def0 (0x0199def0) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0199def0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0199def0

// auto_jump_thunk_0199e210: misc_jump_thunk with other addresses.
namespace twin_0199e210 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0199e210 (0x0199e210) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0199e210(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0199e210

// auto_jump_thunk_0199e530: misc_jump_thunk with other addresses.
namespace twin_0199e530 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_0199e530 (0x0199e530) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_0199e530(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_0199e530

// auto_jump_thunk_019a8680: misc_jump_thunk with other addresses.
namespace twin_019a8680 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019a8680 (0x019a8680) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019a8680(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019a8680

// auto_jump_thunk_019a8d10: misc_jump_thunk with other addresses.
namespace twin_019a8d10 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019a8d10 (0x019a8d10) is a single jump to the function at 0x019a8d20. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x019a8d20, fn_019a8d20, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019a8d10(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_019a8d20(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019a8d10

// auto_jump_thunk_019a96a0: misc_jump_thunk with other addresses.
namespace twin_019a96a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019a96a0 (0x019a96a0) is a single jump to the function at 0x019a8ef0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x019a8ef0, fn_019a8ef0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019a96a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_019a8ef0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019a96a0

// auto_jump_thunk_019ac0a0: misc_jump_thunk with other addresses.
namespace twin_019ac0a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019ac0a0 (0x019ac0a0) is a single jump to the function at 0x019acb50. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x019acb50, fn_019acb50, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019ac0a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_019acb50(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019ac0a0

// auto_jump_thunk_019ace90: misc_jump_thunk with other addresses.
namespace twin_019ace90 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019ace90 (0x019ace90) is a single jump to the function at 0x019acb50. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x019acb50, fn_019acb50, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019ace90(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_019acb50(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019ace90

// auto_jump_thunk_019acea0: misc_jump_thunk with other addresses.
namespace twin_019acea0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019acea0 (0x019acea0) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_019acea0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019acea0

// auto_jump_thunk_019ad1e0: misc_jump_thunk with other addresses.
namespace twin_019ad1e0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019ad1e0 (0x019ad1e0) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019ad1e0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019ad1e0

// auto_jump_thunk_019ad500: misc_jump_thunk with other addresses.
namespace twin_019ad500 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019ad500 (0x019ad500) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019ad500(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019ad500

// auto_jump_thunk_019ad820: misc_jump_thunk with other addresses.
namespace twin_019ad820 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019ad820 (0x019ad820) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019ad820(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019ad820

// auto_jump_thunk_019adb40: misc_jump_thunk with other addresses.
namespace twin_019adb40 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019adb40 (0x019adb40) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019adb40(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019adb40

// auto_jump_thunk_019ae930: misc_jump_thunk with other addresses.
namespace twin_019ae930 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019ae930 (0x019ae930) is a single jump to the function at 0x019ae940. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x019ae940, fn_019ae940, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019ae930(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_019ae940(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019ae930

// auto_jump_thunk_019bcf10: misc_jump_thunk with other addresses.
namespace twin_019bcf10 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019bcf10 (0x019bcf10) is a single jump to the function at 0x019bcd30. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x019bcd30, fn_019bcd30, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019bcf10(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_019bcd30(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019bcf10

// auto_jump_thunk_019bf8a0: misc_jump_thunk with other addresses.
namespace twin_019bf8a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019bf8a0 (0x019bf8a0) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_019bf8a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019bf8a0

// auto_jump_thunk_019c14d0: misc_jump_thunk with other addresses.
namespace twin_019c14d0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019c14d0 (0x019c14d0) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_019c14d0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019c14d0

// auto_jump_thunk_019c1570: misc_jump_thunk with other addresses.
namespace twin_019c1570 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019c1570 (0x019c1570) is a single jump to the function at 0x01402180. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01402180, fn_01402180, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019c1570(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01402180(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019c1570

// auto_jump_thunk_019c2df0: misc_jump_thunk with other addresses.
namespace twin_019c2df0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019c2df0 (0x019c2df0) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_019c2df0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019c2df0

// auto_jump_thunk_019c6260: misc_jump_thunk with other addresses.
namespace twin_019c6260 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019c6260 (0x019c6260) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_019c6260(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019c6260

// auto_jump_thunk_019c7340: misc_jump_thunk with other addresses.
namespace twin_019c7340 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019c7340 (0x019c7340) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_019c7340(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019c7340

// auto_jump_thunk_019c9700: misc_jump_thunk with other addresses.
namespace twin_019c9700 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019c9700 (0x019c9700) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_019c9700(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019c9700

// auto_jump_thunk_019cc180: misc_jump_thunk with other addresses.
namespace twin_019cc180 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019cc180 (0x019cc180) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_019cc180(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019cc180

// auto_jump_thunk_019cc660: misc_jump_thunk with other addresses.
namespace twin_019cc660 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019cc660 (0x019cc660) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019cc660(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019cc660

// auto_jump_thunk_019ccb80: misc_jump_thunk with other addresses.
namespace twin_019ccb80 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019ccb80 (0x019ccb80) is a single jump to the function at 0x010e7ca0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019ccb80(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_010e7ca0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019ccb80

// auto_jump_thunk_019ce4a0: misc_jump_thunk with other addresses.
namespace twin_019ce4a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019ce4a0 (0x019ce4a0) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019ce4a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019ce4a0

// auto_jump_thunk_019ced80: misc_jump_thunk with other addresses.
namespace twin_019ced80 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019ced80 (0x019ced80) is a single jump to the function at 0x010e7ca0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019ced80(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_010e7ca0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019ced80

// auto_jump_thunk_019d0380: misc_jump_thunk with other addresses.
namespace twin_019d0380 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019d0380 (0x019d0380) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019d0380(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019d0380

// auto_jump_thunk_019d0af0: misc_jump_thunk with other addresses.
namespace twin_019d0af0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019d0af0 (0x019d0af0) is a single jump to the function at 0x010e7ca0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019d0af0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_010e7ca0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019d0af0

// auto_jump_thunk_019d2090: misc_jump_thunk with other addresses.
namespace twin_019d2090 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019d2090 (0x019d2090) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019d2090(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019d2090

// auto_jump_thunk_019d4b20: misc_jump_thunk with other addresses.
namespace twin_019d4b20 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019d4b20 (0x019d4b20) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019d4b20(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019d4b20

// auto_jump_thunk_019d7e40: misc_jump_thunk with other addresses.
namespace twin_019d7e40 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019d7e40 (0x019d7e40) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_019d7e40(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019d7e40

// auto_jump_thunk_019d8370: misc_jump_thunk with other addresses.
namespace twin_019d8370 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019d8370 (0x019d8370) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019d8370(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019d8370

// auto_jump_thunk_019d9ad0: misc_jump_thunk with other addresses.
namespace twin_019d9ad0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019d9ad0 (0x019d9ad0) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019d9ad0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019d9ad0

// auto_jump_thunk_019d9fd0: misc_jump_thunk with other addresses.
namespace twin_019d9fd0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019d9fd0 (0x019d9fd0) is a single jump to the function at 0x010edf20. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x010edf20, fn_010edf20, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019d9fd0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_010edf20(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019d9fd0

// auto_jump_thunk_019dae50: misc_jump_thunk with other addresses.
namespace twin_019dae50 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019dae50 (0x019dae50) is a single jump to the function at 0x010e7ca0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019dae50(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_010e7ca0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019dae50

// auto_jump_thunk_019db290: misc_jump_thunk with other addresses.
namespace twin_019db290 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019db290 (0x019db290) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019db290(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019db290

// auto_jump_thunk_019e1190: misc_jump_thunk with other addresses.
namespace twin_019e1190 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019e1190 (0x019e1190) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_019e1190(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019e1190

// auto_jump_thunk_019e1600: misc_jump_thunk with other addresses.
namespace twin_019e1600 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019e1600 (0x019e1600) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019e1600(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019e1600

// auto_jump_thunk_019e4320: misc_jump_thunk with other addresses.
namespace twin_019e4320 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019e4320 (0x019e4320) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019e4320(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019e4320

// auto_jump_thunk_019e5760: misc_jump_thunk with other addresses.
namespace twin_019e5760 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019e5760 (0x019e5760) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019e5760(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019e5760

// auto_jump_thunk_019e6e10: misc_jump_thunk with other addresses.
namespace twin_019e6e10 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019e6e10 (0x019e6e10) is a single jump to the function at 0x01401dc0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01401dc0, fn_01401dc0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019e6e10(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401dc0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019e6e10

// auto_jump_thunk_019e72c0: misc_jump_thunk with other addresses.
namespace twin_019e72c0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019e72c0 (0x019e72c0) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019e72c0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019e72c0

// auto_jump_thunk_019e8e50: misc_jump_thunk with other addresses.
namespace twin_019e8e50 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019e8e50 (0x019e8e50) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_019e8e50(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019e8e50

// auto_jump_thunk_019e92f0: misc_jump_thunk with other addresses.
namespace twin_019e92f0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019e92f0 (0x019e92f0) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019e92f0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019e92f0

// auto_jump_thunk_019ea610: misc_jump_thunk with other addresses.
namespace twin_019ea610 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019ea610 (0x019ea610) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019ea610(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019ea610

// auto_jump_thunk_019ebb10: misc_jump_thunk with other addresses.
namespace twin_019ebb10 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019ebb10 (0x019ebb10) is a single jump to the function at 0x01401600. The six integer argument
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
extern "C" uint64_t bb_auto_jump_thunk_019ebb10(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01401600(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019ebb10

// auto_jump_thunk_019ebe90: misc_jump_thunk with other addresses.
namespace twin_019ebe90 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019ebe90 (0x019ebe90) is a single jump to the function at 0x010ee390. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x010ee390, fn_010ee390, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019ebe90(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_010ee390(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019ebe90

// auto_jump_thunk_019ecce0: misc_jump_thunk with other addresses.
namespace twin_019ecce0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019ecce0 (0x019ecce0) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019ecce0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019ecce0

// auto_jump_thunk_019eed50: misc_jump_thunk with other addresses.
namespace twin_019eed50 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019eed50 (0x019eed50) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019eed50(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019eed50

// auto_jump_thunk_019f11a0: misc_jump_thunk with other addresses.
namespace twin_019f11a0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019f11a0 (0x019f11a0) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019f11a0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019f11a0

// auto_jump_thunk_019f2880: misc_jump_thunk with other addresses.
namespace twin_019f2880 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019f2880 (0x019f2880) is a single jump to the function at 0x010e7ca0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019f2880(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_010e7ca0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019f2880

// auto_jump_thunk_019f2cb0: misc_jump_thunk with other addresses.
namespace twin_019f2cb0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019f2cb0 (0x019f2cb0) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019f2cb0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019f2cb0

// auto_jump_thunk_019f3410: misc_jump_thunk with other addresses.
namespace twin_019f3410 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019f3410 (0x019f3410) is a single jump to the function at 0x019fc7e0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x019fc7e0, fn_019fc7e0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019f3410(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_019fc7e0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019f3410

// auto_jump_thunk_019f8a50: misc_jump_thunk with other addresses.
namespace twin_019f8a50 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019f8a50 (0x019f8a50) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019f8a50(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019f8a50

// auto_jump_thunk_019fa000: misc_jump_thunk with other addresses.
namespace twin_019fa000 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019fa000 (0x019fa000) is a single jump to the function at 0x010e7ca0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019fa000(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_010e7ca0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019fa000

// auto_jump_thunk_019fa440: misc_jump_thunk with other addresses.
namespace twin_019fa440 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019fa440 (0x019fa440) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019fa440(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019fa440

// auto_jump_thunk_019fbed0: misc_jump_thunk with other addresses.
namespace twin_019fbed0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_019fbed0 (0x019fbed0) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_019fbed0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_019fbed0

// auto_jump_thunk_01a00460: misc_jump_thunk with other addresses.
namespace twin_01a00460 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01a00460 (0x01a00460) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01a00460(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01a00460

// auto_jump_thunk_01a00b00: misc_jump_thunk with other addresses.
namespace twin_01a00b00 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01a00b00 (0x01a00b00) is a single jump to the function at 0x01a00b10. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01a00b10, fn_01a00b10, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01a00b00(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_01a00b10(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01a00b00

// auto_jump_thunk_01a01e90: misc_jump_thunk with other addresses.
namespace twin_01a01e90 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01a01e90 (0x01a01e90) is a single jump to the function at 0x010e7ca0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01a01e90(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_010e7ca0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01a01e90

// auto_jump_thunk_01a02360: misc_jump_thunk with other addresses.
namespace twin_01a02360 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01a02360 (0x01a02360) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01a02360(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01a02360

// auto_jump_thunk_01a053d0: misc_jump_thunk with other addresses.
namespace twin_01a053d0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01a053d0 (0x01a053d0) is a single jump to the function at 0x010e7ca0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01a053d0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_010e7ca0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01a053d0

// auto_jump_thunk_01a05830: misc_jump_thunk with other addresses.
namespace twin_01a05830 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01a05830 (0x01a05830) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01a05830(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01a05830

// auto_jump_thunk_01a07e40: misc_jump_thunk with other addresses.
namespace twin_01a07e40 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01a07e40 (0x01a07e40) is a single jump to the function at 0x010e7ca0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01a07e40(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_010e7ca0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01a07e40

// auto_jump_thunk_01a08280: misc_jump_thunk with other addresses.
namespace twin_01a08280 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01a08280 (0x01a08280) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01a08280(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01a08280

// auto_jump_thunk_01a0d8c0: misc_jump_thunk with other addresses.
namespace twin_01a0d8c0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01a0d8c0 (0x01a0d8c0) is a single jump to the function at 0x010e7ca0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01a0d8c0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_010e7ca0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01a0d8c0

// auto_jump_thunk_01a0dd00: misc_jump_thunk with other addresses.
namespace twin_01a0dd00 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01a0dd00 (0x01a0dd00) is a single jump to the function at 0x024b5a60. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x024b5a60, fn_024b5a60, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01a0dd00(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_024b5a60(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01a0dd00

// auto_jump_thunk_01a0eeb0: misc_jump_thunk with other addresses.
namespace twin_01a0eeb0 {

// Misc: a second entry point of a function: one jump to it, with every argument as it came.
//
// auto_jump_thunk_01a0eeb0 (0x01a0eeb0) is a single jump to the function at 0x010e7ca0. The six integer argument
// registers reach the target unchanged and the target's result is returned as it is.


namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, SixArgumentTarget);

}  // namespace

/**
 *
 * Calls the target with the same six integer arguments, as a tail call, and returns its result unchanged.
 *
 * The original is one jump, so the target sees each argument register as the caller set it. A target
 * that takes fewer arguments does not read the others.
 */
extern "C" uint64_t bb_auto_jump_thunk_01a0eeb0(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                       uint64_t fifth, uint64_t sixth)
{
    return fn_010e7ca0(first, second, third, fourth, fifth, sixth);
}

}  // namespace twin_01a0eeb0
