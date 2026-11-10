// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_destroy_then_release, in game/misc/destroy_then_release.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "runtime/original.h"

// auto_destroy_then_release_01a63590: misc_destroy_then_release with other addresses.
namespace twin_01a63590 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a63590(void *object)
{
    fn_010e7ca0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a63590

// auto_destroy_then_release_01a639c0: misc_destroy_then_release with other addresses.
namespace twin_01a639c0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a639c0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a639c0

// auto_destroy_then_release_01a65b00: misc_destroy_then_release with other addresses.
namespace twin_01a65b00 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a65b00(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a65b00

// auto_destroy_then_release_01a65ff0: misc_destroy_then_release with other addresses.
namespace twin_01a65ff0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a65ff0(void *object)
{
    fn_010e7ca0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a65ff0

// auto_destroy_then_release_01a67570: misc_destroy_then_release with other addresses.
namespace twin_01a67570 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a67570(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a67570

// auto_destroy_then_release_01a686e0: misc_destroy_then_release with other addresses.
namespace twin_01a686e0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010ee390, fn_010ee390, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a686e0(void *object)
{
    fn_010ee390(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a686e0

// auto_destroy_then_release_01a68af0: misc_destroy_then_release with other addresses.
namespace twin_01a68af0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a68af0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a68af0

// auto_destroy_then_release_01a691c0: misc_destroy_then_release with other addresses.
namespace twin_01a691c0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010ee390, fn_010ee390, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a691c0(void *object)
{
    fn_010ee390(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a691c0

// auto_destroy_then_release_01a69f50: misc_destroy_then_release with other addresses.
namespace twin_01a69f50 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a69f50(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a69f50

// auto_destroy_then_release_01a6b1a0: misc_destroy_then_release with other addresses.
namespace twin_01a6b1a0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010ee390, fn_010ee390, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a6b1a0(void *object)
{
    fn_010ee390(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a6b1a0

// auto_destroy_then_release_01a6b5d0: misc_destroy_then_release with other addresses.
namespace twin_01a6b5d0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a6b5d0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a6b5d0

// auto_destroy_then_release_01a6c5a0: misc_destroy_then_release with other addresses.
namespace twin_01a6c5a0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010ee390, fn_010ee390, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a6c5a0(void *object)
{
    fn_010ee390(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a6c5a0

// auto_destroy_then_release_01a6c9b0: misc_destroy_then_release with other addresses.
namespace twin_01a6c9b0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a6c9b0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a6c9b0

// auto_destroy_then_release_01a6d930: misc_destroy_then_release with other addresses.
namespace twin_01a6d930 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010ee390, fn_010ee390, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a6d930(void *object)
{
    fn_010ee390(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a6d930

// auto_destroy_then_release_01a6dd40: misc_destroy_then_release with other addresses.
namespace twin_01a6dd40 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a6dd40(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a6dd40

// auto_destroy_then_release_01a6ed70: misc_destroy_then_release with other addresses.
namespace twin_01a6ed70 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010ee390, fn_010ee390, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a6ed70(void *object)
{
    fn_010ee390(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a6ed70

// auto_destroy_then_release_01a6f180: misc_destroy_then_release with other addresses.
namespace twin_01a6f180 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a6f180(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a6f180

// auto_destroy_then_release_01a71930: misc_destroy_then_release with other addresses.
namespace twin_01a71930 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a71930(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a71930

// auto_destroy_then_release_01a728b0: misc_destroy_then_release with other addresses.
namespace twin_01a728b0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010ee390, fn_010ee390, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a728b0(void *object)
{
    fn_010ee390(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a728b0

// auto_destroy_then_release_01a72cd0: misc_destroy_then_release with other addresses.
namespace twin_01a72cd0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a72cd0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a72cd0

// auto_destroy_then_release_01a731c0: misc_destroy_then_release with other addresses.
namespace twin_01a731c0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010ee390, fn_010ee390, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a731c0(void *object)
{
    fn_010ee390(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a731c0

// auto_destroy_then_release_01a742f0: misc_destroy_then_release with other addresses.
namespace twin_01a742f0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a742f0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a742f0

// auto_destroy_then_release_01a751f0: misc_destroy_then_release with other addresses.
namespace twin_01a751f0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010ee390, fn_010ee390, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a751f0(void *object)
{
    fn_010ee390(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a751f0

// auto_destroy_then_release_01a75600: misc_destroy_then_release with other addresses.
namespace twin_01a75600 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a75600(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a75600

// auto_destroy_then_release_01a77500: misc_destroy_then_release with other addresses.
namespace twin_01a77500 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a77500(void *object)
{
    fn_010e7ca0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a77500

// auto_destroy_then_release_01a77930: misc_destroy_then_release with other addresses.
namespace twin_01a77930 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a77930(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a77930

// auto_destroy_then_release_01a78cd0: misc_destroy_then_release with other addresses.
namespace twin_01a78cd0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010ee390, fn_010ee390, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a78cd0(void *object)
{
    fn_010ee390(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a78cd0

// auto_destroy_then_release_01a79130: misc_destroy_then_release with other addresses.
namespace twin_01a79130 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a79130(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a79130

// auto_destroy_then_release_01a7a1a0: misc_destroy_then_release with other addresses.
namespace twin_01a7a1a0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a7a1a0(void *object)
{
    fn_010e7ca0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a7a1a0

// auto_destroy_then_release_01a7a5d0: misc_destroy_then_release with other addresses.
namespace twin_01a7a5d0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a7a5d0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a7a5d0

// auto_destroy_then_release_01a7b5c0: misc_destroy_then_release with other addresses.
namespace twin_01a7b5c0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a7b5c0(void *object)
{
    fn_010e7ca0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a7b5c0

// auto_destroy_then_release_01a7ba00: misc_destroy_then_release with other addresses.
namespace twin_01a7ba00 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a7ba00(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a7ba00

// auto_destroy_then_release_01a7f970: misc_destroy_then_release with other addresses.
namespace twin_01a7f970 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401dc0, fn_01401dc0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a7f970(void *object)
{
    fn_01401dc0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a7f970

// auto_destroy_then_release_01a7fda0: misc_destroy_then_release with other addresses.
namespace twin_01a7fda0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a7fda0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a7fda0

// auto_destroy_then_release_01a81800: misc_destroy_then_release with other addresses.
namespace twin_01a81800 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a81800(void *object)
{
    fn_010e7ca0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a81800

// auto_destroy_then_release_01a82290: misc_destroy_then_release with other addresses.
namespace twin_01a82290 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a82290(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a82290

// auto_destroy_then_release_01a83790: misc_destroy_then_release with other addresses.
namespace twin_01a83790 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a83790(void *object)
{
    fn_010e7ca0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a83790

// auto_destroy_then_release_01a83bc0: misc_destroy_then_release with other addresses.
namespace twin_01a83bc0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a83bc0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a83bc0

// auto_destroy_then_release_01a84da0: misc_destroy_then_release with other addresses.
namespace twin_01a84da0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010ee390, fn_010ee390, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a84da0(void *object)
{
    fn_010ee390(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a84da0

// auto_destroy_then_release_01a851d0: misc_destroy_then_release with other addresses.
namespace twin_01a851d0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a851d0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a851d0

// auto_destroy_then_release_01a876f0: misc_destroy_then_release with other addresses.
namespace twin_01a876f0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401600, fn_01401600, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a876f0(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a876f0

// auto_destroy_then_release_01a87bc0: misc_destroy_then_release with other addresses.
namespace twin_01a87bc0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a87bc0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a87bc0

// auto_destroy_then_release_01a8ace0: misc_destroy_then_release with other addresses.
namespace twin_01a8ace0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010ee390, fn_010ee390, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a8ace0(void *object)
{
    fn_010ee390(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a8ace0

// auto_destroy_then_release_01a8b100: misc_destroy_then_release with other addresses.
namespace twin_01a8b100 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a8b100(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a8b100

// auto_destroy_then_release_01a8b990: misc_destroy_then_release with other addresses.
namespace twin_01a8b990 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a8b990(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a8b990

// auto_destroy_then_release_01a8cc10: misc_destroy_then_release with other addresses.
namespace twin_01a8cc10 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a8cc10(void *object)
{
    fn_010e7ca0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a8cc10

// auto_destroy_then_release_01a8d090: misc_destroy_then_release with other addresses.
namespace twin_01a8d090 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a8d090(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a8d090

// auto_destroy_then_release_01a8d720: misc_destroy_then_release with other addresses.
namespace twin_01a8d720 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a8d720(void *object)
{
    fn_010e7ca0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a8d720

// auto_destroy_then_release_01a8e750: misc_destroy_then_release with other addresses.
namespace twin_01a8e750 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a8e750(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a8e750

// auto_destroy_then_release_01a8ec40: misc_destroy_then_release with other addresses.
namespace twin_01a8ec40 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a8ec40(void *object)
{
    fn_010e7ca0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a8ec40

// auto_destroy_then_release_01a90080: misc_destroy_then_release with other addresses.
namespace twin_01a90080 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a90080(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a90080

// auto_destroy_then_release_01a90720: misc_destroy_then_release with other addresses.
namespace twin_01a90720 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01a933f0, fn_01a933f0, void(void *));
RT_ORIGINAL(0x01a93a40, fn_01a93a40, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a90720(void *object)
{
    fn_01a933f0(object);
    return fn_01a93a40(object);
}

}  // namespace twin_01a90720

// auto_destroy_then_release_01a91720: misc_destroy_then_release with other addresses.
namespace twin_01a91720 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a91720(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a91720

// auto_destroy_then_release_01a92c60: misc_destroy_then_release with other addresses.
namespace twin_01a92c60 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a92c60(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a92c60

// auto_destroy_then_release_01a94980: misc_destroy_then_release with other addresses.
namespace twin_01a94980 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a94980(void *object)
{
    fn_010e7ca0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a94980

// auto_destroy_then_release_01a94e60: misc_destroy_then_release with other addresses.
namespace twin_01a94e60 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a94e60(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a94e60

// auto_destroy_then_release_01a95fc0: misc_destroy_then_release with other addresses.
namespace twin_01a95fc0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a95fc0(void *object)
{
    fn_010e7ca0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a95fc0

// auto_destroy_then_release_01a963e0: misc_destroy_then_release with other addresses.
namespace twin_01a963e0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a963e0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a963e0

// auto_destroy_then_release_01a96e70: misc_destroy_then_release with other addresses.
namespace twin_01a96e70 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a96e70(void *object)
{
    fn_010e7ca0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a96e70

// auto_destroy_then_release_01a97f00: misc_destroy_then_release with other addresses.
namespace twin_01a97f00 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a97f00(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a97f00

// auto_destroy_then_release_01a99c60: misc_destroy_then_release with other addresses.
namespace twin_01a99c60 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a99c60(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a99c60

// auto_destroy_then_release_01a9d960: misc_destroy_then_release with other addresses.
namespace twin_01a9d960 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a9d960(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a9d960

// auto_destroy_then_release_01a9de50: misc_destroy_then_release with other addresses.
namespace twin_01a9de50 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a9de50(void *object)
{
    fn_010e7ca0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a9de50

// auto_destroy_then_release_01a9eec0: misc_destroy_then_release with other addresses.
namespace twin_01a9eec0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a9eec0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a9eec0

// auto_destroy_then_release_01a9f3b0: misc_destroy_then_release with other addresses.
namespace twin_01a9f3b0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01a9f3b0(void *object)
{
    fn_010e7ca0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01a9f3b0

// auto_destroy_then_release_01aa1a10: misc_destroy_then_release with other addresses.
namespace twin_01aa1a10 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01aa1a10(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01aa1a10

// auto_destroy_then_release_01aa1f00: misc_destroy_then_release with other addresses.
namespace twin_01aa1f00 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01aa1f00(void *object)
{
    fn_010e7ca0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01aa1f00

// auto_destroy_then_release_01aa5d50: misc_destroy_then_release with other addresses.
namespace twin_01aa5d50 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01aa5d50(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01aa5d50

// auto_destroy_then_release_01aa79d0: misc_destroy_then_release with other addresses.
namespace twin_01aa79d0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01aa79d0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01aa79d0

// auto_destroy_then_release_01aa9bd0: misc_destroy_then_release with other addresses.
namespace twin_01aa9bd0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01aa9bd0(void *object)
{
    fn_010e7ca0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01aa9bd0

// auto_destroy_then_release_01aaa000: misc_destroy_then_release with other addresses.
namespace twin_01aaa000 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01aaa000(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01aaa000

// auto_destroy_then_release_01aab230: misc_destroy_then_release with other addresses.
namespace twin_01aab230 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01aab230(void *object)
{
    fn_010e7ca0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01aab230

// auto_destroy_then_release_01aab650: misc_destroy_then_release with other addresses.
namespace twin_01aab650 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01aab650(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01aab650

// auto_destroy_then_release_01aadde0: misc_destroy_then_release with other addresses.
namespace twin_01aadde0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01aadde0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01aadde0

// auto_destroy_then_release_01aaef60: misc_destroy_then_release with other addresses.
namespace twin_01aaef60 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01aaef60(void *object)
{
    fn_010e7ca0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01aaef60

// auto_destroy_then_release_01aaf3a0: misc_destroy_then_release with other addresses.
namespace twin_01aaf3a0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01aaf3a0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01aaf3a0

// auto_destroy_then_release_01ab05f0: misc_destroy_then_release with other addresses.
namespace twin_01ab05f0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ab05f0(void *object)
{
    fn_010e7ca0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ab05f0

// auto_destroy_then_release_01ab0a30: misc_destroy_then_release with other addresses.
namespace twin_01ab0a30 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ab0a30(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ab0a30

// auto_destroy_then_release_01ab2e00: misc_destroy_then_release with other addresses.
namespace twin_01ab2e00 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ab2e00(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ab2e00

// auto_destroy_then_release_01ab32f0: misc_destroy_then_release with other addresses.
namespace twin_01ab32f0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ab32f0(void *object)
{
    fn_010e7ca0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ab32f0

// auto_destroy_then_release_01ab4520: misc_destroy_then_release with other addresses.
namespace twin_01ab4520 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ab4520(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ab4520

// auto_destroy_then_release_01ab64d0: misc_destroy_then_release with other addresses.
namespace twin_01ab64d0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401600, fn_01401600, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ab64d0(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ab64d0

// auto_destroy_then_release_01ab69e0: misc_destroy_then_release with other addresses.
namespace twin_01ab69e0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ab69e0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ab69e0

// auto_destroy_then_release_01ab7b90: misc_destroy_then_release with other addresses.
namespace twin_01ab7b90 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ab7b90(void *object)
{
    fn_010e7ca0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ab7b90

// auto_destroy_then_release_01ab7fa0: misc_destroy_then_release with other addresses.
namespace twin_01ab7fa0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ab7fa0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ab7fa0

// auto_destroy_then_release_01abc5e0: misc_destroy_then_release with other addresses.
namespace twin_01abc5e0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01abc5e0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01abc5e0

// auto_destroy_then_release_01abcdf0: misc_destroy_then_release with other addresses.
namespace twin_01abcdf0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01abcdf0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01abcdf0

// auto_destroy_then_release_01abe870: misc_destroy_then_release with other addresses.
namespace twin_01abe870 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401600, fn_01401600, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01abe870(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01abe870

// auto_destroy_then_release_01ac0230: misc_destroy_then_release with other addresses.
namespace twin_01ac0230 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ac0230(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ac0230

// auto_destroy_then_release_01ac2fc0: misc_destroy_then_release with other addresses.
namespace twin_01ac2fc0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ac2fc0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ac2fc0

// auto_destroy_then_release_01ac5180: misc_destroy_then_release with other addresses.
namespace twin_01ac5180 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ac5180(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ac5180

// auto_destroy_then_release_01ac6c80: misc_destroy_then_release with other addresses.
namespace twin_01ac6c80 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401dc0, fn_01401dc0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ac6c80(void *object)
{
    fn_01401dc0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ac6c80

// auto_destroy_then_release_01ac7140: misc_destroy_then_release with other addresses.
namespace twin_01ac7140 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ac7140(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ac7140

// auto_destroy_then_release_01ac9700: misc_destroy_then_release with other addresses.
namespace twin_01ac9700 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ac9700(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ac9700

// auto_destroy_then_release_01ac9bf0: misc_destroy_then_release with other addresses.
namespace twin_01ac9bf0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01ac9c10, fn_01ac9c10, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ac9bf0(void *object)
{
    fn_01ac9c10(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ac9bf0

// auto_destroy_then_release_01acbc50: misc_destroy_then_release with other addresses.
namespace twin_01acbc50 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01acbc50(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01acbc50

// auto_destroy_then_release_01acd7a0: misc_destroy_then_release with other addresses.
namespace twin_01acd7a0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01acd7a0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01acd7a0

// auto_destroy_then_release_01acf030: misc_destroy_then_release with other addresses.
namespace twin_01acf030 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01acf030(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01acf030

// auto_destroy_then_release_01ad05f0: misc_destroy_then_release with other addresses.
namespace twin_01ad05f0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ad05f0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ad05f0

// auto_destroy_then_release_01ad1e00: misc_destroy_then_release with other addresses.
namespace twin_01ad1e00 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ad1e00(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ad1e00

// auto_destroy_then_release_01ad45c0: misc_destroy_then_release with other addresses.
namespace twin_01ad45c0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0139c4f0, fn_0139c4f0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ad45c0(void *object)
{
    fn_0139c4f0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ad45c0

// auto_destroy_then_release_01ad4620: misc_destroy_then_release with other addresses.
namespace twin_01ad4620 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0139c4f0, fn_0139c4f0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ad4620(void *object)
{
    fn_0139c4f0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ad4620

// auto_destroy_then_release_01ad4680: misc_destroy_then_release with other addresses.
namespace twin_01ad4680 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401dc0, fn_01401dc0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ad4680(void *object)
{
    fn_01401dc0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ad4680

// auto_destroy_then_release_01ad6400: misc_destroy_then_release with other addresses.
namespace twin_01ad6400 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ad6400(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ad6400

// auto_destroy_then_release_01ad7fe0: misc_destroy_then_release with other addresses.
namespace twin_01ad7fe0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ad7fe0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ad7fe0

// auto_destroy_then_release_01ad8d00: misc_destroy_then_release with other addresses.
namespace twin_01ad8d00 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401dc0, fn_01401dc0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ad8d00(void *object)
{
    fn_01401dc0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ad8d00

// auto_destroy_then_release_01adac90: misc_destroy_then_release with other addresses.
namespace twin_01adac90 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01adac90(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01adac90

// auto_destroy_then_release_01adcbb0: misc_destroy_then_release with other addresses.
namespace twin_01adcbb0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01adcbd0, fn_01adcbd0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01adcbb0(void *object)
{
    fn_01adcbd0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01adcbb0

// auto_destroy_then_release_01addd30: misc_destroy_then_release with other addresses.
namespace twin_01addd30 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401600, fn_01401600, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01addd30(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01addd30

// auto_destroy_then_release_01adf720: misc_destroy_then_release with other addresses.
namespace twin_01adf720 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01adf720(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01adf720

// auto_destroy_then_release_01ae6820: misc_destroy_then_release with other addresses.
namespace twin_01ae6820 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ae6820(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ae6820

// auto_destroy_then_release_01ae9320: misc_destroy_then_release with other addresses.
namespace twin_01ae9320 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ae9320(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ae9320

// auto_destroy_then_release_01ae9810: misc_destroy_then_release with other addresses.
namespace twin_01ae9810 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01ae9810(void *object)
{
    fn_010e7ca0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01ae9810

// auto_destroy_then_release_01aeabe0: misc_destroy_then_release with other addresses.
namespace twin_01aeabe0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01aeabe0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01aeabe0

// auto_destroy_then_release_01aec530: misc_destroy_then_release with other addresses.
namespace twin_01aec530 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01aec530(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01aec530

// auto_destroy_then_release_01af1310: misc_destroy_then_release with other addresses.
namespace twin_01af1310 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401600, fn_01401600, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01af1310(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01af1310

// auto_destroy_then_release_01af17d0: misc_destroy_then_release with other addresses.
namespace twin_01af17d0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01af17d0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01af17d0

// auto_destroy_then_release_01af1ec0: misc_destroy_then_release with other addresses.
namespace twin_01af1ec0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01af1ec0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01af1ec0

// auto_destroy_then_release_01af3470: misc_destroy_then_release with other addresses.
namespace twin_01af3470 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01af3470(void *object)
{
    fn_010e7ca0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01af3470

// auto_destroy_then_release_01af4be0: misc_destroy_then_release with other addresses.
namespace twin_01af4be0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01b5f7f0, fn_01b5f7f0, void(void *));
RT_ORIGINAL(0x01af3b50, fn_01af3b50, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01af4be0(void *object)
{
    fn_01b5f7f0(object);
    return fn_01af3b50(object);
}

}  // namespace twin_01af4be0

// auto_destroy_then_release_01af5970: misc_destroy_then_release with other addresses.
namespace twin_01af5970 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01af5970(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01af5970

// auto_destroy_then_release_01af5e60: misc_destroy_then_release with other addresses.
namespace twin_01af5e60 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01af5e60(void *object)
{
    fn_010e7ca0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01af5e60

// auto_destroy_then_release_01af8420: misc_destroy_then_release with other addresses.
namespace twin_01af8420 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01af8420(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01af8420

// auto_destroy_then_release_01afd350: misc_destroy_then_release with other addresses.
namespace twin_01afd350 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01afd350(void *object)
{
    fn_010e7ca0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01afd350

// auto_destroy_then_release_01afe150: misc_destroy_then_release with other addresses.
namespace twin_01afe150 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01afe150(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01afe150

// auto_destroy_then_release_01b00a70: misc_destroy_then_release with other addresses.
namespace twin_01b00a70 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401600, fn_01401600, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b00a70(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b00a70

// auto_destroy_then_release_01b00f70: misc_destroy_then_release with other addresses.
namespace twin_01b00f70 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b00f70(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b00f70

// auto_destroy_then_release_01b05340: misc_destroy_then_release with other addresses.
namespace twin_01b05340 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401dc0, fn_01401dc0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b05340(void *object)
{
    fn_01401dc0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b05340

// auto_destroy_then_release_01b053a0: misc_destroy_then_release with other addresses.
namespace twin_01b053a0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401600, fn_01401600, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b053a0(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b053a0

// auto_destroy_then_release_01b05810: misc_destroy_then_release with other addresses.
namespace twin_01b05810 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b05810(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b05810

// auto_destroy_then_release_01b08b10: misc_destroy_then_release with other addresses.
namespace twin_01b08b10 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401600, fn_01401600, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b08b10(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b08b10

// auto_destroy_then_release_01b090d0: misc_destroy_then_release with other addresses.
namespace twin_01b090d0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b090d0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b090d0

// auto_destroy_then_release_01b09ea0: misc_destroy_then_release with other addresses.
namespace twin_01b09ea0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01b09ec0, fn_01b09ec0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b09ea0(void *object)
{
    fn_01b09ec0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b09ea0

// auto_destroy_then_release_01b0cd90: misc_destroy_then_release with other addresses.
namespace twin_01b0cd90 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401600, fn_01401600, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b0cd90(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b0cd90

// auto_destroy_then_release_01b0d200: misc_destroy_then_release with other addresses.
namespace twin_01b0d200 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b0d200(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b0d200

// auto_destroy_then_release_01b0f320: misc_destroy_then_release with other addresses.
namespace twin_01b0f320 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401600, fn_01401600, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b0f320(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b0f320

// auto_destroy_then_release_01b0f930: misc_destroy_then_release with other addresses.
namespace twin_01b0f930 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b0f930(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b0f930

// auto_destroy_then_release_01b12be0: misc_destroy_then_release with other addresses.
namespace twin_01b12be0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401600, fn_01401600, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b12be0(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b12be0

// auto_destroy_then_release_01b13240: misc_destroy_then_release with other addresses.
namespace twin_01b13240 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b13240(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b13240

// auto_destroy_then_release_01b14bb0: misc_destroy_then_release with other addresses.
namespace twin_01b14bb0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b14bb0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b14bb0

// auto_destroy_then_release_01b19020: misc_destroy_then_release with other addresses.
namespace twin_01b19020 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401600, fn_01401600, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b19020(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b19020

// auto_destroy_then_release_01b190c0: misc_destroy_then_release with other addresses.
namespace twin_01b190c0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401dc0, fn_01401dc0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b190c0(void *object)
{
    fn_01401dc0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b190c0

// auto_destroy_then_release_01b19590: misc_destroy_then_release with other addresses.
namespace twin_01b19590 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b19590(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b19590

// auto_destroy_then_release_01b1cb00: misc_destroy_then_release with other addresses.
namespace twin_01b1cb00 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b1cb00(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b1cb00

// auto_destroy_then_release_01b1e930: misc_destroy_then_release with other addresses.
namespace twin_01b1e930 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b1e930(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b1e930

// auto_destroy_then_release_01b24770: misc_destroy_then_release with other addresses.
namespace twin_01b24770 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401600, fn_01401600, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b24770(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b24770

// auto_destroy_then_release_01b24be0: misc_destroy_then_release with other addresses.
namespace twin_01b24be0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b24be0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b24be0

// auto_destroy_then_release_01b29710: misc_destroy_then_release with other addresses.
namespace twin_01b29710 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b29710(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b29710

// auto_destroy_then_release_01b2eba0: misc_destroy_then_release with other addresses.
namespace twin_01b2eba0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401dc0, fn_01401dc0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b2eba0(void *object)
{
    fn_01401dc0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b2eba0

// auto_destroy_then_release_01b2f170: misc_destroy_then_release with other addresses.
namespace twin_01b2f170 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b2f170(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b2f170

// auto_destroy_then_release_01b30a70: misc_destroy_then_release with other addresses.
namespace twin_01b30a70 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b30a70(void *object)
{
    fn_010e7ca0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b30a70

// auto_destroy_then_release_01b30ec0: misc_destroy_then_release with other addresses.
namespace twin_01b30ec0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b30ec0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b30ec0

// auto_destroy_then_release_01b32160: misc_destroy_then_release with other addresses.
namespace twin_01b32160 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b32160(void *object)
{
    fn_010e7ca0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b32160

// auto_destroy_then_release_01b32590: misc_destroy_then_release with other addresses.
namespace twin_01b32590 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b32590(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b32590

// auto_destroy_then_release_01b3a5b0: misc_destroy_then_release with other addresses.
namespace twin_01b3a5b0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401dc0, fn_01401dc0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b3a5b0(void *object)
{
    fn_01401dc0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b3a5b0

// auto_destroy_then_release_01b3a9e0: misc_destroy_then_release with other addresses.
namespace twin_01b3a9e0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b3a9e0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b3a9e0

// auto_destroy_then_release_01b40b50: misc_destroy_then_release with other addresses.
namespace twin_01b40b50 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401dc0, fn_01401dc0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b40b50(void *object)
{
    fn_01401dc0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b40b50

// auto_destroy_then_release_01b41110: misc_destroy_then_release with other addresses.
namespace twin_01b41110 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b41110(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b41110

// auto_destroy_then_release_01b45a80: misc_destroy_then_release with other addresses.
namespace twin_01b45a80 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401dc0, fn_01401dc0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b45a80(void *object)
{
    fn_01401dc0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b45a80

// auto_destroy_then_release_01b45eb0: misc_destroy_then_release with other addresses.
namespace twin_01b45eb0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b45eb0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b45eb0

// auto_destroy_then_release_01b47df0: misc_destroy_then_release with other addresses.
namespace twin_01b47df0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b47df0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b47df0

// auto_destroy_then_release_01b4a010: misc_destroy_then_release with other addresses.
namespace twin_01b4a010 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b4a010(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b4a010

// auto_destroy_then_release_01b4a500: misc_destroy_then_release with other addresses.
namespace twin_01b4a500 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b4a500(void *object)
{
    fn_010e7ca0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b4a500

// auto_destroy_then_release_01b4bdb0: misc_destroy_then_release with other addresses.
namespace twin_01b4bdb0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b4bdb0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b4bdb0

// auto_destroy_then_release_01b4d360: misc_destroy_then_release with other addresses.
namespace twin_01b4d360 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b4d360(void *object)
{
    fn_010e7ca0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b4d360

// auto_destroy_then_release_01b4d800: misc_destroy_then_release with other addresses.
namespace twin_01b4d800 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b4d800(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b4d800

// auto_destroy_then_release_01b4ead0: misc_destroy_then_release with other addresses.
namespace twin_01b4ead0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b4ead0(void *object)
{
    fn_010e7ca0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b4ead0

// auto_destroy_then_release_01b50ed0: misc_destroy_then_release with other addresses.
namespace twin_01b50ed0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b50ed0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b50ed0

// auto_destroy_then_release_01b55ff0: misc_destroy_then_release with other addresses.
namespace twin_01b55ff0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401600, fn_01401600, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b55ff0(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b55ff0

// auto_destroy_then_release_01b57d40: misc_destroy_then_release with other addresses.
namespace twin_01b57d40 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b57d40(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b57d40

// auto_destroy_then_release_01b59e90: misc_destroy_then_release with other addresses.
namespace twin_01b59e90 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b59e90(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b59e90

// auto_destroy_then_release_01b5c820: misc_destroy_then_release with other addresses.
namespace twin_01b5c820 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01b5c840, fn_01b5c840, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b5c820(void *object)
{
    fn_01b5c840(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b5c820

// auto_destroy_then_release_01b5f7c0: misc_destroy_then_release with other addresses.
namespace twin_01b5f7c0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b5f7c0(void *object)
{
    fn_010e7ca0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b5f7c0

// auto_destroy_then_release_01b60ba0: misc_destroy_then_release with other addresses.
namespace twin_01b60ba0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b60ba0(void *object)
{
    fn_010e7ca0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b60ba0

// auto_destroy_then_release_01b60fc0: misc_destroy_then_release with other addresses.
namespace twin_01b60fc0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b60fc0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b60fc0

// auto_destroy_then_release_01b616c0: misc_destroy_then_release with other addresses.
namespace twin_01b616c0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b616c0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b616c0

// auto_destroy_then_release_01b61c70: misc_destroy_then_release with other addresses.
namespace twin_01b61c70 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01b61c90, fn_01b61c90, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b61c70(void *object)
{
    fn_01b61c90(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b61c70

// auto_destroy_then_release_01b6a2d0: misc_destroy_then_release with other addresses.
namespace twin_01b6a2d0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01b6a2f0, fn_01b6a2f0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b6a2d0(void *object)
{
    fn_01b6a2f0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b6a2d0

// auto_destroy_then_release_01b6eed0: misc_destroy_then_release with other addresses.
namespace twin_01b6eed0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401600, fn_01401600, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b6eed0(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b6eed0

// auto_destroy_then_release_01b6f190: misc_destroy_then_release with other addresses.
namespace twin_01b6f190 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401dc0, fn_01401dc0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b6f190(void *object)
{
    fn_01401dc0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b6f190

// auto_destroy_then_release_01b72a50: misc_destroy_then_release with other addresses.
namespace twin_01b72a50 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401dc0, fn_01401dc0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b72a50(void *object)
{
    fn_01401dc0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b72a50

// auto_destroy_then_release_01b72ab0: misc_destroy_then_release with other addresses.
namespace twin_01b72ab0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401600, fn_01401600, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b72ab0(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b72ab0

// auto_destroy_then_release_01b73b40: misc_destroy_then_release with other addresses.
namespace twin_01b73b40 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401600, fn_01401600, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b73b40(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b73b40

// auto_destroy_then_release_01b75030: misc_destroy_then_release with other addresses.
namespace twin_01b75030 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401dc0, fn_01401dc0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b75030(void *object)
{
    fn_01401dc0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b75030

// auto_destroy_then_release_01b77690: misc_destroy_then_release with other addresses.
namespace twin_01b77690 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b77690(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b77690

// auto_destroy_then_release_01b78cf0: misc_destroy_then_release with other addresses.
namespace twin_01b78cf0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b78cf0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b78cf0

// auto_destroy_then_release_01b7ac50: misc_destroy_then_release with other addresses.
namespace twin_01b7ac50 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b7ac50(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b7ac50

// auto_destroy_then_release_01b7d220: misc_destroy_then_release with other addresses.
namespace twin_01b7d220 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b7d220(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b7d220

// auto_destroy_then_release_01b7d990: misc_destroy_then_release with other addresses.
namespace twin_01b7d990 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01b5f7f0, fn_01b5f7f0, void(void *));
RT_ORIGINAL(0x01b7d9b0, fn_01b7d9b0, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b7d990(void *object)
{
    fn_01b5f7f0(object);
    return fn_01b7d9b0(object);
}

}  // namespace twin_01b7d990

// auto_destroy_then_release_01b7e4e0: misc_destroy_then_release with other addresses.
namespace twin_01b7e4e0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b7e4e0(void *object)
{
    fn_010e7ca0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b7e4e0

// auto_destroy_then_release_01b7e910: misc_destroy_then_release with other addresses.
namespace twin_01b7e910 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b7e910(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b7e910

// auto_destroy_then_release_01b7fa00: misc_destroy_then_release with other addresses.
namespace twin_01b7fa00 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b7fa00(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b7fa00

// auto_destroy_then_release_01b81070: misc_destroy_then_release with other addresses.
namespace twin_01b81070 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01b81090, fn_01b81090, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b81070(void *object)
{
    fn_01b81090(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b81070

// auto_destroy_then_release_01b81890: misc_destroy_then_release with other addresses.
namespace twin_01b81890 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01b818b0, fn_01b818b0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b81890(void *object)
{
    fn_01b818b0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b81890

// auto_destroy_then_release_01b909d0: misc_destroy_then_release with other addresses.
namespace twin_01b909d0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01b909f0, fn_01b909f0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b909d0(void *object)
{
    fn_01b909f0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b909d0

// auto_destroy_then_release_01b957c0: misc_destroy_then_release with other addresses.
namespace twin_01b957c0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b957c0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b957c0

// auto_destroy_then_release_01b97720: misc_destroy_then_release with other addresses.
namespace twin_01b97720 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01b97740, fn_01b97740, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b97720(void *object)
{
    fn_01b97740(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b97720

// auto_destroy_then_release_01b98650: misc_destroy_then_release with other addresses.
namespace twin_01b98650 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01b97740, fn_01b97740, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b98650(void *object)
{
    fn_01b97740(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b98650

// auto_destroy_then_release_01b98cd0: misc_destroy_then_release with other addresses.
namespace twin_01b98cd0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b98cd0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b98cd0

// auto_destroy_then_release_01b9ba00: misc_destroy_then_release with other addresses.
namespace twin_01b9ba00 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01402180, fn_01402180, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01b9ba00(void *object)
{
    fn_01402180(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01b9ba00
